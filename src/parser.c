#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 273
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  anon_sym_fn = 32,
  anon_sym_fn_STAR = 33,
  anon_sym_let = 34,
  anon_sym_letfn = 35,
  anon_sym_if = 36,
  anon_sym_if_DASHlet = 37,
  anon_sym_while = 38,
  anon_sym_cond = 39,
  anon_sym_case = 40,
  anon_sym_try = 41,
  anon_sym_catch = 42,
  anon_sym_throw = 43,
  anon_sym_monitor_DASHenter = 44,
  anon_sym_monitor_DASHexit = 45,
  sym_namespace_definition = 46,
  anon_sym_def = 47,
  anon_sym_defn = 48,
  anon_sym_defn_DASH = 49,
  anon_sym_defmacro = 50,
  anon_sym_DASH_GT = 51,
  anon_sym_DASH_GT_GT = 52,
  anon_sym_as_DASH_GT = 53,
  anon_sym_some_DASH_GT = 54,
  anon_sym_some_DASH_GT_GT = 55,
  anon_sym_cond_DASH_GT = 56,
  anon_sym_cond_DASH_GT_GT = 57,
  sym__symbol_chars = 58,
  anon_sym_LPAREN = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_POUND_COLON_COLON_LBRACE = 64,
  anon_sym_POUND = 65,
  anon_sym_POUND_LBRACE = 66,
  anon_sym_SEMI = 67,
  aux_sym_SLASH_DOT_STAR_SLASH = 68,
  anon_sym_POUND_BANG = 69,
  anon_sym_POUND_ = 70,
  anon_sym_ = 71,
  anon_sym_LPARENcomment = 72,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH = 73,
  sym_program = 74,
  sym__anything = 75,
  sym__literal = 76,
  sym__collection_literal = 77,
  sym_boolean = 78,
  sym_number = 79,
  sym__number = 80,
  sym_character = 81,
  sym__character = 82,
  sym__special_char = 83,
  sym__unicode_char = 84,
  sym__octal_char = 85,
  sym__octal_num = 86,
  sym_string = 87,
  sym__string = 88,
  sym_regex = 89,
  sym__regex = 90,
  sym_quote = 91,
  sym__quote = 92,
  sym_keyword = 93,
  sym__keyword = 94,
  sym__unqualified_keyword = 95,
  sym_qualified_keyword = 96,
  sym_symbol = 97,
  sym__symbol = 98,
  sym_special_form = 99,
  sym_def_form = 100,
  sym_threading_macro = 101,
  sym_qualified_symbol = 102,
  sym_list = 103,
  sym__list = 104,
  sym_vector = 105,
  sym__vector = 106,
  sym_hash_map = 107,
  sym__hash_map = 108,
  sym_namespace_map = 109,
  sym__hash_map_kv_pair = 110,
  sym__hash_map_key = 111,
  sym__hash_map_value = 112,
  sym_set = 113,
  sym__set = 114,
  sym_comment = 115,
  sym_semicolon = 116,
  sym_shebang_line = 117,
  sym_ignore_form = 118,
  sym_comment_macro = 119,
  sym__one_form = 120,
  sym__paren_sequence = 121,
  sym__bracket_sequence = 122,
  sym__curly_brace_sequence = 123,
  aux_sym_program_repeat1 = 124,
  aux_sym__string_repeat1 = 125,
  aux_sym__regex_repeat1 = 126,
  aux_sym__hash_map_repeat1 = 127,
  aux_sym_ignore_form_repeat1 = 128,
  aux_sym_comment_macro_repeat1 = 129,
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
  [anon_sym_fn] = "fn",
  [anon_sym_fn_STAR] = "fn*",
  [anon_sym_let] = "let",
  [anon_sym_letfn] = "letfn",
  [anon_sym_if] = "if",
  [anon_sym_if_DASHlet] = "if-let",
  [anon_sym_while] = "while",
  [anon_sym_cond] = "cond",
  [anon_sym_case] = "case",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_throw] = "throw",
  [anon_sym_monitor_DASHenter] = "monitor-enter",
  [anon_sym_monitor_DASHexit] = "monitor-exit",
  [sym_namespace_definition] = "namespace_definition",
  [anon_sym_def] = "def",
  [anon_sym_defn] = "defn",
  [anon_sym_defn_DASH] = "defn-",
  [anon_sym_defmacro] = "defmacro",
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
  [sym_special_form] = "special_form",
  [sym_def_form] = "def_form",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__regex_repeat1] = "_regex_repeat1",
  [aux_sym__hash_map_repeat1] = "_hash_map_repeat1",
  [aux_sym_ignore_form_repeat1] = "ignore_form_repeat1",
  [aux_sym_comment_macro_repeat1] = "comment_macro_repeat1",
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letfn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor_DASHenter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor_DASHexit] = {
    .visible = true,
    .named = false,
  },
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
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
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_def_form] = {
    .visible = true,
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
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(46);
      if (lookahead == 'l')
        ADVANCE(52);
      if (lookahead == 'm')
        ADVANCE(57);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(83);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(101);
      if (lookahead == 'u')
        ADVANCE(112);
      if (lookahead == 'w')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(124);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      if (lookahead == 'f')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'l')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 't')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == 'f')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_letfn);
      END_STATE();
    case 57:
      if (lookahead == 'o')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '-')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 't')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_monitor_DASHenter);
      END_STATE();
    case 70:
      if (lookahead == 'i')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_monitor_DASHexit);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'w')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'l')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'i')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'n')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 80:
      if (lookahead == 'l')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_namespace_definition);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 84:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'r')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 90:
      if (lookahead == 'o')
        ADVANCE(91);
      if (lookahead == 'p')
        ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'm')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == '-')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == '>')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT);
      if (lookahead == '>')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_some_DASH_GT_GT);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 101:
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'h')
        ADVANCE(104);
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'b')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 104:
      if (lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'o')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'w')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 108:
      if (lookahead == 'u')
        ADVANCE(109);
      if (lookahead == 'y')
        ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 113:
      if (lookahead == 'h')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'i')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'l')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(121);
      if (lookahead == '_')
        ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 121:
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
    case 122:
      if (lookahead == '_')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '.')
        ADVANCE(121);
      if (lookahead == '_')
        ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 125:
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(125);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(127);
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
        ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(127);
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
        ADVANCE(128);
      END_STATE();
    case 128:
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
        ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(127);
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
        ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
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
        ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_as_DASH_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(135);
      if (lookahead == 'o')
        ADVANCE(141);
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
        ADVANCE(128);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
        ADVANCE(136);
      if (lookahead == 't')
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
        ADVANCE(128);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(137);
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
        ADVANCE(128);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_case);
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
        ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'c')
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
        ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'h')
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
        ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_catch);
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
        ADVANCE(128);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(142);
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
        ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'd')
        ADVANCE(143);
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
        ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
        ADVANCE(145);
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
        ADVANCE(128);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT);
      if (lookahead == '>')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_cond_DASH_GT_GT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(148);
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
        ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'f')
        ADVANCE(149);
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
        ADVANCE(128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm')
        ADVANCE(150);
      if (lookahead == 'n')
        ADVANCE(155);
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
        ADVANCE(128);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(151);
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
        ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'c')
        ADVANCE(152);
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
        ADVANCE(128);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
        ADVANCE(153);
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
        ADVANCE(128);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(154);
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
        ADVANCE(128);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_defmacro);
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
        ADVANCE(128);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '-')
        ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 156:
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
        ADVANCE(128);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'a')
        ADVANCE(158);
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
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(128);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
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
        ADVANCE(128);
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
        ADVANCE(128);
      END_STATE();
    case 161:
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
        ADVANCE(128);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '*')
        ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_fn_STAR);
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
        ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'f')
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
        ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-')
        ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(168);
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
        ADVANCE(128);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 't')
        ADVANCE(169);
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
        ADVANCE(128);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_if_DASHlet);
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
        ADVANCE(128);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(171);
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
        ADVANCE(128);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 't')
        ADVANCE(172);
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
        ADVANCE(128);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == 'f')
        ADVANCE(173);
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
        ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(174);
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
        ADVANCE(128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_letfn);
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
        ADVANCE(128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(176);
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
        ADVANCE(128);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__symbol_chars);
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
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
        ADVANCE(178);
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
        ADVANCE(128);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 't')
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
        ADVANCE(128);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(180);
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
        ADVANCE(128);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
        ADVANCE(181);
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
        ADVANCE(128);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(128);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'x')
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
        ADVANCE(128);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 't')
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
        ADVANCE(128);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(186);
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
        ADVANCE(128);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
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
        ADVANCE(128);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_monitor_DASHenter);
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
        ADVANCE(128);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
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
        ADVANCE(128);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 't')
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
        ADVANCE(128);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_monitor_DASHexit);
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
        ADVANCE(128);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
        ADVANCE(192);
      if (lookahead == 's')
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
        ADVANCE(128);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(128);
      END_STATE();
    case 193:
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
        ADVANCE(128);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_namespace_definition);
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
        ADVANCE(128);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
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
        ADVANCE(128);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'm')
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
        ADVANCE(128);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
        ADVANCE(198);
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
        ADVANCE(128);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == '>')
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
        ADVANCE(128);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'h')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(205);
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
        ADVANCE(128);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'r')
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
        ADVANCE(128);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'o')
        ADVANCE(203);
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
        ADVANCE(128);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'w')
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
        ADVANCE(128);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_throw);
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
        ADVANCE(128);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'u')
        ADVANCE(206);
      if (lookahead == 'y')
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
        ADVANCE(128);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(128);
      END_STATE();
    case 207:
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
        ADVANCE(128);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_try);
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
        ADVANCE(128);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'h')
        ADVANCE(210);
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
        ADVANCE(128);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'i')
        ADVANCE(211);
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
        ADVANCE(128);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'l')
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
        ADVANCE(128);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'e')
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
        ADVANCE(128);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_while);
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
        ADVANCE(128);
      END_STATE();
    case 214:
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(214);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 215:
      if (lookahead == '\n')
        SKIP(215);
      if (lookahead == ',')
        ADVANCE(216);
      if (lookahead == 'b')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(226);
      if (lookahead == 'n')
        ADVANCE(234);
      if (lookahead == 'o')
        ADVANCE(83);
      if (lookahead == 'r')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 't')
        ADVANCE(237);
      if (lookahead == 'u')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'c')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'k')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 's')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'p')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'a')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'c')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'r')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'm')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'f')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'd')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(97);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(102);
      END_STATE();
    case 238:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(239);
      if (lookahead == '\\')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (lookahead != 0)
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 242:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '\\')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(242);
      if (lookahead != 0)
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(241);
      END_STATE();
    case 245:
      if (lookahead == ',')
        SKIP(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(246);
      END_STATE();
    case 247:
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(247);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 248:
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(248);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 249:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(249);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 250:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(250);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 251:
      if (lookahead == ',')
        SKIP(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      if (lookahead == '!' ||
          ('*' <= lookahead && lookahead <= '-') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(252);
      if (lookahead == ',')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(254);
      END_STATE();
    case 255:
      if (lookahead == ' ')
        ADVANCE(256);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__symbol_chars);
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
        ADVANCE(128);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 's')
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
        ADVANCE(128);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'h')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(264);
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
        ADVANCE(128);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__symbol_chars);
      if (lookahead == 'y')
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
        ADVANCE(128);
      END_STATE();
    case 265:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 266:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      END_STATE();
    case 267:
      if (lookahead == ',')
        SKIP(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(124);
      END_STATE();
    case 268:
      if (lookahead == ',')
        SKIP(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(269);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 274:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(256);
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(274);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(274);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 275:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(256);
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(275);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 276:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 277:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 278:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(256);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(278);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(278);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 279:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == ')')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 280:
      if (lookahead == ' ')
        ADVANCE(256);
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
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(280);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 281:
      if (lookahead == ' ')
        ADVANCE(256);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(281);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(281);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 282:
      if (lookahead == ' ')
        ADVANCE(256);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        SKIP(282);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(191);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(200);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(282);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(45);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    case 284:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(257);
      if (lookahead == '(')
        ADVANCE(258);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(129);
      if (lookahead == '.')
        ADVANCE(260);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(40);
      if (lookahead == '[')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(134);
      if (lookahead == 'd')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(259);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 215},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 242},
  [6] = {.lex_state = 125},
  [7] = {.lex_state = 125},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 248},
  [15] = {.lex_state = 249},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 250},
  [18] = {.lex_state = 251},
  [19] = {.lex_state = 250},
  [20] = {.lex_state = 252},
  [21] = {.lex_state = 252},
  [22] = {.lex_state = 255},
  [23] = {.lex_state = 265},
  [24] = {.lex_state = 266},
  [25] = {.lex_state = 214},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 214},
  [29] = {.lex_state = 214},
  [30] = {.lex_state = 214},
  [31] = {.lex_state = 214},
  [32] = {.lex_state = 214},
  [33] = {.lex_state = 214},
  [34] = {.lex_state = 214},
  [35] = {.lex_state = 214},
  [36] = {.lex_state = 214},
  [37] = {.lex_state = 125},
  [38] = {.lex_state = 214},
  [39] = {.lex_state = 267},
  [40] = {.lex_state = 268},
  [41] = {.lex_state = 214},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 214},
  [44] = {.lex_state = 242},
  [45] = {.lex_state = 214},
  [46] = {.lex_state = 125},
  [47] = {.lex_state = 255},
  [48] = {.lex_state = 248},
  [49] = {.lex_state = 214},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 251},
  [52] = {.lex_state = 125},
  [53] = {.lex_state = 214},
  [54] = {.lex_state = 255},
  [55] = {.lex_state = 248},
  [56] = {.lex_state = 125},
  [57] = {.lex_state = 214},
  [58] = {.lex_state = 255},
  [59] = {.lex_state = 249},
  [60] = {.lex_state = 125},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 255},
  [63] = {.lex_state = 125},
  [64] = {.lex_state = 250},
  [65] = {.lex_state = 214},
  [66] = {.lex_state = 250},
  [67] = {.lex_state = 125},
  [68] = {.lex_state = 125},
  [69] = {.lex_state = 214},
  [70] = {.lex_state = 255},
  [71] = {.lex_state = 250},
  [72] = {.lex_state = 214},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 238},
  [75] = {.lex_state = 245},
  [76] = {.lex_state = 245},
  [77] = {.lex_state = 274},
  [78] = {.lex_state = 274},
  [79] = {.lex_state = 274},
  [80] = {.lex_state = 275},
  [81] = {.lex_state = 265},
  [82] = {.lex_state = 276},
  [83] = {.lex_state = 277},
  [84] = {.lex_state = 125},
  [85] = {.lex_state = 278},
  [86] = {.lex_state = 255},
  [87] = {.lex_state = 238},
  [88] = {.lex_state = 214},
  [89] = {.lex_state = 245},
  [90] = {.lex_state = 245},
  [91] = {.lex_state = 265},
  [92] = {.lex_state = 265},
  [93] = {.lex_state = 265},
  [94] = {.lex_state = 279},
  [95] = {.lex_state = 265},
  [96] = {.lex_state = 276},
  [97] = {.lex_state = 277},
  [98] = {.lex_state = 125},
  [99] = {.lex_state = 265},
  [100] = {.lex_state = 125},
  [101] = {.lex_state = 267},
  [102] = {.lex_state = 214},
  [103] = {.lex_state = 214},
  [104] = {.lex_state = 238},
  [105] = {.lex_state = 214},
  [106] = {.lex_state = 242},
  [107] = {.lex_state = 280},
  [108] = {.lex_state = 255},
  [109] = {.lex_state = 214},
  [110] = {.lex_state = 245},
  [111] = {.lex_state = 214},
  [112] = {.lex_state = 280},
  [113] = {.lex_state = 255},
  [114] = {.lex_state = 214},
  [115] = {.lex_state = 248},
  [116] = {.lex_state = 281},
  [117] = {.lex_state = 255},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 249},
  [120] = {.lex_state = 274},
  [121] = {.lex_state = 255},
  [122] = {.lex_state = 250},
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 250},
  [125] = {.lex_state = 214},
  [126] = {.lex_state = 250},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 255},
  [129] = {.lex_state = 214},
  [130] = {.lex_state = 250},
  [131] = {.lex_state = 274},
  [132] = {.lex_state = 238},
  [133] = {.lex_state = 274},
  [134] = {.lex_state = 275},
  [135] = {.lex_state = 251},
  [136] = {.lex_state = 274},
  [137] = {.lex_state = 265},
  [138] = {.lex_state = 238},
  [139] = {.lex_state = 245},
  [140] = {.lex_state = 245},
  [141] = {.lex_state = 276},
  [142] = {.lex_state = 276},
  [143] = {.lex_state = 276},
  [144] = {.lex_state = 283},
  [145] = {.lex_state = 265},
  [146] = {.lex_state = 276},
  [147] = {.lex_state = 274},
  [148] = {.lex_state = 277},
  [149] = {.lex_state = 125},
  [150] = {.lex_state = 276},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 245},
  [153] = {.lex_state = 245},
  [154] = {.lex_state = 277},
  [155] = {.lex_state = 277},
  [156] = {.lex_state = 277},
  [157] = {.lex_state = 284},
  [158] = {.lex_state = 265},
  [159] = {.lex_state = 276},
  [160] = {.lex_state = 277},
  [161] = {.lex_state = 274},
  [162] = {.lex_state = 125},
  [163] = {.lex_state = 277},
  [164] = {.lex_state = 277},
  [165] = {.lex_state = 278},
  [166] = {.lex_state = 278},
  [167] = {.lex_state = 255},
  [168] = {.lex_state = 265},
  [169] = {.lex_state = 238},
  [170] = {.lex_state = 265},
  [171] = {.lex_state = 279},
  [172] = {.lex_state = 251},
  [173] = {.lex_state = 265},
  [174] = {.lex_state = 265},
  [175] = {.lex_state = 265},
  [176] = {.lex_state = 276},
  [177] = {.lex_state = 265},
  [178] = {.lex_state = 277},
  [179] = {.lex_state = 277},
  [180] = {.lex_state = 214},
  [181] = {.lex_state = 265},
  [182] = {.lex_state = 267},
  [183] = {.lex_state = 280},
  [184] = {.lex_state = 280},
  [185] = {.lex_state = 214},
  [186] = {.lex_state = 280},
  [187] = {.lex_state = 280},
  [188] = {.lex_state = 281},
  [189] = {.lex_state = 281},
  [190] = {.lex_state = 274},
  [191] = {.lex_state = 274},
  [192] = {.lex_state = 214},
  [193] = {.lex_state = 250},
  [194] = {.lex_state = 282},
  [195] = {.lex_state = 282},
  [196] = {.lex_state = 274},
  [197] = {.lex_state = 245},
  [198] = {.lex_state = 274},
  [199] = {.lex_state = 274},
  [200] = {.lex_state = 276},
  [201] = {.lex_state = 238},
  [202] = {.lex_state = 276},
  [203] = {.lex_state = 283},
  [204] = {.lex_state = 251},
  [205] = {.lex_state = 276},
  [206] = {.lex_state = 265},
  [207] = {.lex_state = 276},
  [208] = {.lex_state = 276},
  [209] = {.lex_state = 276},
  [210] = {.lex_state = 277},
  [211] = {.lex_state = 277},
  [212] = {.lex_state = 274},
  [213] = {.lex_state = 276},
  [214] = {.lex_state = 277},
  [215] = {.lex_state = 238},
  [216] = {.lex_state = 277},
  [217] = {.lex_state = 284},
  [218] = {.lex_state = 251},
  [219] = {.lex_state = 277},
  [220] = {.lex_state = 265},
  [221] = {.lex_state = 277},
  [222] = {.lex_state = 276},
  [223] = {.lex_state = 277},
  [224] = {.lex_state = 277},
  [225] = {.lex_state = 277},
  [226] = {.lex_state = 274},
  [227] = {.lex_state = 277},
  [228] = {.lex_state = 277},
  [229] = {.lex_state = 278},
  [230] = {.lex_state = 278},
  [231] = {.lex_state = 265},
  [232] = {.lex_state = 245},
  [233] = {.lex_state = 265},
  [234] = {.lex_state = 265},
  [235] = {.lex_state = 265},
  [236] = {.lex_state = 265},
  [237] = {.lex_state = 277},
  [238] = {.lex_state = 267},
  [239] = {.lex_state = 280},
  [240] = {.lex_state = 280},
  [241] = {.lex_state = 280},
  [242] = {.lex_state = 280},
  [243] = {.lex_state = 281},
  [244] = {.lex_state = 281},
  [245] = {.lex_state = 274},
  [246] = {.lex_state = 274},
  [247] = {.lex_state = 214},
  [248] = {.lex_state = 282},
  [249] = {.lex_state = 282},
  [250] = {.lex_state = 274},
  [251] = {.lex_state = 276},
  [252] = {.lex_state = 245},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 276},
  [255] = {.lex_state = 276},
  [256] = {.lex_state = 276},
  [257] = {.lex_state = 277},
  [258] = {.lex_state = 277},
  [259] = {.lex_state = 245},
  [260] = {.lex_state = 277},
  [261] = {.lex_state = 277},
  [262] = {.lex_state = 277},
  [263] = {.lex_state = 277},
  [264] = {.lex_state = 277},
  [265] = {.lex_state = 274},
  [266] = {.lex_state = 265},
  [267] = {.lex_state = 265},
  [268] = {.lex_state = 214},
  [269] = {.lex_state = 276},
  [270] = {.lex_state = 276},
  [271] = {.lex_state = 277},
  [272] = {.lex_state = 277},
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
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_letfn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_if_DASHlet] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_monitor_DASHenter] = ACTIONS(1),
    [anon_sym_monitor_DASHexit] = ACTIONS(1),
    [sym_namespace_definition] = ACTIONS(1),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(57),
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
    [anon_sym_fn] = ACTIONS(61),
    [anon_sym_fn_STAR] = ACTIONS(61),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_letfn] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(61),
    [anon_sym_if_DASHlet] = ACTIONS(61),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_cond] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(61),
    [anon_sym_try] = ACTIONS(61),
    [anon_sym_catch] = ACTIONS(61),
    [anon_sym_throw] = ACTIONS(61),
    [anon_sym_monitor_DASHenter] = ACTIONS(61),
    [anon_sym_monitor_DASHexit] = ACTIONS(61),
    [sym_namespace_definition] = ACTIONS(61),
    [anon_sym_def] = ACTIONS(61),
    [anon_sym_defn] = ACTIONS(61),
    [anon_sym_defn_DASH] = ACTIONS(61),
    [anon_sym_defmacro] = ACTIONS(61),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(57),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(57),
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
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_fn_STAR] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(91),
    [anon_sym_letfn] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_if_DASHlet] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_cond] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_monitor_DASHenter] = ACTIONS(91),
    [anon_sym_monitor_DASHexit] = ACTIONS(91),
    [sym_namespace_definition] = ACTIONS(91),
    [anon_sym_def] = ACTIONS(91),
    [anon_sym_defn] = ACTIONS(91),
    [anon_sym_defn_DASH] = ACTIONS(91),
    [anon_sym_defmacro] = ACTIONS(91),
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
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_fn_STAR] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_letfn] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_if_DASHlet] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_cond] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_monitor_DASHenter] = ACTIONS(95),
    [anon_sym_monitor_DASHexit] = ACTIONS(95),
    [sym_namespace_definition] = ACTIONS(95),
    [anon_sym_def] = ACTIONS(95),
    [anon_sym_defn] = ACTIONS(95),
    [anon_sym_defn_DASH] = ACTIONS(95),
    [anon_sym_defmacro] = ACTIONS(95),
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
  },
  [12] = {
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
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_fn_STAR] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_letfn] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_if_DASHlet] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [sym_namespace_definition] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_defn] = ACTIONS(99),
    [anon_sym_defn_DASH] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
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
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(103),
    [sym_false] = ACTIONS(103),
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_POUND_DQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LPARENquote] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_fn_STAR] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_letfn] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_if_DASHlet] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_cond] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [sym_namespace_definition] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_defn] = ACTIONS(103),
    [anon_sym_defn_DASH] = ACTIONS(103),
    [anon_sym_defmacro] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DASH_GT_GT] = ACTIONS(101),
    [anon_sym_as_DASH_GT] = ACTIONS(101),
    [anon_sym_some_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(101),
    [anon_sym_cond_DASH_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(101),
    [sym__symbol_chars] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(101),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_POUND_LBRACE] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_POUND_BANG] = ACTIONS(101),
    [anon_sym_POUND_] = ACTIONS(101),
    [anon_sym_LPARENcomment] = ACTIONS(101),
  },
  [14] = {
    [sym__anything] = STATE(55),
    [sym__literal] = STATE(55),
    [sym__collection_literal] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_number] = STATE(55),
    [sym__number] = STATE(25),
    [sym_character] = STATE(55),
    [sym__character] = STATE(26),
    [sym_string] = STATE(55),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(55),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(55),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(55),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(55),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(55),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(55),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(55),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(55),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(55),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(55),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [15] = {
    [sym__anything] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__collection_literal] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym__number] = STATE(25),
    [sym_character] = STATE(59),
    [sym__character] = STATE(26),
    [sym_string] = STATE(59),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(59),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(59),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(59),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(59),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(59),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(59),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(59),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(59),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(59),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [16] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(64),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(64),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [17] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(66),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(66),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [18] = {
    [sym__symbol_chars] = ACTIONS(133),
  },
  [19] = {
    [sym__anything] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__collection_literal] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym__number] = STATE(25),
    [sym_character] = STATE(71),
    [sym__character] = STATE(26),
    [sym_string] = STATE(71),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(71),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(71),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(71),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(71),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(71),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(71),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(71),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(71),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(71),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [20] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(143),
  },
  [21] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(145),
  },
  [22] = {
    [sym__number] = STATE(85),
    [sym__string] = STATE(85),
    [sym__keyword] = STATE(85),
    [sym__unqualified_keyword] = STATE(85),
    [sym_qualified_keyword] = STATE(85),
    [sym__symbol] = STATE(85),
    [sym_special_form] = STATE(85),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(85),
    [sym_qualified_symbol] = STATE(85),
    [sym__one_form] = STATE(85),
    [sym__paren_sequence] = STATE(85),
    [sym__bracket_sequence] = STATE(85),
    [sym__curly_brace_sequence] = STATE(85),
    [aux_sym_ignore_form_repeat1] = STATE(86),
    [sym_number_long] = ACTIONS(147),
    [sym_number_double] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(147),
  },
  [23] = {
    [sym__number] = STATE(99),
    [sym__string] = STATE(99),
    [sym__keyword] = STATE(99),
    [sym__unqualified_keyword] = STATE(99),
    [sym_qualified_keyword] = STATE(99),
    [sym__symbol] = STATE(99),
    [sym_special_form] = STATE(99),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(99),
    [sym_qualified_symbol] = STATE(99),
    [sym__one_form] = STATE(99),
    [sym__paren_sequence] = STATE(99),
    [sym__bracket_sequence] = STATE(99),
    [sym__curly_brace_sequence] = STATE(99),
    [aux_sym_comment_macro_repeat1] = STATE(99),
    [sym_number_long] = ACTIONS(173),
    [sym_number_double] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(173),
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
    [anon_sym_fn] = ACTIONS(203),
    [anon_sym_fn_STAR] = ACTIONS(203),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_letfn] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_if_DASHlet] = ACTIONS(203),
    [anon_sym_while] = ACTIONS(203),
    [anon_sym_cond] = ACTIONS(203),
    [anon_sym_case] = ACTIONS(203),
    [anon_sym_try] = ACTIONS(203),
    [anon_sym_catch] = ACTIONS(203),
    [anon_sym_throw] = ACTIONS(203),
    [anon_sym_monitor_DASHenter] = ACTIONS(203),
    [anon_sym_monitor_DASHexit] = ACTIONS(203),
    [sym_namespace_definition] = ACTIONS(203),
    [anon_sym_def] = ACTIONS(203),
    [anon_sym_defn] = ACTIONS(203),
    [anon_sym_defn_DASH] = ACTIONS(203),
    [anon_sym_defmacro] = ACTIONS(203),
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
    [anon_sym_fn] = ACTIONS(207),
    [anon_sym_fn_STAR] = ACTIONS(207),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_letfn] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_if_DASHlet] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_cond] = ACTIONS(207),
    [anon_sym_case] = ACTIONS(207),
    [anon_sym_try] = ACTIONS(207),
    [anon_sym_catch] = ACTIONS(207),
    [anon_sym_throw] = ACTIONS(207),
    [anon_sym_monitor_DASHenter] = ACTIONS(207),
    [anon_sym_monitor_DASHexit] = ACTIONS(207),
    [sym_namespace_definition] = ACTIONS(207),
    [anon_sym_def] = ACTIONS(207),
    [anon_sym_defn] = ACTIONS(207),
    [anon_sym_defn_DASH] = ACTIONS(207),
    [anon_sym_defmacro] = ACTIONS(207),
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
    [anon_sym_fn] = ACTIONS(211),
    [anon_sym_fn_STAR] = ACTIONS(211),
    [anon_sym_let] = ACTIONS(211),
    [anon_sym_letfn] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_if_DASHlet] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(211),
    [anon_sym_cond] = ACTIONS(211),
    [anon_sym_case] = ACTIONS(211),
    [anon_sym_try] = ACTIONS(211),
    [anon_sym_catch] = ACTIONS(211),
    [anon_sym_throw] = ACTIONS(211),
    [anon_sym_monitor_DASHenter] = ACTIONS(211),
    [anon_sym_monitor_DASHexit] = ACTIONS(211),
    [sym_namespace_definition] = ACTIONS(211),
    [anon_sym_def] = ACTIONS(211),
    [anon_sym_defn] = ACTIONS(211),
    [anon_sym_defn_DASH] = ACTIONS(211),
    [anon_sym_defmacro] = ACTIONS(211),
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
    [anon_sym_fn] = ACTIONS(215),
    [anon_sym_fn_STAR] = ACTIONS(215),
    [anon_sym_let] = ACTIONS(215),
    [anon_sym_letfn] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_if_DASHlet] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(215),
    [anon_sym_cond] = ACTIONS(215),
    [anon_sym_case] = ACTIONS(215),
    [anon_sym_try] = ACTIONS(215),
    [anon_sym_catch] = ACTIONS(215),
    [anon_sym_throw] = ACTIONS(215),
    [anon_sym_monitor_DASHenter] = ACTIONS(215),
    [anon_sym_monitor_DASHexit] = ACTIONS(215),
    [sym_namespace_definition] = ACTIONS(215),
    [anon_sym_def] = ACTIONS(215),
    [anon_sym_defn] = ACTIONS(215),
    [anon_sym_defn_DASH] = ACTIONS(215),
    [anon_sym_defmacro] = ACTIONS(215),
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
    [anon_sym_fn] = ACTIONS(219),
    [anon_sym_fn_STAR] = ACTIONS(219),
    [anon_sym_let] = ACTIONS(219),
    [anon_sym_letfn] = ACTIONS(219),
    [anon_sym_if] = ACTIONS(219),
    [anon_sym_if_DASHlet] = ACTIONS(219),
    [anon_sym_while] = ACTIONS(219),
    [anon_sym_cond] = ACTIONS(219),
    [anon_sym_case] = ACTIONS(219),
    [anon_sym_try] = ACTIONS(219),
    [anon_sym_catch] = ACTIONS(219),
    [anon_sym_throw] = ACTIONS(219),
    [anon_sym_monitor_DASHenter] = ACTIONS(219),
    [anon_sym_monitor_DASHexit] = ACTIONS(219),
    [sym_namespace_definition] = ACTIONS(219),
    [anon_sym_def] = ACTIONS(219),
    [anon_sym_defn] = ACTIONS(219),
    [anon_sym_defn_DASH] = ACTIONS(219),
    [anon_sym_defmacro] = ACTIONS(219),
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
    [anon_sym_fn] = ACTIONS(223),
    [anon_sym_fn_STAR] = ACTIONS(223),
    [anon_sym_let] = ACTIONS(223),
    [anon_sym_letfn] = ACTIONS(223),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_if_DASHlet] = ACTIONS(223),
    [anon_sym_while] = ACTIONS(223),
    [anon_sym_cond] = ACTIONS(223),
    [anon_sym_case] = ACTIONS(223),
    [anon_sym_try] = ACTIONS(223),
    [anon_sym_catch] = ACTIONS(223),
    [anon_sym_throw] = ACTIONS(223),
    [anon_sym_monitor_DASHenter] = ACTIONS(223),
    [anon_sym_monitor_DASHexit] = ACTIONS(223),
    [sym_namespace_definition] = ACTIONS(223),
    [anon_sym_def] = ACTIONS(223),
    [anon_sym_defn] = ACTIONS(223),
    [anon_sym_defn_DASH] = ACTIONS(223),
    [anon_sym_defmacro] = ACTIONS(223),
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
    [anon_sym_fn] = ACTIONS(227),
    [anon_sym_fn_STAR] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(227),
    [anon_sym_letfn] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_if_DASHlet] = ACTIONS(227),
    [anon_sym_while] = ACTIONS(227),
    [anon_sym_cond] = ACTIONS(227),
    [anon_sym_case] = ACTIONS(227),
    [anon_sym_try] = ACTIONS(227),
    [anon_sym_catch] = ACTIONS(227),
    [anon_sym_throw] = ACTIONS(227),
    [anon_sym_monitor_DASHenter] = ACTIONS(227),
    [anon_sym_monitor_DASHexit] = ACTIONS(227),
    [sym_namespace_definition] = ACTIONS(227),
    [anon_sym_def] = ACTIONS(227),
    [anon_sym_defn] = ACTIONS(227),
    [anon_sym_defn_DASH] = ACTIONS(227),
    [anon_sym_defmacro] = ACTIONS(227),
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
    [anon_sym_fn] = ACTIONS(231),
    [anon_sym_fn_STAR] = ACTIONS(231),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_letfn] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_if_DASHlet] = ACTIONS(231),
    [anon_sym_while] = ACTIONS(231),
    [anon_sym_cond] = ACTIONS(231),
    [anon_sym_case] = ACTIONS(231),
    [anon_sym_try] = ACTIONS(231),
    [anon_sym_catch] = ACTIONS(231),
    [anon_sym_throw] = ACTIONS(231),
    [anon_sym_monitor_DASHenter] = ACTIONS(231),
    [anon_sym_monitor_DASHexit] = ACTIONS(231),
    [sym_namespace_definition] = ACTIONS(231),
    [anon_sym_def] = ACTIONS(231),
    [anon_sym_defn] = ACTIONS(231),
    [anon_sym_defn_DASH] = ACTIONS(231),
    [anon_sym_defmacro] = ACTIONS(231),
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
    [anon_sym_fn] = ACTIONS(235),
    [anon_sym_fn_STAR] = ACTIONS(235),
    [anon_sym_let] = ACTIONS(235),
    [anon_sym_letfn] = ACTIONS(235),
    [anon_sym_if] = ACTIONS(235),
    [anon_sym_if_DASHlet] = ACTIONS(235),
    [anon_sym_while] = ACTIONS(235),
    [anon_sym_cond] = ACTIONS(235),
    [anon_sym_case] = ACTIONS(235),
    [anon_sym_try] = ACTIONS(235),
    [anon_sym_catch] = ACTIONS(235),
    [anon_sym_throw] = ACTIONS(235),
    [anon_sym_monitor_DASHenter] = ACTIONS(235),
    [anon_sym_monitor_DASHexit] = ACTIONS(235),
    [sym_namespace_definition] = ACTIONS(235),
    [anon_sym_def] = ACTIONS(235),
    [anon_sym_defn] = ACTIONS(235),
    [anon_sym_defn_DASH] = ACTIONS(235),
    [anon_sym_defmacro] = ACTIONS(235),
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
    [anon_sym_fn] = ACTIONS(239),
    [anon_sym_fn_STAR] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_letfn] = ACTIONS(239),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_if_DASHlet] = ACTIONS(239),
    [anon_sym_while] = ACTIONS(239),
    [anon_sym_cond] = ACTIONS(239),
    [anon_sym_case] = ACTIONS(239),
    [anon_sym_try] = ACTIONS(239),
    [anon_sym_catch] = ACTIONS(239),
    [anon_sym_throw] = ACTIONS(239),
    [anon_sym_monitor_DASHenter] = ACTIONS(239),
    [anon_sym_monitor_DASHexit] = ACTIONS(239),
    [sym_namespace_definition] = ACTIONS(239),
    [anon_sym_def] = ACTIONS(239),
    [anon_sym_defn] = ACTIONS(239),
    [anon_sym_defn_DASH] = ACTIONS(239),
    [anon_sym_defmacro] = ACTIONS(239),
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
    [anon_sym_fn] = ACTIONS(243),
    [anon_sym_fn_STAR] = ACTIONS(243),
    [anon_sym_let] = ACTIONS(243),
    [anon_sym_letfn] = ACTIONS(243),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_if_DASHlet] = ACTIONS(243),
    [anon_sym_while] = ACTIONS(243),
    [anon_sym_cond] = ACTIONS(243),
    [anon_sym_case] = ACTIONS(243),
    [anon_sym_try] = ACTIONS(243),
    [anon_sym_catch] = ACTIONS(243),
    [anon_sym_throw] = ACTIONS(243),
    [anon_sym_monitor_DASHenter] = ACTIONS(243),
    [anon_sym_monitor_DASHexit] = ACTIONS(243),
    [sym_namespace_definition] = ACTIONS(243),
    [anon_sym_def] = ACTIONS(243),
    [anon_sym_defn] = ACTIONS(243),
    [anon_sym_defn_DASH] = ACTIONS(243),
    [anon_sym_defmacro] = ACTIONS(243),
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
    [anon_sym_fn] = ACTIONS(247),
    [anon_sym_fn_STAR] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_letfn] = ACTIONS(247),
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_if_DASHlet] = ACTIONS(247),
    [anon_sym_while] = ACTIONS(247),
    [anon_sym_cond] = ACTIONS(247),
    [anon_sym_case] = ACTIONS(247),
    [anon_sym_try] = ACTIONS(247),
    [anon_sym_catch] = ACTIONS(247),
    [anon_sym_throw] = ACTIONS(247),
    [anon_sym_monitor_DASHenter] = ACTIONS(247),
    [anon_sym_monitor_DASHexit] = ACTIONS(247),
    [sym_namespace_definition] = ACTIONS(247),
    [anon_sym_def] = ACTIONS(247),
    [anon_sym_defn] = ACTIONS(247),
    [anon_sym_defn_DASH] = ACTIONS(247),
    [anon_sym_defmacro] = ACTIONS(247),
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
  },
  [37] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [aux_sym_program_repeat1] = STATE(100),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(55),
    [anon_sym_LPARENcomment] = ACTIONS(57),
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
    [anon_sym_fn] = ACTIONS(255),
    [anon_sym_fn_STAR] = ACTIONS(255),
    [anon_sym_let] = ACTIONS(255),
    [anon_sym_letfn] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(255),
    [anon_sym_if_DASHlet] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_cond] = ACTIONS(255),
    [anon_sym_case] = ACTIONS(255),
    [anon_sym_try] = ACTIONS(255),
    [anon_sym_catch] = ACTIONS(255),
    [anon_sym_throw] = ACTIONS(255),
    [anon_sym_monitor_DASHenter] = ACTIONS(255),
    [anon_sym_monitor_DASHexit] = ACTIONS(255),
    [sym_namespace_definition] = ACTIONS(255),
    [anon_sym_def] = ACTIONS(255),
    [anon_sym_defn] = ACTIONS(255),
    [anon_sym_defn_DASH] = ACTIONS(255),
    [anon_sym_defmacro] = ACTIONS(255),
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
  },
  [39] = {
    [sym__hex_char] = ACTIONS(257),
  },
  [40] = {
    [sym__octal_num] = STATE(102),
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
    [anon_sym_fn] = ACTIONS(265),
    [anon_sym_fn_STAR] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_letfn] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_if_DASHlet] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(265),
    [anon_sym_cond] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_catch] = ACTIONS(265),
    [anon_sym_throw] = ACTIONS(265),
    [anon_sym_monitor_DASHenter] = ACTIONS(265),
    [anon_sym_monitor_DASHexit] = ACTIONS(265),
    [sym_namespace_definition] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(265),
    [anon_sym_defn] = ACTIONS(265),
    [anon_sym_defn_DASH] = ACTIONS(265),
    [anon_sym_defmacro] = ACTIONS(265),
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
  },
  [42] = {
    [aux_sym__string_repeat1] = STATE(104),
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
    [anon_sym_fn] = ACTIONS(273),
    [anon_sym_fn_STAR] = ACTIONS(273),
    [anon_sym_let] = ACTIONS(273),
    [anon_sym_letfn] = ACTIONS(273),
    [anon_sym_if] = ACTIONS(273),
    [anon_sym_if_DASHlet] = ACTIONS(273),
    [anon_sym_while] = ACTIONS(273),
    [anon_sym_cond] = ACTIONS(273),
    [anon_sym_case] = ACTIONS(273),
    [anon_sym_try] = ACTIONS(273),
    [anon_sym_catch] = ACTIONS(273),
    [anon_sym_throw] = ACTIONS(273),
    [anon_sym_monitor_DASHenter] = ACTIONS(273),
    [anon_sym_monitor_DASHexit] = ACTIONS(273),
    [sym_namespace_definition] = ACTIONS(273),
    [anon_sym_def] = ACTIONS(273),
    [anon_sym_defn] = ACTIONS(273),
    [anon_sym_defn_DASH] = ACTIONS(273),
    [anon_sym_defmacro] = ACTIONS(273),
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
  },
  [44] = {
    [aux_sym__regex_repeat1] = STATE(106),
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
    [anon_sym_fn] = ACTIONS(281),
    [anon_sym_fn_STAR] = ACTIONS(281),
    [anon_sym_let] = ACTIONS(281),
    [anon_sym_letfn] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_if_DASHlet] = ACTIONS(281),
    [anon_sym_while] = ACTIONS(281),
    [anon_sym_cond] = ACTIONS(281),
    [anon_sym_case] = ACTIONS(281),
    [anon_sym_try] = ACTIONS(281),
    [anon_sym_catch] = ACTIONS(281),
    [anon_sym_throw] = ACTIONS(281),
    [anon_sym_monitor_DASHenter] = ACTIONS(281),
    [anon_sym_monitor_DASHexit] = ACTIONS(281),
    [sym_namespace_definition] = ACTIONS(281),
    [anon_sym_def] = ACTIONS(281),
    [anon_sym_defn] = ACTIONS(281),
    [anon_sym_defn_DASH] = ACTIONS(281),
    [anon_sym_defmacro] = ACTIONS(281),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [47] = {
    [sym__number] = STATE(107),
    [sym__string] = STATE(107),
    [sym__keyword] = STATE(107),
    [sym__unqualified_keyword] = STATE(107),
    [sym_qualified_keyword] = STATE(107),
    [sym__symbol] = STATE(107),
    [sym_special_form] = STATE(107),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(107),
    [sym_qualified_symbol] = STATE(107),
    [sym__one_form] = STATE(107),
    [sym__paren_sequence] = STATE(107),
    [sym__bracket_sequence] = STATE(107),
    [sym__curly_brace_sequence] = STATE(107),
    [aux_sym_ignore_form_repeat1] = STATE(108),
    [sym_number_long] = ACTIONS(283),
    [sym_number_double] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
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
    [anon_sym_fn] = ACTIONS(291),
    [anon_sym_fn_STAR] = ACTIONS(291),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_letfn] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [anon_sym_if_DASHlet] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_cond] = ACTIONS(291),
    [anon_sym_case] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_throw] = ACTIONS(291),
    [anon_sym_monitor_DASHenter] = ACTIONS(291),
    [anon_sym_monitor_DASHexit] = ACTIONS(291),
    [sym_namespace_definition] = ACTIONS(291),
    [anon_sym_def] = ACTIONS(291),
    [anon_sym_defn] = ACTIONS(291),
    [anon_sym_defn_DASH] = ACTIONS(291),
    [anon_sym_defmacro] = ACTIONS(291),
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
    [anon_sym_fn] = ACTIONS(295),
    [anon_sym_fn_STAR] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_letfn] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_if_DASHlet] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(295),
    [anon_sym_cond] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_try] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_throw] = ACTIONS(295),
    [anon_sym_monitor_DASHenter] = ACTIONS(295),
    [anon_sym_monitor_DASHexit] = ACTIONS(295),
    [sym_namespace_definition] = ACTIONS(295),
    [anon_sym_def] = ACTIONS(295),
    [anon_sym_defn] = ACTIONS(295),
    [anon_sym_defn_DASH] = ACTIONS(295),
    [anon_sym_defmacro] = ACTIONS(295),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(57),
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
    [anon_sym_fn] = ACTIONS(303),
    [anon_sym_fn_STAR] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_letfn] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_if_DASHlet] = ACTIONS(303),
    [anon_sym_while] = ACTIONS(303),
    [anon_sym_cond] = ACTIONS(303),
    [anon_sym_case] = ACTIONS(303),
    [anon_sym_try] = ACTIONS(303),
    [anon_sym_catch] = ACTIONS(303),
    [anon_sym_throw] = ACTIONS(303),
    [anon_sym_monitor_DASHenter] = ACTIONS(303),
    [anon_sym_monitor_DASHexit] = ACTIONS(303),
    [sym_namespace_definition] = ACTIONS(303),
    [anon_sym_def] = ACTIONS(303),
    [anon_sym_defn] = ACTIONS(303),
    [anon_sym_defn_DASH] = ACTIONS(303),
    [anon_sym_defmacro] = ACTIONS(303),
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
  },
  [54] = {
    [sym__number] = STATE(112),
    [sym__string] = STATE(112),
    [sym__keyword] = STATE(112),
    [sym__unqualified_keyword] = STATE(112),
    [sym_qualified_keyword] = STATE(112),
    [sym__symbol] = STATE(112),
    [sym_special_form] = STATE(112),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(112),
    [sym_qualified_symbol] = STATE(112),
    [sym__one_form] = STATE(112),
    [sym__paren_sequence] = STATE(112),
    [sym__bracket_sequence] = STATE(112),
    [sym__curly_brace_sequence] = STATE(112),
    [aux_sym_ignore_form_repeat1] = STATE(113),
    [sym_number_long] = ACTIONS(305),
    [sym_number_double] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(305),
  },
  [55] = {
    [sym__anything] = STATE(115),
    [sym__literal] = STATE(115),
    [sym__collection_literal] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(25),
    [sym_character] = STATE(115),
    [sym__character] = STATE(26),
    [sym_string] = STATE(115),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(115),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(115),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(115),
    [sym_nil] = ACTIONS(309),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LPARENquote] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(113),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [56] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [sym_nil] = ACTIONS(77),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [57] = {
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
    [anon_sym_fn] = ACTIONS(315),
    [anon_sym_fn_STAR] = ACTIONS(315),
    [anon_sym_let] = ACTIONS(315),
    [anon_sym_letfn] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_if_DASHlet] = ACTIONS(315),
    [anon_sym_while] = ACTIONS(315),
    [anon_sym_cond] = ACTIONS(315),
    [anon_sym_case] = ACTIONS(315),
    [anon_sym_try] = ACTIONS(315),
    [anon_sym_catch] = ACTIONS(315),
    [anon_sym_throw] = ACTIONS(315),
    [anon_sym_monitor_DASHenter] = ACTIONS(315),
    [anon_sym_monitor_DASHexit] = ACTIONS(315),
    [sym_namespace_definition] = ACTIONS(315),
    [anon_sym_def] = ACTIONS(315),
    [anon_sym_defn] = ACTIONS(315),
    [anon_sym_defn_DASH] = ACTIONS(315),
    [anon_sym_defmacro] = ACTIONS(315),
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
    [anon_sym_LPARENcomment] = ACTIONS(313),
  },
  [58] = {
    [sym__number] = STATE(116),
    [sym__string] = STATE(116),
    [sym__keyword] = STATE(116),
    [sym__unqualified_keyword] = STATE(116),
    [sym_qualified_keyword] = STATE(116),
    [sym__symbol] = STATE(116),
    [sym_special_form] = STATE(116),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(116),
    [sym_qualified_symbol] = STATE(116),
    [sym__one_form] = STATE(116),
    [sym__paren_sequence] = STATE(116),
    [sym__bracket_sequence] = STATE(116),
    [sym__curly_brace_sequence] = STATE(116),
    [aux_sym_ignore_form_repeat1] = STATE(117),
    [sym_number_long] = ACTIONS(317),
    [sym_number_double] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(317),
  },
  [59] = {
    [sym__anything] = STATE(119),
    [sym__literal] = STATE(119),
    [sym__collection_literal] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(25),
    [sym_character] = STATE(119),
    [sym__character] = STATE(26),
    [sym_string] = STATE(119),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(119),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(119),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(119),
    [sym_nil] = ACTIONS(321),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [60] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [sym_nil] = ACTIONS(77),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_nil] = ACTIONS(327),
    [sym_true] = ACTIONS(327),
    [sym_false] = ACTIONS(327),
    [sym_number_long] = ACTIONS(327),
    [sym_number_double] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND_DQUOTE] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_LPARENquote] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_COLON_COLON] = ACTIONS(325),
    [anon_sym_fn] = ACTIONS(327),
    [anon_sym_fn_STAR] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_letfn] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_if_DASHlet] = ACTIONS(327),
    [anon_sym_while] = ACTIONS(327),
    [anon_sym_cond] = ACTIONS(327),
    [anon_sym_case] = ACTIONS(327),
    [anon_sym_try] = ACTIONS(327),
    [anon_sym_catch] = ACTIONS(327),
    [anon_sym_throw] = ACTIONS(327),
    [anon_sym_monitor_DASHenter] = ACTIONS(327),
    [anon_sym_monitor_DASHexit] = ACTIONS(327),
    [sym_namespace_definition] = ACTIONS(327),
    [anon_sym_def] = ACTIONS(327),
    [anon_sym_defn] = ACTIONS(327),
    [anon_sym_defn_DASH] = ACTIONS(327),
    [anon_sym_defmacro] = ACTIONS(327),
    [anon_sym_DASH_GT] = ACTIONS(327),
    [anon_sym_DASH_GT_GT] = ACTIONS(325),
    [anon_sym_as_DASH_GT] = ACTIONS(325),
    [anon_sym_some_DASH_GT] = ACTIONS(327),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(325),
    [anon_sym_cond_DASH_GT] = ACTIONS(327),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(325),
    [sym__symbol_chars] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_POUND_LBRACE] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_POUND_BANG] = ACTIONS(325),
    [anon_sym_POUND_] = ACTIONS(325),
    [anon_sym_LPARENcomment] = ACTIONS(325),
  },
  [62] = {
    [sym__number] = STATE(120),
    [sym__string] = STATE(120),
    [sym__keyword] = STATE(120),
    [sym__unqualified_keyword] = STATE(120),
    [sym_qualified_keyword] = STATE(120),
    [sym__symbol] = STATE(120),
    [sym_special_form] = STATE(120),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(120),
    [sym_qualified_symbol] = STATE(120),
    [sym__one_form] = STATE(120),
    [sym__paren_sequence] = STATE(120),
    [sym__bracket_sequence] = STATE(120),
    [sym__curly_brace_sequence] = STATE(120),
    [aux_sym_ignore_form_repeat1] = STATE(121),
    [sym_number_long] = ACTIONS(329),
    [sym_number_double] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(329),
  },
  [63] = {
    [sym__anything] = STATE(122),
    [sym__literal] = STATE(122),
    [sym__collection_literal] = STATE(122),
    [sym_boolean] = STATE(122),
    [sym_number] = STATE(122),
    [sym__number] = STATE(25),
    [sym_character] = STATE(122),
    [sym__character] = STATE(26),
    [sym_string] = STATE(122),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(122),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(122),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(122),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(122),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(122),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(122),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(122),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_value] = STATE(122),
    [sym_set] = STATE(122),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(122),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [sym_nil] = ACTIONS(333),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [64] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(124),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(124),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [65] = {
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
    [anon_sym_fn] = ACTIONS(339),
    [anon_sym_fn_STAR] = ACTIONS(339),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_letfn] = ACTIONS(339),
    [anon_sym_if] = ACTIONS(339),
    [anon_sym_if_DASHlet] = ACTIONS(339),
    [anon_sym_while] = ACTIONS(339),
    [anon_sym_cond] = ACTIONS(339),
    [anon_sym_case] = ACTIONS(339),
    [anon_sym_try] = ACTIONS(339),
    [anon_sym_catch] = ACTIONS(339),
    [anon_sym_throw] = ACTIONS(339),
    [anon_sym_monitor_DASHenter] = ACTIONS(339),
    [anon_sym_monitor_DASHexit] = ACTIONS(339),
    [sym_namespace_definition] = ACTIONS(339),
    [anon_sym_def] = ACTIONS(339),
    [anon_sym_defn] = ACTIONS(339),
    [anon_sym_defn_DASH] = ACTIONS(339),
    [anon_sym_defmacro] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(339),
    [anon_sym_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_as_DASH_GT] = ACTIONS(337),
    [anon_sym_some_DASH_GT] = ACTIONS(339),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(337),
    [anon_sym_cond_DASH_GT] = ACTIONS(339),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(337),
    [sym__symbol_chars] = ACTIONS(339),
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
    [anon_sym_LPARENcomment] = ACTIONS(337),
  },
  [66] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(124),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(124),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(343),
  },
  [68] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [sym_nil] = ACTIONS(77),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [69] = {
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
    [anon_sym_fn] = ACTIONS(347),
    [anon_sym_fn_STAR] = ACTIONS(347),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_letfn] = ACTIONS(347),
    [anon_sym_if] = ACTIONS(347),
    [anon_sym_if_DASHlet] = ACTIONS(347),
    [anon_sym_while] = ACTIONS(347),
    [anon_sym_cond] = ACTIONS(347),
    [anon_sym_case] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_catch] = ACTIONS(347),
    [anon_sym_throw] = ACTIONS(347),
    [anon_sym_monitor_DASHenter] = ACTIONS(347),
    [anon_sym_monitor_DASHexit] = ACTIONS(347),
    [sym_namespace_definition] = ACTIONS(347),
    [anon_sym_def] = ACTIONS(347),
    [anon_sym_defn] = ACTIONS(347),
    [anon_sym_defn_DASH] = ACTIONS(347),
    [anon_sym_defmacro] = ACTIONS(347),
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
  },
  [70] = {
    [sym__number] = STATE(127),
    [sym__string] = STATE(127),
    [sym__keyword] = STATE(127),
    [sym__unqualified_keyword] = STATE(127),
    [sym_qualified_keyword] = STATE(127),
    [sym__symbol] = STATE(127),
    [sym_special_form] = STATE(127),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(127),
    [sym_qualified_symbol] = STATE(127),
    [sym__one_form] = STATE(127),
    [sym__paren_sequence] = STATE(127),
    [sym__bracket_sequence] = STATE(127),
    [sym__curly_brace_sequence] = STATE(127),
    [aux_sym_ignore_form_repeat1] = STATE(128),
    [sym_number_long] = ACTIONS(349),
    [sym_number_double] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(351),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(349),
  },
  [71] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [aux_sym_program_repeat1] = STATE(130),
    [sym_nil] = ACTIONS(353),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(141),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [sym_nil] = ACTIONS(359),
    [sym_true] = ACTIONS(359),
    [sym_false] = ACTIONS(359),
    [sym_number_long] = ACTIONS(359),
    [sym_number_double] = ACTIONS(357),
    [anon_sym_BSLASH] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_LPARENquote] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_COLON_COLON] = ACTIONS(357),
    [anon_sym_fn] = ACTIONS(359),
    [anon_sym_fn_STAR] = ACTIONS(359),
    [anon_sym_let] = ACTIONS(359),
    [anon_sym_letfn] = ACTIONS(359),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_if_DASHlet] = ACTIONS(359),
    [anon_sym_while] = ACTIONS(359),
    [anon_sym_cond] = ACTIONS(359),
    [anon_sym_case] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [anon_sym_catch] = ACTIONS(359),
    [anon_sym_throw] = ACTIONS(359),
    [anon_sym_monitor_DASHenter] = ACTIONS(359),
    [anon_sym_monitor_DASHexit] = ACTIONS(359),
    [sym_namespace_definition] = ACTIONS(359),
    [anon_sym_def] = ACTIONS(359),
    [anon_sym_defn] = ACTIONS(359),
    [anon_sym_defn_DASH] = ACTIONS(359),
    [anon_sym_defmacro] = ACTIONS(359),
    [anon_sym_DASH_GT] = ACTIONS(359),
    [anon_sym_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_as_DASH_GT] = ACTIONS(357),
    [anon_sym_some_DASH_GT] = ACTIONS(359),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(357),
    [anon_sym_cond_DASH_GT] = ACTIONS(359),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(357),
    [sym__symbol_chars] = ACTIONS(359),
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
    [anon_sym_LPARENcomment] = ACTIONS(357),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_nil] = ACTIONS(363),
    [sym_true] = ACTIONS(363),
    [sym_false] = ACTIONS(363),
    [sym_number_long] = ACTIONS(363),
    [sym_number_double] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_POUND_DQUOTE] = ACTIONS(361),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_LPARENquote] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_COLON_COLON] = ACTIONS(361),
    [anon_sym_fn] = ACTIONS(363),
    [anon_sym_fn_STAR] = ACTIONS(363),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_letfn] = ACTIONS(363),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_if_DASHlet] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(363),
    [anon_sym_cond] = ACTIONS(363),
    [anon_sym_case] = ACTIONS(363),
    [anon_sym_try] = ACTIONS(363),
    [anon_sym_catch] = ACTIONS(363),
    [anon_sym_throw] = ACTIONS(363),
    [anon_sym_monitor_DASHenter] = ACTIONS(363),
    [anon_sym_monitor_DASHexit] = ACTIONS(363),
    [sym_namespace_definition] = ACTIONS(363),
    [anon_sym_def] = ACTIONS(363),
    [anon_sym_defn] = ACTIONS(363),
    [anon_sym_defn_DASH] = ACTIONS(363),
    [anon_sym_defmacro] = ACTIONS(363),
    [anon_sym_DASH_GT] = ACTIONS(363),
    [anon_sym_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_as_DASH_GT] = ACTIONS(361),
    [anon_sym_some_DASH_GT] = ACTIONS(363),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(361),
    [anon_sym_cond_DASH_GT] = ACTIONS(363),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(361),
    [sym__symbol_chars] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_POUND_LBRACE] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_POUND_BANG] = ACTIONS(361),
    [anon_sym_POUND_] = ACTIONS(361),
    [anon_sym_LPARENcomment] = ACTIONS(361),
  },
  [74] = {
    [aux_sym__string_repeat1] = STATE(132),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(367),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(367),
  },
  [75] = {
    [sym__keyword_chars] = ACTIONS(369),
  },
  [76] = {
    [sym__keyword_chars] = ACTIONS(371),
  },
  [77] = {
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
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_fn_STAR] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(91),
    [anon_sym_letfn] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_if_DASHlet] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_cond] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_monitor_DASHenter] = ACTIONS(91),
    [anon_sym_monitor_DASHexit] = ACTIONS(91),
    [sym_namespace_definition] = ACTIONS(91),
    [anon_sym_def] = ACTIONS(91),
    [anon_sym_defn] = ACTIONS(91),
    [anon_sym_defn_DASH] = ACTIONS(91),
    [anon_sym_defmacro] = ACTIONS(91),
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
  },
  [78] = {
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
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_fn_STAR] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_letfn] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_if_DASHlet] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_cond] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_monitor_DASHenter] = ACTIONS(95),
    [anon_sym_monitor_DASHexit] = ACTIONS(95),
    [sym_namespace_definition] = ACTIONS(95),
    [anon_sym_def] = ACTIONS(95),
    [anon_sym_defn] = ACTIONS(95),
    [anon_sym_defn_DASH] = ACTIONS(95),
    [anon_sym_defmacro] = ACTIONS(95),
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
  },
  [79] = {
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
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_fn_STAR] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_letfn] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_if_DASHlet] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [sym_namespace_definition] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_defn] = ACTIONS(99),
    [anon_sym_defn_DASH] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
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
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_nil] = ACTIONS(103),
    [sym_true] = ACTIONS(103),
    [sym_false] = ACTIONS(103),
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_POUND_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_fn_STAR] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_letfn] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_if_DASHlet] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_cond] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [sym_namespace_definition] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_defn] = ACTIONS(103),
    [anon_sym_defn_DASH] = ACTIONS(103),
    [anon_sym_defmacro] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_as_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(103),
    [sym__symbol_chars] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_POUND_LBRACE] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_POUND_BANG] = ACTIONS(103),
    [anon_sym_POUND_] = ACTIONS(103),
    [anon_sym_] = ACTIONS(101),
    [anon_sym_LPARENcomment] = ACTIONS(103),
  },
  [81] = {
    [sym__number] = STATE(137),
    [sym__string] = STATE(137),
    [sym__keyword] = STATE(137),
    [sym__unqualified_keyword] = STATE(137),
    [sym_qualified_keyword] = STATE(137),
    [sym__symbol] = STATE(137),
    [sym_special_form] = STATE(137),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(137),
    [sym_qualified_symbol] = STATE(137),
    [sym__one_form] = STATE(137),
    [sym__paren_sequence] = STATE(137),
    [sym__bracket_sequence] = STATE(137),
    [sym__curly_brace_sequence] = STATE(137),
    [aux_sym_comment_macro_repeat1] = STATE(137),
    [sym_number_long] = ACTIONS(375),
    [sym_number_double] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(375),
  },
  [82] = {
    [sym__number] = STATE(150),
    [sym__string] = STATE(150),
    [sym__keyword] = STATE(150),
    [sym__unqualified_keyword] = STATE(150),
    [sym_qualified_keyword] = STATE(150),
    [sym__symbol] = STATE(150),
    [sym_special_form] = STATE(150),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(150),
    [sym_qualified_symbol] = STATE(150),
    [sym__one_form] = STATE(150),
    [sym__paren_sequence] = STATE(150),
    [sym__bracket_sequence] = STATE(150),
    [sym__curly_brace_sequence] = STATE(150),
    [aux_sym_comment_macro_repeat1] = STATE(150),
    [sym_number_long] = ACTIONS(379),
    [sym_number_double] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(379),
  },
  [83] = {
    [sym__number] = STATE(163),
    [sym__string] = STATE(163),
    [sym__keyword] = STATE(163),
    [sym__unqualified_keyword] = STATE(163),
    [sym_qualified_keyword] = STATE(163),
    [sym__symbol] = STATE(163),
    [sym_special_form] = STATE(163),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(163),
    [sym_qualified_symbol] = STATE(163),
    [sym__one_form] = STATE(163),
    [sym__paren_sequence] = STATE(163),
    [sym__bracket_sequence] = STATE(163),
    [sym__curly_brace_sequence] = STATE(163),
    [aux_sym_comment_macro_repeat1] = STATE(163),
    [sym_number_long] = ACTIONS(405),
    [sym_number_double] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(405),
  },
  [84] = {
    [anon_sym_LBRACE] = ACTIONS(431),
  },
  [85] = {
    [aux_sym_ignore_form_repeat1] = STATE(165),
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
    [anon_sym_fn] = ACTIONS(435),
    [anon_sym_fn_STAR] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_letfn] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_if_DASHlet] = ACTIONS(435),
    [anon_sym_while] = ACTIONS(435),
    [anon_sym_cond] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_try] = ACTIONS(435),
    [anon_sym_catch] = ACTIONS(435),
    [anon_sym_throw] = ACTIONS(435),
    [anon_sym_monitor_DASHenter] = ACTIONS(435),
    [anon_sym_monitor_DASHexit] = ACTIONS(435),
    [sym_namespace_definition] = ACTIONS(435),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defn] = ACTIONS(435),
    [anon_sym_defn_DASH] = ACTIONS(435),
    [anon_sym_defmacro] = ACTIONS(435),
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
  },
  [86] = {
    [sym__number] = STATE(166),
    [sym__string] = STATE(166),
    [sym__keyword] = STATE(166),
    [sym__unqualified_keyword] = STATE(166),
    [sym_qualified_keyword] = STATE(166),
    [sym__symbol] = STATE(166),
    [sym_special_form] = STATE(166),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(166),
    [sym_qualified_symbol] = STATE(166),
    [sym__one_form] = STATE(166),
    [sym__paren_sequence] = STATE(166),
    [sym__bracket_sequence] = STATE(166),
    [sym__curly_brace_sequence] = STATE(166),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(439),
    [sym_number_double] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(439),
  },
  [87] = {
    [aux_sym__string_repeat1] = STATE(169),
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
    [anon_sym_fn] = ACTIONS(449),
    [anon_sym_fn_STAR] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_letfn] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_if_DASHlet] = ACTIONS(449),
    [anon_sym_while] = ACTIONS(449),
    [anon_sym_cond] = ACTIONS(449),
    [anon_sym_case] = ACTIONS(449),
    [anon_sym_try] = ACTIONS(449),
    [anon_sym_catch] = ACTIONS(449),
    [anon_sym_throw] = ACTIONS(449),
    [anon_sym_monitor_DASHenter] = ACTIONS(449),
    [anon_sym_monitor_DASHexit] = ACTIONS(449),
    [sym_namespace_definition] = ACTIONS(449),
    [anon_sym_def] = ACTIONS(449),
    [anon_sym_defn] = ACTIONS(449),
    [anon_sym_defn_DASH] = ACTIONS(449),
    [anon_sym_defmacro] = ACTIONS(449),
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
  },
  [89] = {
    [sym__keyword_chars] = ACTIONS(451),
  },
  [90] = {
    [sym__keyword_chars] = ACTIONS(453),
  },
  [91] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_fn_STAR] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(91),
    [anon_sym_letfn] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_if_DASHlet] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_cond] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_monitor_DASHenter] = ACTIONS(91),
    [anon_sym_monitor_DASHexit] = ACTIONS(91),
    [sym_namespace_definition] = ACTIONS(91),
    [anon_sym_def] = ACTIONS(91),
    [anon_sym_defn] = ACTIONS(91),
    [anon_sym_defn_DASH] = ACTIONS(91),
    [anon_sym_defmacro] = ACTIONS(91),
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
  [92] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_fn_STAR] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_letfn] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_if_DASHlet] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_cond] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_monitor_DASHenter] = ACTIONS(95),
    [anon_sym_monitor_DASHexit] = ACTIONS(95),
    [sym_namespace_definition] = ACTIONS(95),
    [anon_sym_def] = ACTIONS(95),
    [anon_sym_defn] = ACTIONS(95),
    [anon_sym_defn_DASH] = ACTIONS(95),
    [anon_sym_defmacro] = ACTIONS(95),
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
  [93] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_fn_STAR] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_letfn] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_if_DASHlet] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [sym_namespace_definition] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_defn] = ACTIONS(99),
    [anon_sym_defn_DASH] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
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
  [94] = {
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_fn_STAR] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_letfn] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_if_DASHlet] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_cond] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [sym_namespace_definition] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_defn] = ACTIONS(103),
    [anon_sym_defn_DASH] = ACTIONS(103),
    [anon_sym_defmacro] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_as_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(103),
    [sym__symbol_chars] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(103),
  },
  [95] = {
    [sym__number] = STATE(174),
    [sym__string] = STATE(174),
    [sym__keyword] = STATE(174),
    [sym__unqualified_keyword] = STATE(174),
    [sym_qualified_keyword] = STATE(174),
    [sym__symbol] = STATE(174),
    [sym_special_form] = STATE(174),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(174),
    [sym_qualified_symbol] = STATE(174),
    [sym__one_form] = STATE(174),
    [sym__paren_sequence] = STATE(174),
    [sym__bracket_sequence] = STATE(174),
    [sym__curly_brace_sequence] = STATE(174),
    [aux_sym_comment_macro_repeat1] = STATE(174),
    [sym_number_long] = ACTIONS(457),
    [sym_number_double] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(457),
  },
  [96] = {
    [sym__number] = STATE(176),
    [sym__string] = STATE(176),
    [sym__keyword] = STATE(176),
    [sym__unqualified_keyword] = STATE(176),
    [sym_qualified_keyword] = STATE(176),
    [sym__symbol] = STATE(176),
    [sym_special_form] = STATE(176),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(176),
    [sym_qualified_symbol] = STATE(176),
    [sym__one_form] = STATE(176),
    [sym__paren_sequence] = STATE(176),
    [sym__bracket_sequence] = STATE(176),
    [sym__curly_brace_sequence] = STATE(176),
    [aux_sym_comment_macro_repeat1] = STATE(176),
    [sym_number_long] = ACTIONS(461),
    [sym_number_double] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(461),
  },
  [97] = {
    [sym__number] = STATE(178),
    [sym__string] = STATE(178),
    [sym__keyword] = STATE(178),
    [sym__unqualified_keyword] = STATE(178),
    [sym_qualified_keyword] = STATE(178),
    [sym__symbol] = STATE(178),
    [sym_special_form] = STATE(178),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(178),
    [sym_qualified_symbol] = STATE(178),
    [sym__one_form] = STATE(178),
    [sym__paren_sequence] = STATE(178),
    [sym__bracket_sequence] = STATE(178),
    [sym__curly_brace_sequence] = STATE(178),
    [aux_sym_comment_macro_repeat1] = STATE(178),
    [sym_number_long] = ACTIONS(465),
    [sym_number_double] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(469),
  },
  [99] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [100] = {
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [aux_sym_program_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_nil] = ACTIONS(477),
    [sym_true] = ACTIONS(480),
    [sym_false] = ACTIONS(480),
    [sym_number_long] = ACTIONS(483),
    [sym_number_double] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [anon_sym_POUND_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_LPARENquote] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_COLON_COLON] = ACTIONS(507),
    [anon_sym_fn] = ACTIONS(510),
    [anon_sym_fn_STAR] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_letfn] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_if_DASHlet] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_cond] = ACTIONS(510),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_try] = ACTIONS(510),
    [anon_sym_catch] = ACTIONS(510),
    [anon_sym_throw] = ACTIONS(510),
    [anon_sym_monitor_DASHenter] = ACTIONS(510),
    [anon_sym_monitor_DASHexit] = ACTIONS(510),
    [sym_namespace_definition] = ACTIONS(510),
    [anon_sym_def] = ACTIONS(513),
    [anon_sym_defn] = ACTIONS(513),
    [anon_sym_defn_DASH] = ACTIONS(513),
    [anon_sym_defmacro] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(516),
    [anon_sym_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_as_DASH_GT] = ACTIONS(519),
    [anon_sym_some_DASH_GT] = ACTIONS(516),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_cond_DASH_GT] = ACTIONS(516),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(519),
    [sym__symbol_chars] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(534),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LBRACE] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(546),
    [anon_sym_POUND_] = ACTIONS(549),
    [anon_sym_LPARENcomment] = ACTIONS(552),
  },
  [101] = {
    [sym__hex_char] = ACTIONS(555),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [sym_nil] = ACTIONS(559),
    [sym_true] = ACTIONS(559),
    [sym_false] = ACTIONS(559),
    [sym_number_long] = ACTIONS(559),
    [sym_number_double] = ACTIONS(557),
    [anon_sym_BSLASH] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_POUND_DQUOTE] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_LPARENquote] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_fn] = ACTIONS(559),
    [anon_sym_fn_STAR] = ACTIONS(559),
    [anon_sym_let] = ACTIONS(559),
    [anon_sym_letfn] = ACTIONS(559),
    [anon_sym_if] = ACTIONS(559),
    [anon_sym_if_DASHlet] = ACTIONS(559),
    [anon_sym_while] = ACTIONS(559),
    [anon_sym_cond] = ACTIONS(559),
    [anon_sym_case] = ACTIONS(559),
    [anon_sym_try] = ACTIONS(559),
    [anon_sym_catch] = ACTIONS(559),
    [anon_sym_throw] = ACTIONS(559),
    [anon_sym_monitor_DASHenter] = ACTIONS(559),
    [anon_sym_monitor_DASHexit] = ACTIONS(559),
    [sym_namespace_definition] = ACTIONS(559),
    [anon_sym_def] = ACTIONS(559),
    [anon_sym_defn] = ACTIONS(559),
    [anon_sym_defn_DASH] = ACTIONS(559),
    [anon_sym_defmacro] = ACTIONS(559),
    [anon_sym_DASH_GT] = ACTIONS(559),
    [anon_sym_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_as_DASH_GT] = ACTIONS(557),
    [anon_sym_some_DASH_GT] = ACTIONS(559),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(557),
    [anon_sym_cond_DASH_GT] = ACTIONS(559),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(557),
    [sym__symbol_chars] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(559),
    [anon_sym_POUND_LBRACE] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(557),
    [anon_sym_POUND_BANG] = ACTIONS(557),
    [anon_sym_POUND_] = ACTIONS(557),
    [anon_sym_LPARENcomment] = ACTIONS(557),
  },
  [103] = {
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
    [anon_sym_fn] = ACTIONS(563),
    [anon_sym_fn_STAR] = ACTIONS(563),
    [anon_sym_let] = ACTIONS(563),
    [anon_sym_letfn] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_if_DASHlet] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_cond] = ACTIONS(563),
    [anon_sym_case] = ACTIONS(563),
    [anon_sym_try] = ACTIONS(563),
    [anon_sym_catch] = ACTIONS(563),
    [anon_sym_throw] = ACTIONS(563),
    [anon_sym_monitor_DASHenter] = ACTIONS(563),
    [anon_sym_monitor_DASHexit] = ACTIONS(563),
    [sym_namespace_definition] = ACTIONS(563),
    [anon_sym_def] = ACTIONS(563),
    [anon_sym_defn] = ACTIONS(563),
    [anon_sym_defn_DASH] = ACTIONS(563),
    [anon_sym_defmacro] = ACTIONS(563),
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
    [anon_sym_LPARENcomment] = ACTIONS(561),
  },
  [104] = {
    [aux_sym__string_repeat1] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(567),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(567),
  },
  [105] = {
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
    [anon_sym_fn] = ACTIONS(572),
    [anon_sym_fn_STAR] = ACTIONS(572),
    [anon_sym_let] = ACTIONS(572),
    [anon_sym_letfn] = ACTIONS(572),
    [anon_sym_if] = ACTIONS(572),
    [anon_sym_if_DASHlet] = ACTIONS(572),
    [anon_sym_while] = ACTIONS(572),
    [anon_sym_cond] = ACTIONS(572),
    [anon_sym_case] = ACTIONS(572),
    [anon_sym_try] = ACTIONS(572),
    [anon_sym_catch] = ACTIONS(572),
    [anon_sym_throw] = ACTIONS(572),
    [anon_sym_monitor_DASHenter] = ACTIONS(572),
    [anon_sym_monitor_DASHexit] = ACTIONS(572),
    [sym_namespace_definition] = ACTIONS(572),
    [anon_sym_def] = ACTIONS(572),
    [anon_sym_defn] = ACTIONS(572),
    [anon_sym_defn_DASH] = ACTIONS(572),
    [anon_sym_defmacro] = ACTIONS(572),
    [anon_sym_DASH_GT] = ACTIONS(572),
    [anon_sym_DASH_GT_GT] = ACTIONS(570),
    [anon_sym_as_DASH_GT] = ACTIONS(570),
    [anon_sym_some_DASH_GT] = ACTIONS(572),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(570),
    [anon_sym_cond_DASH_GT] = ACTIONS(572),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(570),
    [sym__symbol_chars] = ACTIONS(572),
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
    [anon_sym_LPARENcomment] = ACTIONS(570),
  },
  [106] = {
    [aux_sym__regex_repeat1] = STATE(106),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(576),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(576),
  },
  [107] = {
    [aux_sym_ignore_form_repeat1] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_] = ACTIONS(579),
  },
  [108] = {
    [sym__number] = STATE(184),
    [sym__string] = STATE(184),
    [sym__keyword] = STATE(184),
    [sym__unqualified_keyword] = STATE(184),
    [sym_qualified_keyword] = STATE(184),
    [sym__symbol] = STATE(184),
    [sym_special_form] = STATE(184),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(184),
    [sym_qualified_symbol] = STATE(184),
    [sym__one_form] = STATE(184),
    [sym__paren_sequence] = STATE(184),
    [sym__bracket_sequence] = STATE(184),
    [sym__curly_brace_sequence] = STATE(184),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(581),
    [sym_number_double] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(581),
  },
  [109] = {
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
    [anon_sym_fn] = ACTIONS(585),
    [anon_sym_fn_STAR] = ACTIONS(585),
    [anon_sym_let] = ACTIONS(585),
    [anon_sym_letfn] = ACTIONS(585),
    [anon_sym_if] = ACTIONS(585),
    [anon_sym_if_DASHlet] = ACTIONS(585),
    [anon_sym_while] = ACTIONS(585),
    [anon_sym_cond] = ACTIONS(585),
    [anon_sym_case] = ACTIONS(585),
    [anon_sym_try] = ACTIONS(585),
    [anon_sym_catch] = ACTIONS(585),
    [anon_sym_throw] = ACTIONS(585),
    [anon_sym_monitor_DASHenter] = ACTIONS(585),
    [anon_sym_monitor_DASHexit] = ACTIONS(585),
    [sym_namespace_definition] = ACTIONS(585),
    [anon_sym_def] = ACTIONS(585),
    [anon_sym_defn] = ACTIONS(585),
    [anon_sym_defn_DASH] = ACTIONS(585),
    [anon_sym_defmacro] = ACTIONS(585),
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
  },
  [110] = {
    [sym__keyword_chars] = ACTIONS(587),
  },
  [111] = {
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
    [anon_sym_fn] = ACTIONS(591),
    [anon_sym_fn_STAR] = ACTIONS(591),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_letfn] = ACTIONS(591),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_if_DASHlet] = ACTIONS(591),
    [anon_sym_while] = ACTIONS(591),
    [anon_sym_cond] = ACTIONS(591),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_try] = ACTIONS(591),
    [anon_sym_catch] = ACTIONS(591),
    [anon_sym_throw] = ACTIONS(591),
    [anon_sym_monitor_DASHenter] = ACTIONS(591),
    [anon_sym_monitor_DASHexit] = ACTIONS(591),
    [sym_namespace_definition] = ACTIONS(591),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defn] = ACTIONS(591),
    [anon_sym_defn_DASH] = ACTIONS(591),
    [anon_sym_defmacro] = ACTIONS(591),
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
    [anon_sym_LPARENcomment] = ACTIONS(589),
  },
  [112] = {
    [aux_sym_ignore_form_repeat1] = STATE(186),
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
    [anon_sym_fn] = ACTIONS(435),
    [anon_sym_fn_STAR] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_letfn] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_if_DASHlet] = ACTIONS(435),
    [anon_sym_while] = ACTIONS(435),
    [anon_sym_cond] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_try] = ACTIONS(435),
    [anon_sym_catch] = ACTIONS(435),
    [anon_sym_throw] = ACTIONS(435),
    [anon_sym_monitor_DASHenter] = ACTIONS(435),
    [anon_sym_monitor_DASHexit] = ACTIONS(435),
    [sym_namespace_definition] = ACTIONS(435),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defn] = ACTIONS(435),
    [anon_sym_defn_DASH] = ACTIONS(435),
    [anon_sym_defmacro] = ACTIONS(435),
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
    [anon_sym_] = ACTIONS(593),
    [anon_sym_LPARENcomment] = ACTIONS(435),
  },
  [113] = {
    [sym__number] = STATE(187),
    [sym__string] = STATE(187),
    [sym__keyword] = STATE(187),
    [sym__unqualified_keyword] = STATE(187),
    [sym_qualified_keyword] = STATE(187),
    [sym__symbol] = STATE(187),
    [sym_special_form] = STATE(187),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(187),
    [sym_qualified_symbol] = STATE(187),
    [sym__one_form] = STATE(187),
    [sym__paren_sequence] = STATE(187),
    [sym__bracket_sequence] = STATE(187),
    [sym__curly_brace_sequence] = STATE(187),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(595),
    [sym_number_double] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(595),
  },
  [114] = {
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
    [anon_sym_fn] = ACTIONS(599),
    [anon_sym_fn_STAR] = ACTIONS(599),
    [anon_sym_let] = ACTIONS(599),
    [anon_sym_letfn] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(599),
    [anon_sym_if_DASHlet] = ACTIONS(599),
    [anon_sym_while] = ACTIONS(599),
    [anon_sym_cond] = ACTIONS(599),
    [anon_sym_case] = ACTIONS(599),
    [anon_sym_try] = ACTIONS(599),
    [anon_sym_catch] = ACTIONS(599),
    [anon_sym_throw] = ACTIONS(599),
    [anon_sym_monitor_DASHenter] = ACTIONS(599),
    [anon_sym_monitor_DASHexit] = ACTIONS(599),
    [sym_namespace_definition] = ACTIONS(599),
    [anon_sym_def] = ACTIONS(599),
    [anon_sym_defn] = ACTIONS(599),
    [anon_sym_defn_DASH] = ACTIONS(599),
    [anon_sym_defmacro] = ACTIONS(599),
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
  },
  [115] = {
    [sym__anything] = STATE(115),
    [sym__literal] = STATE(115),
    [sym__collection_literal] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_number] = STATE(115),
    [sym__number] = STATE(25),
    [sym_character] = STATE(115),
    [sym__character] = STATE(26),
    [sym_string] = STATE(115),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(115),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(115),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(115),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(115),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(115),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(115),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(115),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(115),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(115),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(115),
    [sym_nil] = ACTIONS(601),
    [sym_true] = ACTIONS(480),
    [sym_false] = ACTIONS(480),
    [sym_number_long] = ACTIONS(483),
    [sym_number_double] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [anon_sym_POUND_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_LPARENquote] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_COLON_COLON] = ACTIONS(507),
    [anon_sym_fn] = ACTIONS(510),
    [anon_sym_fn_STAR] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_letfn] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_if_DASHlet] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_cond] = ACTIONS(510),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_try] = ACTIONS(510),
    [anon_sym_catch] = ACTIONS(510),
    [anon_sym_throw] = ACTIONS(510),
    [anon_sym_monitor_DASHenter] = ACTIONS(510),
    [anon_sym_monitor_DASHexit] = ACTIONS(510),
    [sym_namespace_definition] = ACTIONS(510),
    [anon_sym_def] = ACTIONS(513),
    [anon_sym_defn] = ACTIONS(513),
    [anon_sym_defn_DASH] = ACTIONS(513),
    [anon_sym_defmacro] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(516),
    [anon_sym_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_as_DASH_GT] = ACTIONS(519),
    [anon_sym_some_DASH_GT] = ACTIONS(516),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_cond_DASH_GT] = ACTIONS(516),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(519),
    [sym__symbol_chars] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(534),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LBRACE] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(546),
    [anon_sym_POUND_] = ACTIONS(607),
    [anon_sym_LPARENcomment] = ACTIONS(552),
  },
  [116] = {
    [aux_sym_ignore_form_repeat1] = STATE(188),
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
    [anon_sym_fn] = ACTIONS(435),
    [anon_sym_fn_STAR] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_letfn] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_if_DASHlet] = ACTIONS(435),
    [anon_sym_while] = ACTIONS(435),
    [anon_sym_cond] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_try] = ACTIONS(435),
    [anon_sym_catch] = ACTIONS(435),
    [anon_sym_throw] = ACTIONS(435),
    [anon_sym_monitor_DASHenter] = ACTIONS(435),
    [anon_sym_monitor_DASHexit] = ACTIONS(435),
    [sym_namespace_definition] = ACTIONS(435),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defn] = ACTIONS(435),
    [anon_sym_defn_DASH] = ACTIONS(435),
    [anon_sym_defmacro] = ACTIONS(435),
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
    [anon_sym_] = ACTIONS(610),
    [anon_sym_LPARENcomment] = ACTIONS(435),
  },
  [117] = {
    [sym__number] = STATE(189),
    [sym__string] = STATE(189),
    [sym__keyword] = STATE(189),
    [sym__unqualified_keyword] = STATE(189),
    [sym_qualified_keyword] = STATE(189),
    [sym__symbol] = STATE(189),
    [sym_special_form] = STATE(189),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(189),
    [sym_qualified_symbol] = STATE(189),
    [sym__one_form] = STATE(189),
    [sym__paren_sequence] = STATE(189),
    [sym__bracket_sequence] = STATE(189),
    [sym__curly_brace_sequence] = STATE(189),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(612),
    [sym_number_double] = ACTIONS(612),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(612),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_nil] = ACTIONS(616),
    [sym_true] = ACTIONS(616),
    [sym_false] = ACTIONS(616),
    [sym_number_long] = ACTIONS(616),
    [sym_number_double] = ACTIONS(614),
    [anon_sym_BSLASH] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [anon_sym_POUND_DQUOTE] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [anon_sym_LPARENquote] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_COLON] = ACTIONS(616),
    [anon_sym_COLON_COLON] = ACTIONS(614),
    [anon_sym_fn] = ACTIONS(616),
    [anon_sym_fn_STAR] = ACTIONS(616),
    [anon_sym_let] = ACTIONS(616),
    [anon_sym_letfn] = ACTIONS(616),
    [anon_sym_if] = ACTIONS(616),
    [anon_sym_if_DASHlet] = ACTIONS(616),
    [anon_sym_while] = ACTIONS(616),
    [anon_sym_cond] = ACTIONS(616),
    [anon_sym_case] = ACTIONS(616),
    [anon_sym_try] = ACTIONS(616),
    [anon_sym_catch] = ACTIONS(616),
    [anon_sym_throw] = ACTIONS(616),
    [anon_sym_monitor_DASHenter] = ACTIONS(616),
    [anon_sym_monitor_DASHexit] = ACTIONS(616),
    [sym_namespace_definition] = ACTIONS(616),
    [anon_sym_def] = ACTIONS(616),
    [anon_sym_defn] = ACTIONS(616),
    [anon_sym_defn_DASH] = ACTIONS(616),
    [anon_sym_defmacro] = ACTIONS(616),
    [anon_sym_DASH_GT] = ACTIONS(616),
    [anon_sym_DASH_GT_GT] = ACTIONS(614),
    [anon_sym_as_DASH_GT] = ACTIONS(614),
    [anon_sym_some_DASH_GT] = ACTIONS(616),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(614),
    [anon_sym_cond_DASH_GT] = ACTIONS(616),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(614),
    [sym__symbol_chars] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_RBRACK] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(614),
    [anon_sym_POUND] = ACTIONS(616),
    [anon_sym_POUND_LBRACE] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_POUND_BANG] = ACTIONS(614),
    [anon_sym_POUND_] = ACTIONS(614),
    [anon_sym_LPARENcomment] = ACTIONS(614),
  },
  [119] = {
    [sym__anything] = STATE(119),
    [sym__literal] = STATE(119),
    [sym__collection_literal] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_number] = STATE(119),
    [sym__number] = STATE(25),
    [sym_character] = STATE(119),
    [sym__character] = STATE(26),
    [sym_string] = STATE(119),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(119),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(119),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(119),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(119),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(119),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(119),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(119),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym_set] = STATE(119),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(119),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym_program_repeat1] = STATE(119),
    [sym_nil] = ACTIONS(618),
    [sym_true] = ACTIONS(480),
    [sym_false] = ACTIONS(480),
    [sym_number_long] = ACTIONS(483),
    [sym_number_double] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [anon_sym_POUND_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_LPARENquote] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_COLON_COLON] = ACTIONS(507),
    [anon_sym_fn] = ACTIONS(510),
    [anon_sym_fn_STAR] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_letfn] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_if_DASHlet] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_cond] = ACTIONS(510),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_try] = ACTIONS(510),
    [anon_sym_catch] = ACTIONS(510),
    [anon_sym_throw] = ACTIONS(510),
    [anon_sym_monitor_DASHenter] = ACTIONS(510),
    [anon_sym_monitor_DASHexit] = ACTIONS(510),
    [sym_namespace_definition] = ACTIONS(510),
    [anon_sym_def] = ACTIONS(513),
    [anon_sym_defn] = ACTIONS(513),
    [anon_sym_defn_DASH] = ACTIONS(513),
    [anon_sym_defmacro] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(516),
    [anon_sym_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_as_DASH_GT] = ACTIONS(519),
    [anon_sym_some_DASH_GT] = ACTIONS(516),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_cond_DASH_GT] = ACTIONS(516),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(519),
    [sym__symbol_chars] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(534),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LBRACE] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(546),
    [anon_sym_POUND_] = ACTIONS(624),
    [anon_sym_LPARENcomment] = ACTIONS(552),
  },
  [120] = {
    [aux_sym_ignore_form_repeat1] = STATE(190),
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
    [anon_sym_fn] = ACTIONS(435),
    [anon_sym_fn_STAR] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_letfn] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_if_DASHlet] = ACTIONS(435),
    [anon_sym_while] = ACTIONS(435),
    [anon_sym_cond] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_try] = ACTIONS(435),
    [anon_sym_catch] = ACTIONS(435),
    [anon_sym_throw] = ACTIONS(435),
    [anon_sym_monitor_DASHenter] = ACTIONS(435),
    [anon_sym_monitor_DASHexit] = ACTIONS(435),
    [sym_namespace_definition] = ACTIONS(435),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defn] = ACTIONS(435),
    [anon_sym_defn_DASH] = ACTIONS(435),
    [anon_sym_defmacro] = ACTIONS(435),
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
    [anon_sym_] = ACTIONS(627),
    [anon_sym_LPARENcomment] = ACTIONS(435),
  },
  [121] = {
    [sym__number] = STATE(191),
    [sym__string] = STATE(191),
    [sym__keyword] = STATE(191),
    [sym__unqualified_keyword] = STATE(191),
    [sym_qualified_keyword] = STATE(191),
    [sym__symbol] = STATE(191),
    [sym_special_form] = STATE(191),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(191),
    [sym_qualified_symbol] = STATE(191),
    [sym__one_form] = STATE(191),
    [sym__paren_sequence] = STATE(191),
    [sym__bracket_sequence] = STATE(191),
    [sym__curly_brace_sequence] = STATE(191),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(629),
    [sym_number_double] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(629),
  },
  [122] = {
    [sym_nil] = ACTIONS(631),
    [sym_true] = ACTIONS(631),
    [sym_false] = ACTIONS(631),
    [sym_number_long] = ACTIONS(631),
    [sym_number_double] = ACTIONS(633),
    [anon_sym_BSLASH] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [anon_sym_POUND_DQUOTE] = ACTIONS(633),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_LPARENquote] = ACTIONS(633),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_COLON_COLON] = ACTIONS(633),
    [anon_sym_fn] = ACTIONS(631),
    [anon_sym_fn_STAR] = ACTIONS(631),
    [anon_sym_let] = ACTIONS(631),
    [anon_sym_letfn] = ACTIONS(631),
    [anon_sym_if] = ACTIONS(631),
    [anon_sym_if_DASHlet] = ACTIONS(631),
    [anon_sym_while] = ACTIONS(631),
    [anon_sym_cond] = ACTIONS(631),
    [anon_sym_case] = ACTIONS(631),
    [anon_sym_try] = ACTIONS(631),
    [anon_sym_catch] = ACTIONS(631),
    [anon_sym_throw] = ACTIONS(631),
    [anon_sym_monitor_DASHenter] = ACTIONS(631),
    [anon_sym_monitor_DASHexit] = ACTIONS(631),
    [sym_namespace_definition] = ACTIONS(631),
    [anon_sym_def] = ACTIONS(631),
    [anon_sym_defn] = ACTIONS(631),
    [anon_sym_defn_DASH] = ACTIONS(631),
    [anon_sym_defmacro] = ACTIONS(631),
    [anon_sym_DASH_GT] = ACTIONS(631),
    [anon_sym_DASH_GT_GT] = ACTIONS(633),
    [anon_sym_as_DASH_GT] = ACTIONS(633),
    [anon_sym_some_DASH_GT] = ACTIONS(631),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(633),
    [anon_sym_cond_DASH_GT] = ACTIONS(631),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(633),
    [sym__symbol_chars] = ACTIONS(631),
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(633),
    [anon_sym_LBRACE] = ACTIONS(633),
    [anon_sym_RBRACE] = ACTIONS(633),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(633),
    [anon_sym_POUND] = ACTIONS(631),
    [anon_sym_POUND_LBRACE] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_POUND_BANG] = ACTIONS(633),
    [anon_sym_POUND_] = ACTIONS(633),
    [anon_sym_LPARENcomment] = ACTIONS(633),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [sym_nil] = ACTIONS(637),
    [sym_true] = ACTIONS(637),
    [sym_false] = ACTIONS(637),
    [sym_number_long] = ACTIONS(637),
    [sym_number_double] = ACTIONS(635),
    [anon_sym_BSLASH] = ACTIONS(635),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [anon_sym_POUND_DQUOTE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [anon_sym_LPARENquote] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(637),
    [anon_sym_COLON_COLON] = ACTIONS(635),
    [anon_sym_fn] = ACTIONS(637),
    [anon_sym_fn_STAR] = ACTIONS(637),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_letfn] = ACTIONS(637),
    [anon_sym_if] = ACTIONS(637),
    [anon_sym_if_DASHlet] = ACTIONS(637),
    [anon_sym_while] = ACTIONS(637),
    [anon_sym_cond] = ACTIONS(637),
    [anon_sym_case] = ACTIONS(637),
    [anon_sym_try] = ACTIONS(637),
    [anon_sym_catch] = ACTIONS(637),
    [anon_sym_throw] = ACTIONS(637),
    [anon_sym_monitor_DASHenter] = ACTIONS(637),
    [anon_sym_monitor_DASHexit] = ACTIONS(637),
    [sym_namespace_definition] = ACTIONS(637),
    [anon_sym_def] = ACTIONS(637),
    [anon_sym_defn] = ACTIONS(637),
    [anon_sym_defn_DASH] = ACTIONS(637),
    [anon_sym_defmacro] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(637),
    [anon_sym_DASH_GT_GT] = ACTIONS(635),
    [anon_sym_as_DASH_GT] = ACTIONS(635),
    [anon_sym_some_DASH_GT] = ACTIONS(637),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(635),
    [anon_sym_cond_DASH_GT] = ACTIONS(637),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(635),
    [sym__symbol_chars] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(635),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_POUND_LBRACE] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_POUND_BANG] = ACTIONS(635),
    [anon_sym_POUND_] = ACTIONS(635),
    [anon_sym_LPARENcomment] = ACTIONS(635),
  },
  [124] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(124),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(124),
    [sym_nil] = ACTIONS(639),
    [sym_true] = ACTIONS(642),
    [sym_false] = ACTIONS(642),
    [sym_number_long] = ACTIONS(645),
    [sym_number_double] = ACTIONS(648),
    [anon_sym_BSLASH] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [anon_sym_POUND_DQUOTE] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(660),
    [anon_sym_LPARENquote] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(666),
    [anon_sym_COLON_COLON] = ACTIONS(669),
    [anon_sym_fn] = ACTIONS(672),
    [anon_sym_fn_STAR] = ACTIONS(672),
    [anon_sym_let] = ACTIONS(672),
    [anon_sym_letfn] = ACTIONS(672),
    [anon_sym_if] = ACTIONS(672),
    [anon_sym_if_DASHlet] = ACTIONS(672),
    [anon_sym_while] = ACTIONS(672),
    [anon_sym_cond] = ACTIONS(672),
    [anon_sym_case] = ACTIONS(672),
    [anon_sym_try] = ACTIONS(672),
    [anon_sym_catch] = ACTIONS(672),
    [anon_sym_throw] = ACTIONS(672),
    [anon_sym_monitor_DASHenter] = ACTIONS(672),
    [anon_sym_monitor_DASHexit] = ACTIONS(672),
    [sym_namespace_definition] = ACTIONS(672),
    [anon_sym_def] = ACTIONS(675),
    [anon_sym_defn] = ACTIONS(675),
    [anon_sym_defn_DASH] = ACTIONS(675),
    [anon_sym_defmacro] = ACTIONS(675),
    [anon_sym_DASH_GT] = ACTIONS(678),
    [anon_sym_DASH_GT_GT] = ACTIONS(681),
    [anon_sym_as_DASH_GT] = ACTIONS(681),
    [anon_sym_some_DASH_GT] = ACTIONS(678),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(681),
    [anon_sym_cond_DASH_GT] = ACTIONS(678),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(681),
    [sym__symbol_chars] = ACTIONS(684),
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_RBRACE] = ACTIONS(696),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(698),
    [anon_sym_POUND] = ACTIONS(701),
    [anon_sym_POUND_LBRACE] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_POUND_BANG] = ACTIONS(710),
    [anon_sym_POUND_] = ACTIONS(713),
    [anon_sym_LPARENcomment] = ACTIONS(716),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [sym_nil] = ACTIONS(721),
    [sym_true] = ACTIONS(721),
    [sym_false] = ACTIONS(721),
    [sym_number_long] = ACTIONS(721),
    [sym_number_double] = ACTIONS(719),
    [anon_sym_BSLASH] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [anon_sym_POUND_DQUOTE] = ACTIONS(719),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [anon_sym_LPARENquote] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(721),
    [anon_sym_COLON_COLON] = ACTIONS(719),
    [anon_sym_fn] = ACTIONS(721),
    [anon_sym_fn_STAR] = ACTIONS(721),
    [anon_sym_let] = ACTIONS(721),
    [anon_sym_letfn] = ACTIONS(721),
    [anon_sym_if] = ACTIONS(721),
    [anon_sym_if_DASHlet] = ACTIONS(721),
    [anon_sym_while] = ACTIONS(721),
    [anon_sym_cond] = ACTIONS(721),
    [anon_sym_case] = ACTIONS(721),
    [anon_sym_try] = ACTIONS(721),
    [anon_sym_catch] = ACTIONS(721),
    [anon_sym_throw] = ACTIONS(721),
    [anon_sym_monitor_DASHenter] = ACTIONS(721),
    [anon_sym_monitor_DASHexit] = ACTIONS(721),
    [sym_namespace_definition] = ACTIONS(721),
    [anon_sym_def] = ACTIONS(721),
    [anon_sym_defn] = ACTIONS(721),
    [anon_sym_defn_DASH] = ACTIONS(721),
    [anon_sym_defmacro] = ACTIONS(721),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [anon_sym_DASH_GT_GT] = ACTIONS(719),
    [anon_sym_as_DASH_GT] = ACTIONS(719),
    [anon_sym_some_DASH_GT] = ACTIONS(721),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(719),
    [anon_sym_cond_DASH_GT] = ACTIONS(721),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(719),
    [sym__symbol_chars] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(721),
    [anon_sym_POUND_LBRACE] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_POUND_BANG] = ACTIONS(719),
    [anon_sym_POUND_] = ACTIONS(719),
    [anon_sym_LPARENcomment] = ACTIONS(719),
  },
  [126] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(193),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(193),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [127] = {
    [aux_sym_ignore_form_repeat1] = STATE(194),
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
    [anon_sym_fn] = ACTIONS(435),
    [anon_sym_fn_STAR] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_letfn] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_if_DASHlet] = ACTIONS(435),
    [anon_sym_while] = ACTIONS(435),
    [anon_sym_cond] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_try] = ACTIONS(435),
    [anon_sym_catch] = ACTIONS(435),
    [anon_sym_throw] = ACTIONS(435),
    [anon_sym_monitor_DASHenter] = ACTIONS(435),
    [anon_sym_monitor_DASHexit] = ACTIONS(435),
    [sym_namespace_definition] = ACTIONS(435),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defn] = ACTIONS(435),
    [anon_sym_defn_DASH] = ACTIONS(435),
    [anon_sym_defmacro] = ACTIONS(435),
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
    [anon_sym_] = ACTIONS(725),
    [anon_sym_LPARENcomment] = ACTIONS(435),
  },
  [128] = {
    [sym__number] = STATE(195),
    [sym__string] = STATE(195),
    [sym__keyword] = STATE(195),
    [sym__unqualified_keyword] = STATE(195),
    [sym_qualified_keyword] = STATE(195),
    [sym__symbol] = STATE(195),
    [sym_special_form] = STATE(195),
    [sym_def_form] = STATE(77),
    [sym_threading_macro] = STATE(195),
    [sym_qualified_symbol] = STATE(195),
    [sym__one_form] = STATE(195),
    [sym__paren_sequence] = STATE(195),
    [sym__bracket_sequence] = STATE(195),
    [sym__curly_brace_sequence] = STATE(195),
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(727),
    [sym_number_double] = ACTIONS(727),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_fn_STAR] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_letfn] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_if_DASHlet] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_cond] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_monitor_DASHenter] = ACTIONS(155),
    [anon_sym_monitor_DASHexit] = ACTIONS(155),
    [sym_namespace_definition] = ACTIONS(155),
    [anon_sym_def] = ACTIONS(157),
    [anon_sym_defn] = ACTIONS(157),
    [anon_sym_defn_DASH] = ACTIONS(157),
    [anon_sym_defmacro] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_as_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT] = ACTIONS(159),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT] = ACTIONS(159),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(159),
    [sym__symbol_chars] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_] = ACTIONS(441),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(727),
  },
  [129] = {
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
    [anon_sym_fn] = ACTIONS(731),
    [anon_sym_fn_STAR] = ACTIONS(731),
    [anon_sym_let] = ACTIONS(731),
    [anon_sym_letfn] = ACTIONS(731),
    [anon_sym_if] = ACTIONS(731),
    [anon_sym_if_DASHlet] = ACTIONS(731),
    [anon_sym_while] = ACTIONS(731),
    [anon_sym_cond] = ACTIONS(731),
    [anon_sym_case] = ACTIONS(731),
    [anon_sym_try] = ACTIONS(731),
    [anon_sym_catch] = ACTIONS(731),
    [anon_sym_throw] = ACTIONS(731),
    [anon_sym_monitor_DASHenter] = ACTIONS(731),
    [anon_sym_monitor_DASHexit] = ACTIONS(731),
    [sym_namespace_definition] = ACTIONS(731),
    [anon_sym_def] = ACTIONS(731),
    [anon_sym_defn] = ACTIONS(731),
    [anon_sym_defn_DASH] = ACTIONS(731),
    [anon_sym_defmacro] = ACTIONS(731),
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
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
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
    [aux_sym_program_repeat1] = STATE(130),
    [sym_nil] = ACTIONS(733),
    [sym_true] = ACTIONS(480),
    [sym_false] = ACTIONS(480),
    [sym_number_long] = ACTIONS(483),
    [sym_number_double] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [anon_sym_POUND_DQUOTE] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [anon_sym_LPARENquote] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(504),
    [anon_sym_COLON_COLON] = ACTIONS(507),
    [anon_sym_fn] = ACTIONS(510),
    [anon_sym_fn_STAR] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_letfn] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_if_DASHlet] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_cond] = ACTIONS(510),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_try] = ACTIONS(510),
    [anon_sym_catch] = ACTIONS(510),
    [anon_sym_throw] = ACTIONS(510),
    [anon_sym_monitor_DASHenter] = ACTIONS(510),
    [anon_sym_monitor_DASHexit] = ACTIONS(510),
    [sym_namespace_definition] = ACTIONS(510),
    [anon_sym_def] = ACTIONS(513),
    [anon_sym_defn] = ACTIONS(513),
    [anon_sym_defn_DASH] = ACTIONS(513),
    [anon_sym_defmacro] = ACTIONS(513),
    [anon_sym_DASH_GT] = ACTIONS(516),
    [anon_sym_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_as_DASH_GT] = ACTIONS(519),
    [anon_sym_some_DASH_GT] = ACTIONS(516),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(519),
    [anon_sym_cond_DASH_GT] = ACTIONS(516),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(519),
    [sym__symbol_chars] = ACTIONS(522),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(534),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LBRACE] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(546),
    [anon_sym_POUND_] = ACTIONS(739),
    [anon_sym_LPARENcomment] = ACTIONS(552),
  },
  [131] = {
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
    [anon_sym_fn] = ACTIONS(265),
    [anon_sym_fn_STAR] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_letfn] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_if_DASHlet] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(265),
    [anon_sym_cond] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_catch] = ACTIONS(265),
    [anon_sym_throw] = ACTIONS(265),
    [anon_sym_monitor_DASHenter] = ACTIONS(265),
    [anon_sym_monitor_DASHexit] = ACTIONS(265),
    [sym_namespace_definition] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(265),
    [anon_sym_defn] = ACTIONS(265),
    [anon_sym_defn_DASH] = ACTIONS(265),
    [anon_sym_defmacro] = ACTIONS(265),
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
  },
  [132] = {
    [aux_sym__string_repeat1] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(742),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [133] = {
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
    [anon_sym_fn] = ACTIONS(291),
    [anon_sym_fn_STAR] = ACTIONS(291),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_letfn] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [anon_sym_if_DASHlet] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_cond] = ACTIONS(291),
    [anon_sym_case] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_throw] = ACTIONS(291),
    [anon_sym_monitor_DASHenter] = ACTIONS(291),
    [anon_sym_monitor_DASHexit] = ACTIONS(291),
    [sym_namespace_definition] = ACTIONS(291),
    [anon_sym_def] = ACTIONS(291),
    [anon_sym_defn] = ACTIONS(291),
    [anon_sym_defn_DASH] = ACTIONS(291),
    [anon_sym_defmacro] = ACTIONS(291),
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
  },
  [134] = {
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
    [anon_sym_SLASH] = ACTIONS(744),
    [anon_sym_fn] = ACTIONS(295),
    [anon_sym_fn_STAR] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_letfn] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_if_DASHlet] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(295),
    [anon_sym_cond] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_try] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_throw] = ACTIONS(295),
    [anon_sym_monitor_DASHenter] = ACTIONS(295),
    [anon_sym_monitor_DASHexit] = ACTIONS(295),
    [sym_namespace_definition] = ACTIONS(295),
    [anon_sym_def] = ACTIONS(295),
    [anon_sym_defn] = ACTIONS(295),
    [anon_sym_defn_DASH] = ACTIONS(295),
    [anon_sym_defmacro] = ACTIONS(295),
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
  },
  [135] = {
    [sym__symbol_chars] = ACTIONS(746),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [sym_nil] = ACTIONS(750),
    [sym_true] = ACTIONS(750),
    [sym_false] = ACTIONS(750),
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_POUND_DQUOTE] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_LPARENquote] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [anon_sym_fn] = ACTIONS(750),
    [anon_sym_fn_STAR] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_letfn] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_if_DASHlet] = ACTIONS(750),
    [anon_sym_while] = ACTIONS(750),
    [anon_sym_cond] = ACTIONS(750),
    [anon_sym_case] = ACTIONS(750),
    [anon_sym_try] = ACTIONS(750),
    [anon_sym_catch] = ACTIONS(750),
    [anon_sym_throw] = ACTIONS(750),
    [anon_sym_monitor_DASHenter] = ACTIONS(750),
    [anon_sym_monitor_DASHexit] = ACTIONS(750),
    [sym_namespace_definition] = ACTIONS(750),
    [anon_sym_def] = ACTIONS(750),
    [anon_sym_defn] = ACTIONS(750),
    [anon_sym_defn_DASH] = ACTIONS(750),
    [anon_sym_defmacro] = ACTIONS(750),
    [anon_sym_DASH_GT] = ACTIONS(750),
    [anon_sym_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_as_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_POUND_LBRACE] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_POUND_BANG] = ACTIONS(750),
    [anon_sym_POUND_] = ACTIONS(750),
    [anon_sym_] = ACTIONS(748),
    [anon_sym_LPARENcomment] = ACTIONS(750),
  },
  [137] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [138] = {
    [aux_sym__string_repeat1] = STATE(201),
    [anon_sym_DQUOTE] = ACTIONS(754),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(756),
  },
  [139] = {
    [sym__keyword_chars] = ACTIONS(758),
  },
  [140] = {
    [sym__keyword_chars] = ACTIONS(760),
  },
  [141] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_fn_STAR] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(91),
    [anon_sym_letfn] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_if_DASHlet] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_cond] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_monitor_DASHenter] = ACTIONS(91),
    [anon_sym_monitor_DASHexit] = ACTIONS(91),
    [sym_namespace_definition] = ACTIONS(91),
    [anon_sym_def] = ACTIONS(91),
    [anon_sym_defn] = ACTIONS(91),
    [anon_sym_defn_DASH] = ACTIONS(91),
    [anon_sym_defmacro] = ACTIONS(91),
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
  [142] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_fn_STAR] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_letfn] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_if_DASHlet] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_cond] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_monitor_DASHenter] = ACTIONS(95),
    [anon_sym_monitor_DASHexit] = ACTIONS(95),
    [sym_namespace_definition] = ACTIONS(95),
    [anon_sym_def] = ACTIONS(95),
    [anon_sym_defn] = ACTIONS(95),
    [anon_sym_defn_DASH] = ACTIONS(95),
    [anon_sym_defmacro] = ACTIONS(95),
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
  [143] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_fn_STAR] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_letfn] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_if_DASHlet] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [sym_namespace_definition] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_defn] = ACTIONS(99),
    [anon_sym_defn_DASH] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
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
  [144] = {
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(762),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_fn_STAR] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_letfn] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_if_DASHlet] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_cond] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [sym_namespace_definition] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_defn] = ACTIONS(103),
    [anon_sym_defn_DASH] = ACTIONS(103),
    [anon_sym_defmacro] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_as_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(103),
    [sym__symbol_chars] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(103),
  },
  [145] = {
    [sym__number] = STATE(206),
    [sym__string] = STATE(206),
    [sym__keyword] = STATE(206),
    [sym__unqualified_keyword] = STATE(206),
    [sym_qualified_keyword] = STATE(206),
    [sym__symbol] = STATE(206),
    [sym_special_form] = STATE(206),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(206),
    [sym_qualified_symbol] = STATE(206),
    [sym__one_form] = STATE(206),
    [sym__paren_sequence] = STATE(206),
    [sym__bracket_sequence] = STATE(206),
    [sym__curly_brace_sequence] = STATE(206),
    [aux_sym_comment_macro_repeat1] = STATE(206),
    [sym_number_long] = ACTIONS(764),
    [sym_number_double] = ACTIONS(764),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(764),
  },
  [146] = {
    [sym__number] = STATE(208),
    [sym__string] = STATE(208),
    [sym__keyword] = STATE(208),
    [sym__unqualified_keyword] = STATE(208),
    [sym_qualified_keyword] = STATE(208),
    [sym__symbol] = STATE(208),
    [sym_special_form] = STATE(208),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(208),
    [sym_qualified_symbol] = STATE(208),
    [sym__one_form] = STATE(208),
    [sym__paren_sequence] = STATE(208),
    [sym__bracket_sequence] = STATE(208),
    [sym__curly_brace_sequence] = STATE(208),
    [aux_sym_comment_macro_repeat1] = STATE(208),
    [sym_number_long] = ACTIONS(768),
    [sym_number_double] = ACTIONS(768),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(770),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(768),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(772),
    [sym_nil] = ACTIONS(774),
    [sym_true] = ACTIONS(774),
    [sym_false] = ACTIONS(774),
    [sym_number_long] = ACTIONS(774),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_BSLASH] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_POUND_DQUOTE] = ACTIONS(774),
    [anon_sym_SQUOTE] = ACTIONS(774),
    [anon_sym_LPARENquote] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_fn] = ACTIONS(774),
    [anon_sym_fn_STAR] = ACTIONS(774),
    [anon_sym_let] = ACTIONS(774),
    [anon_sym_letfn] = ACTIONS(774),
    [anon_sym_if] = ACTIONS(774),
    [anon_sym_if_DASHlet] = ACTIONS(774),
    [anon_sym_while] = ACTIONS(774),
    [anon_sym_cond] = ACTIONS(774),
    [anon_sym_case] = ACTIONS(774),
    [anon_sym_try] = ACTIONS(774),
    [anon_sym_catch] = ACTIONS(774),
    [anon_sym_throw] = ACTIONS(774),
    [anon_sym_monitor_DASHenter] = ACTIONS(774),
    [anon_sym_monitor_DASHexit] = ACTIONS(774),
    [sym_namespace_definition] = ACTIONS(774),
    [anon_sym_def] = ACTIONS(774),
    [anon_sym_defn] = ACTIONS(774),
    [anon_sym_defn_DASH] = ACTIONS(774),
    [anon_sym_defmacro] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(774),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
    [anon_sym_POUND_LBRACE] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_POUND_BANG] = ACTIONS(774),
    [anon_sym_POUND_] = ACTIONS(774),
    [anon_sym_] = ACTIONS(772),
    [anon_sym_LPARENcomment] = ACTIONS(774),
  },
  [148] = {
    [sym__number] = STATE(210),
    [sym__string] = STATE(210),
    [sym__keyword] = STATE(210),
    [sym__unqualified_keyword] = STATE(210),
    [sym_qualified_keyword] = STATE(210),
    [sym__symbol] = STATE(210),
    [sym_special_form] = STATE(210),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(210),
    [sym_qualified_symbol] = STATE(210),
    [sym__one_form] = STATE(210),
    [sym__paren_sequence] = STATE(210),
    [sym__bracket_sequence] = STATE(210),
    [sym__curly_brace_sequence] = STATE(210),
    [aux_sym_comment_macro_repeat1] = STATE(210),
    [sym_number_long] = ACTIONS(776),
    [sym_number_double] = ACTIONS(776),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(776),
  },
  [149] = {
    [anon_sym_LBRACE] = ACTIONS(780),
  },
  [150] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_special_form] = STATE(213),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_comment_macro_repeat1] = STATE(213),
    [sym_number_long] = ACTIONS(782),
    [sym_number_double] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(782),
  },
  [151] = {
    [aux_sym__string_repeat1] = STATE(215),
    [anon_sym_DQUOTE] = ACTIONS(786),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(788),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(788),
  },
  [152] = {
    [sym__keyword_chars] = ACTIONS(790),
  },
  [153] = {
    [sym__keyword_chars] = ACTIONS(792),
  },
  [154] = {
    [sym_number_long] = ACTIONS(91),
    [sym_number_double] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(91),
    [anon_sym_fn_STAR] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(91),
    [anon_sym_letfn] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_if_DASHlet] = ACTIONS(91),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_cond] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_try] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_throw] = ACTIONS(91),
    [anon_sym_monitor_DASHenter] = ACTIONS(91),
    [anon_sym_monitor_DASHexit] = ACTIONS(91),
    [sym_namespace_definition] = ACTIONS(91),
    [anon_sym_def] = ACTIONS(91),
    [anon_sym_defn] = ACTIONS(91),
    [anon_sym_defn_DASH] = ACTIONS(91),
    [anon_sym_defmacro] = ACTIONS(91),
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
  [155] = {
    [sym_number_long] = ACTIONS(95),
    [sym_number_double] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_fn_STAR] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_letfn] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_if_DASHlet] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [anon_sym_cond] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_try] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_throw] = ACTIONS(95),
    [anon_sym_monitor_DASHenter] = ACTIONS(95),
    [anon_sym_monitor_DASHexit] = ACTIONS(95),
    [sym_namespace_definition] = ACTIONS(95),
    [anon_sym_def] = ACTIONS(95),
    [anon_sym_defn] = ACTIONS(95),
    [anon_sym_defn_DASH] = ACTIONS(95),
    [anon_sym_defmacro] = ACTIONS(95),
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
  [156] = {
    [sym_number_long] = ACTIONS(99),
    [sym_number_double] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_fn] = ACTIONS(99),
    [anon_sym_fn_STAR] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_letfn] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_if_DASHlet] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(99),
    [anon_sym_cond] = ACTIONS(99),
    [anon_sym_case] = ACTIONS(99),
    [anon_sym_try] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_throw] = ACTIONS(99),
    [anon_sym_monitor_DASHenter] = ACTIONS(99),
    [anon_sym_monitor_DASHexit] = ACTIONS(99),
    [sym_namespace_definition] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_defn] = ACTIONS(99),
    [anon_sym_defn_DASH] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
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
  [157] = {
    [sym_number_long] = ACTIONS(103),
    [sym_number_double] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(794),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_fn_STAR] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_letfn] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_if_DASHlet] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_cond] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_try] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_monitor_DASHenter] = ACTIONS(103),
    [anon_sym_monitor_DASHexit] = ACTIONS(103),
    [sym_namespace_definition] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_defn] = ACTIONS(103),
    [anon_sym_defn_DASH] = ACTIONS(103),
    [anon_sym_defmacro] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_as_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT] = ACTIONS(103),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT] = ACTIONS(103),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(103),
    [sym__symbol_chars] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(103),
  },
  [158] = {
    [sym__number] = STATE(220),
    [sym__string] = STATE(220),
    [sym__keyword] = STATE(220),
    [sym__unqualified_keyword] = STATE(220),
    [sym_qualified_keyword] = STATE(220),
    [sym__symbol] = STATE(220),
    [sym_special_form] = STATE(220),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(220),
    [sym_qualified_symbol] = STATE(220),
    [sym__one_form] = STATE(220),
    [sym__paren_sequence] = STATE(220),
    [sym__bracket_sequence] = STATE(220),
    [sym__curly_brace_sequence] = STATE(220),
    [aux_sym_comment_macro_repeat1] = STATE(220),
    [sym_number_long] = ACTIONS(796),
    [sym_number_double] = ACTIONS(796),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(796),
  },
  [159] = {
    [sym__number] = STATE(222),
    [sym__string] = STATE(222),
    [sym__keyword] = STATE(222),
    [sym__unqualified_keyword] = STATE(222),
    [sym_qualified_keyword] = STATE(222),
    [sym__symbol] = STATE(222),
    [sym_special_form] = STATE(222),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(222),
    [sym_qualified_symbol] = STATE(222),
    [sym__one_form] = STATE(222),
    [sym__paren_sequence] = STATE(222),
    [sym__bracket_sequence] = STATE(222),
    [sym__curly_brace_sequence] = STATE(222),
    [aux_sym_comment_macro_repeat1] = STATE(222),
    [sym_number_long] = ACTIONS(800),
    [sym_number_double] = ACTIONS(800),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(800),
  },
  [160] = {
    [sym__number] = STATE(224),
    [sym__string] = STATE(224),
    [sym__keyword] = STATE(224),
    [sym__unqualified_keyword] = STATE(224),
    [sym_qualified_keyword] = STATE(224),
    [sym__symbol] = STATE(224),
    [sym_special_form] = STATE(224),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(224),
    [sym_qualified_symbol] = STATE(224),
    [sym__one_form] = STATE(224),
    [sym__paren_sequence] = STATE(224),
    [sym__bracket_sequence] = STATE(224),
    [sym__curly_brace_sequence] = STATE(224),
    [aux_sym_comment_macro_repeat1] = STATE(224),
    [sym_number_long] = ACTIONS(804),
    [sym_number_double] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(804),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(808),
    [sym_nil] = ACTIONS(810),
    [sym_true] = ACTIONS(810),
    [sym_false] = ACTIONS(810),
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
    [anon_sym_BSLASH] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_POUND_DQUOTE] = ACTIONS(810),
    [anon_sym_SQUOTE] = ACTIONS(810),
    [anon_sym_LPARENquote] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_COLON_COLON] = ACTIONS(810),
    [anon_sym_fn] = ACTIONS(810),
    [anon_sym_fn_STAR] = ACTIONS(810),
    [anon_sym_let] = ACTIONS(810),
    [anon_sym_letfn] = ACTIONS(810),
    [anon_sym_if] = ACTIONS(810),
    [anon_sym_if_DASHlet] = ACTIONS(810),
    [anon_sym_while] = ACTIONS(810),
    [anon_sym_cond] = ACTIONS(810),
    [anon_sym_case] = ACTIONS(810),
    [anon_sym_try] = ACTIONS(810),
    [anon_sym_catch] = ACTIONS(810),
    [anon_sym_throw] = ACTIONS(810),
    [anon_sym_monitor_DASHenter] = ACTIONS(810),
    [anon_sym_monitor_DASHexit] = ACTIONS(810),
    [sym_namespace_definition] = ACTIONS(810),
    [anon_sym_def] = ACTIONS(810),
    [anon_sym_defn] = ACTIONS(810),
    [anon_sym_defn_DASH] = ACTIONS(810),
    [anon_sym_defmacro] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(810),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(810),
    [anon_sym_POUND_LBRACE] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(810),
    [anon_sym_POUND_BANG] = ACTIONS(810),
    [anon_sym_POUND_] = ACTIONS(810),
    [anon_sym_] = ACTIONS(808),
    [anon_sym_LPARENcomment] = ACTIONS(810),
  },
  [162] = {
    [anon_sym_LBRACE] = ACTIONS(812),
  },
  [163] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [164] = {
    [sym__number] = STATE(228),
    [sym__string] = STATE(228),
    [sym__keyword] = STATE(228),
    [sym__unqualified_keyword] = STATE(228),
    [sym_qualified_keyword] = STATE(228),
    [sym__symbol] = STATE(228),
    [sym_special_form] = STATE(228),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(228),
    [sym_qualified_symbol] = STATE(228),
    [sym__one_form] = STATE(228),
    [sym__paren_sequence] = STATE(228),
    [sym__bracket_sequence] = STATE(228),
    [sym__curly_brace_sequence] = STATE(228),
    [aux_sym_comment_macro_repeat1] = STATE(228),
    [sym_number_long] = ACTIONS(818),
    [sym_number_double] = ACTIONS(818),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(818),
  },
  [165] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(820),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(824),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [166] = {
    [aux_sym_ignore_form_repeat1] = STATE(230),
    [ts_builtin_sym_end] = ACTIONS(820),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(826),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [167] = {
    [aux_sym_ignore_form_repeat1] = STATE(167),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_] = ACTIONS(830),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(828),
  },
  [168] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_fn] = ACTIONS(265),
    [anon_sym_fn_STAR] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_letfn] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_if_DASHlet] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(265),
    [anon_sym_cond] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_catch] = ACTIONS(265),
    [anon_sym_throw] = ACTIONS(265),
    [anon_sym_monitor_DASHenter] = ACTIONS(265),
    [anon_sym_monitor_DASHexit] = ACTIONS(265),
    [sym_namespace_definition] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(265),
    [anon_sym_defn] = ACTIONS(265),
    [anon_sym_defn_DASH] = ACTIONS(265),
    [anon_sym_defmacro] = ACTIONS(265),
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
  [169] = {
    [aux_sym__string_repeat1] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(833),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [170] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_fn] = ACTIONS(291),
    [anon_sym_fn_STAR] = ACTIONS(291),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_letfn] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [anon_sym_if_DASHlet] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_cond] = ACTIONS(291),
    [anon_sym_case] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_throw] = ACTIONS(291),
    [anon_sym_monitor_DASHenter] = ACTIONS(291),
    [anon_sym_monitor_DASHexit] = ACTIONS(291),
    [sym_namespace_definition] = ACTIONS(291),
    [anon_sym_def] = ACTIONS(291),
    [anon_sym_defn] = ACTIONS(291),
    [anon_sym_defn_DASH] = ACTIONS(291),
    [anon_sym_defmacro] = ACTIONS(291),
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
  [171] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(835),
    [anon_sym_fn] = ACTIONS(295),
    [anon_sym_fn_STAR] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_letfn] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_if_DASHlet] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(295),
    [anon_sym_cond] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_try] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_throw] = ACTIONS(295),
    [anon_sym_monitor_DASHenter] = ACTIONS(295),
    [anon_sym_monitor_DASHexit] = ACTIONS(295),
    [sym_namespace_definition] = ACTIONS(295),
    [anon_sym_def] = ACTIONS(295),
    [anon_sym_defn] = ACTIONS(295),
    [anon_sym_defn_DASH] = ACTIONS(295),
    [anon_sym_defmacro] = ACTIONS(295),
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
  [172] = {
    [sym__symbol_chars] = ACTIONS(837),
  },
  [173] = {
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [anon_sym_fn] = ACTIONS(750),
    [anon_sym_fn_STAR] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_letfn] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_if_DASHlet] = ACTIONS(750),
    [anon_sym_while] = ACTIONS(750),
    [anon_sym_cond] = ACTIONS(750),
    [anon_sym_case] = ACTIONS(750),
    [anon_sym_try] = ACTIONS(750),
    [anon_sym_catch] = ACTIONS(750),
    [anon_sym_throw] = ACTIONS(750),
    [anon_sym_monitor_DASHenter] = ACTIONS(750),
    [anon_sym_monitor_DASHexit] = ACTIONS(750),
    [sym_namespace_definition] = ACTIONS(750),
    [anon_sym_def] = ACTIONS(750),
    [anon_sym_defn] = ACTIONS(750),
    [anon_sym_defn_DASH] = ACTIONS(750),
    [anon_sym_defmacro] = ACTIONS(750),
    [anon_sym_DASH_GT] = ACTIONS(750),
    [anon_sym_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_as_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(750),
  },
  [174] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(839),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [175] = {
    [sym_number_long] = ACTIONS(774),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_fn] = ACTIONS(774),
    [anon_sym_fn_STAR] = ACTIONS(774),
    [anon_sym_let] = ACTIONS(774),
    [anon_sym_letfn] = ACTIONS(774),
    [anon_sym_if] = ACTIONS(774),
    [anon_sym_if_DASHlet] = ACTIONS(774),
    [anon_sym_while] = ACTIONS(774),
    [anon_sym_cond] = ACTIONS(774),
    [anon_sym_case] = ACTIONS(774),
    [anon_sym_try] = ACTIONS(774),
    [anon_sym_catch] = ACTIONS(774),
    [anon_sym_throw] = ACTIONS(774),
    [anon_sym_monitor_DASHenter] = ACTIONS(774),
    [anon_sym_monitor_DASHexit] = ACTIONS(774),
    [sym_namespace_definition] = ACTIONS(774),
    [anon_sym_def] = ACTIONS(774),
    [anon_sym_defn] = ACTIONS(774),
    [anon_sym_defn_DASH] = ACTIONS(774),
    [anon_sym_defmacro] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(774),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(774),
  },
  [176] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_special_form] = STATE(213),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_comment_macro_repeat1] = STATE(213),
    [sym_number_long] = ACTIONS(782),
    [sym_number_double] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(782),
  },
  [177] = {
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_COLON_COLON] = ACTIONS(810),
    [anon_sym_fn] = ACTIONS(810),
    [anon_sym_fn_STAR] = ACTIONS(810),
    [anon_sym_let] = ACTIONS(810),
    [anon_sym_letfn] = ACTIONS(810),
    [anon_sym_if] = ACTIONS(810),
    [anon_sym_if_DASHlet] = ACTIONS(810),
    [anon_sym_while] = ACTIONS(810),
    [anon_sym_cond] = ACTIONS(810),
    [anon_sym_case] = ACTIONS(810),
    [anon_sym_try] = ACTIONS(810),
    [anon_sym_catch] = ACTIONS(810),
    [anon_sym_throw] = ACTIONS(810),
    [anon_sym_monitor_DASHenter] = ACTIONS(810),
    [anon_sym_monitor_DASHexit] = ACTIONS(810),
    [sym_namespace_definition] = ACTIONS(810),
    [anon_sym_def] = ACTIONS(810),
    [anon_sym_defn] = ACTIONS(810),
    [anon_sym_defn_DASH] = ACTIONS(810),
    [anon_sym_defmacro] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(810),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(810),
  },
  [178] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [179] = {
    [sym__number] = STATE(237),
    [sym__string] = STATE(237),
    [sym__keyword] = STATE(237),
    [sym__unqualified_keyword] = STATE(237),
    [sym_qualified_keyword] = STATE(237),
    [sym__symbol] = STATE(237),
    [sym_special_form] = STATE(237),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(237),
    [sym_qualified_symbol] = STATE(237),
    [sym__one_form] = STATE(237),
    [sym__paren_sequence] = STATE(237),
    [sym__bracket_sequence] = STATE(237),
    [sym__curly_brace_sequence] = STATE(237),
    [aux_sym_comment_macro_repeat1] = STATE(237),
    [sym_number_long] = ACTIONS(845),
    [sym_number_double] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(845),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(847),
    [sym_nil] = ACTIONS(849),
    [sym_true] = ACTIONS(849),
    [sym_false] = ACTIONS(849),
    [sym_number_long] = ACTIONS(849),
    [sym_number_double] = ACTIONS(847),
    [anon_sym_BSLASH] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [anon_sym_POUND_DQUOTE] = ACTIONS(847),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_LPARENquote] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym_COLON_COLON] = ACTIONS(847),
    [anon_sym_fn] = ACTIONS(849),
    [anon_sym_fn_STAR] = ACTIONS(849),
    [anon_sym_let] = ACTIONS(849),
    [anon_sym_letfn] = ACTIONS(849),
    [anon_sym_if] = ACTIONS(849),
    [anon_sym_if_DASHlet] = ACTIONS(849),
    [anon_sym_while] = ACTIONS(849),
    [anon_sym_cond] = ACTIONS(849),
    [anon_sym_case] = ACTIONS(849),
    [anon_sym_try] = ACTIONS(849),
    [anon_sym_catch] = ACTIONS(849),
    [anon_sym_throw] = ACTIONS(849),
    [anon_sym_monitor_DASHenter] = ACTIONS(849),
    [anon_sym_monitor_DASHexit] = ACTIONS(849),
    [sym_namespace_definition] = ACTIONS(849),
    [anon_sym_def] = ACTIONS(849),
    [anon_sym_defn] = ACTIONS(849),
    [anon_sym_defn_DASH] = ACTIONS(849),
    [anon_sym_defmacro] = ACTIONS(849),
    [anon_sym_DASH_GT] = ACTIONS(849),
    [anon_sym_DASH_GT_GT] = ACTIONS(847),
    [anon_sym_as_DASH_GT] = ACTIONS(847),
    [anon_sym_some_DASH_GT] = ACTIONS(849),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(847),
    [anon_sym_cond_DASH_GT] = ACTIONS(849),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(847),
    [sym__symbol_chars] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_RBRACK] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(847),
    [anon_sym_POUND] = ACTIONS(849),
    [anon_sym_POUND_LBRACE] = ACTIONS(847),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_POUND_BANG] = ACTIONS(847),
    [anon_sym_POUND_] = ACTIONS(847),
    [anon_sym_LPARENcomment] = ACTIONS(847),
  },
  [181] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(851),
    [sym_number_double] = ACTIONS(851),
    [anon_sym_DQUOTE] = ACTIONS(854),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(859),
    [anon_sym_COLON_COLON] = ACTIONS(862),
    [anon_sym_fn] = ACTIONS(865),
    [anon_sym_fn_STAR] = ACTIONS(865),
    [anon_sym_let] = ACTIONS(865),
    [anon_sym_letfn] = ACTIONS(865),
    [anon_sym_if] = ACTIONS(865),
    [anon_sym_if_DASHlet] = ACTIONS(865),
    [anon_sym_while] = ACTIONS(865),
    [anon_sym_cond] = ACTIONS(865),
    [anon_sym_case] = ACTIONS(865),
    [anon_sym_try] = ACTIONS(865),
    [anon_sym_catch] = ACTIONS(865),
    [anon_sym_throw] = ACTIONS(865),
    [anon_sym_monitor_DASHenter] = ACTIONS(865),
    [anon_sym_monitor_DASHexit] = ACTIONS(865),
    [sym_namespace_definition] = ACTIONS(865),
    [anon_sym_def] = ACTIONS(868),
    [anon_sym_defn] = ACTIONS(868),
    [anon_sym_defn_DASH] = ACTIONS(868),
    [anon_sym_defmacro] = ACTIONS(868),
    [anon_sym_DASH_GT] = ACTIONS(871),
    [anon_sym_DASH_GT_GT] = ACTIONS(871),
    [anon_sym_as_DASH_GT] = ACTIONS(871),
    [anon_sym_some_DASH_GT] = ACTIONS(871),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(871),
    [anon_sym_cond_DASH_GT] = ACTIONS(871),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(871),
    [sym__symbol_chars] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_LBRACE] = ACTIONS(883),
    [anon_sym_POUND] = ACTIONS(886),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(851),
  },
  [182] = {
    [sym__hex_char] = ACTIONS(889),
  },
  [183] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_] = ACTIONS(891),
  },
  [184] = {
    [aux_sym_ignore_form_repeat1] = STATE(240),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_] = ACTIONS(893),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(895),
    [sym_nil] = ACTIONS(897),
    [sym_true] = ACTIONS(897),
    [sym_false] = ACTIONS(897),
    [sym_number_long] = ACTIONS(897),
    [sym_number_double] = ACTIONS(895),
    [anon_sym_BSLASH] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [anon_sym_POUND_DQUOTE] = ACTIONS(895),
    [anon_sym_SQUOTE] = ACTIONS(895),
    [anon_sym_LPARENquote] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(895),
    [anon_sym_fn] = ACTIONS(897),
    [anon_sym_fn_STAR] = ACTIONS(897),
    [anon_sym_let] = ACTIONS(897),
    [anon_sym_letfn] = ACTIONS(897),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_if_DASHlet] = ACTIONS(897),
    [anon_sym_while] = ACTIONS(897),
    [anon_sym_cond] = ACTIONS(897),
    [anon_sym_case] = ACTIONS(897),
    [anon_sym_try] = ACTIONS(897),
    [anon_sym_catch] = ACTIONS(897),
    [anon_sym_throw] = ACTIONS(897),
    [anon_sym_monitor_DASHenter] = ACTIONS(897),
    [anon_sym_monitor_DASHexit] = ACTIONS(897),
    [sym_namespace_definition] = ACTIONS(897),
    [anon_sym_def] = ACTIONS(897),
    [anon_sym_defn] = ACTIONS(897),
    [anon_sym_defn_DASH] = ACTIONS(897),
    [anon_sym_defmacro] = ACTIONS(897),
    [anon_sym_DASH_GT] = ACTIONS(897),
    [anon_sym_DASH_GT_GT] = ACTIONS(895),
    [anon_sym_as_DASH_GT] = ACTIONS(895),
    [anon_sym_some_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(895),
    [anon_sym_cond_DASH_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(895),
    [sym__symbol_chars] = ACTIONS(897),
    [anon_sym_LPAREN] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [anon_sym_LBRACE] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(895),
    [anon_sym_POUND] = ACTIONS(897),
    [anon_sym_POUND_LBRACE] = ACTIONS(895),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_POUND_BANG] = ACTIONS(895),
    [anon_sym_POUND_] = ACTIONS(895),
    [anon_sym_LPARENcomment] = ACTIONS(895),
  },
  [186] = {
    [aux_sym_ignore_form_repeat1] = STATE(241),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(899),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [187] = {
    [aux_sym_ignore_form_repeat1] = STATE(242),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(901),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [188] = {
    [aux_sym_ignore_form_repeat1] = STATE(243),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_RBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(903),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [189] = {
    [aux_sym_ignore_form_repeat1] = STATE(244),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_RBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(905),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [190] = {
    [aux_sym_ignore_form_repeat1] = STATE(245),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(907),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [191] = {
    [aux_sym_ignore_form_repeat1] = STATE(246),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(909),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(911),
    [sym_nil] = ACTIONS(913),
    [sym_true] = ACTIONS(913),
    [sym_false] = ACTIONS(913),
    [sym_number_long] = ACTIONS(913),
    [sym_number_double] = ACTIONS(911),
    [anon_sym_BSLASH] = ACTIONS(911),
    [anon_sym_DQUOTE] = ACTIONS(911),
    [anon_sym_POUND_DQUOTE] = ACTIONS(911),
    [anon_sym_SQUOTE] = ACTIONS(911),
    [anon_sym_LPARENquote] = ACTIONS(911),
    [anon_sym_RPAREN] = ACTIONS(911),
    [anon_sym_COLON] = ACTIONS(913),
    [anon_sym_COLON_COLON] = ACTIONS(911),
    [anon_sym_fn] = ACTIONS(913),
    [anon_sym_fn_STAR] = ACTIONS(913),
    [anon_sym_let] = ACTIONS(913),
    [anon_sym_letfn] = ACTIONS(913),
    [anon_sym_if] = ACTIONS(913),
    [anon_sym_if_DASHlet] = ACTIONS(913),
    [anon_sym_while] = ACTIONS(913),
    [anon_sym_cond] = ACTIONS(913),
    [anon_sym_case] = ACTIONS(913),
    [anon_sym_try] = ACTIONS(913),
    [anon_sym_catch] = ACTIONS(913),
    [anon_sym_throw] = ACTIONS(913),
    [anon_sym_monitor_DASHenter] = ACTIONS(913),
    [anon_sym_monitor_DASHexit] = ACTIONS(913),
    [sym_namespace_definition] = ACTIONS(913),
    [anon_sym_def] = ACTIONS(913),
    [anon_sym_defn] = ACTIONS(913),
    [anon_sym_defn_DASH] = ACTIONS(913),
    [anon_sym_defmacro] = ACTIONS(913),
    [anon_sym_DASH_GT] = ACTIONS(913),
    [anon_sym_DASH_GT_GT] = ACTIONS(911),
    [anon_sym_as_DASH_GT] = ACTIONS(911),
    [anon_sym_some_DASH_GT] = ACTIONS(913),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(911),
    [anon_sym_cond_DASH_GT] = ACTIONS(913),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(911),
    [sym__symbol_chars] = ACTIONS(913),
    [anon_sym_LPAREN] = ACTIONS(913),
    [anon_sym_LBRACK] = ACTIONS(911),
    [anon_sym_RBRACK] = ACTIONS(911),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_RBRACE] = ACTIONS(911),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(911),
    [anon_sym_POUND] = ACTIONS(913),
    [anon_sym_POUND_LBRACE] = ACTIONS(911),
    [anon_sym_SEMI] = ACTIONS(911),
    [anon_sym_POUND_BANG] = ACTIONS(911),
    [anon_sym_POUND_] = ACTIONS(911),
    [anon_sym_LPARENcomment] = ACTIONS(911),
  },
  [193] = {
    [sym__anything] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__collection_literal] = STATE(63),
    [sym_boolean] = STATE(63),
    [sym_number] = STATE(63),
    [sym__number] = STATE(25),
    [sym_character] = STATE(63),
    [sym__character] = STATE(26),
    [sym_string] = STATE(63),
    [sym__string] = STATE(27),
    [sym_regex] = STATE(63),
    [sym__regex] = STATE(28),
    [sym_quote] = STATE(63),
    [sym__quote] = STATE(29),
    [sym_keyword] = STATE(63),
    [sym__keyword] = STATE(30),
    [sym__unqualified_keyword] = STATE(30),
    [sym_qualified_keyword] = STATE(30),
    [sym_symbol] = STATE(63),
    [sym__symbol] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_def_form] = STATE(10),
    [sym_threading_macro] = STATE(31),
    [sym_qualified_symbol] = STATE(31),
    [sym_list] = STATE(63),
    [sym__list] = STATE(32),
    [sym_vector] = STATE(63),
    [sym__vector] = STATE(33),
    [sym_hash_map] = STATE(63),
    [sym__hash_map] = STATE(34),
    [sym_namespace_map] = STATE(34),
    [sym__hash_map_kv_pair] = STATE(124),
    [sym__hash_map_key] = STATE(63),
    [sym_set] = STATE(63),
    [sym__set] = STATE(35),
    [sym_comment] = STATE(63),
    [sym_semicolon] = STATE(36),
    [sym_shebang_line] = STATE(36),
    [sym_ignore_form] = STATE(36),
    [sym_comment_macro] = STATE(36),
    [aux_sym__hash_map_repeat1] = STATE(124),
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
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_fn_STAR] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_letfn] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_if_DASHlet] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_cond] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(29),
    [anon_sym_catch] = ACTIONS(29),
    [anon_sym_throw] = ACTIONS(29),
    [anon_sym_monitor_DASHenter] = ACTIONS(29),
    [anon_sym_monitor_DASHexit] = ACTIONS(29),
    [sym_namespace_definition] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_defn] = ACTIONS(31),
    [anon_sym_defn_DASH] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_as_DASH_GT] = ACTIONS(35),
    [anon_sym_some_DASH_GT] = ACTIONS(33),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_cond_DASH_GT] = ACTIONS(33),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(35),
    [sym__symbol_chars] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_] = ACTIONS(129),
    [anon_sym_LPARENcomment] = ACTIONS(57),
  },
  [194] = {
    [aux_sym_ignore_form_repeat1] = STATE(248),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_RBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(917),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [195] = {
    [aux_sym_ignore_form_repeat1] = STATE(249),
    [sym_nil] = ACTIONS(822),
    [sym_true] = ACTIONS(822),
    [sym_false] = ACTIONS(822),
    [sym_number_long] = ACTIONS(822),
    [sym_number_double] = ACTIONS(822),
    [anon_sym_BSLASH] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_POUND_DQUOTE] = ACTIONS(822),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_LPARENquote] = ACTIONS(822),
    [anon_sym_COLON] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_fn] = ACTIONS(822),
    [anon_sym_fn_STAR] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_letfn] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_if_DASHlet] = ACTIONS(822),
    [anon_sym_while] = ACTIONS(822),
    [anon_sym_cond] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_try] = ACTIONS(822),
    [anon_sym_catch] = ACTIONS(822),
    [anon_sym_throw] = ACTIONS(822),
    [anon_sym_monitor_DASHenter] = ACTIONS(822),
    [anon_sym_monitor_DASHexit] = ACTIONS(822),
    [sym_namespace_definition] = ACTIONS(822),
    [anon_sym_def] = ACTIONS(822),
    [anon_sym_defn] = ACTIONS(822),
    [anon_sym_defn_DASH] = ACTIONS(822),
    [anon_sym_defmacro] = ACTIONS(822),
    [anon_sym_DASH_GT] = ACTIONS(822),
    [anon_sym_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_as_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT] = ACTIONS(822),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT] = ACTIONS(822),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(822),
    [sym__symbol_chars] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_RBRACE] = ACTIONS(822),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(822),
    [anon_sym_POUND] = ACTIONS(822),
    [anon_sym_POUND_LBRACE] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_POUND_BANG] = ACTIONS(822),
    [anon_sym_POUND_] = ACTIONS(822),
    [anon_sym_] = ACTIONS(919),
    [anon_sym_LPARENcomment] = ACTIONS(822),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [sym_nil] = ACTIONS(563),
    [sym_true] = ACTIONS(563),
    [sym_false] = ACTIONS(563),
    [sym_number_long] = ACTIONS(563),
    [sym_number_double] = ACTIONS(563),
    [anon_sym_BSLASH] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_POUND_DQUOTE] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_LPARENquote] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(563),
    [anon_sym_fn] = ACTIONS(563),
    [anon_sym_fn_STAR] = ACTIONS(563),
    [anon_sym_let] = ACTIONS(563),
    [anon_sym_letfn] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_if_DASHlet] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_cond] = ACTIONS(563),
    [anon_sym_case] = ACTIONS(563),
    [anon_sym_try] = ACTIONS(563),
    [anon_sym_catch] = ACTIONS(563),
    [anon_sym_throw] = ACTIONS(563),
    [anon_sym_monitor_DASHenter] = ACTIONS(563),
    [anon_sym_monitor_DASHexit] = ACTIONS(563),
    [sym_namespace_definition] = ACTIONS(563),
    [anon_sym_def] = ACTIONS(563),
    [anon_sym_defn] = ACTIONS(563),
    [anon_sym_defn_DASH] = ACTIONS(563),
    [anon_sym_defmacro] = ACTIONS(563),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_as_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(563),
    [sym__symbol_chars] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [anon_sym_POUND_LBRACE] = ACTIONS(563),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_POUND_BANG] = ACTIONS(563),
    [anon_sym_POUND_] = ACTIONS(563),
    [anon_sym_] = ACTIONS(561),
    [anon_sym_LPARENcomment] = ACTIONS(563),
  },
  [197] = {
    [sym__keyword_chars] = ACTIONS(921),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym_nil] = ACTIONS(591),
    [sym_true] = ACTIONS(591),
    [sym_false] = ACTIONS(591),
    [sym_number_long] = ACTIONS(591),
    [sym_number_double] = ACTIONS(591),
    [anon_sym_BSLASH] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_POUND_DQUOTE] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_LPARENquote] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_fn] = ACTIONS(591),
    [anon_sym_fn_STAR] = ACTIONS(591),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_letfn] = ACTIONS(591),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_if_DASHlet] = ACTIONS(591),
    [anon_sym_while] = ACTIONS(591),
    [anon_sym_cond] = ACTIONS(591),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_try] = ACTIONS(591),
    [anon_sym_catch] = ACTIONS(591),
    [anon_sym_throw] = ACTIONS(591),
    [anon_sym_monitor_DASHenter] = ACTIONS(591),
    [anon_sym_monitor_DASHexit] = ACTIONS(591),
    [sym_namespace_definition] = ACTIONS(591),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defn] = ACTIONS(591),
    [anon_sym_defn_DASH] = ACTIONS(591),
    [anon_sym_defmacro] = ACTIONS(591),
    [anon_sym_DASH_GT] = ACTIONS(591),
    [anon_sym_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_as_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(591),
    [sym__symbol_chars] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_POUND_LBRACE] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_POUND_BANG] = ACTIONS(591),
    [anon_sym_POUND_] = ACTIONS(591),
    [anon_sym_] = ACTIONS(589),
    [anon_sym_LPARENcomment] = ACTIONS(591),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [sym_nil] = ACTIONS(925),
    [sym_true] = ACTIONS(925),
    [sym_false] = ACTIONS(925),
    [sym_number_long] = ACTIONS(925),
    [sym_number_double] = ACTIONS(925),
    [anon_sym_BSLASH] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [anon_sym_POUND_DQUOTE] = ACTIONS(925),
    [anon_sym_SQUOTE] = ACTIONS(925),
    [anon_sym_LPARENquote] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_COLON_COLON] = ACTIONS(925),
    [anon_sym_fn] = ACTIONS(925),
    [anon_sym_fn_STAR] = ACTIONS(925),
    [anon_sym_let] = ACTIONS(925),
    [anon_sym_letfn] = ACTIONS(925),
    [anon_sym_if] = ACTIONS(925),
    [anon_sym_if_DASHlet] = ACTIONS(925),
    [anon_sym_while] = ACTIONS(925),
    [anon_sym_cond] = ACTIONS(925),
    [anon_sym_case] = ACTIONS(925),
    [anon_sym_try] = ACTIONS(925),
    [anon_sym_catch] = ACTIONS(925),
    [anon_sym_throw] = ACTIONS(925),
    [anon_sym_monitor_DASHenter] = ACTIONS(925),
    [anon_sym_monitor_DASHexit] = ACTIONS(925),
    [sym_namespace_definition] = ACTIONS(925),
    [anon_sym_def] = ACTIONS(925),
    [anon_sym_defn] = ACTIONS(925),
    [anon_sym_defn_DASH] = ACTIONS(925),
    [anon_sym_defmacro] = ACTIONS(925),
    [anon_sym_DASH_GT] = ACTIONS(925),
    [anon_sym_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_as_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(925),
    [sym__symbol_chars] = ACTIONS(925),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_RBRACK] = ACTIONS(925),
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_RBRACE] = ACTIONS(925),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(925),
    [anon_sym_POUND] = ACTIONS(925),
    [anon_sym_POUND_LBRACE] = ACTIONS(925),
    [anon_sym_SEMI] = ACTIONS(925),
    [anon_sym_POUND_BANG] = ACTIONS(925),
    [anon_sym_POUND_] = ACTIONS(925),
    [anon_sym_] = ACTIONS(923),
    [anon_sym_LPARENcomment] = ACTIONS(925),
  },
  [200] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_fn] = ACTIONS(265),
    [anon_sym_fn_STAR] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_letfn] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_if_DASHlet] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(265),
    [anon_sym_cond] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_catch] = ACTIONS(265),
    [anon_sym_throw] = ACTIONS(265),
    [anon_sym_monitor_DASHenter] = ACTIONS(265),
    [anon_sym_monitor_DASHexit] = ACTIONS(265),
    [sym_namespace_definition] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(265),
    [anon_sym_defn] = ACTIONS(265),
    [anon_sym_defn_DASH] = ACTIONS(265),
    [anon_sym_defmacro] = ACTIONS(265),
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
  [201] = {
    [aux_sym__string_repeat1] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [202] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_fn] = ACTIONS(291),
    [anon_sym_fn_STAR] = ACTIONS(291),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_letfn] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [anon_sym_if_DASHlet] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_cond] = ACTIONS(291),
    [anon_sym_case] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_throw] = ACTIONS(291),
    [anon_sym_monitor_DASHenter] = ACTIONS(291),
    [anon_sym_monitor_DASHexit] = ACTIONS(291),
    [sym_namespace_definition] = ACTIONS(291),
    [anon_sym_def] = ACTIONS(291),
    [anon_sym_defn] = ACTIONS(291),
    [anon_sym_defn_DASH] = ACTIONS(291),
    [anon_sym_defmacro] = ACTIONS(291),
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
  [203] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(929),
    [anon_sym_fn] = ACTIONS(295),
    [anon_sym_fn_STAR] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_letfn] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_if_DASHlet] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(295),
    [anon_sym_cond] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_try] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_throw] = ACTIONS(295),
    [anon_sym_monitor_DASHenter] = ACTIONS(295),
    [anon_sym_monitor_DASHexit] = ACTIONS(295),
    [sym_namespace_definition] = ACTIONS(295),
    [anon_sym_def] = ACTIONS(295),
    [anon_sym_defn] = ACTIONS(295),
    [anon_sym_defn_DASH] = ACTIONS(295),
    [anon_sym_defmacro] = ACTIONS(295),
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
  [204] = {
    [sym__symbol_chars] = ACTIONS(931),
  },
  [205] = {
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [anon_sym_fn] = ACTIONS(750),
    [anon_sym_fn_STAR] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_letfn] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_if_DASHlet] = ACTIONS(750),
    [anon_sym_while] = ACTIONS(750),
    [anon_sym_cond] = ACTIONS(750),
    [anon_sym_case] = ACTIONS(750),
    [anon_sym_try] = ACTIONS(750),
    [anon_sym_catch] = ACTIONS(750),
    [anon_sym_throw] = ACTIONS(750),
    [anon_sym_monitor_DASHenter] = ACTIONS(750),
    [anon_sym_monitor_DASHexit] = ACTIONS(750),
    [sym_namespace_definition] = ACTIONS(750),
    [anon_sym_def] = ACTIONS(750),
    [anon_sym_defn] = ACTIONS(750),
    [anon_sym_defn_DASH] = ACTIONS(750),
    [anon_sym_defmacro] = ACTIONS(750),
    [anon_sym_DASH_GT] = ACTIONS(750),
    [anon_sym_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_as_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(750),
  },
  [206] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [207] = {
    [sym_number_long] = ACTIONS(774),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_fn] = ACTIONS(774),
    [anon_sym_fn_STAR] = ACTIONS(774),
    [anon_sym_let] = ACTIONS(774),
    [anon_sym_letfn] = ACTIONS(774),
    [anon_sym_if] = ACTIONS(774),
    [anon_sym_if_DASHlet] = ACTIONS(774),
    [anon_sym_while] = ACTIONS(774),
    [anon_sym_cond] = ACTIONS(774),
    [anon_sym_case] = ACTIONS(774),
    [anon_sym_try] = ACTIONS(774),
    [anon_sym_catch] = ACTIONS(774),
    [anon_sym_throw] = ACTIONS(774),
    [anon_sym_monitor_DASHenter] = ACTIONS(774),
    [anon_sym_monitor_DASHexit] = ACTIONS(774),
    [sym_namespace_definition] = ACTIONS(774),
    [anon_sym_def] = ACTIONS(774),
    [anon_sym_defn] = ACTIONS(774),
    [anon_sym_defn_DASH] = ACTIONS(774),
    [anon_sym_defmacro] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(774),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(774),
  },
  [208] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_special_form] = STATE(213),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_comment_macro_repeat1] = STATE(213),
    [sym_number_long] = ACTIONS(782),
    [sym_number_double] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(935),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(782),
  },
  [209] = {
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_COLON_COLON] = ACTIONS(810),
    [anon_sym_fn] = ACTIONS(810),
    [anon_sym_fn_STAR] = ACTIONS(810),
    [anon_sym_let] = ACTIONS(810),
    [anon_sym_letfn] = ACTIONS(810),
    [anon_sym_if] = ACTIONS(810),
    [anon_sym_if_DASHlet] = ACTIONS(810),
    [anon_sym_while] = ACTIONS(810),
    [anon_sym_cond] = ACTIONS(810),
    [anon_sym_case] = ACTIONS(810),
    [anon_sym_try] = ACTIONS(810),
    [anon_sym_catch] = ACTIONS(810),
    [anon_sym_throw] = ACTIONS(810),
    [anon_sym_monitor_DASHenter] = ACTIONS(810),
    [anon_sym_monitor_DASHexit] = ACTIONS(810),
    [sym_namespace_definition] = ACTIONS(810),
    [anon_sym_def] = ACTIONS(810),
    [anon_sym_defn] = ACTIONS(810),
    [anon_sym_defn_DASH] = ACTIONS(810),
    [anon_sym_defmacro] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(810),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(810),
  },
  [210] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [211] = {
    [sym__number] = STATE(257),
    [sym__string] = STATE(257),
    [sym__keyword] = STATE(257),
    [sym__unqualified_keyword] = STATE(257),
    [sym_qualified_keyword] = STATE(257),
    [sym__symbol] = STATE(257),
    [sym_special_form] = STATE(257),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(257),
    [sym_qualified_symbol] = STATE(257),
    [sym__one_form] = STATE(257),
    [sym__paren_sequence] = STATE(257),
    [sym__bracket_sequence] = STATE(257),
    [sym__curly_brace_sequence] = STATE(257),
    [aux_sym_comment_macro_repeat1] = STATE(257),
    [sym_number_long] = ACTIONS(939),
    [sym_number_double] = ACTIONS(939),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(939),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(941),
    [sym_nil] = ACTIONS(943),
    [sym_true] = ACTIONS(943),
    [sym_false] = ACTIONS(943),
    [sym_number_long] = ACTIONS(943),
    [sym_number_double] = ACTIONS(943),
    [anon_sym_BSLASH] = ACTIONS(943),
    [anon_sym_DQUOTE] = ACTIONS(943),
    [anon_sym_POUND_DQUOTE] = ACTIONS(943),
    [anon_sym_SQUOTE] = ACTIONS(943),
    [anon_sym_LPARENquote] = ACTIONS(943),
    [anon_sym_RPAREN] = ACTIONS(943),
    [anon_sym_COLON] = ACTIONS(943),
    [anon_sym_COLON_COLON] = ACTIONS(943),
    [anon_sym_fn] = ACTIONS(943),
    [anon_sym_fn_STAR] = ACTIONS(943),
    [anon_sym_let] = ACTIONS(943),
    [anon_sym_letfn] = ACTIONS(943),
    [anon_sym_if] = ACTIONS(943),
    [anon_sym_if_DASHlet] = ACTIONS(943),
    [anon_sym_while] = ACTIONS(943),
    [anon_sym_cond] = ACTIONS(943),
    [anon_sym_case] = ACTIONS(943),
    [anon_sym_try] = ACTIONS(943),
    [anon_sym_catch] = ACTIONS(943),
    [anon_sym_throw] = ACTIONS(943),
    [anon_sym_monitor_DASHenter] = ACTIONS(943),
    [anon_sym_monitor_DASHexit] = ACTIONS(943),
    [sym_namespace_definition] = ACTIONS(943),
    [anon_sym_def] = ACTIONS(943),
    [anon_sym_defn] = ACTIONS(943),
    [anon_sym_defn_DASH] = ACTIONS(943),
    [anon_sym_defmacro] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [anon_sym_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_as_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(943),
    [sym__symbol_chars] = ACTIONS(943),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_RBRACK] = ACTIONS(943),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(943),
    [anon_sym_POUND] = ACTIONS(943),
    [anon_sym_POUND_LBRACE] = ACTIONS(943),
    [anon_sym_SEMI] = ACTIONS(943),
    [anon_sym_POUND_BANG] = ACTIONS(943),
    [anon_sym_POUND_] = ACTIONS(943),
    [anon_sym_] = ACTIONS(941),
    [anon_sym_LPARENcomment] = ACTIONS(943),
  },
  [213] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_special_form] = STATE(213),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_comment_macro_repeat1] = STATE(213),
    [sym_number_long] = ACTIONS(945),
    [sym_number_double] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(951),
    [anon_sym_COLON_COLON] = ACTIONS(954),
    [anon_sym_fn] = ACTIONS(957),
    [anon_sym_fn_STAR] = ACTIONS(957),
    [anon_sym_let] = ACTIONS(957),
    [anon_sym_letfn] = ACTIONS(957),
    [anon_sym_if] = ACTIONS(957),
    [anon_sym_if_DASHlet] = ACTIONS(957),
    [anon_sym_while] = ACTIONS(957),
    [anon_sym_cond] = ACTIONS(957),
    [anon_sym_case] = ACTIONS(957),
    [anon_sym_try] = ACTIONS(957),
    [anon_sym_catch] = ACTIONS(957),
    [anon_sym_throw] = ACTIONS(957),
    [anon_sym_monitor_DASHenter] = ACTIONS(957),
    [anon_sym_monitor_DASHexit] = ACTIONS(957),
    [sym_namespace_definition] = ACTIONS(957),
    [anon_sym_def] = ACTIONS(960),
    [anon_sym_defn] = ACTIONS(960),
    [anon_sym_defn_DASH] = ACTIONS(960),
    [anon_sym_defmacro] = ACTIONS(960),
    [anon_sym_DASH_GT] = ACTIONS(963),
    [anon_sym_DASH_GT_GT] = ACTIONS(963),
    [anon_sym_as_DASH_GT] = ACTIONS(963),
    [anon_sym_some_DASH_GT] = ACTIONS(963),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(963),
    [anon_sym_cond_DASH_GT] = ACTIONS(963),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(963),
    [sym__symbol_chars] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(972),
    [anon_sym_RBRACK] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(975),
    [anon_sym_POUND] = ACTIONS(978),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(945),
  },
  [214] = {
    [sym_number_long] = ACTIONS(265),
    [sym_number_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_COLON_COLON] = ACTIONS(265),
    [anon_sym_fn] = ACTIONS(265),
    [anon_sym_fn_STAR] = ACTIONS(265),
    [anon_sym_let] = ACTIONS(265),
    [anon_sym_letfn] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_if_DASHlet] = ACTIONS(265),
    [anon_sym_while] = ACTIONS(265),
    [anon_sym_cond] = ACTIONS(265),
    [anon_sym_case] = ACTIONS(265),
    [anon_sym_try] = ACTIONS(265),
    [anon_sym_catch] = ACTIONS(265),
    [anon_sym_throw] = ACTIONS(265),
    [anon_sym_monitor_DASHenter] = ACTIONS(265),
    [anon_sym_monitor_DASHexit] = ACTIONS(265),
    [sym_namespace_definition] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(265),
    [anon_sym_defn] = ACTIONS(265),
    [anon_sym_defn_DASH] = ACTIONS(265),
    [anon_sym_defmacro] = ACTIONS(265),
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
  [215] = {
    [aux_sym__string_repeat1] = STATE(104),
    [anon_sym_DQUOTE] = ACTIONS(981),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(269),
  },
  [216] = {
    [sym_number_long] = ACTIONS(291),
    [sym_number_double] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(291),
    [anon_sym_fn] = ACTIONS(291),
    [anon_sym_fn_STAR] = ACTIONS(291),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_letfn] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [anon_sym_if_DASHlet] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_cond] = ACTIONS(291),
    [anon_sym_case] = ACTIONS(291),
    [anon_sym_try] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_throw] = ACTIONS(291),
    [anon_sym_monitor_DASHenter] = ACTIONS(291),
    [anon_sym_monitor_DASHexit] = ACTIONS(291),
    [sym_namespace_definition] = ACTIONS(291),
    [anon_sym_def] = ACTIONS(291),
    [anon_sym_defn] = ACTIONS(291),
    [anon_sym_defn_DASH] = ACTIONS(291),
    [anon_sym_defmacro] = ACTIONS(291),
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
  [217] = {
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_fn] = ACTIONS(295),
    [anon_sym_fn_STAR] = ACTIONS(295),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_letfn] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(295),
    [anon_sym_if_DASHlet] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(295),
    [anon_sym_cond] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(295),
    [anon_sym_try] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_throw] = ACTIONS(295),
    [anon_sym_monitor_DASHenter] = ACTIONS(295),
    [anon_sym_monitor_DASHexit] = ACTIONS(295),
    [sym_namespace_definition] = ACTIONS(295),
    [anon_sym_def] = ACTIONS(295),
    [anon_sym_defn] = ACTIONS(295),
    [anon_sym_defn_DASH] = ACTIONS(295),
    [anon_sym_defmacro] = ACTIONS(295),
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
  [218] = {
    [sym__symbol_chars] = ACTIONS(985),
  },
  [219] = {
    [sym_number_long] = ACTIONS(750),
    [sym_number_double] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_COLON_COLON] = ACTIONS(750),
    [anon_sym_fn] = ACTIONS(750),
    [anon_sym_fn_STAR] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_letfn] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_if_DASHlet] = ACTIONS(750),
    [anon_sym_while] = ACTIONS(750),
    [anon_sym_cond] = ACTIONS(750),
    [anon_sym_case] = ACTIONS(750),
    [anon_sym_try] = ACTIONS(750),
    [anon_sym_catch] = ACTIONS(750),
    [anon_sym_throw] = ACTIONS(750),
    [anon_sym_monitor_DASHenter] = ACTIONS(750),
    [anon_sym_monitor_DASHexit] = ACTIONS(750),
    [sym_namespace_definition] = ACTIONS(750),
    [anon_sym_def] = ACTIONS(750),
    [anon_sym_defn] = ACTIONS(750),
    [anon_sym_defn_DASH] = ACTIONS(750),
    [anon_sym_defmacro] = ACTIONS(750),
    [anon_sym_DASH_GT] = ACTIONS(750),
    [anon_sym_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_as_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT] = ACTIONS(750),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT] = ACTIONS(750),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(750),
    [sym__symbol_chars] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(750),
  },
  [220] = {
    [sym__number] = STATE(181),
    [sym__string] = STATE(181),
    [sym__keyword] = STATE(181),
    [sym__unqualified_keyword] = STATE(181),
    [sym_qualified_keyword] = STATE(181),
    [sym__symbol] = STATE(181),
    [sym_special_form] = STATE(181),
    [sym_def_form] = STATE(91),
    [sym_threading_macro] = STATE(181),
    [sym_qualified_symbol] = STATE(181),
    [sym__one_form] = STATE(181),
    [sym__paren_sequence] = STATE(181),
    [sym__bracket_sequence] = STATE(181),
    [sym__curly_brace_sequence] = STATE(181),
    [aux_sym_comment_macro_repeat1] = STATE(181),
    [sym_number_long] = ACTIONS(471),
    [sym_number_double] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(987),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_fn_STAR] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_letfn] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_if_DASHlet] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_cond] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_try] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_monitor_DASHenter] = ACTIONS(183),
    [anon_sym_monitor_DASHexit] = ACTIONS(183),
    [sym_namespace_definition] = ACTIONS(183),
    [anon_sym_def] = ACTIONS(185),
    [anon_sym_defn] = ACTIONS(185),
    [anon_sym_defn_DASH] = ACTIONS(185),
    [anon_sym_defmacro] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(187),
    [anon_sym_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_as_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT] = ACTIONS(187),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT] = ACTIONS(187),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(187),
    [sym__symbol_chars] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
  },
  [221] = {
    [sym_number_long] = ACTIONS(774),
    [sym_number_double] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_fn] = ACTIONS(774),
    [anon_sym_fn_STAR] = ACTIONS(774),
    [anon_sym_let] = ACTIONS(774),
    [anon_sym_letfn] = ACTIONS(774),
    [anon_sym_if] = ACTIONS(774),
    [anon_sym_if_DASHlet] = ACTIONS(774),
    [anon_sym_while] = ACTIONS(774),
    [anon_sym_cond] = ACTIONS(774),
    [anon_sym_case] = ACTIONS(774),
    [anon_sym_try] = ACTIONS(774),
    [anon_sym_catch] = ACTIONS(774),
    [anon_sym_throw] = ACTIONS(774),
    [anon_sym_monitor_DASHenter] = ACTIONS(774),
    [anon_sym_monitor_DASHexit] = ACTIONS(774),
    [sym_namespace_definition] = ACTIONS(774),
    [anon_sym_def] = ACTIONS(774),
    [anon_sym_defn] = ACTIONS(774),
    [anon_sym_defn_DASH] = ACTIONS(774),
    [anon_sym_defmacro] = ACTIONS(774),
    [anon_sym_DASH_GT] = ACTIONS(774),
    [anon_sym_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_as_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT] = ACTIONS(774),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT] = ACTIONS(774),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(774),
    [sym__symbol_chars] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(774),
  },
  [222] = {
    [sym__number] = STATE(213),
    [sym__string] = STATE(213),
    [sym__keyword] = STATE(213),
    [sym__unqualified_keyword] = STATE(213),
    [sym_qualified_keyword] = STATE(213),
    [sym__symbol] = STATE(213),
    [sym_special_form] = STATE(213),
    [sym_def_form] = STATE(141),
    [sym_threading_macro] = STATE(213),
    [sym_qualified_symbol] = STATE(213),
    [sym__one_form] = STATE(213),
    [sym__paren_sequence] = STATE(213),
    [sym__bracket_sequence] = STATE(213),
    [sym__curly_brace_sequence] = STATE(213),
    [aux_sym_comment_macro_repeat1] = STATE(213),
    [sym_number_long] = ACTIONS(782),
    [sym_number_double] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_fn_STAR] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_letfn] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [anon_sym_if_DASHlet] = ACTIONS(387),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_cond] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_try] = ACTIONS(387),
    [anon_sym_catch] = ACTIONS(387),
    [anon_sym_throw] = ACTIONS(387),
    [anon_sym_monitor_DASHenter] = ACTIONS(387),
    [anon_sym_monitor_DASHexit] = ACTIONS(387),
    [sym_namespace_definition] = ACTIONS(387),
    [anon_sym_def] = ACTIONS(389),
    [anon_sym_defn] = ACTIONS(389),
    [anon_sym_defn_DASH] = ACTIONS(389),
    [anon_sym_defmacro] = ACTIONS(389),
    [anon_sym_DASH_GT] = ACTIONS(391),
    [anon_sym_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_as_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT] = ACTIONS(391),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT] = ACTIONS(391),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(391),
    [sym__symbol_chars] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(989),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(403),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(782),
  },
  [223] = {
    [sym_number_long] = ACTIONS(810),
    [sym_number_double] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_COLON_COLON] = ACTIONS(810),
    [anon_sym_fn] = ACTIONS(810),
    [anon_sym_fn_STAR] = ACTIONS(810),
    [anon_sym_let] = ACTIONS(810),
    [anon_sym_letfn] = ACTIONS(810),
    [anon_sym_if] = ACTIONS(810),
    [anon_sym_if_DASHlet] = ACTIONS(810),
    [anon_sym_while] = ACTIONS(810),
    [anon_sym_cond] = ACTIONS(810),
    [anon_sym_case] = ACTIONS(810),
    [anon_sym_try] = ACTIONS(810),
    [anon_sym_catch] = ACTIONS(810),
    [anon_sym_throw] = ACTIONS(810),
    [anon_sym_monitor_DASHenter] = ACTIONS(810),
    [anon_sym_monitor_DASHexit] = ACTIONS(810),
    [sym_namespace_definition] = ACTIONS(810),
    [anon_sym_def] = ACTIONS(810),
    [anon_sym_defn] = ACTIONS(810),
    [anon_sym_defn_DASH] = ACTIONS(810),
    [anon_sym_defmacro] = ACTIONS(810),
    [anon_sym_DASH_GT] = ACTIONS(810),
    [anon_sym_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_as_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT] = ACTIONS(810),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT] = ACTIONS(810),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(810),
    [sym__symbol_chars] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(810),
  },
  [224] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [225] = {
    [sym__number] = STATE(264),
    [sym__string] = STATE(264),
    [sym__keyword] = STATE(264),
    [sym__unqualified_keyword] = STATE(264),
    [sym_qualified_keyword] = STATE(264),
    [sym__symbol] = STATE(264),
    [sym_special_form] = STATE(264),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(264),
    [sym_qualified_symbol] = STATE(264),
    [sym__one_form] = STATE(264),
    [sym__paren_sequence] = STATE(264),
    [sym__bracket_sequence] = STATE(264),
    [sym__curly_brace_sequence] = STATE(264),
    [aux_sym_comment_macro_repeat1] = STATE(264),
    [sym_number_long] = ACTIONS(993),
    [sym_number_double] = ACTIONS(993),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(993),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(995),
    [sym_nil] = ACTIONS(997),
    [sym_true] = ACTIONS(997),
    [sym_false] = ACTIONS(997),
    [sym_number_long] = ACTIONS(997),
    [sym_number_double] = ACTIONS(997),
    [anon_sym_BSLASH] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [anon_sym_POUND_DQUOTE] = ACTIONS(997),
    [anon_sym_SQUOTE] = ACTIONS(997),
    [anon_sym_LPARENquote] = ACTIONS(997),
    [anon_sym_RPAREN] = ACTIONS(997),
    [anon_sym_COLON] = ACTIONS(997),
    [anon_sym_COLON_COLON] = ACTIONS(997),
    [anon_sym_fn] = ACTIONS(997),
    [anon_sym_fn_STAR] = ACTIONS(997),
    [anon_sym_let] = ACTIONS(997),
    [anon_sym_letfn] = ACTIONS(997),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_if_DASHlet] = ACTIONS(997),
    [anon_sym_while] = ACTIONS(997),
    [anon_sym_cond] = ACTIONS(997),
    [anon_sym_case] = ACTIONS(997),
    [anon_sym_try] = ACTIONS(997),
    [anon_sym_catch] = ACTIONS(997),
    [anon_sym_throw] = ACTIONS(997),
    [anon_sym_monitor_DASHenter] = ACTIONS(997),
    [anon_sym_monitor_DASHexit] = ACTIONS(997),
    [sym_namespace_definition] = ACTIONS(997),
    [anon_sym_def] = ACTIONS(997),
    [anon_sym_defn] = ACTIONS(997),
    [anon_sym_defn_DASH] = ACTIONS(997),
    [anon_sym_defmacro] = ACTIONS(997),
    [anon_sym_DASH_GT] = ACTIONS(997),
    [anon_sym_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_as_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(997),
    [sym__symbol_chars] = ACTIONS(997),
    [anon_sym_LPAREN] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_RBRACK] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(997),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(997),
    [anon_sym_POUND] = ACTIONS(997),
    [anon_sym_POUND_LBRACE] = ACTIONS(997),
    [anon_sym_SEMI] = ACTIONS(997),
    [anon_sym_POUND_BANG] = ACTIONS(997),
    [anon_sym_POUND_] = ACTIONS(997),
    [anon_sym_] = ACTIONS(995),
    [anon_sym_LPARENcomment] = ACTIONS(997),
  },
  [227] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(999),
    [sym_number_double] = ACTIONS(999),
    [anon_sym_DQUOTE] = ACTIONS(1002),
    [anon_sym_COLON] = ACTIONS(1005),
    [anon_sym_COLON_COLON] = ACTIONS(1008),
    [anon_sym_fn] = ACTIONS(1011),
    [anon_sym_fn_STAR] = ACTIONS(1011),
    [anon_sym_let] = ACTIONS(1011),
    [anon_sym_letfn] = ACTIONS(1011),
    [anon_sym_if] = ACTIONS(1011),
    [anon_sym_if_DASHlet] = ACTIONS(1011),
    [anon_sym_while] = ACTIONS(1011),
    [anon_sym_cond] = ACTIONS(1011),
    [anon_sym_case] = ACTIONS(1011),
    [anon_sym_try] = ACTIONS(1011),
    [anon_sym_catch] = ACTIONS(1011),
    [anon_sym_throw] = ACTIONS(1011),
    [anon_sym_monitor_DASHenter] = ACTIONS(1011),
    [anon_sym_monitor_DASHexit] = ACTIONS(1011),
    [sym_namespace_definition] = ACTIONS(1011),
    [anon_sym_def] = ACTIONS(1014),
    [anon_sym_defn] = ACTIONS(1014),
    [anon_sym_defn_DASH] = ACTIONS(1014),
    [anon_sym_defmacro] = ACTIONS(1014),
    [anon_sym_DASH_GT] = ACTIONS(1017),
    [anon_sym_DASH_GT_GT] = ACTIONS(1017),
    [anon_sym_as_DASH_GT] = ACTIONS(1017),
    [anon_sym_some_DASH_GT] = ACTIONS(1017),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1017),
    [anon_sym_cond_DASH_GT] = ACTIONS(1017),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1017),
    [sym__symbol_chars] = ACTIONS(1020),
    [anon_sym_LPAREN] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1026),
    [anon_sym_LBRACE] = ACTIONS(1029),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_POUND] = ACTIONS(1032),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(999),
  },
  [228] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [229] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(1037),
    [sym_nil] = ACTIONS(828),
    [sym_true] = ACTIONS(828),
    [sym_false] = ACTIONS(828),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_BSLASH] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_POUND_DQUOTE] = ACTIONS(828),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [anon_sym_LPARENquote] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_POUND_LBRACE] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_POUND_BANG] = ACTIONS(828),
    [anon_sym_POUND_] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1039),
    [anon_sym_LPARENcomment] = ACTIONS(828),
  },
  [230] = {
    [aux_sym_ignore_form_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(1042),
    [sym_nil] = ACTIONS(1044),
    [sym_true] = ACTIONS(1044),
    [sym_false] = ACTIONS(1044),
    [sym_number_long] = ACTIONS(1044),
    [sym_number_double] = ACTIONS(1044),
    [anon_sym_BSLASH] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1044),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_LPARENquote] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1044),
    [anon_sym_fn] = ACTIONS(1044),
    [anon_sym_fn_STAR] = ACTIONS(1044),
    [anon_sym_let] = ACTIONS(1044),
    [anon_sym_letfn] = ACTIONS(1044),
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_if_DASHlet] = ACTIONS(1044),
    [anon_sym_while] = ACTIONS(1044),
    [anon_sym_cond] = ACTIONS(1044),
    [anon_sym_case] = ACTIONS(1044),
    [anon_sym_try] = ACTIONS(1044),
    [anon_sym_catch] = ACTIONS(1044),
    [anon_sym_throw] = ACTIONS(1044),
    [anon_sym_monitor_DASHenter] = ACTIONS(1044),
    [anon_sym_monitor_DASHexit] = ACTIONS(1044),
    [sym_namespace_definition] = ACTIONS(1044),
    [anon_sym_def] = ACTIONS(1044),
    [anon_sym_defn] = ACTIONS(1044),
    [anon_sym_defn_DASH] = ACTIONS(1044),
    [anon_sym_defmacro] = ACTIONS(1044),
    [anon_sym_DASH_GT] = ACTIONS(1044),
    [anon_sym_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_as_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1044),
    [sym__symbol_chars] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_POUND_LBRACE] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_POUND_BANG] = ACTIONS(1044),
    [anon_sym_POUND_] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(824),
    [anon_sym_LPARENcomment] = ACTIONS(1044),
  },
  [231] = {
    [sym_number_long] = ACTIONS(563),
    [sym_number_double] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(563),
    [anon_sym_fn] = ACTIONS(563),
    [anon_sym_fn_STAR] = ACTIONS(563),
    [anon_sym_let] = ACTIONS(563),
    [anon_sym_letfn] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_if_DASHlet] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_cond] = ACTIONS(563),
    [anon_sym_case] = ACTIONS(563),
    [anon_sym_try] = ACTIONS(563),
    [anon_sym_catch] = ACTIONS(563),
    [anon_sym_throw] = ACTIONS(563),
    [anon_sym_monitor_DASHenter] = ACTIONS(563),
    [anon_sym_monitor_DASHexit] = ACTIONS(563),
    [sym_namespace_definition] = ACTIONS(563),
    [anon_sym_def] = ACTIONS(563),
    [anon_sym_defn] = ACTIONS(563),
    [anon_sym_defn_DASH] = ACTIONS(563),
    [anon_sym_defmacro] = ACTIONS(563),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_as_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(563),
    [sym__symbol_chars] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(563),
  },
  [232] = {
    [sym__keyword_chars] = ACTIONS(1046),
  },
  [233] = {
    [sym_number_long] = ACTIONS(591),
    [sym_number_double] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_fn] = ACTIONS(591),
    [anon_sym_fn_STAR] = ACTIONS(591),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_letfn] = ACTIONS(591),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_if_DASHlet] = ACTIONS(591),
    [anon_sym_while] = ACTIONS(591),
    [anon_sym_cond] = ACTIONS(591),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_try] = ACTIONS(591),
    [anon_sym_catch] = ACTIONS(591),
    [anon_sym_throw] = ACTIONS(591),
    [anon_sym_monitor_DASHenter] = ACTIONS(591),
    [anon_sym_monitor_DASHexit] = ACTIONS(591),
    [sym_namespace_definition] = ACTIONS(591),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defn] = ACTIONS(591),
    [anon_sym_defn_DASH] = ACTIONS(591),
    [anon_sym_defmacro] = ACTIONS(591),
    [anon_sym_DASH_GT] = ACTIONS(591),
    [anon_sym_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_as_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(591),
    [sym__symbol_chars] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(591),
  },
  [234] = {
    [sym_number_long] = ACTIONS(925),
    [sym_number_double] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_COLON_COLON] = ACTIONS(925),
    [anon_sym_fn] = ACTIONS(925),
    [anon_sym_fn_STAR] = ACTIONS(925),
    [anon_sym_let] = ACTIONS(925),
    [anon_sym_letfn] = ACTIONS(925),
    [anon_sym_if] = ACTIONS(925),
    [anon_sym_if_DASHlet] = ACTIONS(925),
    [anon_sym_while] = ACTIONS(925),
    [anon_sym_cond] = ACTIONS(925),
    [anon_sym_case] = ACTIONS(925),
    [anon_sym_try] = ACTIONS(925),
    [anon_sym_catch] = ACTIONS(925),
    [anon_sym_throw] = ACTIONS(925),
    [anon_sym_monitor_DASHenter] = ACTIONS(925),
    [anon_sym_monitor_DASHexit] = ACTIONS(925),
    [sym_namespace_definition] = ACTIONS(925),
    [anon_sym_def] = ACTIONS(925),
    [anon_sym_defn] = ACTIONS(925),
    [anon_sym_defn_DASH] = ACTIONS(925),
    [anon_sym_defmacro] = ACTIONS(925),
    [anon_sym_DASH_GT] = ACTIONS(925),
    [anon_sym_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_as_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(925),
    [sym__symbol_chars] = ACTIONS(925),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_POUND] = ACTIONS(925),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(925),
  },
  [235] = {
    [sym_number_long] = ACTIONS(943),
    [sym_number_double] = ACTIONS(943),
    [anon_sym_DQUOTE] = ACTIONS(943),
    [anon_sym_RPAREN] = ACTIONS(943),
    [anon_sym_COLON] = ACTIONS(943),
    [anon_sym_COLON_COLON] = ACTIONS(943),
    [anon_sym_fn] = ACTIONS(943),
    [anon_sym_fn_STAR] = ACTIONS(943),
    [anon_sym_let] = ACTIONS(943),
    [anon_sym_letfn] = ACTIONS(943),
    [anon_sym_if] = ACTIONS(943),
    [anon_sym_if_DASHlet] = ACTIONS(943),
    [anon_sym_while] = ACTIONS(943),
    [anon_sym_cond] = ACTIONS(943),
    [anon_sym_case] = ACTIONS(943),
    [anon_sym_try] = ACTIONS(943),
    [anon_sym_catch] = ACTIONS(943),
    [anon_sym_throw] = ACTIONS(943),
    [anon_sym_monitor_DASHenter] = ACTIONS(943),
    [anon_sym_monitor_DASHexit] = ACTIONS(943),
    [sym_namespace_definition] = ACTIONS(943),
    [anon_sym_def] = ACTIONS(943),
    [anon_sym_defn] = ACTIONS(943),
    [anon_sym_defn_DASH] = ACTIONS(943),
    [anon_sym_defmacro] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [anon_sym_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_as_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(943),
    [sym__symbol_chars] = ACTIONS(943),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_POUND] = ACTIONS(943),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(943),
  },
  [236] = {
    [sym_number_long] = ACTIONS(997),
    [sym_number_double] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [anon_sym_RPAREN] = ACTIONS(997),
    [anon_sym_COLON] = ACTIONS(997),
    [anon_sym_COLON_COLON] = ACTIONS(997),
    [anon_sym_fn] = ACTIONS(997),
    [anon_sym_fn_STAR] = ACTIONS(997),
    [anon_sym_let] = ACTIONS(997),
    [anon_sym_letfn] = ACTIONS(997),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_if_DASHlet] = ACTIONS(997),
    [anon_sym_while] = ACTIONS(997),
    [anon_sym_cond] = ACTIONS(997),
    [anon_sym_case] = ACTIONS(997),
    [anon_sym_try] = ACTIONS(997),
    [anon_sym_catch] = ACTIONS(997),
    [anon_sym_throw] = ACTIONS(997),
    [anon_sym_monitor_DASHenter] = ACTIONS(997),
    [anon_sym_monitor_DASHexit] = ACTIONS(997),
    [sym_namespace_definition] = ACTIONS(997),
    [anon_sym_def] = ACTIONS(997),
    [anon_sym_defn] = ACTIONS(997),
    [anon_sym_defn_DASH] = ACTIONS(997),
    [anon_sym_defmacro] = ACTIONS(997),
    [anon_sym_DASH_GT] = ACTIONS(997),
    [anon_sym_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_as_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(997),
    [sym__symbol_chars] = ACTIONS(997),
    [anon_sym_LPAREN] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(997),
    [anon_sym_POUND] = ACTIONS(997),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(997),
  },
  [237] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(1048),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [238] = {
    [sym__hex_char] = ACTIONS(1050),
  },
  [239] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [anon_sym_RPAREN] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1052),
  },
  [240] = {
    [aux_sym_ignore_form_repeat1] = STATE(239),
    [anon_sym_RPAREN] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(891),
  },
  [241] = {
    [aux_sym_ignore_form_repeat1] = STATE(241),
    [sym_nil] = ACTIONS(828),
    [sym_true] = ACTIONS(828),
    [sym_false] = ACTIONS(828),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_BSLASH] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_POUND_DQUOTE] = ACTIONS(828),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [anon_sym_LPARENquote] = ACTIONS(828),
    [anon_sym_RPAREN] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_POUND_LBRACE] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_POUND_BANG] = ACTIONS(828),
    [anon_sym_POUND_] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1055),
    [anon_sym_LPARENcomment] = ACTIONS(828),
  },
  [242] = {
    [aux_sym_ignore_form_repeat1] = STATE(241),
    [sym_nil] = ACTIONS(1044),
    [sym_true] = ACTIONS(1044),
    [sym_false] = ACTIONS(1044),
    [sym_number_long] = ACTIONS(1044),
    [sym_number_double] = ACTIONS(1044),
    [anon_sym_BSLASH] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1044),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_LPARENquote] = ACTIONS(1044),
    [anon_sym_RPAREN] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1044),
    [anon_sym_fn] = ACTIONS(1044),
    [anon_sym_fn_STAR] = ACTIONS(1044),
    [anon_sym_let] = ACTIONS(1044),
    [anon_sym_letfn] = ACTIONS(1044),
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_if_DASHlet] = ACTIONS(1044),
    [anon_sym_while] = ACTIONS(1044),
    [anon_sym_cond] = ACTIONS(1044),
    [anon_sym_case] = ACTIONS(1044),
    [anon_sym_try] = ACTIONS(1044),
    [anon_sym_catch] = ACTIONS(1044),
    [anon_sym_throw] = ACTIONS(1044),
    [anon_sym_monitor_DASHenter] = ACTIONS(1044),
    [anon_sym_monitor_DASHexit] = ACTIONS(1044),
    [sym_namespace_definition] = ACTIONS(1044),
    [anon_sym_def] = ACTIONS(1044),
    [anon_sym_defn] = ACTIONS(1044),
    [anon_sym_defn_DASH] = ACTIONS(1044),
    [anon_sym_defmacro] = ACTIONS(1044),
    [anon_sym_DASH_GT] = ACTIONS(1044),
    [anon_sym_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_as_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1044),
    [sym__symbol_chars] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_POUND_LBRACE] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_POUND_BANG] = ACTIONS(1044),
    [anon_sym_POUND_] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(899),
    [anon_sym_LPARENcomment] = ACTIONS(1044),
  },
  [243] = {
    [aux_sym_ignore_form_repeat1] = STATE(243),
    [sym_nil] = ACTIONS(828),
    [sym_true] = ACTIONS(828),
    [sym_false] = ACTIONS(828),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_BSLASH] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_POUND_DQUOTE] = ACTIONS(828),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [anon_sym_LPARENquote] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_RBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_POUND_LBRACE] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_POUND_BANG] = ACTIONS(828),
    [anon_sym_POUND_] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1058),
    [anon_sym_LPARENcomment] = ACTIONS(828),
  },
  [244] = {
    [aux_sym_ignore_form_repeat1] = STATE(243),
    [sym_nil] = ACTIONS(1044),
    [sym_true] = ACTIONS(1044),
    [sym_false] = ACTIONS(1044),
    [sym_number_long] = ACTIONS(1044),
    [sym_number_double] = ACTIONS(1044),
    [anon_sym_BSLASH] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1044),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_LPARENquote] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1044),
    [anon_sym_fn] = ACTIONS(1044),
    [anon_sym_fn_STAR] = ACTIONS(1044),
    [anon_sym_let] = ACTIONS(1044),
    [anon_sym_letfn] = ACTIONS(1044),
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_if_DASHlet] = ACTIONS(1044),
    [anon_sym_while] = ACTIONS(1044),
    [anon_sym_cond] = ACTIONS(1044),
    [anon_sym_case] = ACTIONS(1044),
    [anon_sym_try] = ACTIONS(1044),
    [anon_sym_catch] = ACTIONS(1044),
    [anon_sym_throw] = ACTIONS(1044),
    [anon_sym_monitor_DASHenter] = ACTIONS(1044),
    [anon_sym_monitor_DASHexit] = ACTIONS(1044),
    [sym_namespace_definition] = ACTIONS(1044),
    [anon_sym_def] = ACTIONS(1044),
    [anon_sym_defn] = ACTIONS(1044),
    [anon_sym_defn_DASH] = ACTIONS(1044),
    [anon_sym_defmacro] = ACTIONS(1044),
    [anon_sym_DASH_GT] = ACTIONS(1044),
    [anon_sym_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_as_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1044),
    [sym__symbol_chars] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_RBRACK] = ACTIONS(1044),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_POUND_LBRACE] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_POUND_BANG] = ACTIONS(1044),
    [anon_sym_POUND_] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(903),
    [anon_sym_LPARENcomment] = ACTIONS(1044),
  },
  [245] = {
    [aux_sym_ignore_form_repeat1] = STATE(245),
    [sym_nil] = ACTIONS(828),
    [sym_true] = ACTIONS(828),
    [sym_false] = ACTIONS(828),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_BSLASH] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_POUND_DQUOTE] = ACTIONS(828),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [anon_sym_LPARENquote] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_POUND_LBRACE] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_POUND_BANG] = ACTIONS(828),
    [anon_sym_POUND_] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1061),
    [anon_sym_LPARENcomment] = ACTIONS(828),
  },
  [246] = {
    [aux_sym_ignore_form_repeat1] = STATE(245),
    [sym_nil] = ACTIONS(1044),
    [sym_true] = ACTIONS(1044),
    [sym_false] = ACTIONS(1044),
    [sym_number_long] = ACTIONS(1044),
    [sym_number_double] = ACTIONS(1044),
    [anon_sym_BSLASH] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1044),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_LPARENquote] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1044),
    [anon_sym_fn] = ACTIONS(1044),
    [anon_sym_fn_STAR] = ACTIONS(1044),
    [anon_sym_let] = ACTIONS(1044),
    [anon_sym_letfn] = ACTIONS(1044),
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_if_DASHlet] = ACTIONS(1044),
    [anon_sym_while] = ACTIONS(1044),
    [anon_sym_cond] = ACTIONS(1044),
    [anon_sym_case] = ACTIONS(1044),
    [anon_sym_try] = ACTIONS(1044),
    [anon_sym_catch] = ACTIONS(1044),
    [anon_sym_throw] = ACTIONS(1044),
    [anon_sym_monitor_DASHenter] = ACTIONS(1044),
    [anon_sym_monitor_DASHexit] = ACTIONS(1044),
    [sym_namespace_definition] = ACTIONS(1044),
    [anon_sym_def] = ACTIONS(1044),
    [anon_sym_defn] = ACTIONS(1044),
    [anon_sym_defn_DASH] = ACTIONS(1044),
    [anon_sym_defmacro] = ACTIONS(1044),
    [anon_sym_DASH_GT] = ACTIONS(1044),
    [anon_sym_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_as_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1044),
    [sym__symbol_chars] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_POUND_LBRACE] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_POUND_BANG] = ACTIONS(1044),
    [anon_sym_POUND_] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(907),
    [anon_sym_LPARENcomment] = ACTIONS(1044),
  },
  [247] = {
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
    [anon_sym_fn] = ACTIONS(1066),
    [anon_sym_fn_STAR] = ACTIONS(1066),
    [anon_sym_let] = ACTIONS(1066),
    [anon_sym_letfn] = ACTIONS(1066),
    [anon_sym_if] = ACTIONS(1066),
    [anon_sym_if_DASHlet] = ACTIONS(1066),
    [anon_sym_while] = ACTIONS(1066),
    [anon_sym_cond] = ACTIONS(1066),
    [anon_sym_case] = ACTIONS(1066),
    [anon_sym_try] = ACTIONS(1066),
    [anon_sym_catch] = ACTIONS(1066),
    [anon_sym_throw] = ACTIONS(1066),
    [anon_sym_monitor_DASHenter] = ACTIONS(1066),
    [anon_sym_monitor_DASHexit] = ACTIONS(1066),
    [sym_namespace_definition] = ACTIONS(1066),
    [anon_sym_def] = ACTIONS(1066),
    [anon_sym_defn] = ACTIONS(1066),
    [anon_sym_defn_DASH] = ACTIONS(1066),
    [anon_sym_defmacro] = ACTIONS(1066),
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
  },
  [248] = {
    [aux_sym_ignore_form_repeat1] = STATE(248),
    [sym_nil] = ACTIONS(828),
    [sym_true] = ACTIONS(828),
    [sym_false] = ACTIONS(828),
    [sym_number_long] = ACTIONS(828),
    [sym_number_double] = ACTIONS(828),
    [anon_sym_BSLASH] = ACTIONS(828),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_POUND_DQUOTE] = ACTIONS(828),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [anon_sym_LPARENquote] = ACTIONS(828),
    [anon_sym_COLON] = ACTIONS(828),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [anon_sym_fn] = ACTIONS(828),
    [anon_sym_fn_STAR] = ACTIONS(828),
    [anon_sym_let] = ACTIONS(828),
    [anon_sym_letfn] = ACTIONS(828),
    [anon_sym_if] = ACTIONS(828),
    [anon_sym_if_DASHlet] = ACTIONS(828),
    [anon_sym_while] = ACTIONS(828),
    [anon_sym_cond] = ACTIONS(828),
    [anon_sym_case] = ACTIONS(828),
    [anon_sym_try] = ACTIONS(828),
    [anon_sym_catch] = ACTIONS(828),
    [anon_sym_throw] = ACTIONS(828),
    [anon_sym_monitor_DASHenter] = ACTIONS(828),
    [anon_sym_monitor_DASHexit] = ACTIONS(828),
    [sym_namespace_definition] = ACTIONS(828),
    [anon_sym_def] = ACTIONS(828),
    [anon_sym_defn] = ACTIONS(828),
    [anon_sym_defn_DASH] = ACTIONS(828),
    [anon_sym_defmacro] = ACTIONS(828),
    [anon_sym_DASH_GT] = ACTIONS(828),
    [anon_sym_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_as_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT] = ACTIONS(828),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT] = ACTIONS(828),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(828),
    [sym__symbol_chars] = ACTIONS(828),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_LBRACK] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(828),
    [anon_sym_POUND] = ACTIONS(828),
    [anon_sym_POUND_LBRACE] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_POUND_BANG] = ACTIONS(828),
    [anon_sym_POUND_] = ACTIONS(828),
    [anon_sym_] = ACTIONS(1068),
    [anon_sym_LPARENcomment] = ACTIONS(828),
  },
  [249] = {
    [aux_sym_ignore_form_repeat1] = STATE(248),
    [sym_nil] = ACTIONS(1044),
    [sym_true] = ACTIONS(1044),
    [sym_false] = ACTIONS(1044),
    [sym_number_long] = ACTIONS(1044),
    [sym_number_double] = ACTIONS(1044),
    [anon_sym_BSLASH] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1044),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_LPARENquote] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1044),
    [anon_sym_fn] = ACTIONS(1044),
    [anon_sym_fn_STAR] = ACTIONS(1044),
    [anon_sym_let] = ACTIONS(1044),
    [anon_sym_letfn] = ACTIONS(1044),
    [anon_sym_if] = ACTIONS(1044),
    [anon_sym_if_DASHlet] = ACTIONS(1044),
    [anon_sym_while] = ACTIONS(1044),
    [anon_sym_cond] = ACTIONS(1044),
    [anon_sym_case] = ACTIONS(1044),
    [anon_sym_try] = ACTIONS(1044),
    [anon_sym_catch] = ACTIONS(1044),
    [anon_sym_throw] = ACTIONS(1044),
    [anon_sym_monitor_DASHenter] = ACTIONS(1044),
    [anon_sym_monitor_DASHexit] = ACTIONS(1044),
    [sym_namespace_definition] = ACTIONS(1044),
    [anon_sym_def] = ACTIONS(1044),
    [anon_sym_defn] = ACTIONS(1044),
    [anon_sym_defn_DASH] = ACTIONS(1044),
    [anon_sym_defmacro] = ACTIONS(1044),
    [anon_sym_DASH_GT] = ACTIONS(1044),
    [anon_sym_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_as_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT] = ACTIONS(1044),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT] = ACTIONS(1044),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1044),
    [sym__symbol_chars] = ACTIONS(1044),
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_LBRACE] = ACTIONS(1044),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_POUND_LBRACE] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_POUND_BANG] = ACTIONS(1044),
    [anon_sym_POUND_] = ACTIONS(1044),
    [anon_sym_] = ACTIONS(917),
    [anon_sym_LPARENcomment] = ACTIONS(1044),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(895),
    [sym_nil] = ACTIONS(897),
    [sym_true] = ACTIONS(897),
    [sym_false] = ACTIONS(897),
    [sym_number_long] = ACTIONS(897),
    [sym_number_double] = ACTIONS(897),
    [anon_sym_BSLASH] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_POUND_DQUOTE] = ACTIONS(897),
    [anon_sym_SQUOTE] = ACTIONS(897),
    [anon_sym_LPARENquote] = ACTIONS(897),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(897),
    [anon_sym_fn] = ACTIONS(897),
    [anon_sym_fn_STAR] = ACTIONS(897),
    [anon_sym_let] = ACTIONS(897),
    [anon_sym_letfn] = ACTIONS(897),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_if_DASHlet] = ACTIONS(897),
    [anon_sym_while] = ACTIONS(897),
    [anon_sym_cond] = ACTIONS(897),
    [anon_sym_case] = ACTIONS(897),
    [anon_sym_try] = ACTIONS(897),
    [anon_sym_catch] = ACTIONS(897),
    [anon_sym_throw] = ACTIONS(897),
    [anon_sym_monitor_DASHenter] = ACTIONS(897),
    [anon_sym_monitor_DASHexit] = ACTIONS(897),
    [sym_namespace_definition] = ACTIONS(897),
    [anon_sym_def] = ACTIONS(897),
    [anon_sym_defn] = ACTIONS(897),
    [anon_sym_defn_DASH] = ACTIONS(897),
    [anon_sym_defmacro] = ACTIONS(897),
    [anon_sym_DASH_GT] = ACTIONS(897),
    [anon_sym_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_as_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(897),
    [sym__symbol_chars] = ACTIONS(897),
    [anon_sym_LPAREN] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(897),
    [anon_sym_RBRACK] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(897),
    [anon_sym_POUND] = ACTIONS(897),
    [anon_sym_POUND_LBRACE] = ACTIONS(897),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_POUND_BANG] = ACTIONS(897),
    [anon_sym_POUND_] = ACTIONS(897),
    [anon_sym_] = ACTIONS(895),
    [anon_sym_LPARENcomment] = ACTIONS(897),
  },
  [251] = {
    [sym_number_long] = ACTIONS(563),
    [sym_number_double] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(563),
    [anon_sym_fn] = ACTIONS(563),
    [anon_sym_fn_STAR] = ACTIONS(563),
    [anon_sym_let] = ACTIONS(563),
    [anon_sym_letfn] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_if_DASHlet] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_cond] = ACTIONS(563),
    [anon_sym_case] = ACTIONS(563),
    [anon_sym_try] = ACTIONS(563),
    [anon_sym_catch] = ACTIONS(563),
    [anon_sym_throw] = ACTIONS(563),
    [anon_sym_monitor_DASHenter] = ACTIONS(563),
    [anon_sym_monitor_DASHexit] = ACTIONS(563),
    [sym_namespace_definition] = ACTIONS(563),
    [anon_sym_def] = ACTIONS(563),
    [anon_sym_defn] = ACTIONS(563),
    [anon_sym_defn_DASH] = ACTIONS(563),
    [anon_sym_defmacro] = ACTIONS(563),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_as_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(563),
    [sym__symbol_chars] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(563),
  },
  [252] = {
    [sym__keyword_chars] = ACTIONS(1071),
  },
  [253] = {
    [sym_number_long] = ACTIONS(591),
    [sym_number_double] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_fn] = ACTIONS(591),
    [anon_sym_fn_STAR] = ACTIONS(591),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_letfn] = ACTIONS(591),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_if_DASHlet] = ACTIONS(591),
    [anon_sym_while] = ACTIONS(591),
    [anon_sym_cond] = ACTIONS(591),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_try] = ACTIONS(591),
    [anon_sym_catch] = ACTIONS(591),
    [anon_sym_throw] = ACTIONS(591),
    [anon_sym_monitor_DASHenter] = ACTIONS(591),
    [anon_sym_monitor_DASHexit] = ACTIONS(591),
    [sym_namespace_definition] = ACTIONS(591),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defn] = ACTIONS(591),
    [anon_sym_defn_DASH] = ACTIONS(591),
    [anon_sym_defmacro] = ACTIONS(591),
    [anon_sym_DASH_GT] = ACTIONS(591),
    [anon_sym_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_as_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(591),
    [sym__symbol_chars] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(591),
  },
  [254] = {
    [sym_number_long] = ACTIONS(925),
    [sym_number_double] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_COLON_COLON] = ACTIONS(925),
    [anon_sym_fn] = ACTIONS(925),
    [anon_sym_fn_STAR] = ACTIONS(925),
    [anon_sym_let] = ACTIONS(925),
    [anon_sym_letfn] = ACTIONS(925),
    [anon_sym_if] = ACTIONS(925),
    [anon_sym_if_DASHlet] = ACTIONS(925),
    [anon_sym_while] = ACTIONS(925),
    [anon_sym_cond] = ACTIONS(925),
    [anon_sym_case] = ACTIONS(925),
    [anon_sym_try] = ACTIONS(925),
    [anon_sym_catch] = ACTIONS(925),
    [anon_sym_throw] = ACTIONS(925),
    [anon_sym_monitor_DASHenter] = ACTIONS(925),
    [anon_sym_monitor_DASHexit] = ACTIONS(925),
    [sym_namespace_definition] = ACTIONS(925),
    [anon_sym_def] = ACTIONS(925),
    [anon_sym_defn] = ACTIONS(925),
    [anon_sym_defn_DASH] = ACTIONS(925),
    [anon_sym_defmacro] = ACTIONS(925),
    [anon_sym_DASH_GT] = ACTIONS(925),
    [anon_sym_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_as_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(925),
    [sym__symbol_chars] = ACTIONS(925),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_RBRACK] = ACTIONS(925),
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_POUND] = ACTIONS(925),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(925),
  },
  [255] = {
    [sym_number_long] = ACTIONS(943),
    [sym_number_double] = ACTIONS(943),
    [anon_sym_DQUOTE] = ACTIONS(943),
    [anon_sym_COLON] = ACTIONS(943),
    [anon_sym_COLON_COLON] = ACTIONS(943),
    [anon_sym_fn] = ACTIONS(943),
    [anon_sym_fn_STAR] = ACTIONS(943),
    [anon_sym_let] = ACTIONS(943),
    [anon_sym_letfn] = ACTIONS(943),
    [anon_sym_if] = ACTIONS(943),
    [anon_sym_if_DASHlet] = ACTIONS(943),
    [anon_sym_while] = ACTIONS(943),
    [anon_sym_cond] = ACTIONS(943),
    [anon_sym_case] = ACTIONS(943),
    [anon_sym_try] = ACTIONS(943),
    [anon_sym_catch] = ACTIONS(943),
    [anon_sym_throw] = ACTIONS(943),
    [anon_sym_monitor_DASHenter] = ACTIONS(943),
    [anon_sym_monitor_DASHexit] = ACTIONS(943),
    [sym_namespace_definition] = ACTIONS(943),
    [anon_sym_def] = ACTIONS(943),
    [anon_sym_defn] = ACTIONS(943),
    [anon_sym_defn_DASH] = ACTIONS(943),
    [anon_sym_defmacro] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [anon_sym_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_as_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(943),
    [sym__symbol_chars] = ACTIONS(943),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_RBRACK] = ACTIONS(943),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_POUND] = ACTIONS(943),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(943),
  },
  [256] = {
    [sym_number_long] = ACTIONS(997),
    [sym_number_double] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [anon_sym_COLON] = ACTIONS(997),
    [anon_sym_COLON_COLON] = ACTIONS(997),
    [anon_sym_fn] = ACTIONS(997),
    [anon_sym_fn_STAR] = ACTIONS(997),
    [anon_sym_let] = ACTIONS(997),
    [anon_sym_letfn] = ACTIONS(997),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_if_DASHlet] = ACTIONS(997),
    [anon_sym_while] = ACTIONS(997),
    [anon_sym_cond] = ACTIONS(997),
    [anon_sym_case] = ACTIONS(997),
    [anon_sym_try] = ACTIONS(997),
    [anon_sym_catch] = ACTIONS(997),
    [anon_sym_throw] = ACTIONS(997),
    [anon_sym_monitor_DASHenter] = ACTIONS(997),
    [anon_sym_monitor_DASHexit] = ACTIONS(997),
    [sym_namespace_definition] = ACTIONS(997),
    [anon_sym_def] = ACTIONS(997),
    [anon_sym_defn] = ACTIONS(997),
    [anon_sym_defn_DASH] = ACTIONS(997),
    [anon_sym_defmacro] = ACTIONS(997),
    [anon_sym_DASH_GT] = ACTIONS(997),
    [anon_sym_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_as_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(997),
    [sym__symbol_chars] = ACTIONS(997),
    [anon_sym_LPAREN] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_RBRACK] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(997),
    [anon_sym_POUND] = ACTIONS(997),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(997),
  },
  [257] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [258] = {
    [sym_number_long] = ACTIONS(563),
    [sym_number_double] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(563),
    [anon_sym_fn] = ACTIONS(563),
    [anon_sym_fn_STAR] = ACTIONS(563),
    [anon_sym_let] = ACTIONS(563),
    [anon_sym_letfn] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_if_DASHlet] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_cond] = ACTIONS(563),
    [anon_sym_case] = ACTIONS(563),
    [anon_sym_try] = ACTIONS(563),
    [anon_sym_catch] = ACTIONS(563),
    [anon_sym_throw] = ACTIONS(563),
    [anon_sym_monitor_DASHenter] = ACTIONS(563),
    [anon_sym_monitor_DASHexit] = ACTIONS(563),
    [sym_namespace_definition] = ACTIONS(563),
    [anon_sym_def] = ACTIONS(563),
    [anon_sym_defn] = ACTIONS(563),
    [anon_sym_defn_DASH] = ACTIONS(563),
    [anon_sym_defmacro] = ACTIONS(563),
    [anon_sym_DASH_GT] = ACTIONS(563),
    [anon_sym_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_as_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT] = ACTIONS(563),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT] = ACTIONS(563),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(563),
    [sym__symbol_chars] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_POUND] = ACTIONS(563),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(563),
  },
  [259] = {
    [sym__keyword_chars] = ACTIONS(1075),
  },
  [260] = {
    [sym_number_long] = ACTIONS(591),
    [sym_number_double] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_fn] = ACTIONS(591),
    [anon_sym_fn_STAR] = ACTIONS(591),
    [anon_sym_let] = ACTIONS(591),
    [anon_sym_letfn] = ACTIONS(591),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_if_DASHlet] = ACTIONS(591),
    [anon_sym_while] = ACTIONS(591),
    [anon_sym_cond] = ACTIONS(591),
    [anon_sym_case] = ACTIONS(591),
    [anon_sym_try] = ACTIONS(591),
    [anon_sym_catch] = ACTIONS(591),
    [anon_sym_throw] = ACTIONS(591),
    [anon_sym_monitor_DASHenter] = ACTIONS(591),
    [anon_sym_monitor_DASHexit] = ACTIONS(591),
    [sym_namespace_definition] = ACTIONS(591),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defn] = ACTIONS(591),
    [anon_sym_defn_DASH] = ACTIONS(591),
    [anon_sym_defmacro] = ACTIONS(591),
    [anon_sym_DASH_GT] = ACTIONS(591),
    [anon_sym_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_as_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT] = ACTIONS(591),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT] = ACTIONS(591),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(591),
    [sym__symbol_chars] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(591),
  },
  [261] = {
    [sym_number_long] = ACTIONS(925),
    [sym_number_double] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [anon_sym_COLON] = ACTIONS(925),
    [anon_sym_COLON_COLON] = ACTIONS(925),
    [anon_sym_fn] = ACTIONS(925),
    [anon_sym_fn_STAR] = ACTIONS(925),
    [anon_sym_let] = ACTIONS(925),
    [anon_sym_letfn] = ACTIONS(925),
    [anon_sym_if] = ACTIONS(925),
    [anon_sym_if_DASHlet] = ACTIONS(925),
    [anon_sym_while] = ACTIONS(925),
    [anon_sym_cond] = ACTIONS(925),
    [anon_sym_case] = ACTIONS(925),
    [anon_sym_try] = ACTIONS(925),
    [anon_sym_catch] = ACTIONS(925),
    [anon_sym_throw] = ACTIONS(925),
    [anon_sym_monitor_DASHenter] = ACTIONS(925),
    [anon_sym_monitor_DASHexit] = ACTIONS(925),
    [sym_namespace_definition] = ACTIONS(925),
    [anon_sym_def] = ACTIONS(925),
    [anon_sym_defn] = ACTIONS(925),
    [anon_sym_defn_DASH] = ACTIONS(925),
    [anon_sym_defmacro] = ACTIONS(925),
    [anon_sym_DASH_GT] = ACTIONS(925),
    [anon_sym_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_as_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT] = ACTIONS(925),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT] = ACTIONS(925),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(925),
    [sym__symbol_chars] = ACTIONS(925),
    [anon_sym_LPAREN] = ACTIONS(925),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_LBRACE] = ACTIONS(925),
    [anon_sym_RBRACE] = ACTIONS(925),
    [anon_sym_POUND] = ACTIONS(925),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(925),
  },
  [262] = {
    [sym_number_long] = ACTIONS(943),
    [sym_number_double] = ACTIONS(943),
    [anon_sym_DQUOTE] = ACTIONS(943),
    [anon_sym_COLON] = ACTIONS(943),
    [anon_sym_COLON_COLON] = ACTIONS(943),
    [anon_sym_fn] = ACTIONS(943),
    [anon_sym_fn_STAR] = ACTIONS(943),
    [anon_sym_let] = ACTIONS(943),
    [anon_sym_letfn] = ACTIONS(943),
    [anon_sym_if] = ACTIONS(943),
    [anon_sym_if_DASHlet] = ACTIONS(943),
    [anon_sym_while] = ACTIONS(943),
    [anon_sym_cond] = ACTIONS(943),
    [anon_sym_case] = ACTIONS(943),
    [anon_sym_try] = ACTIONS(943),
    [anon_sym_catch] = ACTIONS(943),
    [anon_sym_throw] = ACTIONS(943),
    [anon_sym_monitor_DASHenter] = ACTIONS(943),
    [anon_sym_monitor_DASHexit] = ACTIONS(943),
    [sym_namespace_definition] = ACTIONS(943),
    [anon_sym_def] = ACTIONS(943),
    [anon_sym_defn] = ACTIONS(943),
    [anon_sym_defn_DASH] = ACTIONS(943),
    [anon_sym_defmacro] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [anon_sym_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_as_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT] = ACTIONS(943),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT] = ACTIONS(943),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(943),
    [sym__symbol_chars] = ACTIONS(943),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_POUND] = ACTIONS(943),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(943),
  },
  [263] = {
    [sym_number_long] = ACTIONS(997),
    [sym_number_double] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [anon_sym_COLON] = ACTIONS(997),
    [anon_sym_COLON_COLON] = ACTIONS(997),
    [anon_sym_fn] = ACTIONS(997),
    [anon_sym_fn_STAR] = ACTIONS(997),
    [anon_sym_let] = ACTIONS(997),
    [anon_sym_letfn] = ACTIONS(997),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_if_DASHlet] = ACTIONS(997),
    [anon_sym_while] = ACTIONS(997),
    [anon_sym_cond] = ACTIONS(997),
    [anon_sym_case] = ACTIONS(997),
    [anon_sym_try] = ACTIONS(997),
    [anon_sym_catch] = ACTIONS(997),
    [anon_sym_throw] = ACTIONS(997),
    [anon_sym_monitor_DASHenter] = ACTIONS(997),
    [anon_sym_monitor_DASHexit] = ACTIONS(997),
    [sym_namespace_definition] = ACTIONS(997),
    [anon_sym_def] = ACTIONS(997),
    [anon_sym_defn] = ACTIONS(997),
    [anon_sym_defn_DASH] = ACTIONS(997),
    [anon_sym_defmacro] = ACTIONS(997),
    [anon_sym_DASH_GT] = ACTIONS(997),
    [anon_sym_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_as_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT] = ACTIONS(997),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT] = ACTIONS(997),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(997),
    [sym__symbol_chars] = ACTIONS(997),
    [anon_sym_LPAREN] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(997),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_POUND] = ACTIONS(997),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(997),
  },
  [264] = {
    [sym__number] = STATE(227),
    [sym__string] = STATE(227),
    [sym__keyword] = STATE(227),
    [sym__unqualified_keyword] = STATE(227),
    [sym_qualified_keyword] = STATE(227),
    [sym__symbol] = STATE(227),
    [sym_special_form] = STATE(227),
    [sym_def_form] = STATE(154),
    [sym_threading_macro] = STATE(227),
    [sym_qualified_symbol] = STATE(227),
    [sym__one_form] = STATE(227),
    [sym__paren_sequence] = STATE(227),
    [sym__bracket_sequence] = STATE(227),
    [sym__curly_brace_sequence] = STATE(227),
    [aux_sym_comment_macro_repeat1] = STATE(227),
    [sym_number_long] = ACTIONS(814),
    [sym_number_double] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(411),
    [anon_sym_fn] = ACTIONS(413),
    [anon_sym_fn_STAR] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_letfn] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_if_DASHlet] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_cond] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_try] = ACTIONS(413),
    [anon_sym_catch] = ACTIONS(413),
    [anon_sym_throw] = ACTIONS(413),
    [anon_sym_monitor_DASHenter] = ACTIONS(413),
    [anon_sym_monitor_DASHexit] = ACTIONS(413),
    [sym_namespace_definition] = ACTIONS(413),
    [anon_sym_def] = ACTIONS(415),
    [anon_sym_defn] = ACTIONS(415),
    [anon_sym_defn_DASH] = ACTIONS(415),
    [anon_sym_defmacro] = ACTIONS(415),
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
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_POUND] = ACTIONS(429),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(814),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(1079),
    [sym_nil] = ACTIONS(1081),
    [sym_true] = ACTIONS(1081),
    [sym_false] = ACTIONS(1081),
    [sym_number_long] = ACTIONS(1081),
    [sym_number_double] = ACTIONS(1081),
    [anon_sym_BSLASH] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1081),
    [anon_sym_SQUOTE] = ACTIONS(1081),
    [anon_sym_LPARENquote] = ACTIONS(1081),
    [anon_sym_RPAREN] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1081),
    [anon_sym_COLON_COLON] = ACTIONS(1081),
    [anon_sym_fn] = ACTIONS(1081),
    [anon_sym_fn_STAR] = ACTIONS(1081),
    [anon_sym_let] = ACTIONS(1081),
    [anon_sym_letfn] = ACTIONS(1081),
    [anon_sym_if] = ACTIONS(1081),
    [anon_sym_if_DASHlet] = ACTIONS(1081),
    [anon_sym_while] = ACTIONS(1081),
    [anon_sym_cond] = ACTIONS(1081),
    [anon_sym_case] = ACTIONS(1081),
    [anon_sym_try] = ACTIONS(1081),
    [anon_sym_catch] = ACTIONS(1081),
    [anon_sym_throw] = ACTIONS(1081),
    [anon_sym_monitor_DASHenter] = ACTIONS(1081),
    [anon_sym_monitor_DASHexit] = ACTIONS(1081),
    [sym_namespace_definition] = ACTIONS(1081),
    [anon_sym_def] = ACTIONS(1081),
    [anon_sym_defn] = ACTIONS(1081),
    [anon_sym_defn_DASH] = ACTIONS(1081),
    [anon_sym_defmacro] = ACTIONS(1081),
    [anon_sym_DASH_GT] = ACTIONS(1081),
    [anon_sym_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_as_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1081),
    [sym__symbol_chars] = ACTIONS(1081),
    [anon_sym_LPAREN] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1081),
    [anon_sym_POUND_LBRACE] = ACTIONS(1081),
    [anon_sym_SEMI] = ACTIONS(1081),
    [anon_sym_POUND_BANG] = ACTIONS(1081),
    [anon_sym_POUND_] = ACTIONS(1081),
    [anon_sym_] = ACTIONS(1079),
    [anon_sym_LPARENcomment] = ACTIONS(1081),
  },
  [266] = {
    [sym_number_long] = ACTIONS(897),
    [sym_number_double] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(897),
    [anon_sym_fn] = ACTIONS(897),
    [anon_sym_fn_STAR] = ACTIONS(897),
    [anon_sym_let] = ACTIONS(897),
    [anon_sym_letfn] = ACTIONS(897),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_if_DASHlet] = ACTIONS(897),
    [anon_sym_while] = ACTIONS(897),
    [anon_sym_cond] = ACTIONS(897),
    [anon_sym_case] = ACTIONS(897),
    [anon_sym_try] = ACTIONS(897),
    [anon_sym_catch] = ACTIONS(897),
    [anon_sym_throw] = ACTIONS(897),
    [anon_sym_monitor_DASHenter] = ACTIONS(897),
    [anon_sym_monitor_DASHexit] = ACTIONS(897),
    [sym_namespace_definition] = ACTIONS(897),
    [anon_sym_def] = ACTIONS(897),
    [anon_sym_defn] = ACTIONS(897),
    [anon_sym_defn_DASH] = ACTIONS(897),
    [anon_sym_defmacro] = ACTIONS(897),
    [anon_sym_DASH_GT] = ACTIONS(897),
    [anon_sym_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_as_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(897),
    [sym__symbol_chars] = ACTIONS(897),
    [anon_sym_LPAREN] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [anon_sym_POUND] = ACTIONS(897),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(897),
  },
  [267] = {
    [sym_number_long] = ACTIONS(1081),
    [sym_number_double] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [anon_sym_RPAREN] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1081),
    [anon_sym_COLON_COLON] = ACTIONS(1081),
    [anon_sym_fn] = ACTIONS(1081),
    [anon_sym_fn_STAR] = ACTIONS(1081),
    [anon_sym_let] = ACTIONS(1081),
    [anon_sym_letfn] = ACTIONS(1081),
    [anon_sym_if] = ACTIONS(1081),
    [anon_sym_if_DASHlet] = ACTIONS(1081),
    [anon_sym_while] = ACTIONS(1081),
    [anon_sym_cond] = ACTIONS(1081),
    [anon_sym_case] = ACTIONS(1081),
    [anon_sym_try] = ACTIONS(1081),
    [anon_sym_catch] = ACTIONS(1081),
    [anon_sym_throw] = ACTIONS(1081),
    [anon_sym_monitor_DASHenter] = ACTIONS(1081),
    [anon_sym_monitor_DASHexit] = ACTIONS(1081),
    [sym_namespace_definition] = ACTIONS(1081),
    [anon_sym_def] = ACTIONS(1081),
    [anon_sym_defn] = ACTIONS(1081),
    [anon_sym_defn_DASH] = ACTIONS(1081),
    [anon_sym_defmacro] = ACTIONS(1081),
    [anon_sym_DASH_GT] = ACTIONS(1081),
    [anon_sym_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_as_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1081),
    [sym__symbol_chars] = ACTIONS(1081),
    [anon_sym_LPAREN] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1081),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(1083),
    [sym_nil] = ACTIONS(1085),
    [sym_true] = ACTIONS(1085),
    [sym_false] = ACTIONS(1085),
    [sym_number_long] = ACTIONS(1085),
    [sym_number_double] = ACTIONS(1083),
    [anon_sym_BSLASH] = ACTIONS(1083),
    [anon_sym_DQUOTE] = ACTIONS(1083),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1083),
    [anon_sym_SQUOTE] = ACTIONS(1083),
    [anon_sym_LPARENquote] = ACTIONS(1083),
    [anon_sym_RPAREN] = ACTIONS(1083),
    [anon_sym_COLON] = ACTIONS(1085),
    [anon_sym_COLON_COLON] = ACTIONS(1083),
    [anon_sym_fn] = ACTIONS(1085),
    [anon_sym_fn_STAR] = ACTIONS(1085),
    [anon_sym_let] = ACTIONS(1085),
    [anon_sym_letfn] = ACTIONS(1085),
    [anon_sym_if] = ACTIONS(1085),
    [anon_sym_if_DASHlet] = ACTIONS(1085),
    [anon_sym_while] = ACTIONS(1085),
    [anon_sym_cond] = ACTIONS(1085),
    [anon_sym_case] = ACTIONS(1085),
    [anon_sym_try] = ACTIONS(1085),
    [anon_sym_catch] = ACTIONS(1085),
    [anon_sym_throw] = ACTIONS(1085),
    [anon_sym_monitor_DASHenter] = ACTIONS(1085),
    [anon_sym_monitor_DASHexit] = ACTIONS(1085),
    [sym_namespace_definition] = ACTIONS(1085),
    [anon_sym_def] = ACTIONS(1085),
    [anon_sym_defn] = ACTIONS(1085),
    [anon_sym_defn_DASH] = ACTIONS(1085),
    [anon_sym_defmacro] = ACTIONS(1085),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [anon_sym_DASH_GT_GT] = ACTIONS(1083),
    [anon_sym_as_DASH_GT] = ACTIONS(1083),
    [anon_sym_some_DASH_GT] = ACTIONS(1085),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1083),
    [anon_sym_cond_DASH_GT] = ACTIONS(1085),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1083),
    [sym__symbol_chars] = ACTIONS(1085),
    [anon_sym_LPAREN] = ACTIONS(1085),
    [anon_sym_LBRACK] = ACTIONS(1083),
    [anon_sym_RBRACK] = ACTIONS(1083),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [anon_sym_RBRACE] = ACTIONS(1083),
    [anon_sym_POUND_COLON_COLON_LBRACE] = ACTIONS(1083),
    [anon_sym_POUND] = ACTIONS(1085),
    [anon_sym_POUND_LBRACE] = ACTIONS(1083),
    [anon_sym_SEMI] = ACTIONS(1083),
    [anon_sym_POUND_BANG] = ACTIONS(1083),
    [anon_sym_POUND_] = ACTIONS(1083),
    [anon_sym_LPARENcomment] = ACTIONS(1083),
  },
  [269] = {
    [sym_number_long] = ACTIONS(897),
    [sym_number_double] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(897),
    [anon_sym_fn] = ACTIONS(897),
    [anon_sym_fn_STAR] = ACTIONS(897),
    [anon_sym_let] = ACTIONS(897),
    [anon_sym_letfn] = ACTIONS(897),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_if_DASHlet] = ACTIONS(897),
    [anon_sym_while] = ACTIONS(897),
    [anon_sym_cond] = ACTIONS(897),
    [anon_sym_case] = ACTIONS(897),
    [anon_sym_try] = ACTIONS(897),
    [anon_sym_catch] = ACTIONS(897),
    [anon_sym_throw] = ACTIONS(897),
    [anon_sym_monitor_DASHenter] = ACTIONS(897),
    [anon_sym_monitor_DASHexit] = ACTIONS(897),
    [sym_namespace_definition] = ACTIONS(897),
    [anon_sym_def] = ACTIONS(897),
    [anon_sym_defn] = ACTIONS(897),
    [anon_sym_defn_DASH] = ACTIONS(897),
    [anon_sym_defmacro] = ACTIONS(897),
    [anon_sym_DASH_GT] = ACTIONS(897),
    [anon_sym_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_as_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(897),
    [sym__symbol_chars] = ACTIONS(897),
    [anon_sym_LPAREN] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(897),
    [anon_sym_RBRACK] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [anon_sym_POUND] = ACTIONS(897),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(897),
  },
  [270] = {
    [sym_number_long] = ACTIONS(1081),
    [sym_number_double] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1081),
    [anon_sym_COLON_COLON] = ACTIONS(1081),
    [anon_sym_fn] = ACTIONS(1081),
    [anon_sym_fn_STAR] = ACTIONS(1081),
    [anon_sym_let] = ACTIONS(1081),
    [anon_sym_letfn] = ACTIONS(1081),
    [anon_sym_if] = ACTIONS(1081),
    [anon_sym_if_DASHlet] = ACTIONS(1081),
    [anon_sym_while] = ACTIONS(1081),
    [anon_sym_cond] = ACTIONS(1081),
    [anon_sym_case] = ACTIONS(1081),
    [anon_sym_try] = ACTIONS(1081),
    [anon_sym_catch] = ACTIONS(1081),
    [anon_sym_throw] = ACTIONS(1081),
    [anon_sym_monitor_DASHenter] = ACTIONS(1081),
    [anon_sym_monitor_DASHexit] = ACTIONS(1081),
    [sym_namespace_definition] = ACTIONS(1081),
    [anon_sym_def] = ACTIONS(1081),
    [anon_sym_defn] = ACTIONS(1081),
    [anon_sym_defn_DASH] = ACTIONS(1081),
    [anon_sym_defmacro] = ACTIONS(1081),
    [anon_sym_DASH_GT] = ACTIONS(1081),
    [anon_sym_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_as_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1081),
    [sym__symbol_chars] = ACTIONS(1081),
    [anon_sym_LPAREN] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1081),
  },
  [271] = {
    [sym_number_long] = ACTIONS(897),
    [sym_number_double] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(897),
    [anon_sym_fn] = ACTIONS(897),
    [anon_sym_fn_STAR] = ACTIONS(897),
    [anon_sym_let] = ACTIONS(897),
    [anon_sym_letfn] = ACTIONS(897),
    [anon_sym_if] = ACTIONS(897),
    [anon_sym_if_DASHlet] = ACTIONS(897),
    [anon_sym_while] = ACTIONS(897),
    [anon_sym_cond] = ACTIONS(897),
    [anon_sym_case] = ACTIONS(897),
    [anon_sym_try] = ACTIONS(897),
    [anon_sym_catch] = ACTIONS(897),
    [anon_sym_throw] = ACTIONS(897),
    [anon_sym_monitor_DASHenter] = ACTIONS(897),
    [anon_sym_monitor_DASHexit] = ACTIONS(897),
    [sym_namespace_definition] = ACTIONS(897),
    [anon_sym_def] = ACTIONS(897),
    [anon_sym_defn] = ACTIONS(897),
    [anon_sym_defn_DASH] = ACTIONS(897),
    [anon_sym_defmacro] = ACTIONS(897),
    [anon_sym_DASH_GT] = ACTIONS(897),
    [anon_sym_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_as_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT] = ACTIONS(897),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT] = ACTIONS(897),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(897),
    [sym__symbol_chars] = ACTIONS(897),
    [anon_sym_LPAREN] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_POUND] = ACTIONS(897),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(897),
  },
  [272] = {
    [sym_number_long] = ACTIONS(1081),
    [sym_number_double] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1081),
    [anon_sym_COLON_COLON] = ACTIONS(1081),
    [anon_sym_fn] = ACTIONS(1081),
    [anon_sym_fn_STAR] = ACTIONS(1081),
    [anon_sym_let] = ACTIONS(1081),
    [anon_sym_letfn] = ACTIONS(1081),
    [anon_sym_if] = ACTIONS(1081),
    [anon_sym_if_DASHlet] = ACTIONS(1081),
    [anon_sym_while] = ACTIONS(1081),
    [anon_sym_cond] = ACTIONS(1081),
    [anon_sym_case] = ACTIONS(1081),
    [anon_sym_try] = ACTIONS(1081),
    [anon_sym_catch] = ACTIONS(1081),
    [anon_sym_throw] = ACTIONS(1081),
    [anon_sym_monitor_DASHenter] = ACTIONS(1081),
    [anon_sym_monitor_DASHexit] = ACTIONS(1081),
    [sym_namespace_definition] = ACTIONS(1081),
    [anon_sym_def] = ACTIONS(1081),
    [anon_sym_defn] = ACTIONS(1081),
    [anon_sym_defn_DASH] = ACTIONS(1081),
    [anon_sym_defmacro] = ACTIONS(1081),
    [anon_sym_DASH_GT] = ACTIONS(1081),
    [anon_sym_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_as_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT] = ACTIONS(1081),
    [anon_sym_some_DASH_GT_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT] = ACTIONS(1081),
    [anon_sym_cond_DASH_GT_GT] = ACTIONS(1081),
    [sym__symbol_chars] = ACTIONS(1081),
    [anon_sym_LPAREN] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_LPAREN_BSLASH_LBRACK_BSLASH_LBRACE_BSLASH_DQUOTE_RBRACK_SLASH] = ACTIONS(1081),
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
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = false}, SHIFT(12),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = false}, SHIFT(13),
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
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_special_form, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_special_form, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_def_form, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_def_form, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_threading_macro, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_threading_macro, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__symbol, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__symbol, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(51),
  [107] = {.count = 1, .reusable = false}, SHIFT(55),
  [109] = {.count = 1, .reusable = true}, SHIFT(52),
  [111] = {.count = 1, .reusable = true}, SHIFT(53),
  [113] = {.count = 1, .reusable = true}, SHIFT(54),
  [115] = {.count = 1, .reusable = false}, SHIFT(59),
  [117] = {.count = 1, .reusable = true}, SHIFT(56),
  [119] = {.count = 1, .reusable = true}, SHIFT(57),
  [121] = {.count = 1, .reusable = true}, SHIFT(58),
  [123] = {.count = 1, .reusable = false}, SHIFT(63),
  [125] = {.count = 1, .reusable = true}, SHIFT(60),
  [127] = {.count = 1, .reusable = true}, SHIFT(61),
  [129] = {.count = 1, .reusable = true}, SHIFT(62),
  [131] = {.count = 1, .reusable = true}, SHIFT(65),
  [133] = {.count = 1, .reusable = true}, SHIFT(67),
  [135] = {.count = 1, .reusable = false}, SHIFT(71),
  [137] = {.count = 1, .reusable = true}, SHIFT(68),
  [139] = {.count = 1, .reusable = true}, SHIFT(69),
  [141] = {.count = 1, .reusable = true}, SHIFT(70),
  [143] = {.count = 1, .reusable = false}, SHIFT(72),
  [145] = {.count = 1, .reusable = false}, SHIFT(73),
  [147] = {.count = 1, .reusable = false}, SHIFT(85),
  [149] = {.count = 1, .reusable = false}, SHIFT(74),
  [151] = {.count = 1, .reusable = false}, SHIFT(75),
  [153] = {.count = 1, .reusable = false}, SHIFT(76),
  [155] = {.count = 1, .reusable = false}, SHIFT(77),
  [157] = {.count = 1, .reusable = false}, SHIFT(78),
  [159] = {.count = 1, .reusable = false}, SHIFT(79),
  [161] = {.count = 1, .reusable = false}, SHIFT(80),
  [163] = {.count = 1, .reusable = false}, SHIFT(81),
  [165] = {.count = 1, .reusable = false}, SHIFT(82),
  [167] = {.count = 1, .reusable = false}, SHIFT(83),
  [169] = {.count = 1, .reusable = false}, SHIFT(84),
  [171] = {.count = 1, .reusable = false}, SHIFT(86),
  [173] = {.count = 1, .reusable = false}, SHIFT(99),
  [175] = {.count = 1, .reusable = false}, SHIFT(87),
  [177] = {.count = 1, .reusable = false}, SHIFT(88),
  [179] = {.count = 1, .reusable = false}, SHIFT(89),
  [181] = {.count = 1, .reusable = false}, SHIFT(90),
  [183] = {.count = 1, .reusable = false}, SHIFT(91),
  [185] = {.count = 1, .reusable = false}, SHIFT(92),
  [187] = {.count = 1, .reusable = false}, SHIFT(93),
  [189] = {.count = 1, .reusable = false}, SHIFT(94),
  [191] = {.count = 1, .reusable = false}, SHIFT(95),
  [193] = {.count = 1, .reusable = false}, SHIFT(96),
  [195] = {.count = 1, .reusable = false}, SHIFT(97),
  [197] = {.count = 1, .reusable = false}, SHIFT(98),
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
  [251] = {.count = 1, .reusable = false}, SHIFT(100),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__character, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__character, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(101),
  [259] = {.count = 1, .reusable = true}, SHIFT(102),
  [261] = {.count = 1, .reusable = false}, SHIFT(102),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym__string, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym__string, 2),
  [267] = {.count = 1, .reusable = false}, SHIFT(103),
  [269] = {.count = 1, .reusable = false}, SHIFT(104),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(105),
  [277] = {.count = 1, .reusable = false}, SHIFT(106),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 2),
  [283] = {.count = 1, .reusable = false}, SHIFT(107),
  [285] = {.count = 1, .reusable = false}, SHIFT(108),
  [287] = {.count = 1, .reusable = true}, SHIFT(109),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__unqualified_keyword, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__unqualified_keyword, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(110),
  [299] = {.count = 1, .reusable = true}, SHIFT(111),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__list, 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__list, 2),
  [305] = {.count = 1, .reusable = false}, SHIFT(112),
  [307] = {.count = 1, .reusable = false}, SHIFT(113),
  [309] = {.count = 1, .reusable = false}, SHIFT(115),
  [311] = {.count = 1, .reusable = true}, SHIFT(114),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 2),
  [317] = {.count = 1, .reusable = false}, SHIFT(116),
  [319] = {.count = 1, .reusable = false}, SHIFT(117),
  [321] = {.count = 1, .reusable = false}, SHIFT(119),
  [323] = {.count = 1, .reusable = true}, SHIFT(118),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 2),
  [329] = {.count = 1, .reusable = false}, SHIFT(120),
  [331] = {.count = 1, .reusable = false}, SHIFT(121),
  [333] = {.count = 1, .reusable = false}, SHIFT(122),
  [335] = {.count = 1, .reusable = true}, SHIFT(123),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 2),
  [341] = {.count = 1, .reusable = true}, SHIFT(125),
  [343] = {.count = 1, .reusable = true}, SHIFT(126),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym__set, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym__set, 2),
  [349] = {.count = 1, .reusable = false}, SHIFT(127),
  [351] = {.count = 1, .reusable = false}, SHIFT(128),
  [353] = {.count = 1, .reusable = false}, SHIFT(130),
  [355] = {.count = 1, .reusable = true}, SHIFT(129),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [365] = {.count = 1, .reusable = false}, SHIFT(131),
  [367] = {.count = 1, .reusable = false}, SHIFT(132),
  [369] = {.count = 1, .reusable = true}, SHIFT(133),
  [371] = {.count = 1, .reusable = true}, SHIFT(134),
  [373] = {.count = 1, .reusable = false}, SHIFT(135),
  [375] = {.count = 1, .reusable = false}, SHIFT(137),
  [377] = {.count = 1, .reusable = false}, SHIFT(136),
  [379] = {.count = 1, .reusable = false}, SHIFT(150),
  [381] = {.count = 1, .reusable = false}, SHIFT(138),
  [383] = {.count = 1, .reusable = false}, SHIFT(139),
  [385] = {.count = 1, .reusable = false}, SHIFT(140),
  [387] = {.count = 1, .reusable = false}, SHIFT(141),
  [389] = {.count = 1, .reusable = false}, SHIFT(142),
  [391] = {.count = 1, .reusable = false}, SHIFT(143),
  [393] = {.count = 1, .reusable = false}, SHIFT(144),
  [395] = {.count = 1, .reusable = false}, SHIFT(145),
  [397] = {.count = 1, .reusable = false}, SHIFT(146),
  [399] = {.count = 1, .reusable = false}, SHIFT(147),
  [401] = {.count = 1, .reusable = false}, SHIFT(148),
  [403] = {.count = 1, .reusable = false}, SHIFT(149),
  [405] = {.count = 1, .reusable = false}, SHIFT(163),
  [407] = {.count = 1, .reusable = false}, SHIFT(151),
  [409] = {.count = 1, .reusable = false}, SHIFT(152),
  [411] = {.count = 1, .reusable = false}, SHIFT(153),
  [413] = {.count = 1, .reusable = false}, SHIFT(154),
  [415] = {.count = 1, .reusable = false}, SHIFT(155),
  [417] = {.count = 1, .reusable = false}, SHIFT(156),
  [419] = {.count = 1, .reusable = false}, SHIFT(157),
  [421] = {.count = 1, .reusable = false}, SHIFT(158),
  [423] = {.count = 1, .reusable = false}, SHIFT(159),
  [425] = {.count = 1, .reusable = false}, SHIFT(160),
  [427] = {.count = 1, .reusable = false}, SHIFT(161),
  [429] = {.count = 1, .reusable = false}, SHIFT(162),
  [431] = {.count = 1, .reusable = true}, SHIFT(164),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [437] = {.count = 1, .reusable = true}, SHIFT(165),
  [439] = {.count = 1, .reusable = false}, SHIFT(166),
  [441] = {.count = 1, .reusable = false}, SHIFT(167),
  [443] = {.count = 1, .reusable = false}, SHIFT(168),
  [445] = {.count = 1, .reusable = false}, SHIFT(169),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(170),
  [453] = {.count = 1, .reusable = true}, SHIFT(171),
  [455] = {.count = 1, .reusable = false}, SHIFT(172),
  [457] = {.count = 1, .reusable = false}, SHIFT(174),
  [459] = {.count = 1, .reusable = false}, SHIFT(173),
  [461] = {.count = 1, .reusable = false}, SHIFT(176),
  [463] = {.count = 1, .reusable = false}, SHIFT(175),
  [465] = {.count = 1, .reusable = false}, SHIFT(178),
  [467] = {.count = 1, .reusable = false}, SHIFT(177),
  [469] = {.count = 1, .reusable = true}, SHIFT(179),
  [471] = {.count = 1, .reusable = false}, SHIFT(181),
  [473] = {.count = 1, .reusable = false}, SHIFT(180),
  [475] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [480] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [498] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [501] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [507] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [525] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [534] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [555] = {.count = 1, .reusable = true}, SHIFT(182),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__string, 3),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym__string, 3),
  [565] = {.count = 1, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2),
  [567] = {.count = 2, .reusable = false}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(104),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym__regex, 3),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym__regex, 3),
  [574] = {.count = 1, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym__regex_repeat1, 2), SHIFT_REPEAT(106),
  [579] = {.count = 1, .reusable = true}, SHIFT(183),
  [581] = {.count = 1, .reusable = false}, SHIFT(184),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym__quote, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym__quote, 3),
  [587] = {.count = 1, .reusable = true}, SHIFT(185),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_symbol, 3),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_symbol, 3),
  [593] = {.count = 1, .reusable = true}, SHIFT(186),
  [595] = {.count = 1, .reusable = false}, SHIFT(187),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym__list, 3),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym__list, 3),
  [601] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [610] = {.count = 1, .reusable = true}, SHIFT(188),
  [612] = {.count = 1, .reusable = false}, SHIFT(189),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym__vector, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym__vector, 3),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [627] = {.count = 1, .reusable = true}, SHIFT(190),
  [629] = {.count = 1, .reusable = false}, SHIFT(191),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map_kv_pair, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map_kv_pair, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__hash_map, 3),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym__hash_map, 3),
  [639] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(63),
  [642] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [645] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(25),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(60),
  [663] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [666] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [675] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [678] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [684] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [687] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [696] = {.count = 1, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2),
  [698] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(17),
  [701] = {.count = 2, .reusable = false}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [704] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(19),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(20),
  [710] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(21),
  [713] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(62),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym__hash_map_repeat1, 2), SHIFT_REPEAT(23),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 3),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 3),
  [723] = {.count = 1, .reusable = true}, SHIFT(192),
  [725] = {.count = 1, .reusable = true}, SHIFT(194),
  [727] = {.count = 1, .reusable = false}, SHIFT(195),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym__set, 3),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym__set, 3),
  [733] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(130),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [742] = {.count = 1, .reusable = false}, SHIFT(196),
  [744] = {.count = 1, .reusable = false}, SHIFT(197),
  [746] = {.count = 1, .reusable = true}, SHIFT(198),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 2),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 2),
  [752] = {.count = 1, .reusable = false}, SHIFT(199),
  [754] = {.count = 1, .reusable = false}, SHIFT(200),
  [756] = {.count = 1, .reusable = false}, SHIFT(201),
  [758] = {.count = 1, .reusable = true}, SHIFT(202),
  [760] = {.count = 1, .reusable = true}, SHIFT(203),
  [762] = {.count = 1, .reusable = false}, SHIFT(204),
  [764] = {.count = 1, .reusable = false}, SHIFT(206),
  [766] = {.count = 1, .reusable = false}, SHIFT(205),
  [768] = {.count = 1, .reusable = false}, SHIFT(208),
  [770] = {.count = 1, .reusable = false}, SHIFT(207),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 2),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 2),
  [776] = {.count = 1, .reusable = false}, SHIFT(210),
  [778] = {.count = 1, .reusable = false}, SHIFT(209),
  [780] = {.count = 1, .reusable = true}, SHIFT(211),
  [782] = {.count = 1, .reusable = false}, SHIFT(213),
  [784] = {.count = 1, .reusable = false}, SHIFT(212),
  [786] = {.count = 1, .reusable = false}, SHIFT(214),
  [788] = {.count = 1, .reusable = false}, SHIFT(215),
  [790] = {.count = 1, .reusable = true}, SHIFT(216),
  [792] = {.count = 1, .reusable = true}, SHIFT(217),
  [794] = {.count = 1, .reusable = false}, SHIFT(218),
  [796] = {.count = 1, .reusable = false}, SHIFT(220),
  [798] = {.count = 1, .reusable = false}, SHIFT(219),
  [800] = {.count = 1, .reusable = false}, SHIFT(222),
  [802] = {.count = 1, .reusable = false}, SHIFT(221),
  [804] = {.count = 1, .reusable = false}, SHIFT(224),
  [806] = {.count = 1, .reusable = false}, SHIFT(223),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 2),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 2),
  [812] = {.count = 1, .reusable = true}, SHIFT(225),
  [814] = {.count = 1, .reusable = false}, SHIFT(227),
  [816] = {.count = 1, .reusable = false}, SHIFT(226),
  [818] = {.count = 1, .reusable = false}, SHIFT(228),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 3),
  [822] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 3),
  [824] = {.count = 1, .reusable = true}, SHIFT(229),
  [826] = {.count = 1, .reusable = true}, SHIFT(230),
  [828] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [830] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(167),
  [833] = {.count = 1, .reusable = false}, SHIFT(231),
  [835] = {.count = 1, .reusable = false}, SHIFT(232),
  [837] = {.count = 1, .reusable = true}, SHIFT(233),
  [839] = {.count = 1, .reusable = false}, SHIFT(234),
  [841] = {.count = 1, .reusable = false}, SHIFT(235),
  [843] = {.count = 1, .reusable = false}, SHIFT(236),
  [845] = {.count = 1, .reusable = false}, SHIFT(237),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [851] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(181),
  [854] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(87),
  [857] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2),
  [859] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(89),
  [862] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(90),
  [865] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(91),
  [868] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(92),
  [871] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(93),
  [874] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(94),
  [877] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(95),
  [880] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(96),
  [883] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(97),
  [886] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(98),
  [889] = {.count = 1, .reusable = true}, SHIFT(238),
  [891] = {.count = 1, .reusable = true}, SHIFT(239),
  [893] = {.count = 1, .reusable = true}, SHIFT(240),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 4),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 4),
  [899] = {.count = 1, .reusable = true}, SHIFT(241),
  [901] = {.count = 1, .reusable = true}, SHIFT(242),
  [903] = {.count = 1, .reusable = true}, SHIFT(243),
  [905] = {.count = 1, .reusable = true}, SHIFT(244),
  [907] = {.count = 1, .reusable = true}, SHIFT(245),
  [909] = {.count = 1, .reusable = true}, SHIFT(246),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 4),
  [913] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 4),
  [915] = {.count = 1, .reusable = true}, SHIFT(247),
  [917] = {.count = 1, .reusable = true}, SHIFT(248),
  [919] = {.count = 1, .reusable = true}, SHIFT(249),
  [921] = {.count = 1, .reusable = true}, SHIFT(250),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym__paren_sequence, 3),
  [925] = {.count = 1, .reusable = false}, REDUCE(sym__paren_sequence, 3),
  [927] = {.count = 1, .reusable = false}, SHIFT(251),
  [929] = {.count = 1, .reusable = false}, SHIFT(252),
  [931] = {.count = 1, .reusable = true}, SHIFT(253),
  [933] = {.count = 1, .reusable = false}, SHIFT(254),
  [935] = {.count = 1, .reusable = false}, SHIFT(255),
  [937] = {.count = 1, .reusable = false}, SHIFT(256),
  [939] = {.count = 1, .reusable = false}, SHIFT(257),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym__bracket_sequence, 3),
  [943] = {.count = 1, .reusable = false}, REDUCE(sym__bracket_sequence, 3),
  [945] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(213),
  [948] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(138),
  [951] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(139),
  [954] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(140),
  [957] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(141),
  [960] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(142),
  [963] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(143),
  [966] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(144),
  [969] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(145),
  [972] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(146),
  [975] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(148),
  [978] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(149),
  [981] = {.count = 1, .reusable = false}, SHIFT(258),
  [983] = {.count = 1, .reusable = false}, SHIFT(259),
  [985] = {.count = 1, .reusable = true}, SHIFT(260),
  [987] = {.count = 1, .reusable = false}, SHIFT(261),
  [989] = {.count = 1, .reusable = false}, SHIFT(262),
  [991] = {.count = 1, .reusable = false}, SHIFT(263),
  [993] = {.count = 1, .reusable = false}, SHIFT(264),
  [995] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 3),
  [997] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 3),
  [999] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(227),
  [1002] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(151),
  [1005] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(152),
  [1008] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(153),
  [1011] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(154),
  [1014] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(155),
  [1017] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(156),
  [1020] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(157),
  [1023] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(158),
  [1026] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(159),
  [1029] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(160),
  [1032] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_macro_repeat1, 2), SHIFT_REPEAT(162),
  [1035] = {.count = 1, .reusable = false}, SHIFT(265),
  [1037] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2),
  [1039] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(229),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 4),
  [1044] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 4),
  [1046] = {.count = 1, .reusable = true}, SHIFT(266),
  [1048] = {.count = 1, .reusable = false}, SHIFT(267),
  [1050] = {.count = 1, .reusable = true}, SHIFT(268),
  [1052] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(239),
  [1055] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(241),
  [1058] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(243),
  [1061] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(245),
  [1064] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_map, 5),
  [1066] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_map, 5),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ignore_form_repeat1, 2), SHIFT_REPEAT(248),
  [1071] = {.count = 1, .reusable = true}, SHIFT(269),
  [1073] = {.count = 1, .reusable = false}, SHIFT(270),
  [1075] = {.count = 1, .reusable = true}, SHIFT(271),
  [1077] = {.count = 1, .reusable = false}, SHIFT(272),
  [1079] = {.count = 1, .reusable = true}, REDUCE(sym__curly_brace_sequence, 4),
  [1081] = {.count = 1, .reusable = false}, REDUCE(sym__curly_brace_sequence, 4),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [1085] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
