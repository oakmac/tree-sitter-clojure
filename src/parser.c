#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 213
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
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
  aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH = 55,
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
  anon_sym_POUND = 76,
  sym_program = 77,
  sym__anything = 78,
  sym__literals = 79,
  sym__collection_literals = 80,
  sym_boolean = 81,
  sym_number = 82,
  sym__number = 83,
  sym_symbolic_value = 84,
  sym_character = 85,
  sym__character = 86,
  sym__special_char = 87,
  sym__unicode_char = 88,
  sym__octal_char = 89,
  sym__octal_num = 90,
  sym_string = 91,
  sym__string = 92,
  sym_regex = 93,
  sym__regex = 94,
  sym_quote = 95,
  sym__quote = 96,
  sym_keyword = 97,
  sym__keyword = 98,
  sym__unqualified_keyword = 99,
  sym_qualified_keyword = 100,
  sym_symbol = 101,
  sym__symbol = 102,
  sym_threading_macro = 103,
  sym_qualified_symbol = 104,
  sym__qualified_symbol = 105,
  sym_interop = 106,
  sym_list = 107,
  sym__list = 108,
  sym_vector = 109,
  sym__vector = 110,
  sym_hash_map = 111,
  sym__hash_map = 112,
  sym_namespace_map = 113,
  sym__hash_map_kv_pair = 114,
  sym__hash_map_key = 115,
  sym__hash_map_value = 116,
  sym_set = 117,
  sym__set = 118,
  sym_comment = 119,
  sym_semicolon = 120,
  sym_shebang_line = 121,
  sym_ignore_form = 122,
  sym_comment_macro = 123,
  sym__functions = 124,
  sym_anonymous_function = 125,
  sym__after_the_fn_name = 126,
  sym_function_name = 127,
  sym__single_arity_fn = 128,
  sym__multi_arity_fn = 129,
  sym_function_body = 130,
  sym_params = 131,
  sym_shorthand_function = 132,
  sym_defn = 133,
  sym_docstring = 134,
  sym_attr_map = 135,
  sym_metadata = 136,
  sym__metadata_map = 137,
  sym_metadata_shorthand = 138,
  sym_syntax_quote = 139,
  sym_var_quote = 140,
  sym_unquote = 141,
  sym_unquote_splice = 142,
  sym_deref = 143,
  sym_tagged_literal = 144,
  aux_sym_program_repeat1 = 145,
  aux_sym__string_repeat1 = 146,
  aux_sym__regex_repeat1 = 147,
  aux_sym__hash_map_repeat1 = 148,
  aux_sym__multi_arity_fn_repeat1 = 149,
  aux_sym_metadata_repeat1 = 150,
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
  [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = "/\\#\\:[a-zA-Z\\*\\+\\!\\-\\_\\?][a-zA-Z0-9\\*\\+\\!\\-\\_\\?\\'\\:]*/",
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
  [anon_sym_POUND] = "#",
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
  [sym__qualified_symbol] = "_qualified_symbol",
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
  [sym_tagged_literal] = "tagged_literal",
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
  [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = {
    .visible = false,
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
  [anon_sym_POUND] = {
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
  [sym__qualified_symbol] = {
    .visible = false,
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
  [sym_tagged_literal] = {
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
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(24);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == 'I')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'n')
        ADVANCE(61);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(71);
      if (lookahead == 's')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(88);
      if (lookahead == 'u')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(96);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
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
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
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
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '{')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_COLON_COLON_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH);
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
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_shorthand_function_arg);
      if (lookahead == '&' ||
          ('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'q')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'u')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'o')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 't')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPARENquote);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '>')
        ADVANCE(27);
      if (lookahead == 'I')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'f')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_negative_infinity);
      END_STATE();
    case 32:
      if (lookahead == '-')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_field_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '_')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '+')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '_')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_member_access);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'f')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_infinity);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'N')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_not_a_number);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\"')
        ADVANCE(58);
      if (lookahead == ':')
        ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CARET_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_CARET_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == 'i')
        ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'w')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'l')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'i')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 68:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 71:
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 't')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'u')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 77:
      if (lookahead == 'o')
        ADVANCE(78);
      if (lookahead == 'p')
        ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'm')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '-')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '>')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 84:
      if (lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'c')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      if (lookahead == 'r')
        ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'b')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 91:
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(100);
      if (lookahead == '_')
        ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 101:
      if (lookahead == '_')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == '.')
        ADVANCE(100);
      if (lookahead == '_')
        ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 104:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(104);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
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
        ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_gensym);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == 'N')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
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
        ADVANCE(111);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_ratio);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number_bigint);
      if (lookahead == '#')
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
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
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
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
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
        ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_new_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == '.')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '>')
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
        ADVANCE(111);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(124);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '>')
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'a')
        ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'l')
        ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'i')
        ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'l')
        ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(139);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '>')
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
        ADVANCE(111);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'u')
        ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(100);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == 'N')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number_bigint);
      END_STATE();
    case 146:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(146);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(96);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 147:
      if (lookahead == ',')
        SKIP(147);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead == 'I')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      END_STATE();
    case 148:
      if (lookahead == 'I')
        ADVANCE(29);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(149);
      if (lookahead == ',')
        ADVANCE(150);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(170);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == 'u')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead != 0)
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'c')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'k')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 's')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'p')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'a')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'c')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'r')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'm')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'f')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'd')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(84);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 172:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(173);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 176:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(176);
      if (lookahead != 0)
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(175);
      END_STATE();
    case 179:
      if (lookahead == ',')
        SKIP(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 180:
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
        ADVANCE(180);
      END_STATE();
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(181);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(96);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 182:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(182);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(190);
      if (lookahead == 'f')
        ADVANCE(195);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'm')
        ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'n')
        ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(194);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_defn_DASH);
      if (lookahead == '#')
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
        ADVANCE(111);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == 'a')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '#')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '?')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 197:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(197);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(56);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(198);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(96);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(199);
      if (lookahead == ',')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(200);
      if (lookahead != 0)
        ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(201);
      END_STATE();
    case 202:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(17);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == ',')
        SKIP(202);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == '`')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(113);
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(135);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '~')
        ADVANCE(97);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(119);
      END_STATE();
    case 203:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(204);
      if (lookahead == '(')
        ADVANCE(205);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        SKIP(203);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(57);
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead == 'c')
        ADVANCE(211);
      if (lookahead == 's')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(207);
      END_STATE();
    case 204:
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(14);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(27);
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
        ADVANCE(207);
      END_STATE();
    case 207:
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
        ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
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
        ADVANCE(207);
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
        ADVANCE(207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(207);
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
        ADVANCE(207);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
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
        ADVANCE(207);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
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
        ADVANCE(207);
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
        ADVANCE(207);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(207);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(217);
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
        ADVANCE(207);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
        ADVANCE(218);
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
        ADVANCE(207);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(219);
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
        ADVANCE(207);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(207);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(207);
      END_STATE();
    case 221:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      END_STATE();
    case 222:
      if (lookahead == ',')
        SKIP(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 223:
      if (lookahead == ',')
        SKIP(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(224);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 146},
  [3] = {.lex_state = 147},
  [4] = {.lex_state = 149},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 176},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 179},
  [10] = {.lex_state = 179},
  [11] = {.lex_state = 146},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 146},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 198},
  [17] = {.lex_state = 198},
  [18] = {.lex_state = 104},
  [19] = {.lex_state = 198},
  [20] = {.lex_state = 199},
  [21] = {.lex_state = 199},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 202},
  [24] = {.lex_state = 203},
  [25] = {.lex_state = 179},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 203},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 203},
  [32] = {.lex_state = 203},
  [33] = {.lex_state = 221},
  [34] = {.lex_state = 146},
  [35] = {.lex_state = 146},
  [36] = {.lex_state = 146},
  [37] = {.lex_state = 146},
  [38] = {.lex_state = 146},
  [39] = {.lex_state = 146},
  [40] = {.lex_state = 146},
  [41] = {.lex_state = 146},
  [42] = {.lex_state = 146},
  [43] = {.lex_state = 146},
  [44] = {.lex_state = 146},
  [45] = {.lex_state = 146},
  [46] = {.lex_state = 146},
  [47] = {.lex_state = 203},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 104},
  [50] = {.lex_state = 203},
  [51] = {.lex_state = 146},
  [52] = {.lex_state = 146},
  [53] = {.lex_state = 222},
  [54] = {.lex_state = 223},
  [55] = {.lex_state = 146},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 146},
  [58] = {.lex_state = 176},
  [59] = {.lex_state = 146},
  [60] = {.lex_state = 104},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 104},
  [63] = {.lex_state = 104},
  [64] = {.lex_state = 104},
  [65] = {.lex_state = 182},
  [66] = {.lex_state = 146},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 203},
  [69] = {.lex_state = 104},
  [70] = {.lex_state = 146},
  [71] = {.lex_state = 104},
  [72] = {.lex_state = 202},
  [73] = {.lex_state = 203},
  [74] = {.lex_state = 203},
  [75] = {.lex_state = 104},
  [76] = {.lex_state = 104},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 202},
  [79] = {.lex_state = 104},
  [80] = {.lex_state = 146},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 104},
  [84] = {.lex_state = 104},
  [85] = {.lex_state = 197},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 146},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 104},
  [91] = {.lex_state = 104},
  [92] = {.lex_state = 104},
  [93] = {.lex_state = 198},
  [94] = {.lex_state = 146},
  [95] = {.lex_state = 198},
  [96] = {.lex_state = 198},
  [97] = {.lex_state = 104},
  [98] = {.lex_state = 146},
  [99] = {.lex_state = 104},
  [100] = {.lex_state = 104},
  [101] = {.lex_state = 104},
  [102] = {.lex_state = 104},
  [103] = {.lex_state = 198},
  [104] = {.lex_state = 146},
  [105] = {.lex_state = 146},
  [106] = {.lex_state = 146},
  [107] = {.lex_state = 146},
  [108] = {.lex_state = 202},
  [109] = {.lex_state = 203},
  [110] = {.lex_state = 198},
  [111] = {.lex_state = 198},
  [112] = {.lex_state = 104},
  [113] = {.lex_state = 203},
  [114] = {.lex_state = 203},
  [115] = {.lex_state = 172},
  [116] = {.lex_state = 146},
  [117] = {.lex_state = 146},
  [118] = {.lex_state = 146},
  [119] = {.lex_state = 146},
  [120] = {.lex_state = 202},
  [121] = {.lex_state = 146},
  [122] = {.lex_state = 181},
  [123] = {.lex_state = 146},
  [124] = {.lex_state = 146},
  [125] = {.lex_state = 104},
  [126] = {.lex_state = 203},
  [127] = {.lex_state = 203},
  [128] = {.lex_state = 222},
  [129] = {.lex_state = 146},
  [130] = {.lex_state = 146},
  [131] = {.lex_state = 172},
  [132] = {.lex_state = 146},
  [133] = {.lex_state = 176},
  [134] = {.lex_state = 146},
  [135] = {.lex_state = 179},
  [136] = {.lex_state = 146},
  [137] = {.lex_state = 146},
  [138] = {.lex_state = 202},
  [139] = {.lex_state = 203},
  [140] = {.lex_state = 203},
  [141] = {.lex_state = 104},
  [142] = {.lex_state = 203},
  [143] = {.lex_state = 203},
  [144] = {.lex_state = 203},
  [145] = {.lex_state = 202},
  [146] = {.lex_state = 182},
  [147] = {.lex_state = 203},
  [148] = {.lex_state = 202},
  [149] = {.lex_state = 203},
  [150] = {.lex_state = 203},
  [151] = {.lex_state = 203},
  [152] = {.lex_state = 203},
  [153] = {.lex_state = 146},
  [154] = {.lex_state = 202},
  [155] = {.lex_state = 146},
  [156] = {.lex_state = 197},
  [157] = {.lex_state = 198},
  [158] = {.lex_state = 146},
  [159] = {.lex_state = 198},
  [160] = {.lex_state = 146},
  [161] = {.lex_state = 198},
  [162] = {.lex_state = 146},
  [163] = {.lex_state = 198},
  [164] = {.lex_state = 146},
  [165] = {.lex_state = 203},
  [166] = {.lex_state = 198},
  [167] = {.lex_state = 203},
  [168] = {.lex_state = 198},
  [169] = {.lex_state = 198},
  [170] = {.lex_state = 203},
  [171] = {.lex_state = 222},
  [172] = {.lex_state = 146},
  [173] = {.lex_state = 146},
  [174] = {.lex_state = 203},
  [175] = {.lex_state = 182},
  [176] = {.lex_state = 146},
  [177] = {.lex_state = 182},
  [178] = {.lex_state = 182},
  [179] = {.lex_state = 202},
  [180] = {.lex_state = 203},
  [181] = {.lex_state = 172},
  [182] = {.lex_state = 203},
  [183] = {.lex_state = 203},
  [184] = {.lex_state = 203},
  [185] = {.lex_state = 182},
  [186] = {.lex_state = 203},
  [187] = {.lex_state = 203},
  [188] = {.lex_state = 203},
  [189] = {.lex_state = 203},
  [190] = {.lex_state = 146},
  [191] = {.lex_state = 203},
  [192] = {.lex_state = 203},
  [193] = {.lex_state = 198},
  [194] = {.lex_state = 222},
  [195] = {.lex_state = 203},
  [196] = {.lex_state = 203},
  [197] = {.lex_state = 146},
  [198] = {.lex_state = 203},
  [199] = {.lex_state = 172},
  [200] = {.lex_state = 146},
  [201] = {.lex_state = 182},
  [202] = {.lex_state = 203},
  [203] = {.lex_state = 203},
  [204] = {.lex_state = 203},
  [205] = {.lex_state = 146},
  [206] = {.lex_state = 203},
  [207] = {.lex_state = 146},
  [208] = {.lex_state = 182},
  [209] = {.lex_state = 203},
  [210] = {.lex_state = 146},
  [211] = {.lex_state = 182},
  [212] = {.lex_state = 146},
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(33),
    [sym__anything] = STATE(49),
    [sym__literals] = STATE(49),
    [sym__collection_literals] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(49),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(49),
    [sym_character] = STATE(49),
    [sym__character] = STATE(35),
    [sym_string] = STATE(49),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(49),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(49),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(49),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(49),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(49),
    [sym_list] = STATE(49),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(49),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(49),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(49),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(49),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(49),
    [sym_anonymous_function] = STATE(49),
    [sym_shorthand_function] = STATE(49),
    [sym_defn] = STATE(49),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(49),
    [sym_var_quote] = STATE(49),
    [sym_unquote] = STATE(49),
    [sym_unquote_splice] = STATE(49),
    [sym_deref] = STATE(49),
    [sym_tagged_literal] = STATE(49),
    [aux_sym_program_repeat1] = STATE(49),
    [aux_sym_metadata_repeat1] = STATE(50),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
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
    [anon_sym_POUND] = ACTIONS(77),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_nil] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_number_long] = ACTIONS(81),
    [sym_number_double] = ACTIONS(79),
    [sym_number_bigint] = ACTIONS(81),
    [sym_number_ratio] = ACTIONS(79),
    [anon_sym_POUND_POUND] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_POUND_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_DASH_GT_GT] = ACTIONS(79),
    [anon_sym_as_DASH_GT] = ACTIONS(79),
    [anon_sym_some_DASH_GT] = ACTIONS(81),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(79),
    [anon_sym_cond_DASH_GT] = ACTIONS(81),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(79),
    [sym__symbol_chars] = ACTIONS(81),
    [sym_member_access] = ACTIONS(79),
    [sym_field_access] = ACTIONS(79),
    [sym_new_class] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(79),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(79),
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_POUND_BANG] = ACTIONS(79),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(79),
    [sym_shorthand_function_arg] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_CARET_COLON] = ACTIONS(79),
    [anon_sym_CARET_DQUOTE] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_POUND_SQUOTE] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_TILDE_AT] = ACTIONS(79),
    [sym_gensym] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(81),
  },
  [3] = {
    [sym_infinity] = ACTIONS(83),
    [sym_negative_infinity] = ACTIONS(83),
    [sym_not_a_number] = ACTIONS(83),
  },
  [4] = {
    [sym__special_char] = STATE(52),
    [sym__unicode_char] = STATE(52),
    [sym__octal_char] = STATE(52),
    [sym__normal_char] = ACTIONS(85),
    [anon_sym_newline] = ACTIONS(85),
    [anon_sym_space] = ACTIONS(85),
    [anon_sym_tab] = ACTIONS(85),
    [anon_sym_formfeed] = ACTIONS(85),
    [anon_sym_backspace] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(85),
    [anon_sym_u] = ACTIONS(87),
    [anon_sym_o] = ACTIONS(89),
  },
  [5] = {
    [aux_sym__string_repeat1] = STATE(56),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(93),
  },
  [6] = {
    [aux_sym__regex_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(97),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(97),
  },
  [7] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [8] = {
    [sym__anything] = STATE(65),
    [sym__literals] = STATE(65),
    [sym__collection_literals] = STATE(65),
    [sym_boolean] = STATE(65),
    [sym_number] = STATE(65),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(65),
    [sym_character] = STATE(65),
    [sym__character] = STATE(35),
    [sym_string] = STATE(65),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(65),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(65),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(65),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(65),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(65),
    [sym_list] = STATE(65),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(65),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(65),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(65),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(65),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(65),
    [sym_anonymous_function] = STATE(65),
    [sym_shorthand_function] = STATE(65),
    [sym_defn] = STATE(65),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(65),
    [sym_var_quote] = STATE(65),
    [sym_unquote] = STATE(65),
    [sym_unquote_splice] = STATE(65),
    [sym_deref] = STATE(65),
    [sym_tagged_literal] = STATE(65),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(103),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(117),
  },
  [10] = {
    [sym__keyword_chars] = ACTIONS(119),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_nil] = ACTIONS(123),
    [sym_true] = ACTIONS(123),
    [sym_false] = ACTIONS(123),
    [sym_number_long] = ACTIONS(123),
    [sym_number_double] = ACTIONS(121),
    [sym_number_bigint] = ACTIONS(123),
    [sym_number_ratio] = ACTIONS(121),
    [anon_sym_POUND_POUND] = ACTIONS(121),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(121),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_TILDE_AT] = ACTIONS(121),
    [sym_gensym] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_POUND] = ACTIONS(123),
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
    [anon_sym_POUND_POUND] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_LPARENquote] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(129),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(125),
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
    [anon_sym_POUND] = ACTIONS(127),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_number_long] = ACTIONS(133),
    [sym_number_double] = ACTIONS(131),
    [sym_number_bigint] = ACTIONS(133),
    [sym_number_ratio] = ACTIONS(131),
    [anon_sym_POUND_POUND] = ACTIONS(131),
    [anon_sym_BSLASH] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_POUND_DQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_LPARENquote] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(133),
    [anon_sym_DASH_GT_GT] = ACTIONS(131),
    [anon_sym_as_DASH_GT] = ACTIONS(131),
    [anon_sym_some_DASH_GT] = ACTIONS(133),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(131),
    [anon_sym_cond_DASH_GT] = ACTIONS(133),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(131),
    [sym__symbol_chars] = ACTIONS(133),
    [sym_member_access] = ACTIONS(131),
    [sym_field_access] = ACTIONS(131),
    [sym_new_class] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(131),
    [anon_sym_POUND_LBRACE] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_POUND_BANG] = ACTIONS(131),
    [anon_sym_POUND_] = ACTIONS(131),
    [anon_sym_POUND_LPAREN] = ACTIONS(131),
    [sym_shorthand_function_arg] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_CARET_COLON] = ACTIONS(131),
    [anon_sym_CARET_DQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_POUND_SQUOTE] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_TILDE_AT] = ACTIONS(131),
    [sym_gensym] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(133),
  },
  [14] = {
    [sym__anything] = STATE(78),
    [sym__literals] = STATE(78),
    [sym__collection_literals] = STATE(78),
    [sym_boolean] = STATE(78),
    [sym_number] = STATE(78),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(78),
    [sym_character] = STATE(78),
    [sym__character] = STATE(35),
    [sym_string] = STATE(78),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(78),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(78),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(78),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(78),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(78),
    [sym_list] = STATE(78),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(78),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(78),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(78),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(78),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(78),
    [sym_anonymous_function] = STATE(78),
    [sym_shorthand_function] = STATE(78),
    [sym_defn] = STATE(78),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(78),
    [sym_var_quote] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_unquote_splice] = STATE(78),
    [sym_deref] = STATE(78),
    [sym_tagged_literal] = STATE(78),
    [aux_sym_program_repeat1] = STATE(78),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(135),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(139),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_comment] = ACTIONS(143),
    [anon_sym_fn] = ACTIONS(145),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(147),
    [anon_sym_defn] = ACTIONS(149),
    [anon_sym_defn_DASH] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [15] = {
    [sym__anything] = STATE(85),
    [sym__literals] = STATE(85),
    [sym__collection_literals] = STATE(85),
    [sym_boolean] = STATE(85),
    [sym_number] = STATE(85),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(85),
    [sym_character] = STATE(85),
    [sym__character] = STATE(35),
    [sym_string] = STATE(85),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(85),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(85),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(85),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(85),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(85),
    [sym_list] = STATE(85),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(85),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(85),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(85),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(85),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(85),
    [sym_anonymous_function] = STATE(85),
    [sym_shorthand_function] = STATE(85),
    [sym_defn] = STATE(85),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(85),
    [sym_var_quote] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splice] = STATE(85),
    [sym_deref] = STATE(85),
    [sym_tagged_literal] = STATE(85),
    [aux_sym_program_repeat1] = STATE(85),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(157),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [16] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(93),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(93),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [17] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(95),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(95),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(191),
  },
  [19] = {
    [sym__anything] = STATE(103),
    [sym__literals] = STATE(103),
    [sym__collection_literals] = STATE(103),
    [sym_boolean] = STATE(103),
    [sym_number] = STATE(103),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(103),
    [sym_character] = STATE(103),
    [sym__character] = STATE(35),
    [sym_string] = STATE(103),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(103),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(103),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(103),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(103),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(103),
    [sym_list] = STATE(103),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(103),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(103),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(103),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(103),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(103),
    [sym_anonymous_function] = STATE(103),
    [sym_shorthand_function] = STATE(103),
    [sym_defn] = STATE(103),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(103),
    [sym_var_quote] = STATE(103),
    [sym_unquote] = STATE(103),
    [sym_unquote_splice] = STATE(103),
    [sym_deref] = STATE(103),
    [sym_tagged_literal] = STATE(103),
    [aux_sym_program_repeat1] = STATE(103),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(193),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(209),
  },
  [21] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(211),
  },
  [22] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [23] = {
    [sym__anything] = STATE(108),
    [sym__literals] = STATE(108),
    [sym__collection_literals] = STATE(108),
    [sym_boolean] = STATE(108),
    [sym_number] = STATE(108),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(108),
    [sym_character] = STATE(108),
    [sym__character] = STATE(35),
    [sym_string] = STATE(108),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(108),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(108),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(108),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(108),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(108),
    [sym_list] = STATE(108),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(108),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(108),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(108),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(108),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(108),
    [sym_anonymous_function] = STATE(108),
    [sym_shorthand_function] = STATE(108),
    [sym_defn] = STATE(108),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(108),
    [sym_var_quote] = STATE(108),
    [sym_unquote] = STATE(108),
    [sym_unquote_splice] = STATE(108),
    [sym_deref] = STATE(108),
    [sym_tagged_literal] = STATE(108),
    [aux_sym_program_repeat1] = STATE(108),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(217),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(219),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [24] = {
    [sym_hash_map] = STATE(113),
    [sym__hash_map] = STATE(114),
    [sym_namespace_map] = STATE(114),
    [sym__symbol_chars] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(229),
  },
  [25] = {
    [sym__keyword_chars] = ACTIONS(223),
  },
  [26] = {
    [aux_sym__string_repeat1] = STATE(115),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(233),
  },
  [27] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [28] = {
    [sym_symbol] = STATE(117),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
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
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [30] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [31] = {
    [sym_symbol] = STATE(121),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_list] = STATE(121),
    [sym__list] = STATE(42),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_as_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT] = ACTIONS(31),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT] = ACTIONS(31),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(33),
    [sym__symbol_chars] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(247),
  },
  [32] = {
    [sym__qualified_symbol] = STATE(123),
    [sym__symbol_chars] = ACTIONS(249),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(251),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(253),
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
    [anon_sym_POUND] = ACTIONS(255),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(257),
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
    [anon_sym_POUND] = ACTIONS(259),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(261),
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
    [anon_sym_POUND] = ACTIONS(263),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(265),
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
    [anon_sym_POUND] = ACTIONS(267),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(269),
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
    [anon_sym_POUND] = ACTIONS(271),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(273),
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
    [anon_sym_POUND] = ACTIONS(275),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(277),
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
    [anon_sym_POUND] = ACTIONS(279),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(281),
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
    [anon_sym_POUND] = ACTIONS(283),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(285),
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
    [anon_sym_POUND] = ACTIONS(287),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(289),
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
    [anon_sym_POUND] = ACTIONS(291),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(293),
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
    [anon_sym_POUND] = ACTIONS(295),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_nil] = ACTIONS(299),
    [sym_true] = ACTIONS(299),
    [sym_false] = ACTIONS(299),
    [sym_number_long] = ACTIONS(299),
    [sym_number_double] = ACTIONS(297),
    [sym_number_bigint] = ACTIONS(299),
    [sym_number_ratio] = ACTIONS(297),
    [anon_sym_POUND_POUND] = ACTIONS(297),
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
    [sym_member_access] = ACTIONS(297),
    [sym_field_access] = ACTIONS(297),
    [sym_new_class] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(297),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(297),
    [anon_sym_POUND_LBRACE] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(297),
    [anon_sym_POUND_] = ACTIONS(297),
    [anon_sym_POUND_LPAREN] = ACTIONS(297),
    [sym_shorthand_function_arg] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(299),
    [anon_sym_CARET_COLON] = ACTIONS(297),
    [anon_sym_CARET_DQUOTE] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_POUND_SQUOTE] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_TILDE_AT] = ACTIONS(297),
    [sym_gensym] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(299),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_nil] = ACTIONS(303),
    [sym_true] = ACTIONS(303),
    [sym_false] = ACTIONS(303),
    [sym_number_long] = ACTIONS(303),
    [sym_number_double] = ACTIONS(301),
    [sym_number_bigint] = ACTIONS(303),
    [sym_number_ratio] = ACTIONS(301),
    [anon_sym_POUND_POUND] = ACTIONS(301),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(301),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_TILDE_AT] = ACTIONS(301),
    [sym_gensym] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(303),
  },
  [47] = {
    [sym_list] = STATE(124),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(124),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(124),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(124),
    [sym__set] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
  },
  [48] = {
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_DASH_GT_GT] = ACTIONS(307),
    [anon_sym_as_DASH_GT] = ACTIONS(307),
    [anon_sym_some_DASH_GT] = ACTIONS(305),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(307),
    [anon_sym_cond_DASH_GT] = ACTIONS(305),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(307),
    [sym__symbol_chars] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(307),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(307),
    [anon_sym_POUND_LBRACE] = ACTIONS(307),
  },
  [49] = {
    [sym__anything] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__collection_literals] = STATE(125),
    [sym_boolean] = STATE(125),
    [sym_number] = STATE(125),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(125),
    [sym_character] = STATE(125),
    [sym__character] = STATE(35),
    [sym_string] = STATE(125),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(125),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(125),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(125),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(125),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(125),
    [sym_list] = STATE(125),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(125),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(125),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(125),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(125),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(125),
    [sym_anonymous_function] = STATE(125),
    [sym_shorthand_function] = STATE(125),
    [sym_defn] = STATE(125),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(125),
    [sym_var_quote] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splice] = STATE(125),
    [sym_deref] = STATE(125),
    [sym_tagged_literal] = STATE(125),
    [aux_sym_program_repeat1] = STATE(125),
    [aux_sym_metadata_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_nil] = ACTIONS(311),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_TILDE_AT] = ACTIONS(73),
    [sym_gensym] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [50] = {
    [sym_metadata_shorthand] = STATE(127),
    [aux_sym_metadata_repeat1] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(307),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(307),
    [anon_sym_POUND_LBRACE] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_nil] = ACTIONS(319),
    [sym_true] = ACTIONS(319),
    [sym_false] = ACTIONS(319),
    [sym_number_long] = ACTIONS(319),
    [sym_number_double] = ACTIONS(317),
    [sym_number_bigint] = ACTIONS(319),
    [sym_number_ratio] = ACTIONS(317),
    [anon_sym_POUND_POUND] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_POUND_DQUOTE] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_LPARENquote] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_COLON_COLON] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(319),
    [anon_sym_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_as_DASH_GT] = ACTIONS(317),
    [anon_sym_some_DASH_GT] = ACTIONS(319),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(317),
    [anon_sym_cond_DASH_GT] = ACTIONS(319),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(317),
    [sym__symbol_chars] = ACTIONS(319),
    [sym_member_access] = ACTIONS(317),
    [sym_field_access] = ACTIONS(317),
    [sym_new_class] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(317),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(317),
    [anon_sym_POUND_LBRACE] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_POUND_BANG] = ACTIONS(317),
    [anon_sym_POUND_] = ACTIONS(317),
    [anon_sym_POUND_LPAREN] = ACTIONS(317),
    [sym_shorthand_function_arg] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(319),
    [anon_sym_CARET_COLON] = ACTIONS(317),
    [anon_sym_CARET_DQUOTE] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_POUND_SQUOTE] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_TILDE_AT] = ACTIONS(317),
    [sym_gensym] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(319),
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
    [anon_sym_POUND_POUND] = ACTIONS(321),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(321),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_TILDE_AT] = ACTIONS(321),
    [sym_gensym] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(323),
  },
  [53] = {
    [sym__hex_char] = ACTIONS(325),
  },
  [54] = {
    [sym__octal_num] = STATE(129),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(329),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(331),
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
    [anon_sym_POUND] = ACTIONS(333),
  },
  [56] = {
    [aux_sym__string_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(337),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(339),
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
    [anon_sym_POUND] = ACTIONS(341),
  },
  [58] = {
    [aux_sym__regex_repeat1] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(345),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(345),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym_nil] = ACTIONS(349),
    [sym_true] = ACTIONS(349),
    [sym_false] = ACTIONS(349),
    [sym_number_long] = ACTIONS(349),
    [sym_number_double] = ACTIONS(347),
    [sym_number_bigint] = ACTIONS(349),
    [sym_number_ratio] = ACTIONS(347),
    [anon_sym_POUND_POUND] = ACTIONS(347),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(347),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_TILDE_AT] = ACTIONS(347),
    [sym_gensym] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(349),
  },
  [60] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [61] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [62] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [63] = {
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [64] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [anon_sym_SQUOTE] = ACTIONS(105),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_TILDE_AT] = ACTIONS(115),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(351),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_nil] = ACTIONS(355),
    [sym_true] = ACTIONS(355),
    [sym_false] = ACTIONS(355),
    [sym_number_long] = ACTIONS(355),
    [sym_number_double] = ACTIONS(353),
    [sym_number_bigint] = ACTIONS(355),
    [sym_number_ratio] = ACTIONS(353),
    [anon_sym_POUND_POUND] = ACTIONS(353),
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
    [sym_member_access] = ACTIONS(353),
    [sym_field_access] = ACTIONS(353),
    [sym_new_class] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(353),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(353),
    [anon_sym_POUND_LBRACE] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_POUND_BANG] = ACTIONS(353),
    [anon_sym_POUND_] = ACTIONS(353),
    [anon_sym_POUND_LPAREN] = ACTIONS(353),
    [sym_shorthand_function_arg] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(355),
    [anon_sym_CARET_COLON] = ACTIONS(353),
    [anon_sym_CARET_DQUOTE] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_POUND_SQUOTE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_TILDE_AT] = ACTIONS(353),
    [sym_gensym] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(355),
  },
  [67] = {
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
    [anon_sym_SLASH] = ACTIONS(361),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(357),
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
    [anon_sym_POUND] = ACTIONS(359),
  },
  [68] = {
    [sym__symbol_chars] = ACTIONS(363),
  },
  [69] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [sym_nil] = ACTIONS(367),
    [sym_true] = ACTIONS(367),
    [sym_false] = ACTIONS(367),
    [sym_number_long] = ACTIONS(367),
    [sym_number_double] = ACTIONS(365),
    [sym_number_bigint] = ACTIONS(367),
    [sym_number_ratio] = ACTIONS(365),
    [anon_sym_POUND_POUND] = ACTIONS(365),
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
    [sym_member_access] = ACTIONS(365),
    [sym_field_access] = ACTIONS(365),
    [sym_new_class] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(365),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(365),
    [anon_sym_POUND_LBRACE] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_POUND_BANG] = ACTIONS(365),
    [anon_sym_POUND_] = ACTIONS(365),
    [anon_sym_POUND_LPAREN] = ACTIONS(365),
    [sym_shorthand_function_arg] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(367),
    [anon_sym_CARET_COLON] = ACTIONS(365),
    [anon_sym_CARET_DQUOTE] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [anon_sym_POUND_SQUOTE] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_TILDE_AT] = ACTIONS(365),
    [sym_gensym] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(367),
  },
  [71] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [72] = {
    [sym__anything] = STATE(138),
    [sym__literals] = STATE(138),
    [sym__collection_literals] = STATE(138),
    [sym_boolean] = STATE(138),
    [sym_number] = STATE(138),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(138),
    [sym_character] = STATE(138),
    [sym__character] = STATE(35),
    [sym_string] = STATE(138),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(138),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(138),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(138),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(138),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(138),
    [sym_list] = STATE(138),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(138),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(138),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(138),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(138),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(138),
    [sym_anonymous_function] = STATE(138),
    [sym_shorthand_function] = STATE(138),
    [sym_defn] = STATE(138),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(138),
    [sym_var_quote] = STATE(138),
    [sym_unquote] = STATE(138),
    [sym_unquote_splice] = STATE(138),
    [sym_deref] = STATE(138),
    [sym_tagged_literal] = STATE(138),
    [aux_sym_program_repeat1] = STATE(138),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(369),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(371),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [73] = {
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(143),
    [sym_threading_macro] = STATE(143),
    [sym_qualified_symbol] = STATE(143),
    [sym__qualified_symbol] = STATE(144),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__after_the_fn_name] = STATE(146),
    [sym_function_name] = STATE(147),
    [sym__single_arity_fn] = STATE(146),
    [sym__multi_arity_fn] = STATE(146),
    [sym_params] = STATE(148),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_as_DASH_GT] = ACTIONS(377),
    [anon_sym_some_DASH_GT] = ACTIONS(375),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_cond_DASH_GT] = ACTIONS(375),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(377),
    [sym__symbol_chars] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [74] = {
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(143),
    [sym_threading_macro] = STATE(143),
    [sym_qualified_symbol] = STATE(143),
    [sym__qualified_symbol] = STATE(144),
    [sym_function_name] = STATE(150),
    [sym_metadata] = STATE(151),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(152),
    [aux_sym_metadata_repeat1] = STATE(152),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_as_DASH_GT] = ACTIONS(377),
    [anon_sym_some_DASH_GT] = ACTIONS(375),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_cond_DASH_GT] = ACTIONS(375),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(377),
    [sym__symbol_chars] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [75] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [76] = {
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [77] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [78] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(154),
    [sym_character] = STATE(154),
    [sym__character] = STATE(35),
    [sym_string] = STATE(154),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(154),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(154),
    [sym_var_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [sym_tagged_literal] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(383),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(385),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [79] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_nil] = ACTIONS(391),
    [sym_true] = ACTIONS(391),
    [sym_false] = ACTIONS(391),
    [sym_number_long] = ACTIONS(391),
    [sym_number_double] = ACTIONS(389),
    [sym_number_bigint] = ACTIONS(391),
    [sym_number_ratio] = ACTIONS(389),
    [anon_sym_POUND_POUND] = ACTIONS(389),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(389),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_TILDE_AT] = ACTIONS(389),
    [sym_gensym] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
  },
  [81] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [82] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [83] = {
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [84] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [85] = {
    [sym__anything] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__collection_literals] = STATE(156),
    [sym_boolean] = STATE(156),
    [sym_number] = STATE(156),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(156),
    [sym_character] = STATE(156),
    [sym__character] = STATE(35),
    [sym_string] = STATE(156),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(156),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(156),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(156),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(156),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(156),
    [sym_list] = STATE(156),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(156),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(156),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(156),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(156),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(156),
    [sym_anonymous_function] = STATE(156),
    [sym_shorthand_function] = STATE(156),
    [sym_defn] = STATE(156),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(156),
    [sym_var_quote] = STATE(156),
    [sym_unquote] = STATE(156),
    [sym_unquote_splice] = STATE(156),
    [sym_deref] = STATE(156),
    [sym_tagged_literal] = STATE(156),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(393),
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
    [anon_sym_SQUOTE] = ACTIONS(159),
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
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_TILDE_AT] = ACTIONS(171),
    [sym_gensym] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [86] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_nil] = ACTIONS(401),
    [sym_true] = ACTIONS(401),
    [sym_false] = ACTIONS(401),
    [sym_number_long] = ACTIONS(401),
    [sym_number_double] = ACTIONS(399),
    [sym_number_bigint] = ACTIONS(401),
    [sym_number_ratio] = ACTIONS(399),
    [anon_sym_POUND_POUND] = ACTIONS(399),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(399),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_TILDE_AT] = ACTIONS(399),
    [sym_gensym] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(401),
  },
  [88] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [89] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [90] = {
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [91] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [92] = {
    [sym__anything] = STATE(157),
    [sym__literals] = STATE(157),
    [sym__collection_literals] = STATE(157),
    [sym_boolean] = STATE(157),
    [sym_number] = STATE(157),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(157),
    [sym_character] = STATE(157),
    [sym__character] = STATE(35),
    [sym_string] = STATE(157),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(157),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(157),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(157),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(157),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(157),
    [sym_list] = STATE(157),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(157),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(157),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_value] = STATE(157),
    [sym_set] = STATE(157),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(157),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(157),
    [sym_anonymous_function] = STATE(157),
    [sym_shorthand_function] = STATE(157),
    [sym_defn] = STATE(157),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(157),
    [sym_var_quote] = STATE(157),
    [sym_unquote] = STATE(157),
    [sym_unquote_splice] = STATE(157),
    [sym_deref] = STATE(157),
    [sym_tagged_literal] = STATE(157),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(403),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [93] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [94] = {
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(409),
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
    [anon_sym_POUND] = ACTIONS(411),
  },
  [95] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [96] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(161),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(161),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [97] = {
    [sym__anything] = STATE(59),
    [sym__literals] = STATE(59),
    [sym__collection_literals] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(59),
    [sym_character] = STATE(59),
    [sym__character] = STATE(35),
    [sym_string] = STATE(59),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(59),
    [sym_list] = STATE(59),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(59),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(59),
    [sym_anonymous_function] = STATE(59),
    [sym_shorthand_function] = STATE(59),
    [sym_defn] = STATE(59),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(59),
    [sym_var_quote] = STATE(59),
    [sym_unquote] = STATE(59),
    [sym_unquote_splice] = STATE(59),
    [sym_deref] = STATE(59),
    [sym_tagged_literal] = STATE(59),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_nil] = ACTIONS(417),
    [sym_true] = ACTIONS(417),
    [sym_false] = ACTIONS(417),
    [sym_number_long] = ACTIONS(417),
    [sym_number_double] = ACTIONS(415),
    [sym_number_bigint] = ACTIONS(417),
    [sym_number_ratio] = ACTIONS(415),
    [anon_sym_POUND_POUND] = ACTIONS(415),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(415),
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
    [anon_sym_POUND] = ACTIONS(417),
  },
  [99] = {
    [sym__anything] = STATE(106),
    [sym__literals] = STATE(106),
    [sym__collection_literals] = STATE(106),
    [sym_boolean] = STATE(106),
    [sym_number] = STATE(106),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(106),
    [sym_character] = STATE(106),
    [sym__character] = STATE(35),
    [sym_string] = STATE(106),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(106),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(106),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(106),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(106),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(106),
    [sym_list] = STATE(106),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(106),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(106),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(106),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(106),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(106),
    [sym_anonymous_function] = STATE(106),
    [sym_shorthand_function] = STATE(106),
    [sym_defn] = STATE(106),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(106),
    [sym_var_quote] = STATE(106),
    [sym_unquote] = STATE(106),
    [sym_unquote_splice] = STATE(106),
    [sym_deref] = STATE(106),
    [sym_tagged_literal] = STATE(106),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(213),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [100] = {
    [sym__anything] = STATE(116),
    [sym__literals] = STATE(116),
    [sym__collection_literals] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(116),
    [sym_character] = STATE(116),
    [sym__character] = STATE(35),
    [sym_string] = STATE(116),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(116),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(116),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(116),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(116),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(116),
    [sym_list] = STATE(116),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(116),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(116),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(116),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(116),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(116),
    [sym_anonymous_function] = STATE(116),
    [sym_shorthand_function] = STATE(116),
    [sym_defn] = STATE(116),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(116),
    [sym_var_quote] = STATE(116),
    [sym_unquote] = STATE(116),
    [sym_unquote_splice] = STATE(116),
    [sym_deref] = STATE(116),
    [sym_tagged_literal] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(235),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [101] = {
    [sym__anything] = STATE(118),
    [sym__literals] = STATE(118),
    [sym__collection_literals] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(118),
    [sym_character] = STATE(118),
    [sym__character] = STATE(35),
    [sym_string] = STATE(118),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(118),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(118),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(118),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(118),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(118),
    [sym_list] = STATE(118),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(118),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(118),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(118),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(118),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(118),
    [sym_anonymous_function] = STATE(118),
    [sym_shorthand_function] = STATE(118),
    [sym_defn] = STATE(118),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(118),
    [sym_var_quote] = STATE(118),
    [sym_unquote] = STATE(118),
    [sym_unquote_splice] = STATE(118),
    [sym_deref] = STATE(118),
    [sym_tagged_literal] = STATE(118),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [102] = {
    [sym__anything] = STATE(119),
    [sym__literals] = STATE(119),
    [sym__collection_literals] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(119),
    [sym_character] = STATE(119),
    [sym__character] = STATE(35),
    [sym_string] = STATE(119),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(119),
    [sym_list] = STATE(119),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(119),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(119),
    [sym_anonymous_function] = STATE(119),
    [sym_shorthand_function] = STATE(119),
    [sym_defn] = STATE(119),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(119),
    [sym_var_quote] = STATE(119),
    [sym_unquote] = STATE(119),
    [sym_unquote_splice] = STATE(119),
    [sym_deref] = STATE(119),
    [sym_tagged_literal] = STATE(119),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(243),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [103] = {
    [sym__anything] = STATE(163),
    [sym__literals] = STATE(163),
    [sym__collection_literals] = STATE(163),
    [sym_boolean] = STATE(163),
    [sym_number] = STATE(163),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(163),
    [sym_character] = STATE(163),
    [sym__character] = STATE(35),
    [sym_string] = STATE(163),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(163),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(163),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(163),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(163),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(163),
    [sym_list] = STATE(163),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(163),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(163),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(163),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(163),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(163),
    [sym_anonymous_function] = STATE(163),
    [sym_shorthand_function] = STATE(163),
    [sym_defn] = STATE(163),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(163),
    [sym_var_quote] = STATE(163),
    [sym_unquote] = STATE(163),
    [sym_unquote_splice] = STATE(163),
    [sym_deref] = STATE(163),
    [sym_tagged_literal] = STATE(163),
    [aux_sym_program_repeat1] = STATE(163),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(419),
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
    [anon_sym_SQUOTE] = ACTIONS(195),
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
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(423),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_TILDE_AT] = ACTIONS(207),
    [sym_gensym] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym_nil] = ACTIONS(427),
    [sym_true] = ACTIONS(427),
    [sym_false] = ACTIONS(427),
    [sym_number_long] = ACTIONS(427),
    [sym_number_double] = ACTIONS(425),
    [sym_number_bigint] = ACTIONS(427),
    [sym_number_ratio] = ACTIONS(425),
    [anon_sym_POUND_POUND] = ACTIONS(425),
    [anon_sym_BSLASH] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_POUND_DQUOTE] = ACTIONS(425),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [anon_sym_LPARENquote] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_COLON_COLON] = ACTIONS(425),
    [anon_sym_DASH_GT] = ACTIONS(427),
    [anon_sym_DASH_GT_GT] = ACTIONS(425),
    [anon_sym_as_DASH_GT] = ACTIONS(425),
    [anon_sym_some_DASH_GT] = ACTIONS(427),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(425),
    [anon_sym_cond_DASH_GT] = ACTIONS(427),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(425),
    [sym__symbol_chars] = ACTIONS(427),
    [sym_member_access] = ACTIONS(425),
    [sym_field_access] = ACTIONS(425),
    [sym_new_class] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(425),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(425),
    [anon_sym_POUND_LBRACE] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_POUND_BANG] = ACTIONS(425),
    [anon_sym_POUND_] = ACTIONS(425),
    [anon_sym_POUND_LPAREN] = ACTIONS(425),
    [sym_shorthand_function_arg] = ACTIONS(425),
    [anon_sym_CARET] = ACTIONS(427),
    [anon_sym_CARET_COLON] = ACTIONS(425),
    [anon_sym_CARET_DQUOTE] = ACTIONS(425),
    [anon_sym_BQUOTE] = ACTIONS(425),
    [anon_sym_POUND_SQUOTE] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_TILDE_AT] = ACTIONS(425),
    [sym_gensym] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(427),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [sym_nil] = ACTIONS(431),
    [sym_true] = ACTIONS(431),
    [sym_false] = ACTIONS(431),
    [sym_number_long] = ACTIONS(431),
    [sym_number_double] = ACTIONS(429),
    [sym_number_bigint] = ACTIONS(431),
    [sym_number_ratio] = ACTIONS(429),
    [anon_sym_POUND_POUND] = ACTIONS(429),
    [anon_sym_BSLASH] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_POUND_DQUOTE] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_LPARENquote] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [anon_sym_DASH_GT] = ACTIONS(431),
    [anon_sym_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_as_DASH_GT] = ACTIONS(429),
    [anon_sym_some_DASH_GT] = ACTIONS(431),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(429),
    [anon_sym_cond_DASH_GT] = ACTIONS(431),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(429),
    [sym__symbol_chars] = ACTIONS(431),
    [sym_member_access] = ACTIONS(429),
    [sym_field_access] = ACTIONS(429),
    [sym_new_class] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(429),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(429),
    [anon_sym_POUND_LBRACE] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(429),
    [anon_sym_POUND_] = ACTIONS(429),
    [anon_sym_POUND_LPAREN] = ACTIONS(429),
    [sym_shorthand_function_arg] = ACTIONS(429),
    [anon_sym_CARET] = ACTIONS(431),
    [anon_sym_CARET_COLON] = ACTIONS(429),
    [anon_sym_CARET_DQUOTE] = ACTIONS(429),
    [anon_sym_BQUOTE] = ACTIONS(429),
    [anon_sym_POUND_SQUOTE] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_TILDE_AT] = ACTIONS(429),
    [sym_gensym] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(431),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_nil] = ACTIONS(435),
    [sym_true] = ACTIONS(435),
    [sym_false] = ACTIONS(435),
    [sym_number_long] = ACTIONS(435),
    [sym_number_double] = ACTIONS(433),
    [sym_number_bigint] = ACTIONS(435),
    [sym_number_ratio] = ACTIONS(433),
    [anon_sym_POUND_POUND] = ACTIONS(433),
    [anon_sym_BSLASH] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_POUND_DQUOTE] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_LPARENquote] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(433),
    [anon_sym_DASH_GT] = ACTIONS(435),
    [anon_sym_DASH_GT_GT] = ACTIONS(433),
    [anon_sym_as_DASH_GT] = ACTIONS(433),
    [anon_sym_some_DASH_GT] = ACTIONS(435),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(433),
    [anon_sym_cond_DASH_GT] = ACTIONS(435),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(433),
    [sym__symbol_chars] = ACTIONS(435),
    [sym_member_access] = ACTIONS(433),
    [sym_field_access] = ACTIONS(433),
    [sym_new_class] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(433),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(433),
    [anon_sym_POUND_LBRACE] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_POUND_BANG] = ACTIONS(433),
    [anon_sym_POUND_] = ACTIONS(433),
    [anon_sym_POUND_LPAREN] = ACTIONS(433),
    [sym_shorthand_function_arg] = ACTIONS(433),
    [anon_sym_CARET] = ACTIONS(435),
    [anon_sym_CARET_COLON] = ACTIONS(433),
    [anon_sym_CARET_DQUOTE] = ACTIONS(433),
    [anon_sym_BQUOTE] = ACTIONS(433),
    [anon_sym_POUND_SQUOTE] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_TILDE_AT] = ACTIONS(433),
    [sym_gensym] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(435),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_nil] = ACTIONS(439),
    [sym_true] = ACTIONS(439),
    [sym_false] = ACTIONS(439),
    [sym_number_long] = ACTIONS(439),
    [sym_number_double] = ACTIONS(437),
    [sym_number_bigint] = ACTIONS(439),
    [sym_number_ratio] = ACTIONS(437),
    [anon_sym_POUND_POUND] = ACTIONS(437),
    [anon_sym_BSLASH] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_POUND_DQUOTE] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_LPARENquote] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(437),
    [anon_sym_DASH_GT] = ACTIONS(439),
    [anon_sym_DASH_GT_GT] = ACTIONS(437),
    [anon_sym_as_DASH_GT] = ACTIONS(437),
    [anon_sym_some_DASH_GT] = ACTIONS(439),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(437),
    [anon_sym_cond_DASH_GT] = ACTIONS(439),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(437),
    [sym__symbol_chars] = ACTIONS(439),
    [sym_member_access] = ACTIONS(437),
    [sym_field_access] = ACTIONS(437),
    [sym_new_class] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(437),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(437),
    [anon_sym_POUND_LBRACE] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_POUND_BANG] = ACTIONS(437),
    [anon_sym_POUND_] = ACTIONS(437),
    [anon_sym_POUND_LPAREN] = ACTIONS(437),
    [sym_shorthand_function_arg] = ACTIONS(437),
    [anon_sym_CARET] = ACTIONS(439),
    [anon_sym_CARET_COLON] = ACTIONS(437),
    [anon_sym_CARET_DQUOTE] = ACTIONS(437),
    [anon_sym_BQUOTE] = ACTIONS(437),
    [anon_sym_POUND_SQUOTE] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_TILDE_AT] = ACTIONS(437),
    [sym_gensym] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(439),
  },
  [108] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(154),
    [sym_character] = STATE(154),
    [sym__character] = STATE(35),
    [sym_string] = STATE(154),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(154),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(154),
    [sym_var_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [sym_tagged_literal] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(383),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(441),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [109] = {
    [anon_sym_DASH_GT] = ACTIONS(443),
    [anon_sym_DASH_GT_GT] = ACTIONS(445),
    [anon_sym_as_DASH_GT] = ACTIONS(445),
    [anon_sym_some_DASH_GT] = ACTIONS(443),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(445),
    [anon_sym_cond_DASH_GT] = ACTIONS(443),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(445),
    [sym__symbol_chars] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(445),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(445),
    [anon_sym_POUND_LBRACE] = ACTIONS(445),
    [anon_sym_CARET] = ACTIONS(443),
    [anon_sym_CARET_COLON] = ACTIONS(445),
    [anon_sym_CARET_DQUOTE] = ACTIONS(445),
  },
  [110] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(166),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(166),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [111] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(168),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(168),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(451),
  },
  [113] = {
    [anon_sym_DASH_GT] = ACTIONS(453),
    [anon_sym_DASH_GT_GT] = ACTIONS(455),
    [anon_sym_as_DASH_GT] = ACTIONS(455),
    [anon_sym_some_DASH_GT] = ACTIONS(453),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(455),
    [anon_sym_cond_DASH_GT] = ACTIONS(453),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(455),
    [sym__symbol_chars] = ACTIONS(453),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(455),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(455),
    [anon_sym_POUND_LBRACE] = ACTIONS(455),
  },
  [114] = {
    [anon_sym_DASH_GT] = ACTIONS(295),
    [anon_sym_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_as_DASH_GT] = ACTIONS(293),
    [anon_sym_some_DASH_GT] = ACTIONS(295),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(293),
    [anon_sym_cond_DASH_GT] = ACTIONS(295),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(293),
    [sym__symbol_chars] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(293),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(293),
    [anon_sym_POUND_LBRACE] = ACTIONS(293),
  },
  [115] = {
    [aux_sym__string_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(337),
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
    [anon_sym_POUND_POUND] = ACTIONS(459),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(459),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_TILDE_AT] = ACTIONS(459),
    [sym_gensym] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(461),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_nil] = ACTIONS(465),
    [sym_true] = ACTIONS(465),
    [sym_false] = ACTIONS(465),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(463),
    [sym_number_bigint] = ACTIONS(465),
    [sym_number_ratio] = ACTIONS(463),
    [anon_sym_POUND_POUND] = ACTIONS(463),
    [anon_sym_BSLASH] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [anon_sym_POUND_DQUOTE] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_LPARENquote] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_COLON_COLON] = ACTIONS(463),
    [anon_sym_DASH_GT] = ACTIONS(465),
    [anon_sym_DASH_GT_GT] = ACTIONS(463),
    [anon_sym_as_DASH_GT] = ACTIONS(463),
    [anon_sym_some_DASH_GT] = ACTIONS(465),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(463),
    [anon_sym_cond_DASH_GT] = ACTIONS(465),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(463),
    [sym__symbol_chars] = ACTIONS(465),
    [sym_member_access] = ACTIONS(463),
    [sym_field_access] = ACTIONS(463),
    [sym_new_class] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(463),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(463),
    [anon_sym_POUND_LBRACE] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_POUND_BANG] = ACTIONS(463),
    [anon_sym_POUND_] = ACTIONS(463),
    [anon_sym_POUND_LPAREN] = ACTIONS(463),
    [sym_shorthand_function_arg] = ACTIONS(463),
    [anon_sym_CARET] = ACTIONS(465),
    [anon_sym_CARET_COLON] = ACTIONS(463),
    [anon_sym_CARET_DQUOTE] = ACTIONS(463),
    [anon_sym_BQUOTE] = ACTIONS(463),
    [anon_sym_POUND_SQUOTE] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_TILDE_AT] = ACTIONS(463),
    [sym_gensym] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(465),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [sym_nil] = ACTIONS(469),
    [sym_true] = ACTIONS(469),
    [sym_false] = ACTIONS(469),
    [sym_number_long] = ACTIONS(469),
    [sym_number_double] = ACTIONS(467),
    [sym_number_bigint] = ACTIONS(469),
    [sym_number_ratio] = ACTIONS(467),
    [anon_sym_POUND_POUND] = ACTIONS(467),
    [anon_sym_BSLASH] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_POUND_DQUOTE] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [anon_sym_LPARENquote] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(467),
    [anon_sym_DASH_GT] = ACTIONS(469),
    [anon_sym_DASH_GT_GT] = ACTIONS(467),
    [anon_sym_as_DASH_GT] = ACTIONS(467),
    [anon_sym_some_DASH_GT] = ACTIONS(469),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(467),
    [anon_sym_cond_DASH_GT] = ACTIONS(469),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(467),
    [sym__symbol_chars] = ACTIONS(469),
    [sym_member_access] = ACTIONS(467),
    [sym_field_access] = ACTIONS(467),
    [sym_new_class] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(467),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(467),
    [anon_sym_POUND_LBRACE] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_POUND_BANG] = ACTIONS(467),
    [anon_sym_POUND_] = ACTIONS(467),
    [anon_sym_POUND_LPAREN] = ACTIONS(467),
    [sym_shorthand_function_arg] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(469),
    [anon_sym_CARET_COLON] = ACTIONS(467),
    [anon_sym_CARET_DQUOTE] = ACTIONS(467),
    [anon_sym_BQUOTE] = ACTIONS(467),
    [anon_sym_POUND_SQUOTE] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_TILDE_AT] = ACTIONS(467),
    [sym_gensym] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(469),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_nil] = ACTIONS(473),
    [sym_true] = ACTIONS(473),
    [sym_false] = ACTIONS(473),
    [sym_number_long] = ACTIONS(473),
    [sym_number_double] = ACTIONS(471),
    [sym_number_bigint] = ACTIONS(473),
    [sym_number_ratio] = ACTIONS(471),
    [anon_sym_POUND_POUND] = ACTIONS(471),
    [anon_sym_BSLASH] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_POUND_DQUOTE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_LPARENquote] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_COLON_COLON] = ACTIONS(471),
    [anon_sym_DASH_GT] = ACTIONS(473),
    [anon_sym_DASH_GT_GT] = ACTIONS(471),
    [anon_sym_as_DASH_GT] = ACTIONS(471),
    [anon_sym_some_DASH_GT] = ACTIONS(473),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(471),
    [anon_sym_cond_DASH_GT] = ACTIONS(473),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(471),
    [sym__symbol_chars] = ACTIONS(473),
    [sym_member_access] = ACTIONS(471),
    [sym_field_access] = ACTIONS(471),
    [sym_new_class] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(471),
    [anon_sym_POUND_LBRACE] = ACTIONS(471),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_POUND_BANG] = ACTIONS(471),
    [anon_sym_POUND_] = ACTIONS(471),
    [anon_sym_POUND_LPAREN] = ACTIONS(471),
    [sym_shorthand_function_arg] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(473),
    [anon_sym_CARET_COLON] = ACTIONS(471),
    [anon_sym_CARET_DQUOTE] = ACTIONS(471),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [anon_sym_POUND_SQUOTE] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_TILDE_AT] = ACTIONS(471),
    [sym_gensym] = ACTIONS(471),
    [anon_sym_AT] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(473),
  },
  [120] = {
    [sym__anything] = STATE(78),
    [sym__literals] = STATE(78),
    [sym__collection_literals] = STATE(78),
    [sym_boolean] = STATE(78),
    [sym_number] = STATE(78),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(78),
    [sym_character] = STATE(78),
    [sym__character] = STATE(35),
    [sym_string] = STATE(78),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(78),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(78),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(78),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(78),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(78),
    [sym_list] = STATE(78),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(78),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(78),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(78),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(78),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(78),
    [sym_anonymous_function] = STATE(78),
    [sym_shorthand_function] = STATE(78),
    [sym_defn] = STATE(78),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(78),
    [sym_var_quote] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_unquote_splice] = STATE(78),
    [sym_deref] = STATE(78),
    [sym_tagged_literal] = STATE(78),
    [aux_sym_program_repeat1] = STATE(78),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(135),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(139),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_nil] = ACTIONS(477),
    [sym_true] = ACTIONS(477),
    [sym_false] = ACTIONS(477),
    [sym_number_long] = ACTIONS(477),
    [sym_number_double] = ACTIONS(475),
    [sym_number_bigint] = ACTIONS(477),
    [sym_number_ratio] = ACTIONS(475),
    [anon_sym_POUND_POUND] = ACTIONS(475),
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
    [sym_member_access] = ACTIONS(475),
    [sym_field_access] = ACTIONS(475),
    [sym_new_class] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(475),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(475),
    [anon_sym_POUND_LBRACE] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_POUND_BANG] = ACTIONS(475),
    [anon_sym_POUND_] = ACTIONS(475),
    [anon_sym_POUND_LPAREN] = ACTIONS(475),
    [sym_shorthand_function_arg] = ACTIONS(475),
    [anon_sym_CARET] = ACTIONS(477),
    [anon_sym_CARET_COLON] = ACTIONS(475),
    [anon_sym_CARET_DQUOTE] = ACTIONS(475),
    [anon_sym_BQUOTE] = ACTIONS(475),
    [anon_sym_POUND_SQUOTE] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_TILDE_AT] = ACTIONS(475),
    [sym_gensym] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(477),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_nil] = ACTIONS(481),
    [sym_true] = ACTIONS(481),
    [sym_false] = ACTIONS(481),
    [sym_number_long] = ACTIONS(481),
    [sym_number_double] = ACTIONS(479),
    [sym_number_bigint] = ACTIONS(481),
    [sym_number_ratio] = ACTIONS(479),
    [anon_sym_POUND_POUND] = ACTIONS(479),
    [anon_sym_BSLASH] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [anon_sym_POUND_DQUOTE] = ACTIONS(479),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [anon_sym_LPARENquote] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [anon_sym_DASH_GT_GT] = ACTIONS(479),
    [anon_sym_as_DASH_GT] = ACTIONS(479),
    [anon_sym_some_DASH_GT] = ACTIONS(481),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(479),
    [anon_sym_cond_DASH_GT] = ACTIONS(481),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(479),
    [sym__symbol_chars] = ACTIONS(481),
    [sym_member_access] = ACTIONS(479),
    [sym_field_access] = ACTIONS(479),
    [sym_new_class] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(479),
    [anon_sym_POUND_LBRACE] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_POUND_BANG] = ACTIONS(479),
    [anon_sym_POUND_] = ACTIONS(479),
    [anon_sym_POUND_LPAREN] = ACTIONS(479),
    [sym_shorthand_function_arg] = ACTIONS(479),
    [anon_sym_CARET] = ACTIONS(481),
    [anon_sym_CARET_COLON] = ACTIONS(479),
    [anon_sym_CARET_DQUOTE] = ACTIONS(479),
    [anon_sym_BQUOTE] = ACTIONS(479),
    [anon_sym_POUND_SQUOTE] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_TILDE_AT] = ACTIONS(479),
    [sym_gensym] = ACTIONS(479),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(481),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_nil] = ACTIONS(481),
    [sym_true] = ACTIONS(481),
    [sym_false] = ACTIONS(481),
    [sym_number_long] = ACTIONS(481),
    [sym_number_double] = ACTIONS(479),
    [sym_number_bigint] = ACTIONS(481),
    [sym_number_ratio] = ACTIONS(479),
    [anon_sym_POUND_POUND] = ACTIONS(479),
    [anon_sym_BSLASH] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [anon_sym_POUND_DQUOTE] = ACTIONS(479),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [anon_sym_LPARENquote] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [anon_sym_DASH_GT_GT] = ACTIONS(479),
    [anon_sym_as_DASH_GT] = ACTIONS(479),
    [anon_sym_some_DASH_GT] = ACTIONS(481),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(479),
    [anon_sym_cond_DASH_GT] = ACTIONS(481),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(479),
    [sym__symbol_chars] = ACTIONS(481),
    [sym_member_access] = ACTIONS(479),
    [sym_field_access] = ACTIONS(479),
    [sym_new_class] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(479),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(479),
    [anon_sym_POUND_LBRACE] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_POUND_BANG] = ACTIONS(479),
    [anon_sym_POUND_] = ACTIONS(479),
    [anon_sym_POUND_LPAREN] = ACTIONS(479),
    [sym_shorthand_function_arg] = ACTIONS(479),
    [anon_sym_CARET] = ACTIONS(481),
    [anon_sym_CARET_COLON] = ACTIONS(479),
    [anon_sym_CARET_DQUOTE] = ACTIONS(479),
    [anon_sym_BQUOTE] = ACTIONS(479),
    [anon_sym_POUND_SQUOTE] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_TILDE_AT] = ACTIONS(479),
    [sym_gensym] = ACTIONS(479),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(481),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_nil] = ACTIONS(485),
    [sym_true] = ACTIONS(485),
    [sym_false] = ACTIONS(485),
    [sym_number_long] = ACTIONS(485),
    [sym_number_double] = ACTIONS(483),
    [sym_number_bigint] = ACTIONS(485),
    [sym_number_ratio] = ACTIONS(483),
    [anon_sym_POUND_POUND] = ACTIONS(483),
    [anon_sym_BSLASH] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_POUND_DQUOTE] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [anon_sym_LPARENquote] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(485),
    [anon_sym_DASH_GT_GT] = ACTIONS(483),
    [anon_sym_as_DASH_GT] = ACTIONS(483),
    [anon_sym_some_DASH_GT] = ACTIONS(485),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(483),
    [anon_sym_cond_DASH_GT] = ACTIONS(485),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(483),
    [sym__symbol_chars] = ACTIONS(485),
    [sym_member_access] = ACTIONS(483),
    [sym_field_access] = ACTIONS(483),
    [sym_new_class] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(483),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(483),
    [anon_sym_POUND_LBRACE] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(483),
    [anon_sym_POUND_] = ACTIONS(483),
    [anon_sym_POUND_LPAREN] = ACTIONS(483),
    [sym_shorthand_function_arg] = ACTIONS(483),
    [anon_sym_CARET] = ACTIONS(485),
    [anon_sym_CARET_COLON] = ACTIONS(483),
    [anon_sym_CARET_DQUOTE] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_POUND_SQUOTE] = ACTIONS(483),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_TILDE_AT] = ACTIONS(483),
    [sym_gensym] = ACTIONS(483),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(485),
  },
  [125] = {
    [sym__anything] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__collection_literals] = STATE(125),
    [sym_boolean] = STATE(125),
    [sym_number] = STATE(125),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(125),
    [sym_character] = STATE(125),
    [sym__character] = STATE(35),
    [sym_string] = STATE(125),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(125),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(125),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(125),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(125),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(125),
    [sym_list] = STATE(125),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(125),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(125),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(125),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(125),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(125),
    [sym_anonymous_function] = STATE(125),
    [sym_shorthand_function] = STATE(125),
    [sym_defn] = STATE(125),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(125),
    [sym_var_quote] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splice] = STATE(125),
    [sym_deref] = STATE(125),
    [sym_tagged_literal] = STATE(125),
    [aux_sym_program_repeat1] = STATE(125),
    [aux_sym_metadata_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym_nil] = ACTIONS(489),
    [sym_true] = ACTIONS(492),
    [sym_false] = ACTIONS(492),
    [sym_number_long] = ACTIONS(495),
    [sym_number_double] = ACTIONS(498),
    [sym_number_bigint] = ACTIONS(495),
    [sym_number_ratio] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_LPARENquote] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(522),
    [anon_sym_DASH_GT] = ACTIONS(525),
    [anon_sym_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_as_DASH_GT] = ACTIONS(528),
    [anon_sym_some_DASH_GT] = ACTIONS(525),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_cond_DASH_GT] = ACTIONS(525),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(528),
    [sym__symbol_chars] = ACTIONS(531),
    [sym_member_access] = ACTIONS(534),
    [sym_field_access] = ACTIONS(534),
    [sym_new_class] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(546),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(549),
    [anon_sym_POUND_LBRACE] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(558),
    [anon_sym_POUND_] = ACTIONS(561),
    [anon_sym_POUND_LPAREN] = ACTIONS(564),
    [sym_shorthand_function_arg] = ACTIONS(567),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_CARET_COLON] = ACTIONS(573),
    [anon_sym_CARET_DQUOTE] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [anon_sym_POUND_SQUOTE] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_TILDE_AT] = ACTIONS(588),
    [sym_gensym] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(594),
  },
  [126] = {
    [sym__symbol_chars] = ACTIONS(223),
  },
  [127] = {
    [sym_metadata_shorthand] = STATE(127),
    [aux_sym_metadata_repeat1] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(597),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(597),
    [anon_sym_POUND_LBRACE] = ACTIONS(597),
    [anon_sym_CARET] = ACTIONS(599),
    [anon_sym_CARET_COLON] = ACTIONS(602),
    [anon_sym_CARET_DQUOTE] = ACTIONS(605),
  },
  [128] = {
    [sym__hex_char] = ACTIONS(608),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [sym_nil] = ACTIONS(612),
    [sym_true] = ACTIONS(612),
    [sym_false] = ACTIONS(612),
    [sym_number_long] = ACTIONS(612),
    [sym_number_double] = ACTIONS(610),
    [sym_number_bigint] = ACTIONS(612),
    [sym_number_ratio] = ACTIONS(610),
    [anon_sym_POUND_POUND] = ACTIONS(610),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(610),
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
    [anon_sym_POUND] = ACTIONS(612),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_nil] = ACTIONS(616),
    [sym_true] = ACTIONS(616),
    [sym_false] = ACTIONS(616),
    [sym_number_long] = ACTIONS(616),
    [sym_number_double] = ACTIONS(614),
    [sym_number_bigint] = ACTIONS(616),
    [sym_number_ratio] = ACTIONS(614),
    [anon_sym_POUND_POUND] = ACTIONS(614),
    [anon_sym_BSLASH] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [anon_sym_POUND_DQUOTE] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [anon_sym_LPARENquote] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(616),
    [anon_sym_COLON_COLON] = ACTIONS(614),
    [anon_sym_DASH_GT] = ACTIONS(616),
    [anon_sym_DASH_GT_GT] = ACTIONS(614),
    [anon_sym_as_DASH_GT] = ACTIONS(614),
    [anon_sym_some_DASH_GT] = ACTIONS(616),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(614),
    [anon_sym_cond_DASH_GT] = ACTIONS(616),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(614),
    [sym__symbol_chars] = ACTIONS(616),
    [sym_member_access] = ACTIONS(614),
    [sym_field_access] = ACTIONS(614),
    [sym_new_class] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(614),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(614),
    [anon_sym_POUND_LBRACE] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_POUND_BANG] = ACTIONS(614),
    [anon_sym_POUND_] = ACTIONS(614),
    [anon_sym_POUND_LPAREN] = ACTIONS(614),
    [sym_shorthand_function_arg] = ACTIONS(614),
    [anon_sym_CARET] = ACTIONS(616),
    [anon_sym_CARET_COLON] = ACTIONS(614),
    [anon_sym_CARET_DQUOTE] = ACTIONS(614),
    [anon_sym_BQUOTE] = ACTIONS(614),
    [anon_sym_POUND_SQUOTE] = ACTIONS(614),
    [anon_sym_TILDE] = ACTIONS(616),
    [anon_sym_TILDE_AT] = ACTIONS(614),
    [sym_gensym] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_POUND] = ACTIONS(616),
  },
  [131] = {
    [aux_sym__string_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(620),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(620),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [sym_nil] = ACTIONS(625),
    [sym_true] = ACTIONS(625),
    [sym_false] = ACTIONS(625),
    [sym_number_long] = ACTIONS(625),
    [sym_number_double] = ACTIONS(623),
    [sym_number_bigint] = ACTIONS(625),
    [sym_number_ratio] = ACTIONS(623),
    [anon_sym_POUND_POUND] = ACTIONS(623),
    [anon_sym_BSLASH] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [anon_sym_POUND_DQUOTE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [anon_sym_LPARENquote] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(625),
    [anon_sym_COLON_COLON] = ACTIONS(623),
    [anon_sym_DASH_GT] = ACTIONS(625),
    [anon_sym_DASH_GT_GT] = ACTIONS(623),
    [anon_sym_as_DASH_GT] = ACTIONS(623),
    [anon_sym_some_DASH_GT] = ACTIONS(625),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(623),
    [anon_sym_cond_DASH_GT] = ACTIONS(625),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(623),
    [sym__symbol_chars] = ACTIONS(625),
    [sym_member_access] = ACTIONS(623),
    [sym_field_access] = ACTIONS(623),
    [sym_new_class] = ACTIONS(623),
    [anon_sym_LPAREN] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(623),
    [anon_sym_RBRACK] = ACTIONS(623),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(623),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(623),
    [anon_sym_POUND_LBRACE] = ACTIONS(623),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_POUND_BANG] = ACTIONS(623),
    [anon_sym_POUND_] = ACTIONS(623),
    [anon_sym_POUND_LPAREN] = ACTIONS(623),
    [sym_shorthand_function_arg] = ACTIONS(623),
    [anon_sym_CARET] = ACTIONS(625),
    [anon_sym_CARET_COLON] = ACTIONS(623),
    [anon_sym_CARET_DQUOTE] = ACTIONS(623),
    [anon_sym_BQUOTE] = ACTIONS(623),
    [anon_sym_POUND_SQUOTE] = ACTIONS(623),
    [anon_sym_TILDE] = ACTIONS(625),
    [anon_sym_TILDE_AT] = ACTIONS(623),
    [sym_gensym] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(623),
    [anon_sym_POUND] = ACTIONS(625),
  },
  [133] = {
    [aux_sym__regex_repeat1] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(629),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [sym_nil] = ACTIONS(634),
    [sym_true] = ACTIONS(634),
    [sym_false] = ACTIONS(634),
    [sym_number_long] = ACTIONS(634),
    [sym_number_double] = ACTIONS(632),
    [sym_number_bigint] = ACTIONS(634),
    [sym_number_ratio] = ACTIONS(632),
    [anon_sym_POUND_POUND] = ACTIONS(632),
    [anon_sym_BSLASH] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [anon_sym_POUND_DQUOTE] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_LPARENquote] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(634),
    [anon_sym_COLON_COLON] = ACTIONS(632),
    [anon_sym_DASH_GT] = ACTIONS(634),
    [anon_sym_DASH_GT_GT] = ACTIONS(632),
    [anon_sym_as_DASH_GT] = ACTIONS(632),
    [anon_sym_some_DASH_GT] = ACTIONS(634),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(632),
    [anon_sym_cond_DASH_GT] = ACTIONS(634),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(632),
    [sym__symbol_chars] = ACTIONS(634),
    [sym_member_access] = ACTIONS(632),
    [sym_field_access] = ACTIONS(632),
    [sym_new_class] = ACTIONS(632),
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(632),
    [anon_sym_RBRACE] = ACTIONS(632),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(632),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(632),
    [anon_sym_POUND_LBRACE] = ACTIONS(632),
    [anon_sym_SEMI] = ACTIONS(632),
    [anon_sym_POUND_BANG] = ACTIONS(632),
    [anon_sym_POUND_] = ACTIONS(632),
    [anon_sym_POUND_LPAREN] = ACTIONS(632),
    [sym_shorthand_function_arg] = ACTIONS(632),
    [anon_sym_CARET] = ACTIONS(634),
    [anon_sym_CARET_COLON] = ACTIONS(632),
    [anon_sym_CARET_DQUOTE] = ACTIONS(632),
    [anon_sym_BQUOTE] = ACTIONS(632),
    [anon_sym_POUND_SQUOTE] = ACTIONS(632),
    [anon_sym_TILDE] = ACTIONS(634),
    [anon_sym_TILDE_AT] = ACTIONS(632),
    [sym_gensym] = ACTIONS(632),
    [anon_sym_AT] = ACTIONS(632),
    [anon_sym_POUND] = ACTIONS(634),
  },
  [135] = {
    [sym__keyword_chars] = ACTIONS(636),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [sym_nil] = ACTIONS(640),
    [sym_true] = ACTIONS(640),
    [sym_false] = ACTIONS(640),
    [sym_number_long] = ACTIONS(640),
    [sym_number_double] = ACTIONS(638),
    [sym_number_bigint] = ACTIONS(640),
    [sym_number_ratio] = ACTIONS(638),
    [anon_sym_POUND_POUND] = ACTIONS(638),
    [anon_sym_BSLASH] = ACTIONS(638),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_POUND_DQUOTE] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(638),
    [anon_sym_LPARENquote] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(640),
    [anon_sym_COLON_COLON] = ACTIONS(638),
    [anon_sym_DASH_GT] = ACTIONS(640),
    [anon_sym_DASH_GT_GT] = ACTIONS(638),
    [anon_sym_as_DASH_GT] = ACTIONS(638),
    [anon_sym_some_DASH_GT] = ACTIONS(640),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(638),
    [anon_sym_cond_DASH_GT] = ACTIONS(640),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(638),
    [sym__symbol_chars] = ACTIONS(640),
    [sym_member_access] = ACTIONS(638),
    [sym_field_access] = ACTIONS(638),
    [sym_new_class] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(638),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(638),
    [anon_sym_POUND_LBRACE] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_POUND_BANG] = ACTIONS(638),
    [anon_sym_POUND_] = ACTIONS(638),
    [anon_sym_POUND_LPAREN] = ACTIONS(638),
    [sym_shorthand_function_arg] = ACTIONS(638),
    [anon_sym_CARET] = ACTIONS(640),
    [anon_sym_CARET_COLON] = ACTIONS(638),
    [anon_sym_CARET_DQUOTE] = ACTIONS(638),
    [anon_sym_BQUOTE] = ACTIONS(638),
    [anon_sym_POUND_SQUOTE] = ACTIONS(638),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_TILDE_AT] = ACTIONS(638),
    [sym_gensym] = ACTIONS(638),
    [anon_sym_AT] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(640),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [sym_nil] = ACTIONS(644),
    [sym_true] = ACTIONS(644),
    [sym_false] = ACTIONS(644),
    [sym_number_long] = ACTIONS(644),
    [sym_number_double] = ACTIONS(642),
    [sym_number_bigint] = ACTIONS(644),
    [sym_number_ratio] = ACTIONS(642),
    [anon_sym_POUND_POUND] = ACTIONS(642),
    [anon_sym_BSLASH] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_POUND_DQUOTE] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_LPARENquote] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(644),
    [anon_sym_COLON_COLON] = ACTIONS(642),
    [anon_sym_DASH_GT] = ACTIONS(644),
    [anon_sym_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_as_DASH_GT] = ACTIONS(642),
    [anon_sym_some_DASH_GT] = ACTIONS(644),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(642),
    [anon_sym_cond_DASH_GT] = ACTIONS(644),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(642),
    [sym__symbol_chars] = ACTIONS(644),
    [sym_member_access] = ACTIONS(642),
    [sym_field_access] = ACTIONS(642),
    [sym_new_class] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(642),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(642),
    [anon_sym_POUND_LBRACE] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_POUND_BANG] = ACTIONS(642),
    [anon_sym_POUND_] = ACTIONS(642),
    [anon_sym_POUND_LPAREN] = ACTIONS(642),
    [sym_shorthand_function_arg] = ACTIONS(642),
    [anon_sym_CARET] = ACTIONS(644),
    [anon_sym_CARET_COLON] = ACTIONS(642),
    [anon_sym_CARET_DQUOTE] = ACTIONS(642),
    [anon_sym_BQUOTE] = ACTIONS(642),
    [anon_sym_POUND_SQUOTE] = ACTIONS(642),
    [anon_sym_TILDE] = ACTIONS(644),
    [anon_sym_TILDE_AT] = ACTIONS(642),
    [sym_gensym] = ACTIONS(642),
    [anon_sym_AT] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(644),
  },
  [138] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(154),
    [sym_character] = STATE(154),
    [sym__character] = STATE(35),
    [sym_string] = STATE(154),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(154),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(154),
    [sym_var_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [sym_tagged_literal] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(383),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(646),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [139] = {
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(121),
  },
  [140] = {
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(648),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(125),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(125),
  },
  [141] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__single_arity_fn] = STATE(175),
    [sym_params] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [142] = {
    [anon_sym_DQUOTE] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(650),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(650),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(650),
  },
  [143] = {
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(277),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(277),
  },
  [144] = {
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(281),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(281),
  },
  [145] = {
    [sym_nil] = ACTIONS(652),
    [sym_true] = ACTIONS(652),
    [sym_false] = ACTIONS(652),
    [sym_number_long] = ACTIONS(652),
    [sym_number_double] = ACTIONS(654),
    [sym_number_bigint] = ACTIONS(652),
    [sym_number_ratio] = ACTIONS(654),
    [anon_sym_POUND_POUND] = ACTIONS(654),
    [anon_sym_BSLASH] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [anon_sym_POUND_DQUOTE] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [anon_sym_LPARENquote] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_COLON] = ACTIONS(652),
    [anon_sym_COLON_COLON] = ACTIONS(654),
    [anon_sym_DASH_GT] = ACTIONS(652),
    [anon_sym_DASH_GT_GT] = ACTIONS(654),
    [anon_sym_as_DASH_GT] = ACTIONS(654),
    [anon_sym_some_DASH_GT] = ACTIONS(652),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(654),
    [anon_sym_cond_DASH_GT] = ACTIONS(652),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(654),
    [sym__symbol_chars] = ACTIONS(652),
    [sym_member_access] = ACTIONS(654),
    [sym_field_access] = ACTIONS(654),
    [sym_new_class] = ACTIONS(654),
    [anon_sym_LPAREN] = ACTIONS(652),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(654),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(654),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(654),
    [anon_sym_POUND_LBRACE] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_POUND_BANG] = ACTIONS(654),
    [anon_sym_POUND_] = ACTIONS(654),
    [anon_sym_POUND_LPAREN] = ACTIONS(654),
    [sym_shorthand_function_arg] = ACTIONS(654),
    [anon_sym_CARET] = ACTIONS(652),
    [anon_sym_CARET_COLON] = ACTIONS(654),
    [anon_sym_CARET_DQUOTE] = ACTIONS(654),
    [anon_sym_BQUOTE] = ACTIONS(654),
    [anon_sym_POUND_SQUOTE] = ACTIONS(654),
    [anon_sym_TILDE] = ACTIONS(652),
    [anon_sym_TILDE_AT] = ACTIONS(654),
    [sym_gensym] = ACTIONS(654),
    [anon_sym_AT] = ACTIONS(654),
    [anon_sym_POUND] = ACTIONS(652),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(656),
  },
  [147] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__after_the_fn_name] = STATE(177),
    [sym__single_arity_fn] = STATE(177),
    [sym__multi_arity_fn] = STATE(177),
    [sym_params] = STATE(148),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [148] = {
    [sym__anything] = STATE(179),
    [sym__literals] = STATE(179),
    [sym__collection_literals] = STATE(179),
    [sym_boolean] = STATE(179),
    [sym_number] = STATE(179),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(179),
    [sym_character] = STATE(179),
    [sym__character] = STATE(35),
    [sym_string] = STATE(179),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(179),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(179),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(179),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(179),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(179),
    [sym_list] = STATE(179),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(179),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(179),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(179),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(179),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(179),
    [sym_anonymous_function] = STATE(179),
    [sym_function_body] = STATE(178),
    [sym_shorthand_function] = STATE(179),
    [sym_defn] = STATE(179),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(179),
    [sym_var_quote] = STATE(179),
    [sym_unquote] = STATE(179),
    [sym_unquote_splice] = STATE(179),
    [sym_deref] = STATE(179),
    [sym_tagged_literal] = STATE(179),
    [aux_sym_program_repeat1] = STATE(179),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(658),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(660),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(662),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(662),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [149] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(180),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(381),
  },
  [150] = {
    [sym_string] = STATE(182),
    [sym__string] = STATE(183),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(184),
    [sym__hash_map] = STATE(114),
    [sym_namespace_map] = STATE(114),
    [sym__after_the_fn_name] = STATE(185),
    [sym__single_arity_fn] = STATE(185),
    [sym__multi_arity_fn] = STATE(185),
    [sym_params] = STATE(148),
    [sym_docstring] = STATE(186),
    [sym_attr_map] = STATE(187),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(229),
  },
  [151] = {
    [sym_symbol] = STATE(142),
    [sym__symbol] = STATE(143),
    [sym_threading_macro] = STATE(143),
    [sym_qualified_symbol] = STATE(143),
    [sym__qualified_symbol] = STATE(144),
    [sym_function_name] = STATE(188),
    [anon_sym_DASH_GT] = ACTIONS(375),
    [anon_sym_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_as_DASH_GT] = ACTIONS(377),
    [anon_sym_some_DASH_GT] = ACTIONS(375),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(377),
    [anon_sym_cond_DASH_GT] = ACTIONS(375),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(377),
    [sym__symbol_chars] = ACTIONS(379),
  },
  [152] = {
    [sym_metadata_shorthand] = STATE(189),
    [aux_sym_metadata_repeat1] = STATE(189),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_DASH_GT_GT] = ACTIONS(307),
    [anon_sym_as_DASH_GT] = ACTIONS(307),
    [anon_sym_some_DASH_GT] = ACTIONS(305),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(307),
    [anon_sym_cond_DASH_GT] = ACTIONS(305),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(307),
    [sym__symbol_chars] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [sym_nil] = ACTIONS(670),
    [sym_true] = ACTIONS(670),
    [sym_false] = ACTIONS(670),
    [sym_number_long] = ACTIONS(670),
    [sym_number_double] = ACTIONS(668),
    [sym_number_bigint] = ACTIONS(670),
    [sym_number_ratio] = ACTIONS(668),
    [anon_sym_POUND_POUND] = ACTIONS(668),
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
    [sym_member_access] = ACTIONS(668),
    [sym_field_access] = ACTIONS(668),
    [sym_new_class] = ACTIONS(668),
    [anon_sym_LPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(668),
    [anon_sym_RBRACK] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_RBRACE] = ACTIONS(668),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(668),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(668),
    [anon_sym_POUND_LBRACE] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(668),
    [anon_sym_POUND_BANG] = ACTIONS(668),
    [anon_sym_POUND_] = ACTIONS(668),
    [anon_sym_POUND_LPAREN] = ACTIONS(668),
    [sym_shorthand_function_arg] = ACTIONS(668),
    [anon_sym_CARET] = ACTIONS(670),
    [anon_sym_CARET_COLON] = ACTIONS(668),
    [anon_sym_CARET_DQUOTE] = ACTIONS(668),
    [anon_sym_BQUOTE] = ACTIONS(668),
    [anon_sym_POUND_SQUOTE] = ACTIONS(668),
    [anon_sym_TILDE] = ACTIONS(670),
    [anon_sym_TILDE_AT] = ACTIONS(668),
    [sym_gensym] = ACTIONS(668),
    [anon_sym_AT] = ACTIONS(668),
    [anon_sym_POUND] = ACTIONS(670),
  },
  [154] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(154),
    [sym_character] = STATE(154),
    [sym__character] = STATE(35),
    [sym_string] = STATE(154),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(154),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(154),
    [sym_var_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [sym_tagged_literal] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(672),
    [sym_true] = ACTIONS(492),
    [sym_false] = ACTIONS(492),
    [sym_number_long] = ACTIONS(495),
    [sym_number_double] = ACTIONS(498),
    [sym_number_bigint] = ACTIONS(495),
    [sym_number_ratio] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [anon_sym_LPARENquote] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(522),
    [anon_sym_DASH_GT] = ACTIONS(525),
    [anon_sym_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_as_DASH_GT] = ACTIONS(528),
    [anon_sym_some_DASH_GT] = ACTIONS(525),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_cond_DASH_GT] = ACTIONS(525),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(528),
    [sym__symbol_chars] = ACTIONS(531),
    [sym_member_access] = ACTIONS(534),
    [sym_field_access] = ACTIONS(534),
    [sym_new_class] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(546),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(549),
    [anon_sym_POUND_LBRACE] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(558),
    [anon_sym_POUND_] = ACTIONS(678),
    [anon_sym_POUND_LPAREN] = ACTIONS(564),
    [sym_shorthand_function_arg] = ACTIONS(681),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_CARET_COLON] = ACTIONS(573),
    [anon_sym_CARET_DQUOTE] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(684),
    [anon_sym_POUND_SQUOTE] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(687),
    [anon_sym_TILDE_AT] = ACTIONS(690),
    [sym_gensym] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(594),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [sym_nil] = ACTIONS(695),
    [sym_true] = ACTIONS(695),
    [sym_false] = ACTIONS(695),
    [sym_number_long] = ACTIONS(695),
    [sym_number_double] = ACTIONS(693),
    [sym_number_bigint] = ACTIONS(695),
    [sym_number_ratio] = ACTIONS(693),
    [anon_sym_POUND_POUND] = ACTIONS(693),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(693),
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
    [anon_sym_POUND_SQUOTE] = ACTIONS(693),
    [anon_sym_TILDE] = ACTIONS(695),
    [anon_sym_TILDE_AT] = ACTIONS(693),
    [sym_gensym] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(695),
  },
  [156] = {
    [sym__anything] = STATE(156),
    [sym__literals] = STATE(156),
    [sym__collection_literals] = STATE(156),
    [sym_boolean] = STATE(156),
    [sym_number] = STATE(156),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(156),
    [sym_character] = STATE(156),
    [sym__character] = STATE(35),
    [sym_string] = STATE(156),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(156),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(156),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(156),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(156),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(156),
    [sym_list] = STATE(156),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(156),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(156),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(156),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(156),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(156),
    [sym_anonymous_function] = STATE(156),
    [sym_shorthand_function] = STATE(156),
    [sym_defn] = STATE(156),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(156),
    [sym_var_quote] = STATE(156),
    [sym_unquote] = STATE(156),
    [sym_unquote_splice] = STATE(156),
    [sym_deref] = STATE(156),
    [sym_tagged_literal] = STATE(156),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(697),
    [sym_true] = ACTIONS(492),
    [sym_false] = ACTIONS(492),
    [sym_number_long] = ACTIONS(495),
    [sym_number_double] = ACTIONS(498),
    [sym_number_bigint] = ACTIONS(495),
    [sym_number_ratio] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_LPARENquote] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(522),
    [anon_sym_DASH_GT] = ACTIONS(525),
    [anon_sym_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_as_DASH_GT] = ACTIONS(528),
    [anon_sym_some_DASH_GT] = ACTIONS(525),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_cond_DASH_GT] = ACTIONS(525),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(528),
    [sym__symbol_chars] = ACTIONS(531),
    [sym_member_access] = ACTIONS(534),
    [sym_field_access] = ACTIONS(534),
    [sym_new_class] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(546),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(549),
    [anon_sym_POUND_LBRACE] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(558),
    [anon_sym_POUND_] = ACTIONS(703),
    [anon_sym_POUND_LPAREN] = ACTIONS(564),
    [sym_shorthand_function_arg] = ACTIONS(706),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_CARET_COLON] = ACTIONS(573),
    [anon_sym_CARET_DQUOTE] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(709),
    [anon_sym_POUND_SQUOTE] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(712),
    [anon_sym_TILDE_AT] = ACTIONS(715),
    [sym_gensym] = ACTIONS(706),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(594),
  },
  [157] = {
    [sym_nil] = ACTIONS(718),
    [sym_true] = ACTIONS(718),
    [sym_false] = ACTIONS(718),
    [sym_number_long] = ACTIONS(718),
    [sym_number_double] = ACTIONS(720),
    [sym_number_bigint] = ACTIONS(718),
    [sym_number_ratio] = ACTIONS(720),
    [anon_sym_POUND_POUND] = ACTIONS(720),
    [anon_sym_BSLASH] = ACTIONS(720),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [anon_sym_POUND_DQUOTE] = ACTIONS(720),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [anon_sym_LPARENquote] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(718),
    [anon_sym_COLON_COLON] = ACTIONS(720),
    [anon_sym_DASH_GT] = ACTIONS(718),
    [anon_sym_DASH_GT_GT] = ACTIONS(720),
    [anon_sym_as_DASH_GT] = ACTIONS(720),
    [anon_sym_some_DASH_GT] = ACTIONS(718),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(720),
    [anon_sym_cond_DASH_GT] = ACTIONS(718),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(720),
    [sym__symbol_chars] = ACTIONS(718),
    [sym_member_access] = ACTIONS(720),
    [sym_field_access] = ACTIONS(720),
    [sym_new_class] = ACTIONS(720),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(720),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(720),
    [anon_sym_POUND_LBRACE] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_POUND_BANG] = ACTIONS(720),
    [anon_sym_POUND_] = ACTIONS(720),
    [anon_sym_POUND_LPAREN] = ACTIONS(720),
    [sym_shorthand_function_arg] = ACTIONS(720),
    [anon_sym_CARET] = ACTIONS(718),
    [anon_sym_CARET_COLON] = ACTIONS(720),
    [anon_sym_CARET_DQUOTE] = ACTIONS(720),
    [anon_sym_BQUOTE] = ACTIONS(720),
    [anon_sym_POUND_SQUOTE] = ACTIONS(720),
    [anon_sym_TILDE] = ACTIONS(718),
    [anon_sym_TILDE_AT] = ACTIONS(720),
    [sym_gensym] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_POUND] = ACTIONS(718),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(722),
    [sym_nil] = ACTIONS(724),
    [sym_true] = ACTIONS(724),
    [sym_false] = ACTIONS(724),
    [sym_number_long] = ACTIONS(724),
    [sym_number_double] = ACTIONS(722),
    [sym_number_bigint] = ACTIONS(724),
    [sym_number_ratio] = ACTIONS(722),
    [anon_sym_POUND_POUND] = ACTIONS(722),
    [anon_sym_BSLASH] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [anon_sym_POUND_DQUOTE] = ACTIONS(722),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [anon_sym_LPARENquote] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(722),
    [anon_sym_COLON] = ACTIONS(724),
    [anon_sym_COLON_COLON] = ACTIONS(722),
    [anon_sym_DASH_GT] = ACTIONS(724),
    [anon_sym_DASH_GT_GT] = ACTIONS(722),
    [anon_sym_as_DASH_GT] = ACTIONS(722),
    [anon_sym_some_DASH_GT] = ACTIONS(724),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(722),
    [anon_sym_cond_DASH_GT] = ACTIONS(724),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(722),
    [sym__symbol_chars] = ACTIONS(724),
    [sym_member_access] = ACTIONS(722),
    [sym_field_access] = ACTIONS(722),
    [sym_new_class] = ACTIONS(722),
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(722),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(722),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(722),
    [anon_sym_POUND_LBRACE] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(722),
    [anon_sym_POUND_BANG] = ACTIONS(722),
    [anon_sym_POUND_] = ACTIONS(722),
    [anon_sym_POUND_LPAREN] = ACTIONS(722),
    [sym_shorthand_function_arg] = ACTIONS(722),
    [anon_sym_CARET] = ACTIONS(724),
    [anon_sym_CARET_COLON] = ACTIONS(722),
    [anon_sym_CARET_DQUOTE] = ACTIONS(722),
    [anon_sym_BQUOTE] = ACTIONS(722),
    [anon_sym_POUND_SQUOTE] = ACTIONS(722),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_TILDE_AT] = ACTIONS(722),
    [sym_gensym] = ACTIONS(722),
    [anon_sym_AT] = ACTIONS(722),
    [anon_sym_POUND] = ACTIONS(724),
  },
  [159] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(726),
    [sym_true] = ACTIONS(729),
    [sym_false] = ACTIONS(729),
    [sym_number_long] = ACTIONS(732),
    [sym_number_double] = ACTIONS(735),
    [sym_number_bigint] = ACTIONS(732),
    [sym_number_ratio] = ACTIONS(735),
    [anon_sym_POUND_POUND] = ACTIONS(738),
    [anon_sym_BSLASH] = ACTIONS(741),
    [anon_sym_DQUOTE] = ACTIONS(744),
    [anon_sym_POUND_DQUOTE] = ACTIONS(747),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_COLON_COLON] = ACTIONS(759),
    [anon_sym_DASH_GT] = ACTIONS(762),
    [anon_sym_DASH_GT_GT] = ACTIONS(765),
    [anon_sym_as_DASH_GT] = ACTIONS(765),
    [anon_sym_some_DASH_GT] = ACTIONS(762),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(765),
    [anon_sym_cond_DASH_GT] = ACTIONS(762),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(765),
    [sym__symbol_chars] = ACTIONS(768),
    [sym_member_access] = ACTIONS(771),
    [sym_field_access] = ACTIONS(771),
    [sym_new_class] = ACTIONS(771),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(783),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(785),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(788),
    [anon_sym_POUND_LBRACE] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(794),
    [anon_sym_POUND_BANG] = ACTIONS(797),
    [anon_sym_POUND_] = ACTIONS(800),
    [anon_sym_POUND_LPAREN] = ACTIONS(803),
    [sym_shorthand_function_arg] = ACTIONS(806),
    [anon_sym_CARET] = ACTIONS(809),
    [anon_sym_CARET_COLON] = ACTIONS(812),
    [anon_sym_CARET_DQUOTE] = ACTIONS(815),
    [anon_sym_BQUOTE] = ACTIONS(818),
    [anon_sym_POUND_SQUOTE] = ACTIONS(821),
    [anon_sym_TILDE] = ACTIONS(824),
    [anon_sym_TILDE_AT] = ACTIONS(827),
    [sym_gensym] = ACTIONS(806),
    [anon_sym_AT] = ACTIONS(830),
    [anon_sym_POUND] = ACTIONS(833),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(836),
    [sym_nil] = ACTIONS(838),
    [sym_true] = ACTIONS(838),
    [sym_false] = ACTIONS(838),
    [sym_number_long] = ACTIONS(838),
    [sym_number_double] = ACTIONS(836),
    [sym_number_bigint] = ACTIONS(838),
    [sym_number_ratio] = ACTIONS(836),
    [anon_sym_POUND_POUND] = ACTIONS(836),
    [anon_sym_BSLASH] = ACTIONS(836),
    [anon_sym_DQUOTE] = ACTIONS(836),
    [anon_sym_POUND_DQUOTE] = ACTIONS(836),
    [anon_sym_SQUOTE] = ACTIONS(836),
    [anon_sym_LPARENquote] = ACTIONS(836),
    [anon_sym_RPAREN] = ACTIONS(836),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_COLON_COLON] = ACTIONS(836),
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(836),
    [anon_sym_as_DASH_GT] = ACTIONS(836),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(836),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(836),
    [sym__symbol_chars] = ACTIONS(838),
    [sym_member_access] = ACTIONS(836),
    [sym_field_access] = ACTIONS(836),
    [sym_new_class] = ACTIONS(836),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_RBRACK] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(836),
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(836),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(836),
    [anon_sym_POUND_LBRACE] = ACTIONS(836),
    [anon_sym_SEMI] = ACTIONS(836),
    [anon_sym_POUND_BANG] = ACTIONS(836),
    [anon_sym_POUND_] = ACTIONS(836),
    [anon_sym_POUND_LPAREN] = ACTIONS(836),
    [sym_shorthand_function_arg] = ACTIONS(836),
    [anon_sym_CARET] = ACTIONS(838),
    [anon_sym_CARET_COLON] = ACTIONS(836),
    [anon_sym_CARET_DQUOTE] = ACTIONS(836),
    [anon_sym_BQUOTE] = ACTIONS(836),
    [anon_sym_POUND_SQUOTE] = ACTIONS(836),
    [anon_sym_TILDE] = ACTIONS(838),
    [anon_sym_TILDE_AT] = ACTIONS(836),
    [sym_gensym] = ACTIONS(836),
    [anon_sym_AT] = ACTIONS(836),
    [anon_sym_POUND] = ACTIONS(838),
  },
  [161] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(842),
    [sym_nil] = ACTIONS(844),
    [sym_true] = ACTIONS(844),
    [sym_false] = ACTIONS(844),
    [sym_number_long] = ACTIONS(844),
    [sym_number_double] = ACTIONS(842),
    [sym_number_bigint] = ACTIONS(844),
    [sym_number_ratio] = ACTIONS(842),
    [anon_sym_POUND_POUND] = ACTIONS(842),
    [anon_sym_BSLASH] = ACTIONS(842),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [anon_sym_POUND_DQUOTE] = ACTIONS(842),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [anon_sym_LPARENquote] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_COLON_COLON] = ACTIONS(842),
    [anon_sym_DASH_GT] = ACTIONS(844),
    [anon_sym_DASH_GT_GT] = ACTIONS(842),
    [anon_sym_as_DASH_GT] = ACTIONS(842),
    [anon_sym_some_DASH_GT] = ACTIONS(844),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(842),
    [anon_sym_cond_DASH_GT] = ACTIONS(844),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(842),
    [sym__symbol_chars] = ACTIONS(844),
    [sym_member_access] = ACTIONS(842),
    [sym_field_access] = ACTIONS(842),
    [sym_new_class] = ACTIONS(842),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(842),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(842),
    [anon_sym_POUND_LBRACE] = ACTIONS(842),
    [anon_sym_SEMI] = ACTIONS(842),
    [anon_sym_POUND_BANG] = ACTIONS(842),
    [anon_sym_POUND_] = ACTIONS(842),
    [anon_sym_POUND_LPAREN] = ACTIONS(842),
    [sym_shorthand_function_arg] = ACTIONS(842),
    [anon_sym_CARET] = ACTIONS(844),
    [anon_sym_CARET_COLON] = ACTIONS(842),
    [anon_sym_CARET_DQUOTE] = ACTIONS(842),
    [anon_sym_BQUOTE] = ACTIONS(842),
    [anon_sym_POUND_SQUOTE] = ACTIONS(842),
    [anon_sym_TILDE] = ACTIONS(844),
    [anon_sym_TILDE_AT] = ACTIONS(842),
    [sym_gensym] = ACTIONS(842),
    [anon_sym_AT] = ACTIONS(842),
    [anon_sym_POUND] = ACTIONS(844),
  },
  [163] = {
    [sym__anything] = STATE(163),
    [sym__literals] = STATE(163),
    [sym__collection_literals] = STATE(163),
    [sym_boolean] = STATE(163),
    [sym_number] = STATE(163),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(163),
    [sym_character] = STATE(163),
    [sym__character] = STATE(35),
    [sym_string] = STATE(163),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(163),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(163),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(163),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(163),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(163),
    [sym_list] = STATE(163),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(163),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(163),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(163),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(163),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(163),
    [sym_anonymous_function] = STATE(163),
    [sym_shorthand_function] = STATE(163),
    [sym_defn] = STATE(163),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(163),
    [sym_var_quote] = STATE(163),
    [sym_unquote] = STATE(163),
    [sym_unquote_splice] = STATE(163),
    [sym_deref] = STATE(163),
    [sym_tagged_literal] = STATE(163),
    [aux_sym_program_repeat1] = STATE(163),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(846),
    [sym_true] = ACTIONS(492),
    [sym_false] = ACTIONS(492),
    [sym_number_long] = ACTIONS(495),
    [sym_number_double] = ACTIONS(498),
    [sym_number_bigint] = ACTIONS(495),
    [sym_number_ratio] = ACTIONS(498),
    [anon_sym_POUND_POUND] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND_DQUOTE] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(849),
    [anon_sym_LPARENquote] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_COLON_COLON] = ACTIONS(522),
    [anon_sym_DASH_GT] = ACTIONS(525),
    [anon_sym_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_as_DASH_GT] = ACTIONS(528),
    [anon_sym_some_DASH_GT] = ACTIONS(525),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(528),
    [anon_sym_cond_DASH_GT] = ACTIONS(525),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(528),
    [sym__symbol_chars] = ACTIONS(531),
    [sym_member_access] = ACTIONS(534),
    [sym_field_access] = ACTIONS(534),
    [sym_new_class] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(546),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(549),
    [anon_sym_POUND_LBRACE] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(558),
    [anon_sym_POUND_] = ACTIONS(852),
    [anon_sym_POUND_LPAREN] = ACTIONS(564),
    [sym_shorthand_function_arg] = ACTIONS(855),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_CARET_COLON] = ACTIONS(573),
    [anon_sym_CARET_DQUOTE] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(858),
    [anon_sym_POUND_SQUOTE] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(861),
    [anon_sym_TILDE_AT] = ACTIONS(864),
    [sym_gensym] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(594),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(867),
    [sym_nil] = ACTIONS(869),
    [sym_true] = ACTIONS(869),
    [sym_false] = ACTIONS(869),
    [sym_number_long] = ACTIONS(869),
    [sym_number_double] = ACTIONS(867),
    [sym_number_bigint] = ACTIONS(869),
    [sym_number_ratio] = ACTIONS(867),
    [anon_sym_POUND_POUND] = ACTIONS(867),
    [anon_sym_BSLASH] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [anon_sym_POUND_DQUOTE] = ACTIONS(867),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_LPARENquote] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(869),
    [anon_sym_COLON_COLON] = ACTIONS(867),
    [anon_sym_DASH_GT] = ACTIONS(869),
    [anon_sym_DASH_GT_GT] = ACTIONS(867),
    [anon_sym_as_DASH_GT] = ACTIONS(867),
    [anon_sym_some_DASH_GT] = ACTIONS(869),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(867),
    [anon_sym_cond_DASH_GT] = ACTIONS(869),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(867),
    [sym__symbol_chars] = ACTIONS(869),
    [sym_member_access] = ACTIONS(867),
    [sym_field_access] = ACTIONS(867),
    [sym_new_class] = ACTIONS(867),
    [anon_sym_LPAREN] = ACTIONS(869),
    [anon_sym_LBRACK] = ACTIONS(867),
    [anon_sym_RBRACK] = ACTIONS(867),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(867),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(867),
    [anon_sym_POUND_LBRACE] = ACTIONS(867),
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_POUND_BANG] = ACTIONS(867),
    [anon_sym_POUND_] = ACTIONS(867),
    [anon_sym_POUND_LPAREN] = ACTIONS(867),
    [sym_shorthand_function_arg] = ACTIONS(867),
    [anon_sym_CARET] = ACTIONS(869),
    [anon_sym_CARET_COLON] = ACTIONS(867),
    [anon_sym_CARET_DQUOTE] = ACTIONS(867),
    [anon_sym_BQUOTE] = ACTIONS(867),
    [anon_sym_POUND_SQUOTE] = ACTIONS(867),
    [anon_sym_TILDE] = ACTIONS(869),
    [anon_sym_TILDE_AT] = ACTIONS(867),
    [sym_gensym] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(867),
    [anon_sym_POUND] = ACTIONS(869),
  },
  [165] = {
    [anon_sym_DASH_GT] = ACTIONS(401),
    [anon_sym_DASH_GT_GT] = ACTIONS(399),
    [anon_sym_as_DASH_GT] = ACTIONS(399),
    [anon_sym_some_DASH_GT] = ACTIONS(401),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(399),
    [anon_sym_cond_DASH_GT] = ACTIONS(401),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(399),
    [sym__symbol_chars] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(399),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(399),
    [anon_sym_POUND_LBRACE] = ACTIONS(399),
  },
  [166] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(871),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [167] = {
    [anon_sym_DASH_GT] = ACTIONS(411),
    [anon_sym_DASH_GT_GT] = ACTIONS(409),
    [anon_sym_as_DASH_GT] = ACTIONS(409),
    [anon_sym_some_DASH_GT] = ACTIONS(411),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(409),
    [anon_sym_cond_DASH_GT] = ACTIONS(411),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(409),
    [sym__symbol_chars] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(409),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(409),
    [anon_sym_POUND_LBRACE] = ACTIONS(409),
  },
  [168] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [169] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(193),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(193),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [170] = {
    [anon_sym_DASH_GT] = ACTIONS(875),
    [anon_sym_DASH_GT_GT] = ACTIONS(877),
    [anon_sym_as_DASH_GT] = ACTIONS(877),
    [anon_sym_some_DASH_GT] = ACTIONS(875),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(877),
    [anon_sym_cond_DASH_GT] = ACTIONS(875),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(877),
    [sym__symbol_chars] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(877),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(877),
    [anon_sym_POUND_LBRACE] = ACTIONS(877),
    [anon_sym_CARET] = ACTIONS(875),
    [anon_sym_CARET_COLON] = ACTIONS(877),
    [anon_sym_CARET_DQUOTE] = ACTIONS(877),
  },
  [171] = {
    [sym__hex_char] = ACTIONS(879),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(881),
    [sym_nil] = ACTIONS(883),
    [sym_true] = ACTIONS(883),
    [sym_false] = ACTIONS(883),
    [sym_number_long] = ACTIONS(883),
    [sym_number_double] = ACTIONS(881),
    [sym_number_bigint] = ACTIONS(883),
    [sym_number_ratio] = ACTIONS(881),
    [anon_sym_POUND_POUND] = ACTIONS(881),
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
    [sym_member_access] = ACTIONS(881),
    [sym_field_access] = ACTIONS(881),
    [sym_new_class] = ACTIONS(881),
    [anon_sym_LPAREN] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(881),
    [anon_sym_RBRACK] = ACTIONS(881),
    [anon_sym_LBRACE] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(881),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(881),
    [anon_sym_POUND_LBRACE] = ACTIONS(881),
    [anon_sym_SEMI] = ACTIONS(881),
    [anon_sym_POUND_BANG] = ACTIONS(881),
    [anon_sym_POUND_] = ACTIONS(881),
    [anon_sym_POUND_LPAREN] = ACTIONS(881),
    [sym_shorthand_function_arg] = ACTIONS(881),
    [anon_sym_CARET] = ACTIONS(883),
    [anon_sym_CARET_COLON] = ACTIONS(881),
    [anon_sym_CARET_DQUOTE] = ACTIONS(881),
    [anon_sym_BQUOTE] = ACTIONS(881),
    [anon_sym_POUND_SQUOTE] = ACTIONS(881),
    [anon_sym_TILDE] = ACTIONS(883),
    [anon_sym_TILDE_AT] = ACTIONS(881),
    [sym_gensym] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(881),
    [anon_sym_POUND] = ACTIONS(883),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(885),
    [sym_nil] = ACTIONS(887),
    [sym_true] = ACTIONS(887),
    [sym_false] = ACTIONS(887),
    [sym_number_long] = ACTIONS(887),
    [sym_number_double] = ACTIONS(885),
    [sym_number_bigint] = ACTIONS(887),
    [sym_number_ratio] = ACTIONS(885),
    [anon_sym_POUND_POUND] = ACTIONS(885),
    [anon_sym_BSLASH] = ACTIONS(885),
    [anon_sym_DQUOTE] = ACTIONS(885),
    [anon_sym_POUND_DQUOTE] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(885),
    [anon_sym_LPARENquote] = ACTIONS(885),
    [anon_sym_RPAREN] = ACTIONS(885),
    [anon_sym_COLON] = ACTIONS(887),
    [anon_sym_COLON_COLON] = ACTIONS(885),
    [anon_sym_DASH_GT] = ACTIONS(887),
    [anon_sym_DASH_GT_GT] = ACTIONS(885),
    [anon_sym_as_DASH_GT] = ACTIONS(885),
    [anon_sym_some_DASH_GT] = ACTIONS(887),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(885),
    [anon_sym_cond_DASH_GT] = ACTIONS(887),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(885),
    [sym__symbol_chars] = ACTIONS(887),
    [sym_member_access] = ACTIONS(885),
    [sym_field_access] = ACTIONS(885),
    [sym_new_class] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(887),
    [anon_sym_LBRACK] = ACTIONS(885),
    [anon_sym_RBRACK] = ACTIONS(885),
    [anon_sym_LBRACE] = ACTIONS(885),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(885),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(885),
    [anon_sym_POUND_LBRACE] = ACTIONS(885),
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_POUND_BANG] = ACTIONS(885),
    [anon_sym_POUND_] = ACTIONS(885),
    [anon_sym_POUND_LPAREN] = ACTIONS(885),
    [sym_shorthand_function_arg] = ACTIONS(885),
    [anon_sym_CARET] = ACTIONS(887),
    [anon_sym_CARET_COLON] = ACTIONS(885),
    [anon_sym_CARET_DQUOTE] = ACTIONS(885),
    [anon_sym_BQUOTE] = ACTIONS(885),
    [anon_sym_POUND_SQUOTE] = ACTIONS(885),
    [anon_sym_TILDE] = ACTIONS(887),
    [anon_sym_TILDE_AT] = ACTIONS(885),
    [sym_gensym] = ACTIONS(885),
    [anon_sym_AT] = ACTIONS(885),
    [anon_sym_POUND] = ACTIONS(887),
  },
  [174] = {
    [sym__symbol_chars] = ACTIONS(889),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(891),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(893),
    [sym_nil] = ACTIONS(895),
    [sym_true] = ACTIONS(895),
    [sym_false] = ACTIONS(895),
    [sym_number_long] = ACTIONS(895),
    [sym_number_double] = ACTIONS(893),
    [sym_number_bigint] = ACTIONS(895),
    [sym_number_ratio] = ACTIONS(893),
    [anon_sym_POUND_POUND] = ACTIONS(893),
    [anon_sym_BSLASH] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [anon_sym_POUND_DQUOTE] = ACTIONS(893),
    [anon_sym_SQUOTE] = ACTIONS(893),
    [anon_sym_LPARENquote] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_COLON] = ACTIONS(895),
    [anon_sym_COLON_COLON] = ACTIONS(893),
    [anon_sym_DASH_GT] = ACTIONS(895),
    [anon_sym_DASH_GT_GT] = ACTIONS(893),
    [anon_sym_as_DASH_GT] = ACTIONS(893),
    [anon_sym_some_DASH_GT] = ACTIONS(895),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(893),
    [anon_sym_cond_DASH_GT] = ACTIONS(895),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(893),
    [sym__symbol_chars] = ACTIONS(895),
    [sym_member_access] = ACTIONS(893),
    [sym_field_access] = ACTIONS(893),
    [sym_new_class] = ACTIONS(893),
    [anon_sym_LPAREN] = ACTIONS(895),
    [anon_sym_LBRACK] = ACTIONS(893),
    [anon_sym_RBRACK] = ACTIONS(893),
    [anon_sym_LBRACE] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(893),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(893),
    [anon_sym_POUND_LBRACE] = ACTIONS(893),
    [anon_sym_SEMI] = ACTIONS(893),
    [anon_sym_POUND_BANG] = ACTIONS(893),
    [anon_sym_POUND_] = ACTIONS(893),
    [anon_sym_POUND_LPAREN] = ACTIONS(893),
    [sym_shorthand_function_arg] = ACTIONS(893),
    [anon_sym_CARET] = ACTIONS(895),
    [anon_sym_CARET_COLON] = ACTIONS(893),
    [anon_sym_CARET_DQUOTE] = ACTIONS(893),
    [anon_sym_BQUOTE] = ACTIONS(893),
    [anon_sym_POUND_SQUOTE] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(895),
    [anon_sym_TILDE_AT] = ACTIONS(893),
    [sym_gensym] = ACTIONS(893),
    [anon_sym_AT] = ACTIONS(893),
    [anon_sym_POUND] = ACTIONS(895),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(897),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(899),
  },
  [179] = {
    [sym__anything] = STATE(154),
    [sym__literals] = STATE(154),
    [sym__collection_literals] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_number] = STATE(154),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(154),
    [sym_character] = STATE(154),
    [sym__character] = STATE(35),
    [sym_string] = STATE(154),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(154),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(154),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(154),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(154),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(154),
    [sym_list] = STATE(154),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(154),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(154),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym_set] = STATE(154),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(154),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(154),
    [sym_anonymous_function] = STATE(154),
    [sym_shorthand_function] = STATE(154),
    [sym_defn] = STATE(154),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(154),
    [sym_var_quote] = STATE(154),
    [sym_unquote] = STATE(154),
    [sym_unquote_splice] = STATE(154),
    [sym_deref] = STATE(154),
    [sym_tagged_literal] = STATE(154),
    [aux_sym_program_repeat1] = STATE(154),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(383),
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
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LPARENquote] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(901),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_TILDE_AT] = ACTIONS(155),
    [sym_gensym] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [180] = {
    [aux_sym__multi_arity_fn_repeat1] = STATE(180),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_LPAREN] = ACTIONS(905),
  },
  [181] = {
    [aux_sym__string_repeat1] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(910),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(910),
  },
  [182] = {
    [anon_sym_LPAREN] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(912),
    [anon_sym_LBRACE] = ACTIONS(912),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(912),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(912),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(261),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(261),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(914),
    [anon_sym_LBRACK] = ACTIONS(914),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(916),
  },
  [186] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(184),
    [sym__hash_map] = STATE(114),
    [sym_namespace_map] = STATE(114),
    [sym__after_the_fn_name] = STATE(201),
    [sym__single_arity_fn] = STATE(201),
    [sym__multi_arity_fn] = STATE(201),
    [sym_params] = STATE(148),
    [sym_attr_map] = STATE(202),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(229),
  },
  [187] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__after_the_fn_name] = STATE(201),
    [sym__single_arity_fn] = STATE(201),
    [sym__multi_arity_fn] = STATE(201),
    [sym_params] = STATE(148),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [188] = {
    [sym_string] = STATE(182),
    [sym__string] = STATE(183),
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(184),
    [sym__hash_map] = STATE(114),
    [sym_namespace_map] = STATE(114),
    [sym__after_the_fn_name] = STATE(201),
    [sym__single_arity_fn] = STATE(201),
    [sym__multi_arity_fn] = STATE(201),
    [sym_params] = STATE(148),
    [sym_docstring] = STATE(203),
    [sym_attr_map] = STATE(202),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(229),
  },
  [189] = {
    [sym_metadata_shorthand] = STATE(189),
    [aux_sym_metadata_repeat1] = STATE(189),
    [anon_sym_DASH_GT] = ACTIONS(918),
    [anon_sym_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_as_DASH_GT] = ACTIONS(597),
    [anon_sym_some_DASH_GT] = ACTIONS(918),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(597),
    [anon_sym_cond_DASH_GT] = ACTIONS(918),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(597),
    [sym__symbol_chars] = ACTIONS(918),
    [anon_sym_CARET] = ACTIONS(599),
    [anon_sym_CARET_COLON] = ACTIONS(602),
    [anon_sym_CARET_DQUOTE] = ACTIONS(605),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(920),
    [sym_nil] = ACTIONS(922),
    [sym_true] = ACTIONS(922),
    [sym_false] = ACTIONS(922),
    [sym_number_long] = ACTIONS(922),
    [sym_number_double] = ACTIONS(920),
    [sym_number_bigint] = ACTIONS(922),
    [sym_number_ratio] = ACTIONS(920),
    [anon_sym_POUND_POUND] = ACTIONS(920),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(920),
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
    [anon_sym_POUND] = ACTIONS(922),
  },
  [191] = {
    [anon_sym_DASH_GT] = ACTIONS(724),
    [anon_sym_DASH_GT_GT] = ACTIONS(722),
    [anon_sym_as_DASH_GT] = ACTIONS(722),
    [anon_sym_some_DASH_GT] = ACTIONS(724),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(722),
    [anon_sym_cond_DASH_GT] = ACTIONS(724),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(722),
    [sym__symbol_chars] = ACTIONS(724),
    [anon_sym_LPAREN] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(722),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(722),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(722),
    [anon_sym_POUND_LBRACE] = ACTIONS(722),
  },
  [192] = {
    [anon_sym_DASH_GT] = ACTIONS(838),
    [anon_sym_DASH_GT_GT] = ACTIONS(836),
    [anon_sym_as_DASH_GT] = ACTIONS(836),
    [anon_sym_some_DASH_GT] = ACTIONS(838),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(836),
    [anon_sym_cond_DASH_GT] = ACTIONS(838),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(836),
    [sym__symbol_chars] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(836),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(836),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(836),
    [anon_sym_POUND_LBRACE] = ACTIONS(836),
  },
  [193] = {
    [sym__anything] = STATE(92),
    [sym__literals] = STATE(92),
    [sym__collection_literals] = STATE(92),
    [sym_boolean] = STATE(92),
    [sym_number] = STATE(92),
    [sym__number] = STATE(34),
    [sym_symbolic_value] = STATE(92),
    [sym_character] = STATE(92),
    [sym__character] = STATE(35),
    [sym_string] = STATE(92),
    [sym__string] = STATE(36),
    [sym_regex] = STATE(92),
    [sym__regex] = STATE(37),
    [sym_quote] = STATE(92),
    [sym__quote] = STATE(38),
    [sym_keyword] = STATE(92),
    [sym__keyword] = STATE(39),
    [sym__unqualified_keyword] = STATE(39),
    [sym_qualified_keyword] = STATE(39),
    [sym_symbol] = STATE(92),
    [sym__symbol] = STATE(40),
    [sym_threading_macro] = STATE(40),
    [sym_qualified_symbol] = STATE(40),
    [sym__qualified_symbol] = STATE(41),
    [sym_interop] = STATE(92),
    [sym_list] = STATE(92),
    [sym__list] = STATE(42),
    [sym_vector] = STATE(92),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(92),
    [sym__hash_map] = STATE(44),
    [sym_namespace_map] = STATE(44),
    [sym__hash_map_kv_pair] = STATE(159),
    [sym__hash_map_key] = STATE(92),
    [sym_set] = STATE(92),
    [sym__set] = STATE(45),
    [sym_comment] = STATE(92),
    [sym_semicolon] = STATE(46),
    [sym_shebang_line] = STATE(46),
    [sym_ignore_form] = STATE(46),
    [sym_comment_macro] = STATE(46),
    [sym__functions] = STATE(92),
    [sym_anonymous_function] = STATE(92),
    [sym_shorthand_function] = STATE(92),
    [sym_defn] = STATE(92),
    [sym_metadata] = STATE(47),
    [sym__metadata_map] = STATE(48),
    [sym_metadata_shorthand] = STATE(50),
    [sym_syntax_quote] = STATE(92),
    [sym_var_quote] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splice] = STATE(92),
    [sym_deref] = STATE(92),
    [sym_tagged_literal] = STATE(92),
    [aux_sym__hash_map_repeat1] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(50),
    [sym_nil] = ACTIONS(173),
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
    [anon_sym_SQUOTE] = ACTIONS(175),
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
    [anon_sym_RBRACE] = ACTIONS(924),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(57),
    [sym_shorthand_function_arg] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_CARET_COLON] = ACTIONS(63),
    [anon_sym_CARET_DQUOTE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_TILDE_AT] = ACTIONS(187),
    [sym_gensym] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
  [194] = {
    [sym__hex_char] = ACTIONS(926),
  },
  [195] = {
    [anon_sym_DQUOTE] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(638),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(638),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(928),
    [anon_sym_LPAREN] = ACTIONS(928),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(930),
    [sym_nil] = ACTIONS(932),
    [sym_true] = ACTIONS(932),
    [sym_false] = ACTIONS(932),
    [sym_number_long] = ACTIONS(932),
    [sym_number_double] = ACTIONS(930),
    [sym_number_bigint] = ACTIONS(932),
    [sym_number_ratio] = ACTIONS(930),
    [anon_sym_POUND_POUND] = ACTIONS(930),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(930),
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
    [anon_sym_POUND] = ACTIONS(932),
  },
  [198] = {
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(331),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(331),
  },
  [199] = {
    [aux_sym__string_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(934),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(337),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(936),
    [sym_nil] = ACTIONS(938),
    [sym_true] = ACTIONS(938),
    [sym_false] = ACTIONS(938),
    [sym_number_long] = ACTIONS(938),
    [sym_number_double] = ACTIONS(936),
    [sym_number_bigint] = ACTIONS(938),
    [sym_number_ratio] = ACTIONS(936),
    [anon_sym_POUND_POUND] = ACTIONS(936),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(936),
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
    [anon_sym_POUND] = ACTIONS(938),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(940),
  },
  [202] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__after_the_fn_name] = STATE(208),
    [sym__single_arity_fn] = STATE(208),
    [sym__multi_arity_fn] = STATE(208),
    [sym_params] = STATE(148),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [203] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym_hash_map] = STATE(184),
    [sym__hash_map] = STATE(114),
    [sym_namespace_map] = STATE(114),
    [sym__after_the_fn_name] = STATE(208),
    [sym__single_arity_fn] = STATE(208),
    [sym__multi_arity_fn] = STATE(208),
    [sym_params] = STATE(148),
    [sym_attr_map] = STATE(209),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(229),
  },
  [204] = {
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(920),
    [anon_sym_POUND_LBRACE] = ACTIONS(920),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(942),
    [sym_nil] = ACTIONS(944),
    [sym_true] = ACTIONS(944),
    [sym_false] = ACTIONS(944),
    [sym_number_long] = ACTIONS(944),
    [sym_number_double] = ACTIONS(942),
    [sym_number_bigint] = ACTIONS(944),
    [sym_number_ratio] = ACTIONS(942),
    [anon_sym_POUND_POUND] = ACTIONS(942),
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
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(942),
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
    [anon_sym_POUND] = ACTIONS(944),
  },
  [206] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(614),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(614),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(946),
    [sym_nil] = ACTIONS(948),
    [sym_true] = ACTIONS(948),
    [sym_false] = ACTIONS(948),
    [sym_number_long] = ACTIONS(948),
    [sym_number_double] = ACTIONS(946),
    [sym_number_bigint] = ACTIONS(948),
    [sym_number_ratio] = ACTIONS(946),
    [anon_sym_POUND_POUND] = ACTIONS(946),
    [anon_sym_BSLASH] = ACTIONS(946),
    [anon_sym_DQUOTE] = ACTIONS(946),
    [anon_sym_POUND_DQUOTE] = ACTIONS(946),
    [anon_sym_SQUOTE] = ACTIONS(946),
    [anon_sym_LPARENquote] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(946),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_COLON_COLON] = ACTIONS(946),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [anon_sym_DASH_GT_GT] = ACTIONS(946),
    [anon_sym_as_DASH_GT] = ACTIONS(946),
    [anon_sym_some_DASH_GT] = ACTIONS(948),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(946),
    [anon_sym_cond_DASH_GT] = ACTIONS(948),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(946),
    [sym__symbol_chars] = ACTIONS(948),
    [sym_member_access] = ACTIONS(946),
    [sym_field_access] = ACTIONS(946),
    [sym_new_class] = ACTIONS(946),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(946),
    [anon_sym_RBRACK] = ACTIONS(946),
    [anon_sym_LBRACE] = ACTIONS(946),
    [anon_sym_RBRACE] = ACTIONS(946),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(946),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(946),
    [anon_sym_POUND_LBRACE] = ACTIONS(946),
    [anon_sym_SEMI] = ACTIONS(946),
    [anon_sym_POUND_BANG] = ACTIONS(946),
    [anon_sym_POUND_] = ACTIONS(946),
    [anon_sym_POUND_LPAREN] = ACTIONS(946),
    [sym_shorthand_function_arg] = ACTIONS(946),
    [anon_sym_CARET] = ACTIONS(948),
    [anon_sym_CARET_COLON] = ACTIONS(946),
    [anon_sym_CARET_DQUOTE] = ACTIONS(946),
    [anon_sym_BQUOTE] = ACTIONS(946),
    [anon_sym_POUND_SQUOTE] = ACTIONS(946),
    [anon_sym_TILDE] = ACTIONS(948),
    [anon_sym_TILDE_AT] = ACTIONS(946),
    [sym_gensym] = ACTIONS(946),
    [anon_sym_AT] = ACTIONS(946),
    [anon_sym_POUND] = ACTIONS(948),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(950),
  },
  [209] = {
    [sym_vector] = STATE(145),
    [sym__vector] = STATE(43),
    [sym__after_the_fn_name] = STATE(211),
    [sym__single_arity_fn] = STATE(211),
    [sym__multi_arity_fn] = STATE(211),
    [sym_params] = STATE(148),
    [aux_sym__multi_arity_fn_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(41),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(952),
    [sym_nil] = ACTIONS(954),
    [sym_true] = ACTIONS(954),
    [sym_false] = ACTIONS(954),
    [sym_number_long] = ACTIONS(954),
    [sym_number_double] = ACTIONS(952),
    [sym_number_bigint] = ACTIONS(954),
    [sym_number_ratio] = ACTIONS(952),
    [anon_sym_POUND_POUND] = ACTIONS(952),
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
    [sym_member_access] = ACTIONS(952),
    [sym_field_access] = ACTIONS(952),
    [sym_new_class] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(954),
    [anon_sym_LBRACK] = ACTIONS(952),
    [anon_sym_RBRACK] = ACTIONS(952),
    [anon_sym_LBRACE] = ACTIONS(952),
    [anon_sym_RBRACE] = ACTIONS(952),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(952),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(952),
    [anon_sym_POUND_LBRACE] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(952),
    [anon_sym_POUND_BANG] = ACTIONS(952),
    [anon_sym_POUND_] = ACTIONS(952),
    [anon_sym_POUND_LPAREN] = ACTIONS(952),
    [sym_shorthand_function_arg] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(954),
    [anon_sym_CARET_COLON] = ACTIONS(952),
    [anon_sym_CARET_DQUOTE] = ACTIONS(952),
    [anon_sym_BQUOTE] = ACTIONS(952),
    [anon_sym_POUND_SQUOTE] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(954),
    [anon_sym_TILDE_AT] = ACTIONS(952),
    [sym_gensym] = ACTIONS(952),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_POUND] = ACTIONS(954),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(956),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(958),
    [sym_nil] = ACTIONS(960),
    [sym_true] = ACTIONS(960),
    [sym_false] = ACTIONS(960),
    [sym_number_long] = ACTIONS(960),
    [sym_number_double] = ACTIONS(958),
    [sym_number_bigint] = ACTIONS(960),
    [sym_number_ratio] = ACTIONS(958),
    [anon_sym_POUND_POUND] = ACTIONS(958),
    [anon_sym_BSLASH] = ACTIONS(958),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_POUND_DQUOTE] = ACTIONS(958),
    [anon_sym_SQUOTE] = ACTIONS(958),
    [anon_sym_LPARENquote] = ACTIONS(958),
    [anon_sym_RPAREN] = ACTIONS(958),
    [anon_sym_COLON] = ACTIONS(960),
    [anon_sym_COLON_COLON] = ACTIONS(958),
    [anon_sym_DASH_GT] = ACTIONS(960),
    [anon_sym_DASH_GT_GT] = ACTIONS(958),
    [anon_sym_as_DASH_GT] = ACTIONS(958),
    [anon_sym_some_DASH_GT] = ACTIONS(960),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(958),
    [anon_sym_cond_DASH_GT] = ACTIONS(960),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(958),
    [sym__symbol_chars] = ACTIONS(960),
    [sym_member_access] = ACTIONS(958),
    [sym_field_access] = ACTIONS(958),
    [sym_new_class] = ACTIONS(958),
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(958),
    [anon_sym_RBRACK] = ACTIONS(958),
    [anon_sym_LBRACE] = ACTIONS(958),
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(958),
    [aux_sym_SLASH_BSLASH_POUND_BSLASH_COLON_LBRACKa_DASHzA_DASHZ_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_RBRACK_LBRACKa_DASHzA_DASHZ0_DASH9_BSLASH_STAR_BSLASH_PLUS_BSLASH_BANG_BSLASH_DASH_BSLASH_BSLASH_QMARK_BSLASH_SQUOTE_BSLASH_COLON_RBRACK_STAR_SLASH] = ACTIONS(958),
    [anon_sym_POUND_LBRACE] = ACTIONS(958),
    [anon_sym_SEMI] = ACTIONS(958),
    [anon_sym_POUND_BANG] = ACTIONS(958),
    [anon_sym_POUND_] = ACTIONS(958),
    [anon_sym_POUND_LPAREN] = ACTIONS(958),
    [sym_shorthand_function_arg] = ACTIONS(958),
    [anon_sym_CARET] = ACTIONS(960),
    [anon_sym_CARET_COLON] = ACTIONS(958),
    [anon_sym_CARET_DQUOTE] = ACTIONS(958),
    [anon_sym_BQUOTE] = ACTIONS(958),
    [anon_sym_POUND_SQUOTE] = ACTIONS(958),
    [anon_sym_TILDE] = ACTIONS(960),
    [anon_sym_TILDE_AT] = ACTIONS(958),
    [sym_gensym] = ACTIONS(958),
    [anon_sym_AT] = ACTIONS(958),
    [anon_sym_POUND] = ACTIONS(960),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(49),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(34),
  [13] = {.count = 1, .reusable = true}, SHIFT(34),
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
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, SHIFT(49),
  [61] = {.count = 1, .reusable = false}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(26),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = false}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(31),
  [77] = {.count = 1, .reusable = false}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(51),
  [85] = {.count = 1, .reusable = false}, SHIFT(52),
  [87] = {.count = 1, .reusable = false}, SHIFT(53),
  [89] = {.count = 1, .reusable = false}, SHIFT(54),
  [91] = {.count = 1, .reusable = false}, SHIFT(55),
  [93] = {.count = 1, .reusable = false}, SHIFT(56),
  [95] = {.count = 1, .reusable = false}, SHIFT(57),
  [97] = {.count = 1, .reusable = false}, SHIFT(58),
  [99] = {.count = 1, .reusable = false}, SHIFT(59),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = false}, SHIFT(65),
  [105] = {.count = 1, .reusable = true}, SHIFT(60),
  [107] = {.count = 1, .reusable = true}, SHIFT(61),
  [109] = {.count = 1, .reusable = true}, SHIFT(65),
  [111] = {.count = 1, .reusable = true}, SHIFT(62),
  [113] = {.count = 1, .reusable = false}, SHIFT(63),
  [115] = {.count = 1, .reusable = true}, SHIFT(64),
  [117] = {.count = 1, .reusable = true}, SHIFT(66),
  [119] = {.count = 1, .reusable = true}, SHIFT(67),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(68),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_interop, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_interop, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(78),
  [137] = {.count = 1, .reusable = true}, SHIFT(69),
  [139] = {.count = 1, .reusable = true}, SHIFT(70),
  [141] = {.count = 1, .reusable = true}, SHIFT(71),
  [143] = {.count = 1, .reusable = false}, SHIFT(72),
  [145] = {.count = 1, .reusable = false}, SHIFT(73),
  [147] = {.count = 1, .reusable = true}, SHIFT(78),
  [149] = {.count = 1, .reusable = false}, SHIFT(74),
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
  [173] = {.count = 1, .reusable = false}, SHIFT(92),
  [175] = {.count = 1, .reusable = true}, SHIFT(86),
  [177] = {.count = 1, .reusable = true}, SHIFT(87),
  [179] = {.count = 1, .reusable = true}, SHIFT(88),
  [181] = {.count = 1, .reusable = true}, SHIFT(92),
  [183] = {.count = 1, .reusable = true}, SHIFT(89),
  [185] = {.count = 1, .reusable = false}, SHIFT(90),
  [187] = {.count = 1, .reusable = true}, SHIFT(91),
  [189] = {.count = 1, .reusable = true}, SHIFT(94),
  [191] = {.count = 1, .reusable = true}, SHIFT(96),
  [193] = {.count = 1, .reusable = false}, SHIFT(103),
  [195] = {.count = 1, .reusable = true}, SHIFT(97),
  [197] = {.count = 1, .reusable = true}, SHIFT(98),
  [199] = {.count = 1, .reusable = true}, SHIFT(99),
  [201] = {.count = 1, .reusable = true}, SHIFT(103),
  [203] = {.count = 1, .reusable = true}, SHIFT(100),
  [205] = {.count = 1, .reusable = false}, SHIFT(101),
  [207] = {.count = 1, .reusable = true}, SHIFT(102),
  [209] = {.count = 1, .reusable = false}, SHIFT(104),
  [211] = {.count = 1, .reusable = false}, SHIFT(105),
  [213] = {.count = 1, .reusable = false}, SHIFT(106),
  [215] = {.count = 1, .reusable = true}, SHIFT(106),
  [217] = {.count = 1, .reusable = false}, SHIFT(108),
  [219] = {.count = 1, .reusable = true}, SHIFT(107),
  [221] = {.count = 1, .reusable = true}, SHIFT(108),
  [223] = {.count = 1, .reusable = true}, SHIFT(109),
  [225] = {.count = 1, .reusable = true}, SHIFT(110),
  [227] = {.count = 1, .reusable = true}, SHIFT(111),
  [229] = {.count = 1, .reusable = true}, SHIFT(112),
  [231] = {.count = 1, .reusable = false}, SHIFT(109),
  [233] = {.count = 1, .reusable = false}, SHIFT(115),
  [235] = {.count = 1, .reusable = false}, SHIFT(116),
  [237] = {.count = 1, .reusable = true}, SHIFT(116),
  [239] = {.count = 1, .reusable = false}, SHIFT(118),
  [241] = {.count = 1, .reusable = true}, SHIFT(118),
  [243] = {.count = 1, .reusable = false}, SHIFT(119),
  [245] = {.count = 1, .reusable = true}, SHIFT(119),
  [247] = {.count = 1, .reusable = true}, SHIFT(120),
  [249] = {.count = 1, .reusable = true}, SHIFT(122),
  [251] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_character, 1),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_character, 1),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 1),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 1),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 1),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 1),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_set, 1),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_set, 1),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [311] = {.count = 1, .reusable = false}, SHIFT(125),
  [313] = {.count = 1, .reusable = true}, SHIFT(125),
  [315] = {.count = 1, .reusable = false}, SHIFT(126),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_symbolic_value, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_symbolic_value, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [325] = {.count = 1, .reusable = true}, SHIFT(128),
  [327] = {.count = 1, .reusable = true}, SHIFT(129),
  [329] = {.count = 1, .reusable = false}, SHIFT(129),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [335] = {.count = 1, .reusable = false}, SHIFT(130),
  [337] = {.count = 1, .reusable = false}, SHIFT(131),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [343] = {.count = 1, .reusable = false}, SHIFT(132),
  [345] = {.count = 1, .reusable = false}, SHIFT(133),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(134),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [361] = {.count = 1, .reusable = true}, SHIFT(135),
  [363] = {.count = 1, .reusable = true}, SHIFT(136),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(138),
  [371] = {.count = 1, .reusable = true}, SHIFT(137),
  [373] = {.count = 1, .reusable = true}, SHIFT(138),
  [375] = {.count = 1, .reusable = false}, SHIFT(139),
  [377] = {.count = 1, .reusable = true}, SHIFT(139),
  [379] = {.count = 1, .reusable = false}, SHIFT(140),
  [381] = {.count = 1, .reusable = true}, SHIFT(141),
  [383] = {.count = 1, .reusable = false}, SHIFT(154),
  [385] = {.count = 1, .reusable = true}, SHIFT(153),
  [387] = {.count = 1, .reusable = true}, SHIFT(154),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [393] = {.count = 1, .reusable = false}, SHIFT(156),
  [395] = {.count = 1, .reusable = true}, SHIFT(155),
  [397] = {.count = 1, .reusable = true}, SHIFT(156),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [403] = {.count = 1, .reusable = false}, SHIFT(157),
  [405] = {.count = 1, .reusable = true}, SHIFT(157),
  [407] = {.count = 1, .reusable = true}, SHIFT(158),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [413] = {.count = 1, .reusable = true}, SHIFT(160),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [419] = {.count = 1, .reusable = false}, SHIFT(163),
  [421] = {.count = 1, .reusable = true}, SHIFT(162),
  [423] = {.count = 1, .reusable = true}, SHIFT(163),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 2),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(164),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 2),
  [447] = {.count = 1, .reusable = true}, SHIFT(165),
  [449] = {.count = 1, .reusable = true}, SHIFT(167),
  [451] = {.count = 1, .reusable = true}, SHIFT(169),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym__metadata_map, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym__metadata_map, 2),
  [457] = {.count = 1, .reusable = false}, SHIFT(170),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_syntax_quote, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_syntax_quote, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_var_quote, 2),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_var_quote, 2),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_unquote, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_unquote, 2),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_unquote_splice, 2),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_unquote_splice, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_deref, 2),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_deref, 2),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_tagged_literal, 2),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_tagged_literal, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__collection_literals, 2),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym__collection_literals, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [495] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [510] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [519] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [525] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [531] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [585] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [594] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(126),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(25),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(26),
  [608] = {.count = 1, .reusable = true}, SHIFT(171),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [618] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [620] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(131),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [627] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(133),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [636] = {.count = 1, .reusable = true}, SHIFT(172),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym__qualified_symbol, 3),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym__qualified_symbol, 3),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [646] = {.count = 1, .reusable = true}, SHIFT(173),
  [648] = {.count = 1, .reusable = true}, SHIFT(174),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_function_name, 1),
  [652] = {.count = 1, .reusable = false}, REDUCE(sym_params, 1),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [656] = {.count = 1, .reusable = true}, SHIFT(176),
  [658] = {.count = 1, .reusable = false}, SHIFT(179),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 1),
  [662] = {.count = 1, .reusable = true}, SHIFT(179),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym__multi_arity_fn, 1),
  [666] = {.count = 1, .reusable = true}, SHIFT(181),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [687] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [697] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [706] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [712] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(83),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [726] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(92),
  [729] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [732] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(34),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(34),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [747] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(86),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [756] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [762] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [768] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [771] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [774] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [783] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [791] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [794] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(88),
  [803] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(92),
  [809] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(24),
  [812] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(26),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(89),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(28),
  [824] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(90),
  [827] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(91),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(31),
  [833] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(32),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [840] = {.count = 1, .reusable = true}, SHIFT(190),
  [842] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [844] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [846] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(163),
  [849] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [852] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [855] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(163),
  [858] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [861] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [864] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(102),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_shorthand_function, 3),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym_shorthand_function, 3),
  [871] = {.count = 1, .reusable = true}, SHIFT(191),
  [873] = {.count = 1, .reusable = true}, SHIFT(192),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_metadata_shorthand, 3),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_metadata_shorthand, 3),
  [879] = {.count = 1, .reusable = true}, SHIFT(194),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 4),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 4),
  [889] = {.count = 1, .reusable = true}, SHIFT(195),
  [891] = {.count = 1, .reusable = true}, SHIFT(196),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 4),
  [895] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 4),
  [897] = {.count = 1, .reusable = true}, SHIFT(197),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym__single_arity_fn, 2),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [903] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 2), SHIFT_REPEAT(141),
  [908] = {.count = 1, .reusable = false}, SHIFT(198),
  [910] = {.count = 1, .reusable = false}, SHIFT(199),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym_docstring, 1),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym_attr_map, 1),
  [916] = {.count = 1, .reusable = true}, SHIFT(200),
  [918] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [922] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [924] = {.count = 1, .reusable = true}, SHIFT(204),
  [926] = {.count = 1, .reusable = true}, SHIFT(205),
  [928] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multi_arity_fn_repeat1, 3),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_function, 5),
  [932] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_function, 5),
  [934] = {.count = 1, .reusable = false}, SHIFT(206),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 5),
  [938] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 5),
  [940] = {.count = 1, .reusable = true}, SHIFT(207),
  [942] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [944] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 6),
  [948] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 6),
  [950] = {.count = 1, .reusable = true}, SHIFT(210),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 7),
  [954] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 7),
  [956] = {.count = 1, .reusable = true}, SHIFT(212),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 8),
  [960] = {.count = 1, .reusable = false}, REDUCE(sym_defn, 8),
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
