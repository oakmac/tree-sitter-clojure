#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 212
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
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
  anon_sym_POUND_POUND = 8,
  sym_infinity = 9,
  sym_negative_infinity = 10,
  sym_not_a_number = 11,
  anon_sym_BSLASH = 12,
  sym__normal_char = 13,
  anon_sym_newline = 14,
  anon_sym_space = 15,
  anon_sym_tab = 16,
  anon_sym_formfeed = 17,
  anon_sym_backspace = 18,
  anon_sym_return = 19,
  anon_sym_u = 20,
  sym__hex_char = 21,
  anon_sym_o = 22,
  aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_BSLASH_DQUOTE = 27,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 28,
  anon_sym_POUND_DQUOTE = 29,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH = 30,
  anon_sym_SQUOTE = 31,
  anon_sym_LPARENquote = 32,
  anon_sym_RPAREN = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_SLASH = 36,
  sym__keyword_chars = 37,
  anon_sym_DASH_GT = 38,
  anon_sym_DASH_GT_GT = 39,
  anon_sym_as_DASH_GT = 40,
  anon_sym_some_DASH_GT = 41,
  anon_sym_some_DASH_GT_GT = 42,
  anon_sym_cond_DASH_GT = 43,
  anon_sym_cond_DASH_GT_GT = 44,
  sym__symbol_chars = 45,
  sym_member_access = 46,
  sym_field_access = 47,
  sym_new_class = 48,
  anon_sym_LPAREN = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  anon_sym_LBRACE = 52,
  anon_sym_RBRACE = 53,
  anon_sym_POUND_COLON_COLON_LBRACE = 54,
  anon_sym_POUND = 55,
  anon_sym_POUND_LBRACE = 56,
  anon_sym_SEMI = 57,
  aux_sym_SLASH_DOT_STAR_SLASH = 58,
  anon_sym_POUND_BANG = 59,
  anon_sym_POUND_ = 60,
  anon_sym_comment = 61,
  anon_sym_fn = 62,
  anon_sym_POUND_LPAREN = 63,
  sym_shorthand_function_arg = 64,
  anon_sym_defn = 65,
  anon_sym_defn_DASH = 66,
  anon_sym_CARET = 67,
  anon_sym_CARET_COLON = 68,
  anon_sym_CARET_DQUOTE = 69,
  anon_sym_BQUOTE = 70,
  anon_sym_POUND_SQUOTE = 71,
  anon_sym_TILDE = 72,
  anon_sym_TILDE_AT = 73,
  sym_gensym = 74,
  anon_sym_AT = 75,
  sym_program = 76,
  sym__anything = 77,
  sym__literals = 78,
  sym__collection_literals = 79,
  sym_boolean = 80,
  sym_number = 81,
  sym__number = 82,
  sym_symbolic_value = 83,
  sym_character = 84,
  sym__character = 85,
  sym__special_char = 86,
  sym__unicode_char = 87,
  sym__octal_char = 88,
  sym__octal_num = 89,
  sym_string = 90,
  sym__string = 91,
  sym_regex = 92,
  sym__regex = 93,
  sym_quote = 94,
  sym__quote = 95,
  sym_keyword = 96,
  sym__keyword = 97,
  sym__unqualified_keyword = 98,
  sym_qualified_keyword = 99,
  sym_symbol = 100,
  sym__symbol = 101,
  sym_threading_macro = 102,
  sym_qualified_symbol = 103,
  sym_interop = 104,
  sym_list = 105,
  sym__list = 106,
  sym_vector = 107,
  sym__vector = 108,
  sym_hash_map = 109,
  sym__hash_map = 110,
  sym_namespace_map = 111,
  sym__hash_map_kv_pair = 112,
  sym__hash_map_key = 113,
  sym__hash_map_value = 114,
  sym_set = 115,
  sym__set = 116,
  sym_comment = 117,
  sym_semicolon = 118,
  sym_shebang_line = 119,
  sym_ignore_form = 120,
  sym_comment_macro = 121,
  sym__functions = 122,
  sym_anonymous_function = 123,
  sym__after_the_fn_name = 124,
  sym_function_name = 125,
  sym__single_arity_fn = 126,
  sym__multi_arity_fn = 127,
  sym_function_body = 128,
  sym_params = 129,
  sym_shorthand_function = 130,
  sym_defn = 131,
  sym_docstring = 132,
  sym_attr_map = 133,
  sym_metadata = 134,
  sym__metadata_map = 135,
  sym_metadata_shorthand = 136,
  sym_syntax_quote = 137,
  sym_var_quote = 138,
  sym_unquote = 139,
  sym_unquote_splice = 140,
  sym_deref = 141,
  aux_sym_program_repeat1 = 142,
  aux_sym__string_repeat1 = 143,
  aux_sym__regex_repeat1 = 144,
  aux_sym__hash_map_repeat1 = 145,
  aux_sym__multi_arity_fn_repeat1 = 146,
  aux_sym_metadata_repeat1 = 147,
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
  [anon_sym_POUND_POUND] = "##",
  [sym_infinity] = "infinity",
  [sym_negative_infinity] = "negative_infinity",
  [sym_not_a_number] = "not_a_number",
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
  [sym_symbolic_value] = "symbolic_value",
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
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_infinity] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_infinity] = {
    .visible = true,
    .named = true,
  },
  [sym_not_a_number] = {
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
  [sym_symbolic_value] = {
    .visible = true,
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
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '+')
        ADVANCE(23);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == 'I')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'n')
        ADVANCE(60);
      if (lookahead == 'o')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(70);
      if (lookahead == 's')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(87);
      if (lookahead == 'u')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(96);
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
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 9:
      if (lookahead == ':')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_COLON_COLON_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_shorthand_function_arg);
      if (lookahead == '&' ||
          ('1' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'q')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'u')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'o')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == 'I')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'f')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_negative_infinity);
      END_STATE();
    case 31:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 32:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_field_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(33);
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
      ACCEPT_TOKEN(sym_member_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'f')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_infinity);
      END_STATE();
    case 50:
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'N')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_not_a_number);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'i')
        ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'w')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'i')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 67:
      if (lookahead == 'l')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'r')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 76:
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == 'p')
        ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'm')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '-')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '>')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 83:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'c')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 87:
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'b')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 90:
      if (lookahead == 'u')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
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
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(103);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
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
        ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(107);
      if (lookahead == 'N')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
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
        ADVANCE(110);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number_ratio);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_bigint);
      if (lookahead == '#')
        ADVANCE(105);
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
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
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
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '>')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
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
        ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_new_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == '.')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(116);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '>')
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
        ADVANCE(110);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'o')
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'd')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(123);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '>')
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
        ADVANCE(110);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'l')
        ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'i')
        ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'l')
        ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'o')
        ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '>')
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
        ADVANCE(110);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'r')
        ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'u')
        ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(99);
      if (lookahead == '/')
        ADVANCE(107);
      if (lookahead == 'N')
        ADVANCE(144);
      if (lookahead == '_')
        ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number_bigint);
      END_STATE();
    case 145:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(145);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 146:
      if (lookahead == ',')
        SKIP(146);
      if (lookahead == '-')
        ADVANCE(147);
      if (lookahead == 'I')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      END_STATE();
    case 147:
      if (lookahead == 'I')
        ADVANCE(28);
      END_STATE();
    case 148:
      if (lookahead == '\n')
        SKIP(148);
      if (lookahead == ',')
        ADVANCE(149);
      if (lookahead == 'b')
        ADVANCE(150);
      if (lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'n')
        ADVANCE(167);
      if (lookahead == 'o')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(168);
      if (lookahead == 's')
        ADVANCE(169);
      if (lookahead == 't')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(149);
      if (lookahead != 0)
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'c')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'k')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 's')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'p')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'a')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'c')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'e')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'r')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'm')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'f')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'd')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(83);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(88);
      END_STATE();
    case 171:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 175:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(176);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(175);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(174);
      END_STATE();
    case 178:
      if (lookahead == ',')
        SKIP(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 179:
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
        ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(180);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 181:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(181);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(182);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(194);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 'n')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'm')
        ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'f')
        ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(193);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
        ADVANCE(105);
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
        ADVANCE(110);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 196:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(196);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 197:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(197);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(199);
      if (lookahead == '(')
        ADVANCE(200);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == ',')
        SKIP(198);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'c')
        ADVANCE(206);
      if (lookahead == 's')
        ADVANCE(211);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(13);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(26);
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
        ADVANCE(202);
      END_STATE();
    case 202:
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
        ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(204);
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
        ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(202);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(207);
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
        ADVANCE(202);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(208);
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
        ADVANCE(202);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(209);
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
        ADVANCE(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(202);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(212);
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
        ADVANCE(202);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(213);
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
        ADVANCE(202);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(214);
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
        ADVANCE(202);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(202);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(216);
      if (lookahead == ',')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(217);
      if (lookahead != 0)
        ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == ',')
        SKIP(219);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(43);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(53);
      if (lookahead == '\\')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(59);
      if (lookahead == 'a')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(139);
      if (lookahead == '{')
        ADVANCE(94);
      if (lookahead == '~')
        ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 220:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == ',')
        SKIP(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 222:
      if (lookahead == ',')
        SKIP(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(223);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 146},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 175},
  [7] = {.lex_state = 103},
  [8] = {.lex_state = 103},
  [9] = {.lex_state = 178},
  [10] = {.lex_state = 178},
  [11] = {.lex_state = 145},
  [12] = {.lex_state = 180},
  [13] = {.lex_state = 145},
  [14] = {.lex_state = 181},
  [15] = {.lex_state = 196},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 198},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 216},
  [21] = {.lex_state = 216},
  [22] = {.lex_state = 103},
  [23] = {.lex_state = 219},
  [24] = {.lex_state = 198},
  [25] = {.lex_state = 178},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 198},
  [29] = {.lex_state = 103},
  [30] = {.lex_state = 103},
  [31] = {.lex_state = 198},
  [32] = {.lex_state = 220},
  [33] = {.lex_state = 145},
  [34] = {.lex_state = 145},
  [35] = {.lex_state = 145},
  [36] = {.lex_state = 145},
  [37] = {.lex_state = 145},
  [38] = {.lex_state = 145},
  [39] = {.lex_state = 145},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 145},
  [42] = {.lex_state = 145},
  [43] = {.lex_state = 145},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 198},
  [46] = {.lex_state = 198},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 198},
  [49] = {.lex_state = 145},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 221},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 145},
  [56] = {.lex_state = 175},
  [57] = {.lex_state = 145},
  [58] = {.lex_state = 103},
  [59] = {.lex_state = 103},
  [60] = {.lex_state = 103},
  [61] = {.lex_state = 103},
  [62] = {.lex_state = 103},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 145},
  [65] = {.lex_state = 180},
  [66] = {.lex_state = 198},
  [67] = {.lex_state = 103},
  [68] = {.lex_state = 145},
  [69] = {.lex_state = 103},
  [70] = {.lex_state = 219},
  [71] = {.lex_state = 198},
  [72] = {.lex_state = 198},
  [73] = {.lex_state = 103},
  [74] = {.lex_state = 103},
  [75] = {.lex_state = 103},
  [76] = {.lex_state = 219},
  [77] = {.lex_state = 103},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 196},
  [84] = {.lex_state = 103},
  [85] = {.lex_state = 145},
  [86] = {.lex_state = 103},
  [87] = {.lex_state = 103},
  [88] = {.lex_state = 103},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 197},
  [92] = {.lex_state = 145},
  [93] = {.lex_state = 197},
  [94] = {.lex_state = 103},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 145},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 103},
  [99] = {.lex_state = 103},
  [100] = {.lex_state = 103},
  [101] = {.lex_state = 197},
  [102] = {.lex_state = 145},
  [103] = {.lex_state = 145},
  [104] = {.lex_state = 145},
  [105] = {.lex_state = 145},
  [106] = {.lex_state = 219},
  [107] = {.lex_state = 198},
  [108] = {.lex_state = 197},
  [109] = {.lex_state = 197},
  [110] = {.lex_state = 198},
  [111] = {.lex_state = 198},
  [112] = {.lex_state = 198},
  [113] = {.lex_state = 171},
  [114] = {.lex_state = 145},
  [115] = {.lex_state = 145},
  [116] = {.lex_state = 145},
  [117] = {.lex_state = 145},
  [118] = {.lex_state = 219},
  [119] = {.lex_state = 145},
  [120] = {.lex_state = 145},
  [121] = {.lex_state = 103},
  [122] = {.lex_state = 198},
  [123] = {.lex_state = 198},
  [124] = {.lex_state = 221},
  [125] = {.lex_state = 145},
  [126] = {.lex_state = 145},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 145},
  [129] = {.lex_state = 175},
  [130] = {.lex_state = 145},
  [131] = {.lex_state = 178},
  [132] = {.lex_state = 145},
  [133] = {.lex_state = 145},
  [134] = {.lex_state = 219},
  [135] = {.lex_state = 198},
  [136] = {.lex_state = 198},
  [137] = {.lex_state = 103},
  [138] = {.lex_state = 198},
  [139] = {.lex_state = 198},
  [140] = {.lex_state = 219},
  [141] = {.lex_state = 181},
  [142] = {.lex_state = 198},
  [143] = {.lex_state = 219},
  [144] = {.lex_state = 198},
  [145] = {.lex_state = 198},
  [146] = {.lex_state = 198},
  [147] = {.lex_state = 198},
  [148] = {.lex_state = 145},
  [149] = {.lex_state = 219},
  [150] = {.lex_state = 145},
  [151] = {.lex_state = 196},
  [152] = {.lex_state = 197},
  [153] = {.lex_state = 145},
  [154] = {.lex_state = 197},
  [155] = {.lex_state = 145},
  [156] = {.lex_state = 197},
  [157] = {.lex_state = 145},
  [158] = {.lex_state = 197},
  [159] = {.lex_state = 145},
  [160] = {.lex_state = 198},
  [161] = {.lex_state = 197},
  [162] = {.lex_state = 198},
  [163] = {.lex_state = 197},
  [164] = {.lex_state = 103},
  [165] = {.lex_state = 198},
  [166] = {.lex_state = 221},
  [167] = {.lex_state = 145},
  [168] = {.lex_state = 145},
  [169] = {.lex_state = 198},
  [170] = {.lex_state = 181},
  [171] = {.lex_state = 145},
  [172] = {.lex_state = 181},
  [173] = {.lex_state = 181},
  [174] = {.lex_state = 219},
  [175] = {.lex_state = 198},
  [176] = {.lex_state = 171},
  [177] = {.lex_state = 198},
  [178] = {.lex_state = 198},
  [179] = {.lex_state = 198},
  [180] = {.lex_state = 181},
  [181] = {.lex_state = 198},
  [182] = {.lex_state = 198},
  [183] = {.lex_state = 198},
  [184] = {.lex_state = 198},
  [185] = {.lex_state = 145},
  [186] = {.lex_state = 197},
  [187] = {.lex_state = 198},
  [188] = {.lex_state = 198},
  [189] = {.lex_state = 197},
  [190] = {.lex_state = 221},
  [191] = {.lex_state = 198},
  [192] = {.lex_state = 198},
  [193] = {.lex_state = 145},
  [194] = {.lex_state = 198},
  [195] = {.lex_state = 171},
  [196] = {.lex_state = 145},
  [197] = {.lex_state = 181},
  [198] = {.lex_state = 198},
  [199] = {.lex_state = 198},
  [200] = {.lex_state = 145},
  [201] = {.lex_state = 198},
  [202] = {.lex_state = 197},
  [203] = {.lex_state = 145},
  [204] = {.lex_state = 198},
  [205] = {.lex_state = 145},
  [206] = {.lex_state = 181},
  [207] = {.lex_state = 198},
  [208] = {.lex_state = 198},
  [209] = {.lex_state = 145},
  [210] = {.lex_state = 181},
  [211] = {.lex_state = 145},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_number_long] = ACTIONS(1),
    [sym_number_double] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [sym_infinity] = ACTIONS(1),
    [sym_negative_infinity] = ACTIONS(1),
    [sym_not_a_number] = ACTIONS(1),
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
    [sym_program] = STATE(32),
    [sym__anything] = STATE(47),
    [sym__literals] = STATE(47),
    [sym__collection_literals] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(47),
    [sym_character] = STATE(47),
    [sym__character] = STATE(34),
    [sym_string] = STATE(47),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(47),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(47),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(47),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(47),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(47),
    [sym_list] = STATE(47),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(47),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(47),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(47),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(47),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(47),
    [sym_anonymous_function] = STATE(47),
    [sym_shorthand_function] = STATE(47),
    [sym_defn] = STATE(47),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(47),
    [sym_var_quote] = STATE(47),
    [sym_unquote] = STATE(47),
    [sym_unquote_splice] = STATE(47),
    [sym_deref] = STATE(47),
    [aux_sym_program_repeat1] = STATE(47),
    [aux_sym_metadata_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(75),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_nil] = ACTIONS(79),
    [sym_true] = ACTIONS(79),
    [sym_false] = ACTIONS(79),
    [sym_number_long] = ACTIONS(79),
    [sym_number_double] = ACTIONS(77),
    [sym_number_bigint] = ACTIONS(79),
    [sym_number_ratio] = ACTIONS(77),
    [anon_sym_POUND_POUND] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_POUND_DQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LPARENquote] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_as_DASH_GT] = ACTIONS(77),
    [anon_sym_some_DASH_GT] = ACTIONS(79),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_cond_DASH_GT] = ACTIONS(79),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(77),
    [sym__symbol_chars] = ACTIONS(79),
    [sym_member_access] = ACTIONS(77),
    [sym_field_access] = ACTIONS(77),
    [sym_new_class] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_POUND_LBRACE] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_POUND_BANG] = ACTIONS(77),
    [anon_sym_POUND_] = ACTIONS(77),
    [anon_sym_POUND_LPAREN] = ACTIONS(77),
    [sym_shorthand_function_arg] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_CARET_COLON] = ACTIONS(77),
    [anon_sym_CARET_DQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_POUND_SQUOTE] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_TILDE_AT] = ACTIONS(77),
    [sym_gensym] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
  },
  [3] = {
    [sym_infinity] = ACTIONS(81),
    [sym_negative_infinity] = ACTIONS(81),
    [sym_not_a_number] = ACTIONS(81),
  },
  [4] = {
    [sym__special_char] = STATE(50),
    [sym__unicode_char] = STATE(50),
    [sym__octal_char] = STATE(50),
    [sym__normal_char] = ACTIONS(83),
    [anon_sym_newline] = ACTIONS(83),
    [anon_sym_space] = ACTIONS(83),
    [anon_sym_tab] = ACTIONS(83),
    [anon_sym_formfeed] = ACTIONS(83),
    [anon_sym_backspace] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_u] = ACTIONS(85),
    [anon_sym_o] = ACTIONS(87),
  },
  [5] = {
    [aux_sym__string_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(91),
  },
  [6] = {
    [aux_sym__regex_repeat1] = STATE(56),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(95),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(95),
  },
  [7] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [8] = {
    [sym__anything] = STATE(63),
    [sym__literals] = STATE(63),
    [sym__collection_literals] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(63),
    [sym_character] = STATE(63),
    [sym__character] = STATE(34),
    [sym_string] = STATE(63),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(63),
    [sym_list] = STATE(63),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(63),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(63),
    [sym_anonymous_function] = STATE(63),
    [sym_shorthand_function] = STATE(63),
    [sym_defn] = STATE(63),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(63),
    [sym_var_quote] = STATE(63),
    [sym_unquote] = STATE(63),
    [sym_unquote_splice] = STATE(63),
    [sym_deref] = STATE(63),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(101),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(75),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(115),
  },
  [10] = {
    [sym__keyword_chars] = ACTIONS(117),
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
    [anon_sym_POUND_POUND] = ACTIONS(119),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_POUND_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_LPARENquote] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(119),
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
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(125),
    [sym_number_double] = ACTIONS(123),
    [sym_number_bigint] = ACTIONS(125),
    [sym_number_ratio] = ACTIONS(123),
    [anon_sym_POUND_POUND] = ACTIONS(123),
    [anon_sym_BSLASH] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_POUND_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_LPARENquote] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(127),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_TILDE_AT] = ACTIONS(123),
    [sym_gensym] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(131),
    [sym_false] = ACTIONS(131),
    [sym_number_long] = ACTIONS(131),
    [sym_number_double] = ACTIONS(129),
    [sym_number_bigint] = ACTIONS(131),
    [sym_number_ratio] = ACTIONS(129),
    [anon_sym_POUND_POUND] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_POUND_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LPARENquote] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_as_DASH_GT] = ACTIONS(129),
    [anon_sym_some_DASH_GT] = ACTIONS(131),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_cond_DASH_GT] = ACTIONS(131),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(129),
    [sym__symbol_chars] = ACTIONS(131),
    [sym_member_access] = ACTIONS(129),
    [sym_field_access] = ACTIONS(129),
    [sym_new_class] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_POUND_LBRACE] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_POUND_BANG] = ACTIONS(129),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_POUND_LPAREN] = ACTIONS(129),
    [sym_shorthand_function_arg] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_CARET_COLON] = ACTIONS(129),
    [anon_sym_CARET_DQUOTE] = ACTIONS(129),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_POUND_SQUOTE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_TILDE_AT] = ACTIONS(129),
    [sym_gensym] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
  },
  [14] = {
    [sym__anything] = STATE(76),
    [sym__literals] = STATE(76),
    [sym__collection_literals] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(76),
    [sym_character] = STATE(76),
    [sym__character] = STATE(34),
    [sym_string] = STATE(76),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(76),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(76),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(76),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(76),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(76),
    [sym_list] = STATE(76),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(76),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(76),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(76),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(76),
    [sym_anonymous_function] = STATE(76),
    [sym_shorthand_function] = STATE(76),
    [sym_defn] = STATE(76),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(76),
    [sym_var_quote] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_unquote_splice] = STATE(76),
    [sym_deref] = STATE(76),
    [aux_sym_program_repeat1] = STATE(76),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_comment] = ACTIONS(141),
    [anon_sym_fn] = ACTIONS(143),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(145),
    [anon_sym_defn] = ACTIONS(147),
    [anon_sym_defn_DASH] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(75),
  },
  [15] = {
    [sym__anything] = STATE(83),
    [sym__literals] = STATE(83),
    [sym__collection_literals] = STATE(83),
    [sym_boolean] = STATE(83),
    [sym_number] = STATE(83),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(83),
    [sym_character] = STATE(83),
    [sym__character] = STATE(34),
    [sym_string] = STATE(83),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(83),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(83),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(83),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(83),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(83),
    [sym_list] = STATE(83),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(83),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(83),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(83),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(83),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(83),
    [sym_anonymous_function] = STATE(83),
    [sym_shorthand_function] = STATE(83),
    [sym_defn] = STATE(83),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(83),
    [sym_var_quote] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_unquote_splice] = STATE(83),
    [sym_deref] = STATE(83),
    [aux_sym_program_repeat1] = STATE(83),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(155),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(163),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(75),
  },
  [16] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(91),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(91),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [17] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(93),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(93),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [18] = {
    [sym__symbol_chars] = ACTIONS(189),
  },
  [19] = {
    [sym__anything] = STATE(101),
    [sym__literals] = STATE(101),
    [sym__collection_literals] = STATE(101),
    [sym_boolean] = STATE(101),
    [sym_number] = STATE(101),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(101),
    [sym_character] = STATE(101),
    [sym__character] = STATE(34),
    [sym_string] = STATE(101),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(101),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(101),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(101),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(101),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(101),
    [sym_list] = STATE(101),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(101),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(101),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(101),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(101),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(101),
    [sym_anonymous_function] = STATE(101),
    [sym_shorthand_function] = STATE(101),
    [sym_defn] = STATE(101),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(101),
    [sym_var_quote] = STATE(101),
    [sym_unquote] = STATE(101),
    [sym_unquote_splice] = STATE(101),
    [sym_deref] = STATE(101),
    [aux_sym_program_repeat1] = STATE(101),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(191),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(75),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(207),
  },
  [21] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(209),
  },
  [22] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [23] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(34),
    [sym_string] = STATE(106),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(106),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [aux_sym_program_repeat1] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(215),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(219),
    [anon_sym_AT] = ACTIONS(75),
  },
  [24] = {
    [sym_hash_map] = STATE(111),
    [sym__hash_map] = STATE(112),
    [sym_namespace_map] = STATE(112),
    [sym__symbol_chars] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [25] = {
    [sym__keyword_chars] = ACTIONS(221),
  },
  [26] = {
    [aux_sym__string_repeat1] = STATE(113),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(231),
  },
  [27] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [28] = {
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
  },
  [29] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [30] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [31] = {
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_list] = STATE(119),
    [sym__list] = STATE(40),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(245),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(247),
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
    [anon_sym_POUND_POUND] = ACTIONS(249),
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
    [anon_sym_POUND_POUND] = ACTIONS(253),
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
    [anon_sym_POUND_POUND] = ACTIONS(257),
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
    [anon_sym_POUND_POUND] = ACTIONS(261),
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
    [anon_sym_POUND_POUND] = ACTIONS(265),
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
    [anon_sym_POUND_POUND] = ACTIONS(269),
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
    [anon_sym_POUND_POUND] = ACTIONS(273),
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
    [anon_sym_POUND_POUND] = ACTIONS(277),
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
    [anon_sym_POUND_POUND] = ACTIONS(281),
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
    [anon_sym_POUND_POUND] = ACTIONS(285),
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
    [anon_sym_POUND_POUND] = ACTIONS(289),
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
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_nil] = ACTIONS(295),
    [sym_true] = ACTIONS(295),
    [sym_false] = ACTIONS(295),
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(293),
    [sym_number_bigint] = ACTIONS(295),
    [sym_number_ratio] = ACTIONS(293),
    [anon_sym_POUND_POUND] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_POUND_DQUOTE] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_LPARENquote] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_as_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(295),
    [sym_member_access] = ACTIONS(293),
    [sym_field_access] = ACTIONS(293),
    [sym_new_class] = ACTIONS(293),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(293),
    [sym_shorthand_function_arg] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(295),
    [anon_sym_CARET_COLON] = ACTIONS(293),
    [anon_sym_CARET_DQUOTE] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_POUND_SQUOTE] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_TILDE_AT] = ACTIONS(293),
    [sym_gensym] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
  },
  [45] = {
    [sym_list] = STATE(120),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(120),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(120),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(120),
    [sym__set] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
  },
  [46] = {
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_DASH_GT_GT] = ACTIONS(299),
    [anon_sym_as_DASH_GT] = ACTIONS(299),
    [anon_sym_some_DASH_GT] = ACTIONS(297),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(299),
    [anon_sym_cond_DASH_GT] = ACTIONS(297),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(299),
    [sym__symbol_chars] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_POUND_LBRACE] = ACTIONS(299),
  },
  [47] = {
    [sym__anything] = STATE(121),
    [sym__literals] = STATE(121),
    [sym__collection_literals] = STATE(121),
    [sym_boolean] = STATE(121),
    [sym_number] = STATE(121),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(121),
    [sym_character] = STATE(121),
    [sym__character] = STATE(34),
    [sym_string] = STATE(121),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(121),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(121),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(121),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(121),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(121),
    [sym_list] = STATE(121),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(121),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(121),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(121),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(121),
    [sym_anonymous_function] = STATE(121),
    [sym_shorthand_function] = STATE(121),
    [sym_defn] = STATE(121),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(121),
    [sym_var_quote] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splice] = STATE(121),
    [sym_deref] = STATE(121),
    [aux_sym_program_repeat1] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_nil] = ACTIONS(303),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(75),
  },
  [48] = {
    [sym_metadata_shorthand] = STATE(123),
    [aux_sym_metadata_repeat1] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_POUND_LBRACE] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(311),
    [sym_false] = ACTIONS(311),
    [sym_number_long] = ACTIONS(311),
    [sym_number_double] = ACTIONS(309),
    [sym_number_bigint] = ACTIONS(311),
    [sym_number_ratio] = ACTIONS(309),
    [anon_sym_POUND_POUND] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_LPARENquote] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_COLON_COLON] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(311),
    [anon_sym_DASH_GT_GT] = ACTIONS(309),
    [anon_sym_as_DASH_GT] = ACTIONS(309),
    [anon_sym_some_DASH_GT] = ACTIONS(311),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(309),
    [anon_sym_cond_DASH_GT] = ACTIONS(311),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(309),
    [sym__symbol_chars] = ACTIONS(311),
    [sym_member_access] = ACTIONS(309),
    [sym_field_access] = ACTIONS(309),
    [sym_new_class] = ACTIONS(309),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(309),
    [sym_shorthand_function_arg] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(311),
    [anon_sym_CARET_COLON] = ACTIONS(309),
    [anon_sym_CARET_DQUOTE] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_POUND_SQUOTE] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_TILDE_AT] = ACTIONS(309),
    [sym_gensym] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
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
    [anon_sym_POUND_POUND] = ACTIONS(313),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_TILDE_AT] = ACTIONS(313),
    [sym_gensym] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
  },
  [51] = {
    [sym__hex_char] = ACTIONS(317),
  },
  [52] = {
    [sym__octal_num] = STATE(125),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(321),
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
    [anon_sym_POUND_POUND] = ACTIONS(323),
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
    [aux_sym__string_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(329),
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
    [anon_sym_POUND_POUND] = ACTIONS(331),
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
    [aux_sym__regex_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(337),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_nil] = ACTIONS(341),
    [sym_true] = ACTIONS(341),
    [sym_false] = ACTIONS(341),
    [sym_number_long] = ACTIONS(341),
    [sym_number_double] = ACTIONS(339),
    [sym_number_bigint] = ACTIONS(341),
    [sym_number_ratio] = ACTIONS(339),
    [anon_sym_POUND_POUND] = ACTIONS(339),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_TILDE_AT] = ACTIONS(339),
    [sym_gensym] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
  },
  [58] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [59] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [60] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [61] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [62] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(105),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(343),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [sym_nil] = ACTIONS(347),
    [sym_true] = ACTIONS(347),
    [sym_false] = ACTIONS(347),
    [sym_number_long] = ACTIONS(347),
    [sym_number_double] = ACTIONS(345),
    [sym_number_bigint] = ACTIONS(347),
    [sym_number_ratio] = ACTIONS(345),
    [anon_sym_POUND_POUND] = ACTIONS(345),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_TILDE_AT] = ACTIONS(345),
    [sym_gensym] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym_nil] = ACTIONS(351),
    [sym_true] = ACTIONS(351),
    [sym_false] = ACTIONS(351),
    [sym_number_long] = ACTIONS(351),
    [sym_number_double] = ACTIONS(349),
    [sym_number_bigint] = ACTIONS(351),
    [sym_number_ratio] = ACTIONS(349),
    [anon_sym_POUND_POUND] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_POUND_DQUOTE] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_LPARENquote] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_COLON_COLON] = ACTIONS(349),
    [anon_sym_SLASH] = ACTIONS(353),
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
  [66] = {
    [sym__symbol_chars] = ACTIONS(355),
  },
  [67] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [sym_nil] = ACTIONS(359),
    [sym_true] = ACTIONS(359),
    [sym_false] = ACTIONS(359),
    [sym_number_long] = ACTIONS(359),
    [sym_number_double] = ACTIONS(357),
    [sym_number_bigint] = ACTIONS(359),
    [sym_number_ratio] = ACTIONS(357),
    [anon_sym_POUND_POUND] = ACTIONS(357),
    [anon_sym_BSLASH] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_LPARENquote] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_COLON_COLON] = ACTIONS(357),
    [anon_sym_DASH_GT] = ACTIONS(359),
    [anon_sym_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_as_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(357),
    [sym__symbol_chars] = ACTIONS(359),
    [sym_member_access] = ACTIONS(357),
    [sym_field_access] = ACTIONS(357),
    [sym_new_class] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_POUND_LBRACE] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_POUND_BANG] = ACTIONS(357),
    [anon_sym_POUND_] = ACTIONS(357),
    [anon_sym_POUND_LPAREN] = ACTIONS(357),
    [sym_shorthand_function_arg] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(359),
    [anon_sym_CARET_COLON] = ACTIONS(357),
    [anon_sym_CARET_DQUOTE] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [anon_sym_POUND_SQUOTE] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(359),
    [anon_sym_TILDE_AT] = ACTIONS(357),
    [sym_gensym] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
  },
  [69] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [70] = {
    [sym__anything] = STATE(134),
    [sym__literals] = STATE(134),
    [sym__collection_literals] = STATE(134),
    [sym_boolean] = STATE(134),
    [sym_number] = STATE(134),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(134),
    [sym_character] = STATE(134),
    [sym__character] = STATE(34),
    [sym_string] = STATE(134),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(134),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(134),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(134),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(134),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(134),
    [sym_list] = STATE(134),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(134),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(134),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(134),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(134),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(134),
    [sym_anonymous_function] = STATE(134),
    [sym_shorthand_function] = STATE(134),
    [sym_defn] = STATE(134),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(134),
    [sym_var_quote] = STATE(134),
    [sym_unquote] = STATE(134),
    [sym_unquote_splice] = STATE(134),
    [sym_deref] = STATE(134),
    [aux_sym_program_repeat1] = STATE(134),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(361),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(75),
  },
  [71] = {
    [sym_symbol] = STATE(138),
    [sym__symbol] = STATE(139),
    [sym_threading_macro] = STATE(139),
    [sym_qualified_symbol] = STATE(139),
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__after_the_fn_name] = STATE(141),
    [sym_function_name] = STATE(142),
    [sym__single_arity_fn] = STATE(141),
    [sym__multi_arity_fn] = STATE(141),
    [sym_params] = STATE(143),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_DASH_GT] = ACTIONS(367),
    [anon_sym_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_as_DASH_GT] = ACTIONS(369),
    [anon_sym_some_DASH_GT] = ACTIONS(367),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_cond_DASH_GT] = ACTIONS(367),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [72] = {
    [sym_symbol] = STATE(138),
    [sym__symbol] = STATE(139),
    [sym_threading_macro] = STATE(139),
    [sym_qualified_symbol] = STATE(139),
    [sym_function_name] = STATE(145),
    [sym_metadata] = STATE(146),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(147),
    [aux_sym_metadata_repeat1] = STATE(147),
    [anon_sym_DASH_GT] = ACTIONS(367),
    [anon_sym_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_as_DASH_GT] = ACTIONS(369),
    [anon_sym_some_DASH_GT] = ACTIONS(367),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_cond_DASH_GT] = ACTIONS(367),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [73] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [74] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [75] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [76] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(149),
    [sym_character] = STATE(149),
    [sym__character] = STATE(34),
    [sym_string] = STATE(149),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(149),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(75),
  },
  [77] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_nil] = ACTIONS(383),
    [sym_true] = ACTIONS(383),
    [sym_false] = ACTIONS(383),
    [sym_number_long] = ACTIONS(383),
    [sym_number_double] = ACTIONS(381),
    [sym_number_bigint] = ACTIONS(383),
    [sym_number_ratio] = ACTIONS(381),
    [anon_sym_POUND_POUND] = ACTIONS(381),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_TILDE_AT] = ACTIONS(381),
    [sym_gensym] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
  },
  [79] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [80] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [81] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [82] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [83] = {
    [sym__anything] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__collection_literals] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(151),
    [sym_character] = STATE(151),
    [sym__character] = STATE(34),
    [sym_string] = STATE(151),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(151),
    [sym_list] = STATE(151),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(151),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(151),
    [sym_anonymous_function] = STATE(151),
    [sym_shorthand_function] = STATE(151),
    [sym_defn] = STATE(151),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(151),
    [sym_var_quote] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splice] = STATE(151),
    [sym_deref] = STATE(151),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(385),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_TILDE_AT] = ACTIONS(169),
    [sym_gensym] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(75),
  },
  [84] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_nil] = ACTIONS(393),
    [sym_true] = ACTIONS(393),
    [sym_false] = ACTIONS(393),
    [sym_number_long] = ACTIONS(393),
    [sym_number_double] = ACTIONS(391),
    [sym_number_bigint] = ACTIONS(393),
    [sym_number_ratio] = ACTIONS(391),
    [anon_sym_POUND_POUND] = ACTIONS(391),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_TILDE_AT] = ACTIONS(391),
    [sym_gensym] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(391),
  },
  [86] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [87] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [88] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [89] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [90] = {
    [sym__anything] = STATE(152),
    [sym__literals] = STATE(152),
    [sym__collection_literals] = STATE(152),
    [sym_boolean] = STATE(152),
    [sym_number] = STATE(152),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(152),
    [sym_character] = STATE(152),
    [sym__character] = STATE(34),
    [sym_string] = STATE(152),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(152),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(152),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(152),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(152),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(152),
    [sym_list] = STATE(152),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(152),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(152),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_value] = STATE(152),
    [sym_set] = STATE(152),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(152),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(152),
    [sym_anonymous_function] = STATE(152),
    [sym_shorthand_function] = STATE(152),
    [sym_defn] = STATE(152),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(152),
    [sym_var_quote] = STATE(152),
    [sym_unquote] = STATE(152),
    [sym_unquote_splice] = STATE(152),
    [sym_deref] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(395),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(75),
  },
  [91] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_nil] = ACTIONS(403),
    [sym_true] = ACTIONS(403),
    [sym_false] = ACTIONS(403),
    [sym_number_long] = ACTIONS(403),
    [sym_number_double] = ACTIONS(401),
    [sym_number_bigint] = ACTIONS(403),
    [sym_number_ratio] = ACTIONS(401),
    [anon_sym_POUND_POUND] = ACTIONS(401),
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
  [93] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(407),
  },
  [95] = {
    [sym__anything] = STATE(57),
    [sym__literals] = STATE(57),
    [sym__collection_literals] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym_number] = STATE(57),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(57),
    [sym_character] = STATE(57),
    [sym__character] = STATE(34),
    [sym_string] = STATE(57),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(57),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(57),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(57),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(57),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(57),
    [sym_list] = STATE(57),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(57),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(57),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(57),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(57),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(57),
    [sym_anonymous_function] = STATE(57),
    [sym_shorthand_function] = STATE(57),
    [sym_defn] = STATE(57),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(57),
    [sym_var_quote] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splice] = STATE(57),
    [sym_deref] = STATE(57),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(75),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym_nil] = ACTIONS(411),
    [sym_true] = ACTIONS(411),
    [sym_false] = ACTIONS(411),
    [sym_number_long] = ACTIONS(411),
    [sym_number_double] = ACTIONS(409),
    [sym_number_bigint] = ACTIONS(411),
    [sym_number_ratio] = ACTIONS(409),
    [anon_sym_POUND_POUND] = ACTIONS(409),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_TILDE_AT] = ACTIONS(409),
    [sym_gensym] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(409),
  },
  [97] = {
    [sym__anything] = STATE(104),
    [sym__literals] = STATE(104),
    [sym__collection_literals] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_number] = STATE(104),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(104),
    [sym_character] = STATE(104),
    [sym__character] = STATE(34),
    [sym_string] = STATE(104),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(104),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(104),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(104),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(104),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(104),
    [sym_list] = STATE(104),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(104),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(104),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(104),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(104),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(104),
    [sym_anonymous_function] = STATE(104),
    [sym_shorthand_function] = STATE(104),
    [sym_defn] = STATE(104),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(104),
    [sym_var_quote] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splice] = STATE(104),
    [sym_deref] = STATE(104),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(211),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(75),
  },
  [98] = {
    [sym__anything] = STATE(114),
    [sym__literals] = STATE(114),
    [sym__collection_literals] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_number] = STATE(114),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(114),
    [sym_character] = STATE(114),
    [sym__character] = STATE(34),
    [sym_string] = STATE(114),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(114),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(114),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(114),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(114),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(114),
    [sym_list] = STATE(114),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(114),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(114),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(114),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(114),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(114),
    [sym_anonymous_function] = STATE(114),
    [sym_shorthand_function] = STATE(114),
    [sym_defn] = STATE(114),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(114),
    [sym_var_quote] = STATE(114),
    [sym_unquote] = STATE(114),
    [sym_unquote_splice] = STATE(114),
    [sym_deref] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(233),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(75),
  },
  [99] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(34),
    [sym_string] = STATE(116),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(116),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(237),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(75),
  },
  [100] = {
    [sym__anything] = STATE(117),
    [sym__literals] = STATE(117),
    [sym__collection_literals] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(117),
    [sym_character] = STATE(117),
    [sym__character] = STATE(34),
    [sym_string] = STATE(117),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(117),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(117),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(117),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(117),
    [sym_list] = STATE(117),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(117),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(117),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(117),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(117),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(117),
    [sym_anonymous_function] = STATE(117),
    [sym_shorthand_function] = STATE(117),
    [sym_defn] = STATE(117),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(117),
    [sym_var_quote] = STATE(117),
    [sym_unquote] = STATE(117),
    [sym_unquote_splice] = STATE(117),
    [sym_deref] = STATE(117),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(241),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(75),
  },
  [101] = {
    [sym__anything] = STATE(158),
    [sym__literals] = STATE(158),
    [sym__collection_literals] = STATE(158),
    [sym_boolean] = STATE(158),
    [sym_number] = STATE(158),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(158),
    [sym_character] = STATE(158),
    [sym__character] = STATE(34),
    [sym_string] = STATE(158),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(158),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(158),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(158),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(158),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(158),
    [sym_list] = STATE(158),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(158),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(158),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(158),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(158),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(158),
    [sym_anonymous_function] = STATE(158),
    [sym_shorthand_function] = STATE(158),
    [sym_defn] = STATE(158),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(158),
    [sym_var_quote] = STATE(158),
    [sym_unquote] = STATE(158),
    [sym_unquote_splice] = STATE(158),
    [sym_deref] = STATE(158),
    [aux_sym_program_repeat1] = STATE(158),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(413),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(415),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(197),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_TILDE_AT] = ACTIONS(205),
    [sym_gensym] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(75),
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
    [anon_sym_POUND_POUND] = ACTIONS(419),
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
    [anon_sym_POUND_POUND] = ACTIONS(423),
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
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_nil] = ACTIONS(429),
    [sym_true] = ACTIONS(429),
    [sym_false] = ACTIONS(429),
    [sym_number_long] = ACTIONS(429),
    [sym_number_double] = ACTIONS(427),
    [sym_number_bigint] = ACTIONS(429),
    [sym_number_ratio] = ACTIONS(427),
    [anon_sym_POUND_POUND] = ACTIONS(427),
    [anon_sym_BSLASH] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_POUND_DQUOTE] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_LPARENquote] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(427),
    [anon_sym_DASH_GT] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(427),
    [anon_sym_as_DASH_GT] = ACTIONS(427),
    [anon_sym_some_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(427),
    [anon_sym_cond_DASH_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(427),
    [sym__symbol_chars] = ACTIONS(429),
    [sym_member_access] = ACTIONS(427),
    [sym_field_access] = ACTIONS(427),
    [sym_new_class] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(427),
    [anon_sym_POUND] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(427),
    [anon_sym_SEMI] = ACTIONS(427),
    [anon_sym_POUND_BANG] = ACTIONS(427),
    [anon_sym_POUND_] = ACTIONS(427),
    [anon_sym_POUND_LPAREN] = ACTIONS(427),
    [sym_shorthand_function_arg] = ACTIONS(427),
    [anon_sym_CARET] = ACTIONS(429),
    [anon_sym_CARET_COLON] = ACTIONS(427),
    [anon_sym_CARET_DQUOTE] = ACTIONS(427),
    [anon_sym_BQUOTE] = ACTIONS(427),
    [anon_sym_POUND_SQUOTE] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_TILDE_AT] = ACTIONS(427),
    [sym_gensym] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(427),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_nil] = ACTIONS(433),
    [sym_true] = ACTIONS(433),
    [sym_false] = ACTIONS(433),
    [sym_number_long] = ACTIONS(433),
    [sym_number_double] = ACTIONS(431),
    [sym_number_bigint] = ACTIONS(433),
    [sym_number_ratio] = ACTIONS(431),
    [anon_sym_POUND_POUND] = ACTIONS(431),
    [anon_sym_BSLASH] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_POUND_DQUOTE] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(431),
    [anon_sym_LPARENquote] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_COLON_COLON] = ACTIONS(431),
    [anon_sym_DASH_GT] = ACTIONS(433),
    [anon_sym_DASH_GT_GT] = ACTIONS(431),
    [anon_sym_as_DASH_GT] = ACTIONS(431),
    [anon_sym_some_DASH_GT] = ACTIONS(433),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(431),
    [anon_sym_cond_DASH_GT] = ACTIONS(433),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(431),
    [sym__symbol_chars] = ACTIONS(433),
    [sym_member_access] = ACTIONS(431),
    [sym_field_access] = ACTIONS(431),
    [sym_new_class] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(433),
    [anon_sym_POUND_LBRACE] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_POUND_BANG] = ACTIONS(431),
    [anon_sym_POUND_] = ACTIONS(431),
    [anon_sym_POUND_LPAREN] = ACTIONS(431),
    [sym_shorthand_function_arg] = ACTIONS(431),
    [anon_sym_CARET] = ACTIONS(433),
    [anon_sym_CARET_COLON] = ACTIONS(431),
    [anon_sym_CARET_DQUOTE] = ACTIONS(431),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [anon_sym_POUND_SQUOTE] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_TILDE_AT] = ACTIONS(431),
    [sym_gensym] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
  },
  [106] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(149),
    [sym_character] = STATE(149),
    [sym__character] = STATE(34),
    [sym_string] = STATE(149),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(149),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(75),
  },
  [107] = {
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
    [anon_sym_CARET] = ACTIONS(437),
    [anon_sym_CARET_COLON] = ACTIONS(439),
    [anon_sym_CARET_DQUOTE] = ACTIONS(439),
  },
  [108] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(161),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(161),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [109] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(163),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(163),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [110] = {
    [sym__symbol_chars] = ACTIONS(445),
  },
  [111] = {
    [anon_sym_DASH_GT] = ACTIONS(447),
    [anon_sym_DASH_GT_GT] = ACTIONS(449),
    [anon_sym_as_DASH_GT] = ACTIONS(449),
    [anon_sym_some_DASH_GT] = ACTIONS(447),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(449),
    [anon_sym_cond_DASH_GT] = ACTIONS(447),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(449),
    [sym__symbol_chars] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(447),
    [anon_sym_POUND_LBRACE] = ACTIONS(449),
  },
  [112] = {
    [anon_sym_DASH_GT] = ACTIONS(287),
    [anon_sym_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_as_DASH_GT] = ACTIONS(285),
    [anon_sym_some_DASH_GT] = ACTIONS(287),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(285),
    [anon_sym_cond_DASH_GT] = ACTIONS(287),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(285),
    [sym__symbol_chars] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
  },
  [113] = {
    [aux_sym__string_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(329),
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
    [anon_sym_POUND_POUND] = ACTIONS(453),
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
    [anon_sym_POUND_POUND] = ACTIONS(457),
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
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_nil] = ACTIONS(463),
    [sym_true] = ACTIONS(463),
    [sym_false] = ACTIONS(463),
    [sym_number_long] = ACTIONS(463),
    [sym_number_double] = ACTIONS(461),
    [sym_number_bigint] = ACTIONS(463),
    [sym_number_ratio] = ACTIONS(461),
    [anon_sym_POUND_POUND] = ACTIONS(461),
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
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_nil] = ACTIONS(467),
    [sym_true] = ACTIONS(467),
    [sym_false] = ACTIONS(467),
    [sym_number_long] = ACTIONS(467),
    [sym_number_double] = ACTIONS(465),
    [sym_number_bigint] = ACTIONS(467),
    [sym_number_ratio] = ACTIONS(465),
    [anon_sym_POUND_POUND] = ACTIONS(465),
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
  [118] = {
    [sym__anything] = STATE(76),
    [sym__literals] = STATE(76),
    [sym__collection_literals] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(76),
    [sym_character] = STATE(76),
    [sym__character] = STATE(34),
    [sym_string] = STATE(76),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(76),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(76),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(76),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(76),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(76),
    [sym_list] = STATE(76),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(76),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(76),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(76),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(76),
    [sym_anonymous_function] = STATE(76),
    [sym_shorthand_function] = STATE(76),
    [sym_defn] = STATE(76),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(76),
    [sym_var_quote] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_unquote_splice] = STATE(76),
    [sym_deref] = STATE(76),
    [aux_sym_program_repeat1] = STATE(76),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(75),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym_nil] = ACTIONS(471),
    [sym_true] = ACTIONS(471),
    [sym_false] = ACTIONS(471),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(469),
    [sym_number_bigint] = ACTIONS(471),
    [sym_number_ratio] = ACTIONS(469),
    [anon_sym_POUND_POUND] = ACTIONS(469),
    [anon_sym_BSLASH] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [anon_sym_LPARENquote] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_DASH_GT] = ACTIONS(471),
    [anon_sym_DASH_GT_GT] = ACTIONS(469),
    [anon_sym_as_DASH_GT] = ACTIONS(469),
    [anon_sym_some_DASH_GT] = ACTIONS(471),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(469),
    [anon_sym_cond_DASH_GT] = ACTIONS(471),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(469),
    [sym__symbol_chars] = ACTIONS(471),
    [sym_member_access] = ACTIONS(469),
    [sym_field_access] = ACTIONS(469),
    [sym_new_class] = ACTIONS(469),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(469),
    [sym_shorthand_function_arg] = ACTIONS(469),
    [anon_sym_CARET] = ACTIONS(471),
    [anon_sym_CARET_COLON] = ACTIONS(469),
    [anon_sym_CARET_DQUOTE] = ACTIONS(469),
    [anon_sym_BQUOTE] = ACTIONS(469),
    [anon_sym_POUND_SQUOTE] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_TILDE_AT] = ACTIONS(469),
    [sym_gensym] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [sym_nil] = ACTIONS(475),
    [sym_true] = ACTIONS(475),
    [sym_false] = ACTIONS(475),
    [sym_number_long] = ACTIONS(475),
    [sym_number_double] = ACTIONS(473),
    [sym_number_bigint] = ACTIONS(475),
    [sym_number_ratio] = ACTIONS(473),
    [anon_sym_POUND_POUND] = ACTIONS(473),
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
    [sym_member_access] = ACTIONS(473),
    [sym_field_access] = ACTIONS(473),
    [sym_new_class] = ACTIONS(473),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(473),
    [sym_shorthand_function_arg] = ACTIONS(473),
    [anon_sym_CARET] = ACTIONS(475),
    [anon_sym_CARET_COLON] = ACTIONS(473),
    [anon_sym_CARET_DQUOTE] = ACTIONS(473),
    [anon_sym_BQUOTE] = ACTIONS(473),
    [anon_sym_POUND_SQUOTE] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_TILDE_AT] = ACTIONS(473),
    [sym_gensym] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
  },
  [121] = {
    [sym__anything] = STATE(121),
    [sym__literals] = STATE(121),
    [sym__collection_literals] = STATE(121),
    [sym_boolean] = STATE(121),
    [sym_number] = STATE(121),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(121),
    [sym_character] = STATE(121),
    [sym__character] = STATE(34),
    [sym_string] = STATE(121),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(121),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(121),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(121),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(121),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(121),
    [sym_list] = STATE(121),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(121),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(121),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(121),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(121),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(121),
    [sym_anonymous_function] = STATE(121),
    [sym_shorthand_function] = STATE(121),
    [sym_defn] = STATE(121),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(121),
    [sym_var_quote] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splice] = STATE(121),
    [sym_deref] = STATE(121),
    [aux_sym_program_repeat1] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(477),
    [sym_nil] = ACTIONS(479),
    [sym_true] = ACTIONS(482),
    [sym_false] = ACTIONS(482),
    [sym_number_long] = ACTIONS(485),
    [sym_number_double] = ACTIONS(488),
    [sym_number_bigint] = ACTIONS(485),
    [sym_number_ratio] = ACTIONS(488),
    [anon_sym_POUND_POUND] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(500),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_LPARENquote] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_as_DASH_GT] = ACTIONS(518),
    [anon_sym_some_DASH_GT] = ACTIONS(515),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_cond_DASH_GT] = ACTIONS(515),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(518),
    [sym__symbol_chars] = ACTIONS(521),
    [sym_member_access] = ACTIONS(524),
    [sym_field_access] = ACTIONS(524),
    [sym_new_class] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LBRACE] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(548),
    [anon_sym_POUND_] = ACTIONS(551),
    [anon_sym_POUND_LPAREN] = ACTIONS(554),
    [sym_shorthand_function_arg] = ACTIONS(557),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_CARET_COLON] = ACTIONS(563),
    [anon_sym_CARET_DQUOTE] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [anon_sym_POUND_SQUOTE] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_TILDE_AT] = ACTIONS(578),
    [sym_gensym] = ACTIONS(557),
    [anon_sym_AT] = ACTIONS(581),
  },
  [122] = {
    [sym__symbol_chars] = ACTIONS(221),
  },
  [123] = {
    [sym_metadata_shorthand] = STATE(123),
    [aux_sym_metadata_repeat1] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(586),
    [anon_sym_POUND_LBRACE] = ACTIONS(584),
    [anon_sym_CARET] = ACTIONS(588),
    [anon_sym_CARET_COLON] = ACTIONS(591),
    [anon_sym_CARET_DQUOTE] = ACTIONS(594),
  },
  [124] = {
    [sym__hex_char] = ACTIONS(597),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [sym_nil] = ACTIONS(601),
    [sym_true] = ACTIONS(601),
    [sym_false] = ACTIONS(601),
    [sym_number_long] = ACTIONS(601),
    [sym_number_double] = ACTIONS(599),
    [sym_number_bigint] = ACTIONS(601),
    [sym_number_ratio] = ACTIONS(599),
    [anon_sym_POUND_POUND] = ACTIONS(599),
    [anon_sym_BSLASH] = ACTIONS(599),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_POUND_DQUOTE] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [anon_sym_LPARENquote] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_COLON_COLON] = ACTIONS(599),
    [anon_sym_DASH_GT] = ACTIONS(601),
    [anon_sym_DASH_GT_GT] = ACTIONS(599),
    [anon_sym_as_DASH_GT] = ACTIONS(599),
    [anon_sym_some_DASH_GT] = ACTIONS(601),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(599),
    [anon_sym_cond_DASH_GT] = ACTIONS(601),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(599),
    [sym__symbol_chars] = ACTIONS(601),
    [sym_member_access] = ACTIONS(599),
    [sym_field_access] = ACTIONS(599),
    [sym_new_class] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_POUND_LBRACE] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_POUND_BANG] = ACTIONS(599),
    [anon_sym_POUND_] = ACTIONS(599),
    [anon_sym_POUND_LPAREN] = ACTIONS(599),
    [sym_shorthand_function_arg] = ACTIONS(599),
    [anon_sym_CARET] = ACTIONS(601),
    [anon_sym_CARET_COLON] = ACTIONS(599),
    [anon_sym_CARET_DQUOTE] = ACTIONS(599),
    [anon_sym_BQUOTE] = ACTIONS(599),
    [anon_sym_POUND_SQUOTE] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_TILDE_AT] = ACTIONS(599),
    [sym_gensym] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(599),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_nil] = ACTIONS(605),
    [sym_true] = ACTIONS(605),
    [sym_false] = ACTIONS(605),
    [sym_number_long] = ACTIONS(605),
    [sym_number_double] = ACTIONS(603),
    [sym_number_bigint] = ACTIONS(605),
    [sym_number_ratio] = ACTIONS(603),
    [anon_sym_POUND_POUND] = ACTIONS(603),
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
    [sym_member_access] = ACTIONS(603),
    [sym_field_access] = ACTIONS(603),
    [sym_new_class] = ACTIONS(603),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(603),
    [sym_shorthand_function_arg] = ACTIONS(603),
    [anon_sym_CARET] = ACTIONS(605),
    [anon_sym_CARET_COLON] = ACTIONS(603),
    [anon_sym_CARET_DQUOTE] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(603),
    [anon_sym_POUND_SQUOTE] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(605),
    [anon_sym_TILDE_AT] = ACTIONS(603),
    [sym_gensym] = ACTIONS(603),
    [anon_sym_AT] = ACTIONS(603),
  },
  [127] = {
    [aux_sym__string_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(609),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(609),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(612),
    [sym_nil] = ACTIONS(614),
    [sym_true] = ACTIONS(614),
    [sym_false] = ACTIONS(614),
    [sym_number_long] = ACTIONS(614),
    [sym_number_double] = ACTIONS(612),
    [sym_number_bigint] = ACTIONS(614),
    [sym_number_ratio] = ACTIONS(612),
    [anon_sym_POUND_POUND] = ACTIONS(612),
    [anon_sym_BSLASH] = ACTIONS(612),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_POUND_DQUOTE] = ACTIONS(612),
    [anon_sym_SQUOTE] = ACTIONS(612),
    [anon_sym_LPARENquote] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(612),
    [anon_sym_DASH_GT] = ACTIONS(614),
    [anon_sym_DASH_GT_GT] = ACTIONS(612),
    [anon_sym_as_DASH_GT] = ACTIONS(612),
    [anon_sym_some_DASH_GT] = ACTIONS(614),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(612),
    [anon_sym_cond_DASH_GT] = ACTIONS(614),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(612),
    [sym__symbol_chars] = ACTIONS(614),
    [sym_member_access] = ACTIONS(612),
    [sym_field_access] = ACTIONS(612),
    [sym_new_class] = ACTIONS(612),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_RBRACK] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_RBRACE] = ACTIONS(612),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(612),
    [anon_sym_POUND] = ACTIONS(614),
    [anon_sym_POUND_LBRACE] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_POUND_BANG] = ACTIONS(612),
    [anon_sym_POUND_] = ACTIONS(612),
    [anon_sym_POUND_LPAREN] = ACTIONS(612),
    [sym_shorthand_function_arg] = ACTIONS(612),
    [anon_sym_CARET] = ACTIONS(614),
    [anon_sym_CARET_COLON] = ACTIONS(612),
    [anon_sym_CARET_DQUOTE] = ACTIONS(612),
    [anon_sym_BQUOTE] = ACTIONS(612),
    [anon_sym_POUND_SQUOTE] = ACTIONS(612),
    [anon_sym_TILDE] = ACTIONS(614),
    [anon_sym_TILDE_AT] = ACTIONS(612),
    [sym_gensym] = ACTIONS(612),
    [anon_sym_AT] = ACTIONS(612),
  },
  [129] = {
    [aux_sym__regex_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(618),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(618),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [sym_nil] = ACTIONS(623),
    [sym_true] = ACTIONS(623),
    [sym_false] = ACTIONS(623),
    [sym_number_long] = ACTIONS(623),
    [sym_number_double] = ACTIONS(621),
    [sym_number_bigint] = ACTIONS(623),
    [sym_number_ratio] = ACTIONS(621),
    [anon_sym_POUND_POUND] = ACTIONS(621),
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
    [sym_member_access] = ACTIONS(621),
    [sym_field_access] = ACTIONS(621),
    [sym_new_class] = ACTIONS(621),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(621),
    [anon_sym_TILDE] = ACTIONS(623),
    [anon_sym_TILDE_AT] = ACTIONS(621),
    [sym_gensym] = ACTIONS(621),
    [anon_sym_AT] = ACTIONS(621),
  },
  [131] = {
    [sym__keyword_chars] = ACTIONS(625),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(627),
    [sym_nil] = ACTIONS(629),
    [sym_true] = ACTIONS(629),
    [sym_false] = ACTIONS(629),
    [sym_number_long] = ACTIONS(629),
    [sym_number_double] = ACTIONS(627),
    [sym_number_bigint] = ACTIONS(629),
    [sym_number_ratio] = ACTIONS(627),
    [anon_sym_POUND_POUND] = ACTIONS(627),
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
    [sym_member_access] = ACTIONS(627),
    [sym_field_access] = ACTIONS(627),
    [sym_new_class] = ACTIONS(627),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(627),
    [sym_shorthand_function_arg] = ACTIONS(627),
    [anon_sym_CARET] = ACTIONS(629),
    [anon_sym_CARET_COLON] = ACTIONS(627),
    [anon_sym_CARET_DQUOTE] = ACTIONS(627),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [anon_sym_POUND_SQUOTE] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(629),
    [anon_sym_TILDE_AT] = ACTIONS(627),
    [sym_gensym] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(631),
    [sym_nil] = ACTIONS(633),
    [sym_true] = ACTIONS(633),
    [sym_false] = ACTIONS(633),
    [sym_number_long] = ACTIONS(633),
    [sym_number_double] = ACTIONS(631),
    [sym_number_bigint] = ACTIONS(633),
    [sym_number_ratio] = ACTIONS(631),
    [anon_sym_POUND_POUND] = ACTIONS(631),
    [anon_sym_BSLASH] = ACTIONS(631),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [anon_sym_POUND_DQUOTE] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_LPARENquote] = ACTIONS(631),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(633),
    [anon_sym_COLON_COLON] = ACTIONS(631),
    [anon_sym_DASH_GT] = ACTIONS(633),
    [anon_sym_DASH_GT_GT] = ACTIONS(631),
    [anon_sym_as_DASH_GT] = ACTIONS(631),
    [anon_sym_some_DASH_GT] = ACTIONS(633),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(631),
    [anon_sym_cond_DASH_GT] = ACTIONS(633),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(631),
    [sym__symbol_chars] = ACTIONS(633),
    [sym_member_access] = ACTIONS(631),
    [sym_field_access] = ACTIONS(631),
    [sym_new_class] = ACTIONS(631),
    [anon_sym_LPAREN] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(631),
    [anon_sym_POUND] = ACTIONS(633),
    [anon_sym_POUND_LBRACE] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(631),
    [anon_sym_POUND_BANG] = ACTIONS(631),
    [anon_sym_POUND_] = ACTIONS(631),
    [anon_sym_POUND_LPAREN] = ACTIONS(631),
    [sym_shorthand_function_arg] = ACTIONS(631),
    [anon_sym_CARET] = ACTIONS(633),
    [anon_sym_CARET_COLON] = ACTIONS(631),
    [anon_sym_CARET_DQUOTE] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(631),
    [anon_sym_POUND_SQUOTE] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(633),
    [anon_sym_TILDE_AT] = ACTIONS(631),
    [sym_gensym] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
  },
  [134] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(149),
    [sym_character] = STATE(149),
    [sym__character] = STATE(34),
    [sym_string] = STATE(149),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(149),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(75),
  },
  [135] = {
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(121),
  },
  [136] = {
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(125),
  },
  [137] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__single_arity_fn] = STATE(170),
    [sym_params] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [138] = {
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(639),
    [anon_sym_POUND] = ACTIONS(641),
  },
  [139] = {
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(275),
  },
  [140] = {
    [sym_nil] = ACTIONS(643),
    [sym_true] = ACTIONS(643),
    [sym_false] = ACTIONS(643),
    [sym_number_long] = ACTIONS(643),
    [sym_number_double] = ACTIONS(645),
    [sym_number_bigint] = ACTIONS(643),
    [sym_number_ratio] = ACTIONS(645),
    [anon_sym_POUND_POUND] = ACTIONS(645),
    [anon_sym_BSLASH] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [anon_sym_POUND_DQUOTE] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [anon_sym_LPARENquote] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(643),
    [anon_sym_COLON_COLON] = ACTIONS(645),
    [anon_sym_DASH_GT] = ACTIONS(643),
    [anon_sym_DASH_GT_GT] = ACTIONS(645),
    [anon_sym_as_DASH_GT] = ACTIONS(645),
    [anon_sym_some_DASH_GT] = ACTIONS(643),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(645),
    [anon_sym_cond_DASH_GT] = ACTIONS(643),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(645),
    [sym__symbol_chars] = ACTIONS(643),
    [sym_member_access] = ACTIONS(645),
    [sym_field_access] = ACTIONS(645),
    [sym_new_class] = ACTIONS(645),
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_LBRACE] = ACTIONS(645),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(645),
    [anon_sym_POUND] = ACTIONS(643),
    [anon_sym_POUND_LBRACE] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_POUND_BANG] = ACTIONS(645),
    [anon_sym_POUND_] = ACTIONS(645),
    [anon_sym_POUND_LPAREN] = ACTIONS(645),
    [sym_shorthand_function_arg] = ACTIONS(645),
    [anon_sym_CARET] = ACTIONS(643),
    [anon_sym_CARET_COLON] = ACTIONS(645),
    [anon_sym_CARET_DQUOTE] = ACTIONS(645),
    [anon_sym_BQUOTE] = ACTIONS(645),
    [anon_sym_POUND_SQUOTE] = ACTIONS(645),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_TILDE_AT] = ACTIONS(645),
    [sym_gensym] = ACTIONS(645),
    [anon_sym_AT] = ACTIONS(645),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(647),
  },
  [142] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__after_the_fn_name] = STATE(172),
    [sym__single_arity_fn] = STATE(172),
    [sym__multi_arity_fn] = STATE(172),
    [sym_params] = STATE(143),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [143] = {
    [sym__anything] = STATE(174),
    [sym__literals] = STATE(174),
    [sym__collection_literals] = STATE(174),
    [sym_boolean] = STATE(174),
    [sym_number] = STATE(174),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(174),
    [sym_character] = STATE(174),
    [sym__character] = STATE(34),
    [sym_string] = STATE(174),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(174),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(174),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(174),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(174),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(174),
    [sym_list] = STATE(174),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(174),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(174),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(174),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(174),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(174),
    [sym_anonymous_function] = STATE(174),
    [sym_function_body] = STATE(173),
    [sym_shorthand_function] = STATE(174),
    [sym_defn] = STATE(174),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(174),
    [sym_var_quote] = STATE(174),
    [sym_unquote] = STATE(174),
    [sym_unquote_splice] = STATE(174),
    [sym_deref] = STATE(174),
    [aux_sym_program_repeat1] = STATE(174),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(649),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(653),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(653),
    [anon_sym_AT] = ACTIONS(75),
  },
  [144] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(175),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_LPAREN] = ACTIONS(373),
  },
  [145] = {
    [sym_string] = STATE(177),
    [sym__string] = STATE(178),
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(179),
    [sym__hash_map] = STATE(112),
    [sym_namespace_map] = STATE(112),
    [sym__after_the_fn_name] = STATE(180),
    [sym__single_arity_fn] = STATE(180),
    [sym__multi_arity_fn] = STATE(180),
    [sym_params] = STATE(143),
    [sym_docstring] = STATE(181),
    [sym_attr_map] = STATE(182),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [146] = {
    [sym_symbol] = STATE(138),
    [sym__symbol] = STATE(139),
    [sym_threading_macro] = STATE(139),
    [sym_qualified_symbol] = STATE(139),
    [sym_function_name] = STATE(183),
    [anon_sym_DASH_GT] = ACTIONS(367),
    [anon_sym_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_as_DASH_GT] = ACTIONS(369),
    [anon_sym_some_DASH_GT] = ACTIONS(367),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(369),
    [anon_sym_cond_DASH_GT] = ACTIONS(367),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(369),
    [sym__symbol_chars] = ACTIONS(371),
  },
  [147] = {
    [sym_metadata_shorthand] = STATE(184),
    [aux_sym_metadata_repeat1] = STATE(184),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_DASH_GT_GT] = ACTIONS(299),
    [anon_sym_as_DASH_GT] = ACTIONS(299),
    [anon_sym_some_DASH_GT] = ACTIONS(297),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(299),
    [anon_sym_cond_DASH_GT] = ACTIONS(297),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(299),
    [sym__symbol_chars] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(659),
    [sym_nil] = ACTIONS(661),
    [sym_true] = ACTIONS(661),
    [sym_false] = ACTIONS(661),
    [sym_number_long] = ACTIONS(661),
    [sym_number_double] = ACTIONS(659),
    [sym_number_bigint] = ACTIONS(661),
    [sym_number_ratio] = ACTIONS(659),
    [anon_sym_POUND_POUND] = ACTIONS(659),
    [anon_sym_BSLASH] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(659),
    [anon_sym_POUND_DQUOTE] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(659),
    [anon_sym_LPARENquote] = ACTIONS(659),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_COLON] = ACTIONS(661),
    [anon_sym_COLON_COLON] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [anon_sym_DASH_GT_GT] = ACTIONS(659),
    [anon_sym_as_DASH_GT] = ACTIONS(659),
    [anon_sym_some_DASH_GT] = ACTIONS(661),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(659),
    [anon_sym_cond_DASH_GT] = ACTIONS(661),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(659),
    [sym__symbol_chars] = ACTIONS(661),
    [sym_member_access] = ACTIONS(659),
    [sym_field_access] = ACTIONS(659),
    [sym_new_class] = ACTIONS(659),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(659),
    [anon_sym_POUND] = ACTIONS(661),
    [anon_sym_POUND_LBRACE] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_POUND_BANG] = ACTIONS(659),
    [anon_sym_POUND_] = ACTIONS(659),
    [anon_sym_POUND_LPAREN] = ACTIONS(659),
    [sym_shorthand_function_arg] = ACTIONS(659),
    [anon_sym_CARET] = ACTIONS(661),
    [anon_sym_CARET_COLON] = ACTIONS(659),
    [anon_sym_CARET_DQUOTE] = ACTIONS(659),
    [anon_sym_BQUOTE] = ACTIONS(659),
    [anon_sym_POUND_SQUOTE] = ACTIONS(659),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_TILDE_AT] = ACTIONS(659),
    [sym_gensym] = ACTIONS(659),
    [anon_sym_AT] = ACTIONS(659),
  },
  [149] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(149),
    [sym_character] = STATE(149),
    [sym__character] = STATE(34),
    [sym_string] = STATE(149),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(149),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(663),
    [sym_true] = ACTIONS(482),
    [sym_false] = ACTIONS(482),
    [sym_number_long] = ACTIONS(485),
    [sym_number_double] = ACTIONS(488),
    [sym_number_bigint] = ACTIONS(485),
    [sym_number_ratio] = ACTIONS(488),
    [anon_sym_POUND_POUND] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(500),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [anon_sym_LPARENquote] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_as_DASH_GT] = ACTIONS(518),
    [anon_sym_some_DASH_GT] = ACTIONS(515),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_cond_DASH_GT] = ACTIONS(515),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(518),
    [sym__symbol_chars] = ACTIONS(521),
    [sym_member_access] = ACTIONS(524),
    [sym_field_access] = ACTIONS(524),
    [sym_new_class] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LBRACE] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(548),
    [anon_sym_POUND_] = ACTIONS(669),
    [anon_sym_POUND_LPAREN] = ACTIONS(554),
    [sym_shorthand_function_arg] = ACTIONS(672),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_CARET_COLON] = ACTIONS(563),
    [anon_sym_CARET_DQUOTE] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [anon_sym_POUND_SQUOTE] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(678),
    [anon_sym_TILDE_AT] = ACTIONS(681),
    [sym_gensym] = ACTIONS(672),
    [anon_sym_AT] = ACTIONS(581),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(684),
    [sym_nil] = ACTIONS(686),
    [sym_true] = ACTIONS(686),
    [sym_false] = ACTIONS(686),
    [sym_number_long] = ACTIONS(686),
    [sym_number_double] = ACTIONS(684),
    [sym_number_bigint] = ACTIONS(686),
    [sym_number_ratio] = ACTIONS(684),
    [anon_sym_POUND_POUND] = ACTIONS(684),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(686),
    [anon_sym_TILDE_AT] = ACTIONS(684),
    [sym_gensym] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(684),
  },
  [151] = {
    [sym__anything] = STATE(151),
    [sym__literals] = STATE(151),
    [sym__collection_literals] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_number] = STATE(151),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(151),
    [sym_character] = STATE(151),
    [sym__character] = STATE(34),
    [sym_string] = STATE(151),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(151),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(151),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(151),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(151),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(151),
    [sym_list] = STATE(151),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(151),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(151),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(151),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(151),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(151),
    [sym_anonymous_function] = STATE(151),
    [sym_shorthand_function] = STATE(151),
    [sym_defn] = STATE(151),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(151),
    [sym_var_quote] = STATE(151),
    [sym_unquote] = STATE(151),
    [sym_unquote_splice] = STATE(151),
    [sym_deref] = STATE(151),
    [aux_sym_program_repeat1] = STATE(151),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(688),
    [sym_true] = ACTIONS(482),
    [sym_false] = ACTIONS(482),
    [sym_number_long] = ACTIONS(485),
    [sym_number_double] = ACTIONS(488),
    [sym_number_bigint] = ACTIONS(485),
    [sym_number_ratio] = ACTIONS(488),
    [anon_sym_POUND_POUND] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(500),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [anon_sym_LPARENquote] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_as_DASH_GT] = ACTIONS(518),
    [anon_sym_some_DASH_GT] = ACTIONS(515),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_cond_DASH_GT] = ACTIONS(515),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(518),
    [sym__symbol_chars] = ACTIONS(521),
    [sym_member_access] = ACTIONS(524),
    [sym_field_access] = ACTIONS(524),
    [sym_new_class] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LBRACE] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(548),
    [anon_sym_POUND_] = ACTIONS(694),
    [anon_sym_POUND_LPAREN] = ACTIONS(554),
    [sym_shorthand_function_arg] = ACTIONS(697),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_CARET_COLON] = ACTIONS(563),
    [anon_sym_CARET_DQUOTE] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(700),
    [anon_sym_POUND_SQUOTE] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(703),
    [anon_sym_TILDE_AT] = ACTIONS(706),
    [sym_gensym] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(581),
  },
  [152] = {
    [sym_nil] = ACTIONS(709),
    [sym_true] = ACTIONS(709),
    [sym_false] = ACTIONS(709),
    [sym_number_long] = ACTIONS(709),
    [sym_number_double] = ACTIONS(711),
    [sym_number_bigint] = ACTIONS(709),
    [sym_number_ratio] = ACTIONS(711),
    [anon_sym_POUND_POUND] = ACTIONS(711),
    [anon_sym_BSLASH] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [anon_sym_POUND_DQUOTE] = ACTIONS(711),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [anon_sym_LPARENquote] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym_COLON_COLON] = ACTIONS(711),
    [anon_sym_DASH_GT] = ACTIONS(709),
    [anon_sym_DASH_GT_GT] = ACTIONS(711),
    [anon_sym_as_DASH_GT] = ACTIONS(711),
    [anon_sym_some_DASH_GT] = ACTIONS(709),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(711),
    [anon_sym_cond_DASH_GT] = ACTIONS(709),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(711),
    [sym__symbol_chars] = ACTIONS(709),
    [sym_member_access] = ACTIONS(711),
    [sym_field_access] = ACTIONS(711),
    [sym_new_class] = ACTIONS(711),
    [anon_sym_LPAREN] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(711),
    [anon_sym_LBRACE] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(711),
    [anon_sym_POUND] = ACTIONS(709),
    [anon_sym_POUND_LBRACE] = ACTIONS(711),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_POUND_BANG] = ACTIONS(711),
    [anon_sym_POUND_] = ACTIONS(711),
    [anon_sym_POUND_LPAREN] = ACTIONS(711),
    [sym_shorthand_function_arg] = ACTIONS(711),
    [anon_sym_CARET] = ACTIONS(709),
    [anon_sym_CARET_COLON] = ACTIONS(711),
    [anon_sym_CARET_DQUOTE] = ACTIONS(711),
    [anon_sym_BQUOTE] = ACTIONS(711),
    [anon_sym_POUND_SQUOTE] = ACTIONS(711),
    [anon_sym_TILDE] = ACTIONS(709),
    [anon_sym_TILDE_AT] = ACTIONS(711),
    [sym_gensym] = ACTIONS(711),
    [anon_sym_AT] = ACTIONS(711),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [sym_nil] = ACTIONS(715),
    [sym_true] = ACTIONS(715),
    [sym_false] = ACTIONS(715),
    [sym_number_long] = ACTIONS(715),
    [sym_number_double] = ACTIONS(713),
    [sym_number_bigint] = ACTIONS(715),
    [sym_number_ratio] = ACTIONS(713),
    [anon_sym_POUND_POUND] = ACTIONS(713),
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
    [sym_member_access] = ACTIONS(713),
    [sym_field_access] = ACTIONS(713),
    [sym_new_class] = ACTIONS(713),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(713),
    [sym_shorthand_function_arg] = ACTIONS(713),
    [anon_sym_CARET] = ACTIONS(715),
    [anon_sym_CARET_COLON] = ACTIONS(713),
    [anon_sym_CARET_DQUOTE] = ACTIONS(713),
    [anon_sym_BQUOTE] = ACTIONS(713),
    [anon_sym_POUND_SQUOTE] = ACTIONS(713),
    [anon_sym_TILDE] = ACTIONS(715),
    [anon_sym_TILDE_AT] = ACTIONS(713),
    [sym_gensym] = ACTIONS(713),
    [anon_sym_AT] = ACTIONS(713),
  },
  [154] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(717),
    [sym_true] = ACTIONS(720),
    [sym_false] = ACTIONS(720),
    [sym_number_long] = ACTIONS(723),
    [sym_number_double] = ACTIONS(726),
    [sym_number_bigint] = ACTIONS(723),
    [sym_number_ratio] = ACTIONS(726),
    [anon_sym_POUND_POUND] = ACTIONS(729),
    [anon_sym_BSLASH] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [anon_sym_POUND_DQUOTE] = ACTIONS(738),
    [anon_sym_SQUOTE] = ACTIONS(741),
    [anon_sym_LPARENquote] = ACTIONS(744),
    [anon_sym_COLON] = ACTIONS(747),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [anon_sym_DASH_GT] = ACTIONS(753),
    [anon_sym_DASH_GT_GT] = ACTIONS(756),
    [anon_sym_as_DASH_GT] = ACTIONS(756),
    [anon_sym_some_DASH_GT] = ACTIONS(753),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(756),
    [anon_sym_cond_DASH_GT] = ACTIONS(753),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(756),
    [sym__symbol_chars] = ACTIONS(759),
    [sym_member_access] = ACTIONS(762),
    [sym_field_access] = ACTIONS(762),
    [sym_new_class] = ACTIONS(762),
    [anon_sym_LPAREN] = ACTIONS(765),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(776),
    [anon_sym_POUND] = ACTIONS(779),
    [anon_sym_POUND_LBRACE] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(785),
    [anon_sym_POUND_BANG] = ACTIONS(788),
    [anon_sym_POUND_] = ACTIONS(791),
    [anon_sym_POUND_LPAREN] = ACTIONS(794),
    [sym_shorthand_function_arg] = ACTIONS(797),
    [anon_sym_CARET] = ACTIONS(800),
    [anon_sym_CARET_COLON] = ACTIONS(803),
    [anon_sym_CARET_DQUOTE] = ACTIONS(806),
    [anon_sym_BQUOTE] = ACTIONS(809),
    [anon_sym_POUND_SQUOTE] = ACTIONS(812),
    [anon_sym_TILDE] = ACTIONS(815),
    [anon_sym_TILDE_AT] = ACTIONS(818),
    [sym_gensym] = ACTIONS(797),
    [anon_sym_AT] = ACTIONS(821),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(824),
    [sym_nil] = ACTIONS(826),
    [sym_true] = ACTIONS(826),
    [sym_false] = ACTIONS(826),
    [sym_number_long] = ACTIONS(826),
    [sym_number_double] = ACTIONS(824),
    [sym_number_bigint] = ACTIONS(826),
    [sym_number_ratio] = ACTIONS(824),
    [anon_sym_POUND_POUND] = ACTIONS(824),
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
    [sym_member_access] = ACTIONS(824),
    [sym_field_access] = ACTIONS(824),
    [sym_new_class] = ACTIONS(824),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(824),
    [sym_shorthand_function_arg] = ACTIONS(824),
    [anon_sym_CARET] = ACTIONS(826),
    [anon_sym_CARET_COLON] = ACTIONS(824),
    [anon_sym_CARET_DQUOTE] = ACTIONS(824),
    [anon_sym_BQUOTE] = ACTIONS(824),
    [anon_sym_POUND_SQUOTE] = ACTIONS(824),
    [anon_sym_TILDE] = ACTIONS(826),
    [anon_sym_TILDE_AT] = ACTIONS(824),
    [sym_gensym] = ACTIONS(824),
    [anon_sym_AT] = ACTIONS(824),
  },
  [156] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(186),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(186),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(830),
    [sym_nil] = ACTIONS(832),
    [sym_true] = ACTIONS(832),
    [sym_false] = ACTIONS(832),
    [sym_number_long] = ACTIONS(832),
    [sym_number_double] = ACTIONS(830),
    [sym_number_bigint] = ACTIONS(832),
    [sym_number_ratio] = ACTIONS(830),
    [anon_sym_POUND_POUND] = ACTIONS(830),
    [anon_sym_BSLASH] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(830),
    [anon_sym_POUND_DQUOTE] = ACTIONS(830),
    [anon_sym_SQUOTE] = ACTIONS(830),
    [anon_sym_LPARENquote] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [anon_sym_COLON] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(830),
    [anon_sym_DASH_GT] = ACTIONS(832),
    [anon_sym_DASH_GT_GT] = ACTIONS(830),
    [anon_sym_as_DASH_GT] = ACTIONS(830),
    [anon_sym_some_DASH_GT] = ACTIONS(832),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(830),
    [anon_sym_cond_DASH_GT] = ACTIONS(832),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(830),
    [sym__symbol_chars] = ACTIONS(832),
    [sym_member_access] = ACTIONS(830),
    [sym_field_access] = ACTIONS(830),
    [sym_new_class] = ACTIONS(830),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(830),
    [sym_shorthand_function_arg] = ACTIONS(830),
    [anon_sym_CARET] = ACTIONS(832),
    [anon_sym_CARET_COLON] = ACTIONS(830),
    [anon_sym_CARET_DQUOTE] = ACTIONS(830),
    [anon_sym_BQUOTE] = ACTIONS(830),
    [anon_sym_POUND_SQUOTE] = ACTIONS(830),
    [anon_sym_TILDE] = ACTIONS(832),
    [anon_sym_TILDE_AT] = ACTIONS(830),
    [sym_gensym] = ACTIONS(830),
    [anon_sym_AT] = ACTIONS(830),
  },
  [158] = {
    [sym__anything] = STATE(158),
    [sym__literals] = STATE(158),
    [sym__collection_literals] = STATE(158),
    [sym_boolean] = STATE(158),
    [sym_number] = STATE(158),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(158),
    [sym_character] = STATE(158),
    [sym__character] = STATE(34),
    [sym_string] = STATE(158),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(158),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(158),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(158),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(158),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(158),
    [sym_list] = STATE(158),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(158),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(158),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(158),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(158),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(158),
    [sym_anonymous_function] = STATE(158),
    [sym_shorthand_function] = STATE(158),
    [sym_defn] = STATE(158),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(158),
    [sym_var_quote] = STATE(158),
    [sym_unquote] = STATE(158),
    [sym_unquote_splice] = STATE(158),
    [sym_deref] = STATE(158),
    [aux_sym_program_repeat1] = STATE(158),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(834),
    [sym_true] = ACTIONS(482),
    [sym_false] = ACTIONS(482),
    [sym_number_long] = ACTIONS(485),
    [sym_number_double] = ACTIONS(488),
    [sym_number_bigint] = ACTIONS(485),
    [sym_number_ratio] = ACTIONS(488),
    [anon_sym_POUND_POUND] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(500),
    [anon_sym_SQUOTE] = ACTIONS(837),
    [anon_sym_LPARENquote] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_as_DASH_GT] = ACTIONS(518),
    [anon_sym_some_DASH_GT] = ACTIONS(515),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(518),
    [anon_sym_cond_DASH_GT] = ACTIONS(515),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(518),
    [sym__symbol_chars] = ACTIONS(521),
    [sym_member_access] = ACTIONS(524),
    [sym_field_access] = ACTIONS(524),
    [sym_new_class] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(539),
    [anon_sym_POUND_LBRACE] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_POUND_BANG] = ACTIONS(548),
    [anon_sym_POUND_] = ACTIONS(840),
    [anon_sym_POUND_LPAREN] = ACTIONS(554),
    [sym_shorthand_function_arg] = ACTIONS(843),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_CARET_COLON] = ACTIONS(563),
    [anon_sym_CARET_DQUOTE] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(846),
    [anon_sym_POUND_SQUOTE] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(849),
    [anon_sym_TILDE_AT] = ACTIONS(852),
    [sym_gensym] = ACTIONS(843),
    [anon_sym_AT] = ACTIONS(581),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [sym_nil] = ACTIONS(857),
    [sym_true] = ACTIONS(857),
    [sym_false] = ACTIONS(857),
    [sym_number_long] = ACTIONS(857),
    [sym_number_double] = ACTIONS(855),
    [sym_number_bigint] = ACTIONS(857),
    [sym_number_ratio] = ACTIONS(855),
    [anon_sym_POUND_POUND] = ACTIONS(855),
    [anon_sym_BSLASH] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_POUND_DQUOTE] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_LPARENquote] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COLON] = ACTIONS(857),
    [anon_sym_COLON_COLON] = ACTIONS(855),
    [anon_sym_DASH_GT] = ACTIONS(857),
    [anon_sym_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_as_DASH_GT] = ACTIONS(855),
    [anon_sym_some_DASH_GT] = ACTIONS(857),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(855),
    [anon_sym_cond_DASH_GT] = ACTIONS(857),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(855),
    [sym__symbol_chars] = ACTIONS(857),
    [sym_member_access] = ACTIONS(855),
    [sym_field_access] = ACTIONS(855),
    [sym_new_class] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(857),
    [anon_sym_POUND_LBRACE] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_POUND_BANG] = ACTIONS(855),
    [anon_sym_POUND_] = ACTIONS(855),
    [anon_sym_POUND_LPAREN] = ACTIONS(855),
    [sym_shorthand_function_arg] = ACTIONS(855),
    [anon_sym_CARET] = ACTIONS(857),
    [anon_sym_CARET_COLON] = ACTIONS(855),
    [anon_sym_CARET_DQUOTE] = ACTIONS(855),
    [anon_sym_BQUOTE] = ACTIONS(855),
    [anon_sym_POUND_SQUOTE] = ACTIONS(855),
    [anon_sym_TILDE] = ACTIONS(857),
    [anon_sym_TILDE_AT] = ACTIONS(855),
    [sym_gensym] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(855),
  },
  [160] = {
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
  [161] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [162] = {
    [anon_sym_DASH_GT] = ACTIONS(403),
    [anon_sym_DASH_GT_GT] = ACTIONS(401),
    [anon_sym_as_DASH_GT] = ACTIONS(401),
    [anon_sym_some_DASH_GT] = ACTIONS(403),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(401),
    [anon_sym_cond_DASH_GT] = ACTIONS(403),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(401),
    [sym__symbol_chars] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [anon_sym_POUND_LBRACE] = ACTIONS(401),
  },
  [163] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [164] = {
    [anon_sym_LBRACE] = ACTIONS(863),
  },
  [165] = {
    [anon_sym_DASH_GT] = ACTIONS(865),
    [anon_sym_DASH_GT_GT] = ACTIONS(867),
    [anon_sym_as_DASH_GT] = ACTIONS(867),
    [anon_sym_some_DASH_GT] = ACTIONS(865),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(867),
    [anon_sym_cond_DASH_GT] = ACTIONS(865),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(867),
    [sym__symbol_chars] = ACTIONS(865),
    [anon_sym_LPAREN] = ACTIONS(867),
    [anon_sym_LBRACK] = ACTIONS(867),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(867),
    [anon_sym_POUND] = ACTIONS(865),
    [anon_sym_POUND_LBRACE] = ACTIONS(867),
    [anon_sym_CARET] = ACTIONS(865),
    [anon_sym_CARET_COLON] = ACTIONS(867),
    [anon_sym_CARET_DQUOTE] = ACTIONS(867),
  },
  [166] = {
    [sym__hex_char] = ACTIONS(869),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(871),
    [sym_nil] = ACTIONS(873),
    [sym_true] = ACTIONS(873),
    [sym_false] = ACTIONS(873),
    [sym_number_long] = ACTIONS(873),
    [sym_number_double] = ACTIONS(871),
    [sym_number_bigint] = ACTIONS(873),
    [sym_number_ratio] = ACTIONS(871),
    [anon_sym_POUND_POUND] = ACTIONS(871),
    [anon_sym_BSLASH] = ACTIONS(871),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_POUND_DQUOTE] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(871),
    [anon_sym_LPARENquote] = ACTIONS(871),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_COLON_COLON] = ACTIONS(871),
    [anon_sym_DASH_GT] = ACTIONS(873),
    [anon_sym_DASH_GT_GT] = ACTIONS(871),
    [anon_sym_as_DASH_GT] = ACTIONS(871),
    [anon_sym_some_DASH_GT] = ACTIONS(873),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(871),
    [anon_sym_cond_DASH_GT] = ACTIONS(873),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(871),
    [sym__symbol_chars] = ACTIONS(873),
    [sym_member_access] = ACTIONS(871),
    [sym_field_access] = ACTIONS(871),
    [sym_new_class] = ACTIONS(871),
    [anon_sym_LPAREN] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(871),
    [anon_sym_RBRACK] = ACTIONS(871),
    [anon_sym_LBRACE] = ACTIONS(871),
    [anon_sym_RBRACE] = ACTIONS(871),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(871),
    [anon_sym_POUND] = ACTIONS(873),
    [anon_sym_POUND_LBRACE] = ACTIONS(871),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_POUND_BANG] = ACTIONS(871),
    [anon_sym_POUND_] = ACTIONS(871),
    [anon_sym_POUND_LPAREN] = ACTIONS(871),
    [sym_shorthand_function_arg] = ACTIONS(871),
    [anon_sym_CARET] = ACTIONS(873),
    [anon_sym_CARET_COLON] = ACTIONS(871),
    [anon_sym_CARET_DQUOTE] = ACTIONS(871),
    [anon_sym_BQUOTE] = ACTIONS(871),
    [anon_sym_POUND_SQUOTE] = ACTIONS(871),
    [anon_sym_TILDE] = ACTIONS(873),
    [anon_sym_TILDE_AT] = ACTIONS(871),
    [sym_gensym] = ACTIONS(871),
    [anon_sym_AT] = ACTIONS(871),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(875),
    [sym_nil] = ACTIONS(877),
    [sym_true] = ACTIONS(877),
    [sym_false] = ACTIONS(877),
    [sym_number_long] = ACTIONS(877),
    [sym_number_double] = ACTIONS(875),
    [sym_number_bigint] = ACTIONS(877),
    [sym_number_ratio] = ACTIONS(875),
    [anon_sym_POUND_POUND] = ACTIONS(875),
    [anon_sym_BSLASH] = ACTIONS(875),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_POUND_DQUOTE] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [anon_sym_LPARENquote] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_COLON] = ACTIONS(877),
    [anon_sym_COLON_COLON] = ACTIONS(875),
    [anon_sym_DASH_GT] = ACTIONS(877),
    [anon_sym_DASH_GT_GT] = ACTIONS(875),
    [anon_sym_as_DASH_GT] = ACTIONS(875),
    [anon_sym_some_DASH_GT] = ACTIONS(877),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(875),
    [anon_sym_cond_DASH_GT] = ACTIONS(877),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(875),
    [sym__symbol_chars] = ACTIONS(877),
    [sym_member_access] = ACTIONS(875),
    [sym_field_access] = ACTIONS(875),
    [sym_new_class] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_RBRACK] = ACTIONS(875),
    [anon_sym_LBRACE] = ACTIONS(875),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(875),
    [anon_sym_POUND] = ACTIONS(877),
    [anon_sym_POUND_LBRACE] = ACTIONS(875),
    [anon_sym_SEMI] = ACTIONS(875),
    [anon_sym_POUND_BANG] = ACTIONS(875),
    [anon_sym_POUND_] = ACTIONS(875),
    [anon_sym_POUND_LPAREN] = ACTIONS(875),
    [sym_shorthand_function_arg] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(877),
    [anon_sym_CARET_COLON] = ACTIONS(875),
    [anon_sym_CARET_DQUOTE] = ACTIONS(875),
    [anon_sym_BQUOTE] = ACTIONS(875),
    [anon_sym_POUND_SQUOTE] = ACTIONS(875),
    [anon_sym_TILDE] = ACTIONS(877),
    [anon_sym_TILDE_AT] = ACTIONS(875),
    [sym_gensym] = ACTIONS(875),
    [anon_sym_AT] = ACTIONS(875),
  },
  [169] = {
    [sym__symbol_chars] = ACTIONS(879),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(883),
    [sym_nil] = ACTIONS(885),
    [sym_true] = ACTIONS(885),
    [sym_false] = ACTIONS(885),
    [sym_number_long] = ACTIONS(885),
    [sym_number_double] = ACTIONS(883),
    [sym_number_bigint] = ACTIONS(885),
    [sym_number_ratio] = ACTIONS(883),
    [anon_sym_POUND_POUND] = ACTIONS(883),
    [anon_sym_BSLASH] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [anon_sym_POUND_DQUOTE] = ACTIONS(883),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [anon_sym_LPARENquote] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [anon_sym_COLON] = ACTIONS(885),
    [anon_sym_COLON_COLON] = ACTIONS(883),
    [anon_sym_DASH_GT] = ACTIONS(885),
    [anon_sym_DASH_GT_GT] = ACTIONS(883),
    [anon_sym_as_DASH_GT] = ACTIONS(883),
    [anon_sym_some_DASH_GT] = ACTIONS(885),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(883),
    [anon_sym_cond_DASH_GT] = ACTIONS(885),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(883),
    [sym__symbol_chars] = ACTIONS(885),
    [sym_member_access] = ACTIONS(883),
    [sym_field_access] = ACTIONS(883),
    [sym_new_class] = ACTIONS(883),
    [anon_sym_LPAREN] = ACTIONS(885),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [anon_sym_LBRACE] = ACTIONS(883),
    [anon_sym_RBRACE] = ACTIONS(883),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(883),
    [anon_sym_POUND] = ACTIONS(885),
    [anon_sym_POUND_LBRACE] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(883),
    [anon_sym_POUND_BANG] = ACTIONS(883),
    [anon_sym_POUND_] = ACTIONS(883),
    [anon_sym_POUND_LPAREN] = ACTIONS(883),
    [sym_shorthand_function_arg] = ACTIONS(883),
    [anon_sym_CARET] = ACTIONS(885),
    [anon_sym_CARET_COLON] = ACTIONS(883),
    [anon_sym_CARET_DQUOTE] = ACTIONS(883),
    [anon_sym_BQUOTE] = ACTIONS(883),
    [anon_sym_POUND_SQUOTE] = ACTIONS(883),
    [anon_sym_TILDE] = ACTIONS(885),
    [anon_sym_TILDE_AT] = ACTIONS(883),
    [sym_gensym] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(883),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(887),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(889),
  },
  [174] = {
    [sym__anything] = STATE(149),
    [sym__literals] = STATE(149),
    [sym__collection_literals] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_number] = STATE(149),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(149),
    [sym_character] = STATE(149),
    [sym__character] = STATE(34),
    [sym_string] = STATE(149),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(149),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(149),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(149),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(149),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(149),
    [sym_list] = STATE(149),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(149),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(149),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym_set] = STATE(149),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(149),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(149),
    [sym_anonymous_function] = STATE(149),
    [sym_shorthand_function] = STATE(149),
    [sym_defn] = STATE(149),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(149),
    [sym_var_quote] = STATE(149),
    [sym_unquote] = STATE(149),
    [sym_unquote_splice] = STATE(149),
    [sym_deref] = STATE(149),
    [aux_sym_program_repeat1] = STATE(149),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(375),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(139),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_TILDE_AT] = ACTIONS(153),
    [sym_gensym] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(75),
  },
  [175] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(175),
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_LPAREN] = ACTIONS(895),
  },
  [176] = {
    [aux_sym__string_repeat1] = STATE(195),
    [anon_sym_DQUOTE] = ACTIONS(898),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(900),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_LBRACE] = ACTIONS(902),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(902),
    [anon_sym_POUND] = ACTIONS(904),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(259),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(908),
  },
  [181] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(179),
    [sym__hash_map] = STATE(112),
    [sym_namespace_map] = STATE(112),
    [sym__after_the_fn_name] = STATE(197),
    [sym__single_arity_fn] = STATE(197),
    [sym__multi_arity_fn] = STATE(197),
    [sym_params] = STATE(143),
    [sym_attr_map] = STATE(198),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [182] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__after_the_fn_name] = STATE(197),
    [sym__single_arity_fn] = STATE(197),
    [sym__multi_arity_fn] = STATE(197),
    [sym_params] = STATE(143),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [183] = {
    [sym_string] = STATE(177),
    [sym__string] = STATE(178),
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(179),
    [sym__hash_map] = STATE(112),
    [sym_namespace_map] = STATE(112),
    [sym__after_the_fn_name] = STATE(197),
    [sym__single_arity_fn] = STATE(197),
    [sym__multi_arity_fn] = STATE(197),
    [sym_params] = STATE(143),
    [sym_docstring] = STATE(199),
    [sym_attr_map] = STATE(198),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [184] = {
    [sym_metadata_shorthand] = STATE(184),
    [aux_sym_metadata_repeat1] = STATE(184),
    [anon_sym_DASH_GT] = ACTIONS(586),
    [anon_sym_DASH_GT_GT] = ACTIONS(584),
    [anon_sym_as_DASH_GT] = ACTIONS(584),
    [anon_sym_some_DASH_GT] = ACTIONS(586),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(584),
    [anon_sym_cond_DASH_GT] = ACTIONS(586),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(584),
    [sym__symbol_chars] = ACTIONS(586),
    [anon_sym_CARET] = ACTIONS(588),
    [anon_sym_CARET_COLON] = ACTIONS(591),
    [anon_sym_CARET_DQUOTE] = ACTIONS(594),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(910),
    [sym_nil] = ACTIONS(912),
    [sym_true] = ACTIONS(912),
    [sym_false] = ACTIONS(912),
    [sym_number_long] = ACTIONS(912),
    [sym_number_double] = ACTIONS(910),
    [sym_number_bigint] = ACTIONS(912),
    [sym_number_ratio] = ACTIONS(910),
    [anon_sym_POUND_POUND] = ACTIONS(910),
    [anon_sym_BSLASH] = ACTIONS(910),
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_POUND_DQUOTE] = ACTIONS(910),
    [anon_sym_SQUOTE] = ACTIONS(910),
    [anon_sym_LPARENquote] = ACTIONS(910),
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_COLON] = ACTIONS(912),
    [anon_sym_COLON_COLON] = ACTIONS(910),
    [anon_sym_DASH_GT] = ACTIONS(912),
    [anon_sym_DASH_GT_GT] = ACTIONS(910),
    [anon_sym_as_DASH_GT] = ACTIONS(910),
    [anon_sym_some_DASH_GT] = ACTIONS(912),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(910),
    [anon_sym_cond_DASH_GT] = ACTIONS(912),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(910),
    [sym__symbol_chars] = ACTIONS(912),
    [sym_member_access] = ACTIONS(910),
    [sym_field_access] = ACTIONS(910),
    [sym_new_class] = ACTIONS(910),
    [anon_sym_LPAREN] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_RBRACK] = ACTIONS(910),
    [anon_sym_LBRACE] = ACTIONS(910),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(910),
    [anon_sym_POUND] = ACTIONS(912),
    [anon_sym_POUND_LBRACE] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(910),
    [anon_sym_POUND_BANG] = ACTIONS(910),
    [anon_sym_POUND_] = ACTIONS(910),
    [anon_sym_POUND_LPAREN] = ACTIONS(910),
    [sym_shorthand_function_arg] = ACTIONS(910),
    [anon_sym_CARET] = ACTIONS(912),
    [anon_sym_CARET_COLON] = ACTIONS(910),
    [anon_sym_CARET_DQUOTE] = ACTIONS(910),
    [anon_sym_BQUOTE] = ACTIONS(910),
    [anon_sym_POUND_SQUOTE] = ACTIONS(910),
    [anon_sym_TILDE] = ACTIONS(912),
    [anon_sym_TILDE_AT] = ACTIONS(910),
    [sym_gensym] = ACTIONS(910),
    [anon_sym_AT] = ACTIONS(910),
  },
  [186] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [187] = {
    [anon_sym_DASH_GT] = ACTIONS(715),
    [anon_sym_DASH_GT_GT] = ACTIONS(713),
    [anon_sym_as_DASH_GT] = ACTIONS(713),
    [anon_sym_some_DASH_GT] = ACTIONS(715),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(713),
    [anon_sym_cond_DASH_GT] = ACTIONS(715),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(713),
    [sym__symbol_chars] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(713),
    [anon_sym_POUND] = ACTIONS(715),
    [anon_sym_POUND_LBRACE] = ACTIONS(713),
  },
  [188] = {
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
  [189] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(202),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(202),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [190] = {
    [sym__hex_char] = ACTIONS(918),
  },
  [191] = {
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(629),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(920),
    [anon_sym_LPAREN] = ACTIONS(920),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(922),
    [sym_nil] = ACTIONS(924),
    [sym_true] = ACTIONS(924),
    [sym_false] = ACTIONS(924),
    [sym_number_long] = ACTIONS(924),
    [sym_number_double] = ACTIONS(922),
    [sym_number_bigint] = ACTIONS(924),
    [sym_number_ratio] = ACTIONS(922),
    [anon_sym_POUND_POUND] = ACTIONS(922),
    [anon_sym_BSLASH] = ACTIONS(922),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_POUND_DQUOTE] = ACTIONS(922),
    [anon_sym_SQUOTE] = ACTIONS(922),
    [anon_sym_LPARENquote] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [anon_sym_COLON] = ACTIONS(924),
    [anon_sym_COLON_COLON] = ACTIONS(922),
    [anon_sym_DASH_GT] = ACTIONS(924),
    [anon_sym_DASH_GT_GT] = ACTIONS(922),
    [anon_sym_as_DASH_GT] = ACTIONS(922),
    [anon_sym_some_DASH_GT] = ACTIONS(924),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(922),
    [anon_sym_cond_DASH_GT] = ACTIONS(924),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(922),
    [sym__symbol_chars] = ACTIONS(924),
    [sym_member_access] = ACTIONS(922),
    [sym_field_access] = ACTIONS(922),
    [sym_new_class] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_LBRACK] = ACTIONS(922),
    [anon_sym_RBRACK] = ACTIONS(922),
    [anon_sym_LBRACE] = ACTIONS(922),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(922),
    [anon_sym_POUND] = ACTIONS(924),
    [anon_sym_POUND_LBRACE] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_POUND_BANG] = ACTIONS(922),
    [anon_sym_POUND_] = ACTIONS(922),
    [anon_sym_POUND_LPAREN] = ACTIONS(922),
    [sym_shorthand_function_arg] = ACTIONS(922),
    [anon_sym_CARET] = ACTIONS(924),
    [anon_sym_CARET_COLON] = ACTIONS(922),
    [anon_sym_CARET_DQUOTE] = ACTIONS(922),
    [anon_sym_BQUOTE] = ACTIONS(922),
    [anon_sym_POUND_SQUOTE] = ACTIONS(922),
    [anon_sym_TILDE] = ACTIONS(924),
    [anon_sym_TILDE_AT] = ACTIONS(922),
    [sym_gensym] = ACTIONS(922),
    [anon_sym_AT] = ACTIONS(922),
  },
  [194] = {
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(325),
  },
  [195] = {
    [aux_sym__string_repeat1] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(329),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(928),
    [sym_nil] = ACTIONS(930),
    [sym_true] = ACTIONS(930),
    [sym_false] = ACTIONS(930),
    [sym_number_long] = ACTIONS(930),
    [sym_number_double] = ACTIONS(928),
    [sym_number_bigint] = ACTIONS(930),
    [sym_number_ratio] = ACTIONS(928),
    [anon_sym_POUND_POUND] = ACTIONS(928),
    [anon_sym_BSLASH] = ACTIONS(928),
    [anon_sym_DQUOTE] = ACTIONS(928),
    [anon_sym_POUND_DQUOTE] = ACTIONS(928),
    [anon_sym_SQUOTE] = ACTIONS(928),
    [anon_sym_LPARENquote] = ACTIONS(928),
    [anon_sym_RPAREN] = ACTIONS(928),
    [anon_sym_COLON] = ACTIONS(930),
    [anon_sym_COLON_COLON] = ACTIONS(928),
    [anon_sym_DASH_GT] = ACTIONS(930),
    [anon_sym_DASH_GT_GT] = ACTIONS(928),
    [anon_sym_as_DASH_GT] = ACTIONS(928),
    [anon_sym_some_DASH_GT] = ACTIONS(930),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(928),
    [anon_sym_cond_DASH_GT] = ACTIONS(930),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(928),
    [sym__symbol_chars] = ACTIONS(930),
    [sym_member_access] = ACTIONS(928),
    [sym_field_access] = ACTIONS(928),
    [sym_new_class] = ACTIONS(928),
    [anon_sym_LPAREN] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(928),
    [anon_sym_RBRACK] = ACTIONS(928),
    [anon_sym_LBRACE] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(928),
    [anon_sym_POUND] = ACTIONS(930),
    [anon_sym_POUND_LBRACE] = ACTIONS(928),
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_POUND_BANG] = ACTIONS(928),
    [anon_sym_POUND_] = ACTIONS(928),
    [anon_sym_POUND_LPAREN] = ACTIONS(928),
    [sym_shorthand_function_arg] = ACTIONS(928),
    [anon_sym_CARET] = ACTIONS(930),
    [anon_sym_CARET_COLON] = ACTIONS(928),
    [anon_sym_CARET_DQUOTE] = ACTIONS(928),
    [anon_sym_BQUOTE] = ACTIONS(928),
    [anon_sym_POUND_SQUOTE] = ACTIONS(928),
    [anon_sym_TILDE] = ACTIONS(930),
    [anon_sym_TILDE_AT] = ACTIONS(928),
    [sym_gensym] = ACTIONS(928),
    [anon_sym_AT] = ACTIONS(928),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(932),
  },
  [198] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__after_the_fn_name] = STATE(206),
    [sym__single_arity_fn] = STATE(206),
    [sym__multi_arity_fn] = STATE(206),
    [sym_params] = STATE(143),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [199] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(179),
    [sym__hash_map] = STATE(112),
    [sym_namespace_map] = STATE(112),
    [sym__after_the_fn_name] = STATE(206),
    [sym__single_arity_fn] = STATE(206),
    [sym__multi_arity_fn] = STATE(206),
    [sym_params] = STATE(143),
    [sym_attr_map] = STATE(207),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(227),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [sym_nil] = ACTIONS(936),
    [sym_true] = ACTIONS(936),
    [sym_false] = ACTIONS(936),
    [sym_number_long] = ACTIONS(936),
    [sym_number_double] = ACTIONS(934),
    [sym_number_bigint] = ACTIONS(936),
    [sym_number_ratio] = ACTIONS(934),
    [anon_sym_POUND_POUND] = ACTIONS(934),
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
    [sym_member_access] = ACTIONS(934),
    [sym_field_access] = ACTIONS(934),
    [sym_new_class] = ACTIONS(934),
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
    [anon_sym_POUND_LPAREN] = ACTIONS(934),
    [sym_shorthand_function_arg] = ACTIONS(934),
    [anon_sym_CARET] = ACTIONS(936),
    [anon_sym_CARET_COLON] = ACTIONS(934),
    [anon_sym_CARET_DQUOTE] = ACTIONS(934),
    [anon_sym_BQUOTE] = ACTIONS(934),
    [anon_sym_POUND_SQUOTE] = ACTIONS(934),
    [anon_sym_TILDE] = ACTIONS(936),
    [anon_sym_TILDE_AT] = ACTIONS(934),
    [sym_gensym] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(934),
  },
  [201] = {
    [anon_sym_DASH_GT] = ACTIONS(912),
    [anon_sym_DASH_GT_GT] = ACTIONS(910),
    [anon_sym_as_DASH_GT] = ACTIONS(910),
    [anon_sym_some_DASH_GT] = ACTIONS(912),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(910),
    [anon_sym_cond_DASH_GT] = ACTIONS(912),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(910),
    [sym__symbol_chars] = ACTIONS(912),
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_LBRACE] = ACTIONS(910),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(910),
    [anon_sym_POUND] = ACTIONS(912),
    [anon_sym_POUND_LBRACE] = ACTIONS(910),
  },
  [202] = {
    [sym__anything] = STATE(90),
    [sym__literals] = STATE(90),
    [sym__collection_literals] = STATE(90),
    [sym_boolean] = STATE(90),
    [sym_number] = STATE(90),
    [sym__number] = STATE(33),
    [sym_symbolic_value] = STATE(90),
    [sym_character] = STATE(90),
    [sym__character] = STATE(34),
    [sym_string] = STATE(90),
    [sym__string] = STATE(35),
    [sym_regex] = STATE(90),
    [sym__regex] = STATE(36),
    [sym_quote] = STATE(90),
    [sym__quote] = STATE(37),
    [sym_keyword] = STATE(90),
    [sym__keyword] = STATE(38),
    [sym__unqualified_keyword] = STATE(38),
    [sym_qualified_keyword] = STATE(38),
    [sym_symbol] = STATE(90),
    [sym__symbol] = STATE(39),
    [sym_threading_macro] = STATE(39),
    [sym_qualified_symbol] = STATE(39),
    [sym_interop] = STATE(90),
    [sym_list] = STATE(90),
    [sym__list] = STATE(40),
    [sym_vector] = STATE(90),
    [sym__vector] = STATE(41),
    [sym_hash_map] = STATE(90),
    [sym__hash_map] = STATE(42),
    [sym_namespace_map] = STATE(42),
    [sym__hash_map_kv_pair] = STATE(154),
    [sym__hash_map_key] = STATE(90),
    [sym_set] = STATE(90),
    [sym__set] = STATE(43),
    [sym_comment] = STATE(90),
    [sym_semicolon] = STATE(44),
    [sym_shebang_line] = STATE(44),
    [sym_ignore_form] = STATE(44),
    [sym_comment_macro] = STATE(44),
    [sym__functions] = STATE(90),
    [sym_anonymous_function] = STATE(90),
    [sym_shorthand_function] = STATE(90),
    [sym_defn] = STATE(90),
    [sym_metadata] = STATE(45),
    [sym__metadata_map] = STATE(46),
    [sym_metadata_shorthand] = STATE(48),
    [sym_syntax_quote] = STATE(90),
    [sym_var_quote] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splice] = STATE(90),
    [sym_deref] = STATE(90),
    [aux_sym__hash_map_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(171),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [sym_number_bigint] = ACTIONS(11),
    [sym_number_ratio] = ACTIONS(13),
    [anon_sym_POUND_POUND] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [sym_member_access] = ACTIONS(37),
    [sym_field_access] = ACTIONS(37),
    [sym_new_class] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(938),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(177),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_TILDE_AT] = ACTIONS(185),
    [sym_gensym] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(75),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(940),
    [sym_nil] = ACTIONS(942),
    [sym_true] = ACTIONS(942),
    [sym_false] = ACTIONS(942),
    [sym_number_long] = ACTIONS(942),
    [sym_number_double] = ACTIONS(940),
    [sym_number_bigint] = ACTIONS(942),
    [sym_number_ratio] = ACTIONS(940),
    [anon_sym_POUND_POUND] = ACTIONS(940),
    [anon_sym_BSLASH] = ACTIONS(940),
    [anon_sym_DQUOTE] = ACTIONS(940),
    [anon_sym_POUND_DQUOTE] = ACTIONS(940),
    [anon_sym_SQUOTE] = ACTIONS(940),
    [anon_sym_LPARENquote] = ACTIONS(940),
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(942),
    [anon_sym_COLON_COLON] = ACTIONS(940),
    [anon_sym_DASH_GT] = ACTIONS(942),
    [anon_sym_DASH_GT_GT] = ACTIONS(940),
    [anon_sym_as_DASH_GT] = ACTIONS(940),
    [anon_sym_some_DASH_GT] = ACTIONS(942),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(940),
    [anon_sym_cond_DASH_GT] = ACTIONS(942),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(940),
    [sym__symbol_chars] = ACTIONS(942),
    [sym_member_access] = ACTIONS(940),
    [sym_field_access] = ACTIONS(940),
    [sym_new_class] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(940),
    [anon_sym_RBRACK] = ACTIONS(940),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(940),
    [anon_sym_POUND] = ACTIONS(942),
    [anon_sym_POUND_LBRACE] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(940),
    [anon_sym_POUND_BANG] = ACTIONS(940),
    [anon_sym_POUND_] = ACTIONS(940),
    [anon_sym_POUND_LPAREN] = ACTIONS(940),
    [sym_shorthand_function_arg] = ACTIONS(940),
    [anon_sym_CARET] = ACTIONS(942),
    [anon_sym_CARET_COLON] = ACTIONS(940),
    [anon_sym_CARET_DQUOTE] = ACTIONS(940),
    [anon_sym_BQUOTE] = ACTIONS(940),
    [anon_sym_POUND_SQUOTE] = ACTIONS(940),
    [anon_sym_TILDE] = ACTIONS(942),
    [anon_sym_TILDE_AT] = ACTIONS(940),
    [sym_gensym] = ACTIONS(940),
    [anon_sym_AT] = ACTIONS(940),
  },
  [204] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(605),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(944),
    [sym_nil] = ACTIONS(946),
    [sym_true] = ACTIONS(946),
    [sym_false] = ACTIONS(946),
    [sym_number_long] = ACTIONS(946),
    [sym_number_double] = ACTIONS(944),
    [sym_number_bigint] = ACTIONS(946),
    [sym_number_ratio] = ACTIONS(944),
    [anon_sym_POUND_POUND] = ACTIONS(944),
    [anon_sym_BSLASH] = ACTIONS(944),
    [anon_sym_DQUOTE] = ACTIONS(944),
    [anon_sym_POUND_DQUOTE] = ACTIONS(944),
    [anon_sym_SQUOTE] = ACTIONS(944),
    [anon_sym_LPARENquote] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(944),
    [anon_sym_COLON] = ACTIONS(946),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [anon_sym_DASH_GT] = ACTIONS(946),
    [anon_sym_DASH_GT_GT] = ACTIONS(944),
    [anon_sym_as_DASH_GT] = ACTIONS(944),
    [anon_sym_some_DASH_GT] = ACTIONS(946),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(944),
    [anon_sym_cond_DASH_GT] = ACTIONS(946),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(944),
    [sym__symbol_chars] = ACTIONS(946),
    [sym_member_access] = ACTIONS(944),
    [sym_field_access] = ACTIONS(944),
    [sym_new_class] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_RBRACK] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_RBRACE] = ACTIONS(944),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(944),
    [anon_sym_POUND] = ACTIONS(946),
    [anon_sym_POUND_LBRACE] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(944),
    [anon_sym_POUND_BANG] = ACTIONS(944),
    [anon_sym_POUND_] = ACTIONS(944),
    [anon_sym_POUND_LPAREN] = ACTIONS(944),
    [sym_shorthand_function_arg] = ACTIONS(944),
    [anon_sym_CARET] = ACTIONS(946),
    [anon_sym_CARET_COLON] = ACTIONS(944),
    [anon_sym_CARET_DQUOTE] = ACTIONS(944),
    [anon_sym_BQUOTE] = ACTIONS(944),
    [anon_sym_POUND_SQUOTE] = ACTIONS(944),
    [anon_sym_TILDE] = ACTIONS(946),
    [anon_sym_TILDE_AT] = ACTIONS(944),
    [sym_gensym] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(948),
  },
  [207] = {
    [sym_vector] = STATE(140),
    [sym__vector] = STATE(41),
    [sym__after_the_fn_name] = STATE(210),
    [sym__single_arity_fn] = STATE(210),
    [sym__multi_arity_fn] = STATE(210),
    [sym_params] = STATE(143),
    [aux_sym__multi_arity_fn_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [208] = {
    [anon_sym_DASH_GT] = ACTIONS(936),
    [anon_sym_DASH_GT_GT] = ACTIONS(934),
    [anon_sym_as_DASH_GT] = ACTIONS(934),
    [anon_sym_some_DASH_GT] = ACTIONS(936),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(934),
    [anon_sym_cond_DASH_GT] = ACTIONS(936),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(934),
    [sym__symbol_chars] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_LBRACE] = ACTIONS(934),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(934),
    [anon_sym_POUND] = ACTIONS(936),
    [anon_sym_POUND_LBRACE] = ACTIONS(934),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(950),
    [sym_nil] = ACTIONS(952),
    [sym_true] = ACTIONS(952),
    [sym_false] = ACTIONS(952),
    [sym_number_long] = ACTIONS(952),
    [sym_number_double] = ACTIONS(950),
    [sym_number_bigint] = ACTIONS(952),
    [sym_number_ratio] = ACTIONS(950),
    [anon_sym_POUND_POUND] = ACTIONS(950),
    [anon_sym_BSLASH] = ACTIONS(950),
    [anon_sym_DQUOTE] = ACTIONS(950),
    [anon_sym_POUND_DQUOTE] = ACTIONS(950),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [anon_sym_LPARENquote] = ACTIONS(950),
    [anon_sym_RPAREN] = ACTIONS(950),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_COLON_COLON] = ACTIONS(950),
    [anon_sym_DASH_GT] = ACTIONS(952),
    [anon_sym_DASH_GT_GT] = ACTIONS(950),
    [anon_sym_as_DASH_GT] = ACTIONS(950),
    [anon_sym_some_DASH_GT] = ACTIONS(952),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(950),
    [anon_sym_cond_DASH_GT] = ACTIONS(952),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(950),
    [sym__symbol_chars] = ACTIONS(952),
    [sym_member_access] = ACTIONS(950),
    [sym_field_access] = ACTIONS(950),
    [sym_new_class] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(952),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(950),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_POUND_LBRACE] = ACTIONS(950),
    [anon_sym_SEMI] = ACTIONS(950),
    [anon_sym_POUND_BANG] = ACTIONS(950),
    [anon_sym_POUND_] = ACTIONS(950),
    [anon_sym_POUND_LPAREN] = ACTIONS(950),
    [sym_shorthand_function_arg] = ACTIONS(950),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_CARET_COLON] = ACTIONS(950),
    [anon_sym_CARET_DQUOTE] = ACTIONS(950),
    [anon_sym_BQUOTE] = ACTIONS(950),
    [anon_sym_POUND_SQUOTE] = ACTIONS(950),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_TILDE_AT] = ACTIONS(950),
    [sym_gensym] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(950),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(954),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(956),
    [sym_nil] = ACTIONS(958),
    [sym_true] = ACTIONS(958),
    [sym_false] = ACTIONS(958),
    [sym_number_long] = ACTIONS(958),
    [sym_number_double] = ACTIONS(956),
    [sym_number_bigint] = ACTIONS(958),
    [sym_number_ratio] = ACTIONS(956),
    [anon_sym_POUND_POUND] = ACTIONS(956),
    [anon_sym_BSLASH] = ACTIONS(956),
    [anon_sym_DQUOTE] = ACTIONS(956),
    [anon_sym_POUND_DQUOTE] = ACTIONS(956),
    [anon_sym_SQUOTE] = ACTIONS(956),
    [anon_sym_LPARENquote] = ACTIONS(956),
    [anon_sym_RPAREN] = ACTIONS(956),
    [anon_sym_COLON] = ACTIONS(958),
    [anon_sym_COLON_COLON] = ACTIONS(956),
    [anon_sym_DASH_GT] = ACTIONS(958),
    [anon_sym_DASH_GT_GT] = ACTIONS(956),
    [anon_sym_as_DASH_GT] = ACTIONS(956),
    [anon_sym_some_DASH_GT] = ACTIONS(958),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(956),
    [anon_sym_cond_DASH_GT] = ACTIONS(958),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(956),
    [sym__symbol_chars] = ACTIONS(958),
    [sym_member_access] = ACTIONS(956),
    [sym_field_access] = ACTIONS(956),
    [sym_new_class] = ACTIONS(956),
    [anon_sym_LPAREN] = ACTIONS(958),
    [anon_sym_LBRACK] = ACTIONS(956),
    [anon_sym_RBRACK] = ACTIONS(956),
    [anon_sym_LBRACE] = ACTIONS(956),
    [anon_sym_RBRACE] = ACTIONS(956),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(956),
    [anon_sym_POUND] = ACTIONS(958),
    [anon_sym_POUND_LBRACE] = ACTIONS(956),
    [anon_sym_SEMI] = ACTIONS(956),
    [anon_sym_POUND_BANG] = ACTIONS(956),
    [anon_sym_POUND_] = ACTIONS(956),
    [anon_sym_POUND_LPAREN] = ACTIONS(956),
    [sym_shorthand_function_arg] = ACTIONS(956),
    [anon_sym_CARET] = ACTIONS(958),
    [anon_sym_CARET_COLON] = ACTIONS(956),
    [anon_sym_CARET_DQUOTE] = ACTIONS(956),
    [anon_sym_BQUOTE] = ACTIONS(956),
    [anon_sym_POUND_SQUOTE] = ACTIONS(956),
    [anon_sym_TILDE] = ACTIONS(958),
    [anon_sym_TILDE_AT] = ACTIONS(956),
    [sym_gensym] = ACTIONS(956),
    [anon_sym_AT] = ACTIONS(956),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(47),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(33),
  [13] = {.count = 1, .reusable = true}, SHIFT(33),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, SHIFT(8),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, SHIFT(11),
  [35] = {.count = 1, .reusable = false}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(13),
  [39] = {.count = 1, .reusable = false}, SHIFT(14),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = false}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, SHIFT(47),
  [61] = {.count = 1, .reusable = false}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = false}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(31),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(49),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(51),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = false}, SHIFT(54),
  [93] = {.count = 1, .reusable = false}, SHIFT(55),
  [95] = {.count = 1, .reusable = false}, SHIFT(56),
  [97] = {.count = 1, .reusable = false}, SHIFT(57),
  [99] = {.count = 1, .reusable = true}, SHIFT(57),
  [101] = {.count = 1, .reusable = false}, SHIFT(63),
  [103] = {.count = 1, .reusable = true}, SHIFT(58),
  [105] = {.count = 1, .reusable = true}, SHIFT(59),
  [107] = {.count = 1, .reusable = true}, SHIFT(63),
  [109] = {.count = 1, .reusable = true}, SHIFT(60),
  [111] = {.count = 1, .reusable = false}, SHIFT(61),
  [113] = {.count = 1, .reusable = true}, SHIFT(62),
  [115] = {.count = 1, .reusable = true}, SHIFT(64),
  [117] = {.count = 1, .reusable = true}, SHIFT(65),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(66),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_interop, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_interop, 1),
  [133] = {.count = 1, .reusable = false}, SHIFT(76),
  [135] = {.count = 1, .reusable = true}, SHIFT(67),
  [137] = {.count = 1, .reusable = true}, SHIFT(68),
  [139] = {.count = 1, .reusable = true}, SHIFT(69),
  [141] = {.count = 1, .reusable = false}, SHIFT(70),
  [143] = {.count = 1, .reusable = false}, SHIFT(71),
  [145] = {.count = 1, .reusable = true}, SHIFT(76),
  [147] = {.count = 1, .reusable = false}, SHIFT(72),
  [149] = {.count = 1, .reusable = true}, SHIFT(73),
  [151] = {.count = 1, .reusable = false}, SHIFT(74),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = false}, SHIFT(83),
  [157] = {.count = 1, .reusable = true}, SHIFT(77),
  [159] = {.count = 1, .reusable = true}, SHIFT(78),
  [161] = {.count = 1, .reusable = true}, SHIFT(79),
  [163] = {.count = 1, .reusable = true}, SHIFT(83),
  [165] = {.count = 1, .reusable = true}, SHIFT(80),
  [167] = {.count = 1, .reusable = false}, SHIFT(81),
  [169] = {.count = 1, .reusable = true}, SHIFT(82),
  [171] = {.count = 1, .reusable = false}, SHIFT(90),
  [173] = {.count = 1, .reusable = true}, SHIFT(84),
  [175] = {.count = 1, .reusable = true}, SHIFT(85),
  [177] = {.count = 1, .reusable = true}, SHIFT(86),
  [179] = {.count = 1, .reusable = true}, SHIFT(90),
  [181] = {.count = 1, .reusable = true}, SHIFT(87),
  [183] = {.count = 1, .reusable = false}, SHIFT(88),
  [185] = {.count = 1, .reusable = true}, SHIFT(89),
  [187] = {.count = 1, .reusable = true}, SHIFT(92),
  [189] = {.count = 1, .reusable = true}, SHIFT(94),
  [191] = {.count = 1, .reusable = false}, SHIFT(101),
  [193] = {.count = 1, .reusable = true}, SHIFT(95),
  [195] = {.count = 1, .reusable = true}, SHIFT(96),
  [197] = {.count = 1, .reusable = true}, SHIFT(97),
  [199] = {.count = 1, .reusable = true}, SHIFT(101),
  [201] = {.count = 1, .reusable = true}, SHIFT(98),
  [203] = {.count = 1, .reusable = false}, SHIFT(99),
  [205] = {.count = 1, .reusable = true}, SHIFT(100),
  [207] = {.count = 1, .reusable = false}, SHIFT(102),
  [209] = {.count = 1, .reusable = false}, SHIFT(103),
  [211] = {.count = 1, .reusable = false}, SHIFT(104),
  [213] = {.count = 1, .reusable = true}, SHIFT(104),
  [215] = {.count = 1, .reusable = false}, SHIFT(106),
  [217] = {.count = 1, .reusable = true}, SHIFT(105),
  [219] = {.count = 1, .reusable = true}, SHIFT(106),
  [221] = {.count = 1, .reusable = true}, SHIFT(107),
  [223] = {.count = 1, .reusable = true}, SHIFT(108),
  [225] = {.count = 1, .reusable = true}, SHIFT(109),
  [227] = {.count = 1, .reusable = false}, SHIFT(110),
  [229] = {.count = 1, .reusable = false}, SHIFT(107),
  [231] = {.count = 1, .reusable = false}, SHIFT(113),
  [233] = {.count = 1, .reusable = false}, SHIFT(114),
  [235] = {.count = 1, .reusable = true}, SHIFT(114),
  [237] = {.count = 1, .reusable = false}, SHIFT(116),
  [239] = {.count = 1, .reusable = true}, SHIFT(116),
  [241] = {.count = 1, .reusable = false}, SHIFT(117),
  [243] = {.count = 1, .reusable = true}, SHIFT(117),
  [245] = {.count = 1, .reusable = true}, SHIFT(118),
  [247] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [303] = {.count = 1, .reusable = false}, SHIFT(121),
  [305] = {.count = 1, .reusable = true}, SHIFT(121),
  [307] = {.count = 1, .reusable = false}, SHIFT(122),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_symbolic_value, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_symbolic_value, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [317] = {.count = 1, .reusable = true}, SHIFT(124),
  [319] = {.count = 1, .reusable = true}, SHIFT(125),
  [321] = {.count = 1, .reusable = false}, SHIFT(125),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [327] = {.count = 1, .reusable = false}, SHIFT(126),
  [329] = {.count = 1, .reusable = false}, SHIFT(127),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [335] = {.count = 1, .reusable = false}, SHIFT(128),
  [337] = {.count = 1, .reusable = false}, SHIFT(129),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(130),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(131),
  [355] = {.count = 1, .reusable = true}, SHIFT(132),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [361] = {.count = 1, .reusable = false}, SHIFT(134),
  [363] = {.count = 1, .reusable = true}, SHIFT(133),
  [365] = {.count = 1, .reusable = true}, SHIFT(134),
  [367] = {.count = 1, .reusable = false}, SHIFT(135),
  [369] = {.count = 1, .reusable = true}, SHIFT(135),
  [371] = {.count = 1, .reusable = false}, SHIFT(136),
  [373] = {.count = 1, .reusable = true}, SHIFT(137),
  [375] = {.count = 1, .reusable = false}, SHIFT(149),
  [377] = {.count = 1, .reusable = true}, SHIFT(148),
  [379] = {.count = 1, .reusable = true}, SHIFT(149),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(151),
  [387] = {.count = 1, .reusable = true}, SHIFT(150),
  [389] = {.count = 1, .reusable = true}, SHIFT(151),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [395] = {.count = 1, .reusable = false}, SHIFT(152),
  [397] = {.count = 1, .reusable = true}, SHIFT(152),
  [399] = {.count = 1, .reusable = true}, SHIFT(153),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [405] = {.count = 1, .reusable = true}, SHIFT(155),
  [407] = {.count = 1, .reusable = true}, SHIFT(156),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [413] = {.count = 1, .reusable = false}, SHIFT(158),
  [415] = {.count = 1, .reusable = true}, SHIFT(157),
  [417] = {.count = 1, .reusable = true}, SHIFT(158),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(159),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(160),
  [443] = {.count = 1, .reusable = true}, SHIFT(162),
  [445] = {.count = 1, .reusable = true}, SHIFT(164),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [451] = {.count = 1, .reusable = false}, SHIFT(165),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_var_quote, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_var_quote, 2),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_deref, 2),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_deref, 2),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [482] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [509] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [524] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [530] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [539] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [560] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [575] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [584] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [586] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [588] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(122),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(26),
  [597] = {.count = 1, .reusable = true}, SHIFT(166),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [607] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(127),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(129),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [625] = {.count = 1, .reusable = true}, SHIFT(167),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [635] = {.count = 1, .reusable = true}, SHIFT(168),
  [637] = {.count = 1, .reusable = true}, SHIFT(169),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_function_name, 1),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [647] = {.count = 1, .reusable = true}, SHIFT(171),
  [649] = {.count = 1, .reusable = false}, SHIFT(174),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [653] = {.count = 1, .reusable = true}, SHIFT(174),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [657] = {.count = 1, .reusable = true}, SHIFT(176),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [663] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(149),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [678] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [691] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(80),
  [703] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [717] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(90),
  [720] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [723] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(33),
  [726] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(33),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(84),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [753] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [759] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [765] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [768] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [774] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [794] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(90),
  [800] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [803] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(26),
  [809] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(87),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(28),
  [815] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(88),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(89),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(31),
  [824] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [826] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [828] = {.count = 1, .reusable = true}, SHIFT(185),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [832] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [834] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [837] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [843] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [846] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [849] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [852] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [857] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [859] = {.count = 1, .reusable = true}, SHIFT(187),
  [861] = {.count = 1, .reusable = true}, SHIFT(188),
  [863] = {.count = 1, .reusable = true}, SHIFT(189),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [869] = {.count = 1, .reusable = true}, SHIFT(190),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [873] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [879] = {.count = 1, .reusable = true}, SHIFT(191),
  [881] = {.count = 1, .reusable = true}, SHIFT(192),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [885] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [887] = {.count = 1, .reusable = true}, SHIFT(193),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [893] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [895] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(137),
  [898] = {.count = 1, .reusable = false}, SHIFT(194),
  [900] = {.count = 1, .reusable = false}, SHIFT(195),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym_docstring, 1),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [908] = {.count = 1, .reusable = true}, SHIFT(196),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [914] = {.count = 1, .reusable = true}, SHIFT(200),
  [916] = {.count = 1, .reusable = true}, SHIFT(201),
  [918] = {.count = 1, .reusable = true}, SHIFT(203),
  [920] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [922] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [924] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [926] = {.count = 1, .reusable = false}, SHIFT(204),
  [928] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [930] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [932] = {.count = 1, .reusable = true}, SHIFT(205),
  [934] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [936] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [938] = {.count = 1, .reusable = true}, SHIFT(208),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [942] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [946] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [948] = {.count = 1, .reusable = true}, SHIFT(209),
  [950] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [954] = {.count = 1, .reusable = true}, SHIFT(211),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [958] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
