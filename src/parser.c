#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 81
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  sym__keyword_chars = 30,
  anon_sym_LPAREN = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_POUND_LBRACE = 36,
  anon_sym_SEMI = 37,
  aux_sym_SLASH_DOT_STAR_SLASH = 38,
  anon_sym_POUND_BANG = 39,
  anon_sym_POUND_ = 40,
  anon_sym_LPARENcomment = 41,
  sym_program = 42,
  sym__anything = 43,
  sym_boolean = 44,
  sym_number = 45,
  sym_character = 46,
  sym__special_char = 47,
  sym__unicode_char = 48,
  sym__octal_char = 49,
  sym__octal_num = 50,
  sym_string = 51,
  sym_regex = 52,
  sym_quote = 53,
  sym_keyword = 54,
  sym_unqualified_keyword = 55,
  sym_qualified_keyword = 56,
  sym_list = 57,
  sym_vector = 58,
  sym_hash_map = 59,
  sym_hash_map_kv_pair = 60,
  sym_hash_map_key = 61,
  sym_hash_map_value = 62,
  sym_set = 63,
  sym_comment = 64,
  sym_semicolon = 65,
  sym_shebang_line = 66,
  sym_ignore_form = 67,
  sym_comment_macro = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
  aux_sym_regex_repeat1 = 71,
  aux_sym_hash_map_repeat1 = 72,
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
  [sym__keyword_chars] = "_keyword_chars",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_] = "#_",
  [anon_sym_LPARENcomment] = "(comment",
  [sym_program] = "program",
  [sym__anything] = "_anything",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym__special_char] = "_special_char",
  [sym__unicode_char] = "_unicode_char",
  [sym__octal_char] = "_octal_char",
  [sym__octal_num] = "_octal_num",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym_quote] = "quote",
  [sym_keyword] = "keyword",
  [sym_unqualified_keyword] = "unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_hash_map] = "hash_map",
  [sym_hash_map_kv_pair] = "hash_map_kv_pair",
  [sym_hash_map_key] = "hash_map_key",
  [sym_hash_map_value] = "hash_map_value",
  [sym_set] = "set",
  [sym_comment] = "comment",
  [sym_semicolon] = "semicolon",
  [sym_shebang_line] = "shebang_line",
  [sym_ignore_form] = "ignore_form",
  [sym_comment_macro] = "comment_macro",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_regex_repeat1] = "regex_repeat1",
  [aux_sym_hash_map_repeat1] = "hash_map_repeat1",
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
  [sym__keyword_chars] = {
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
  [anon_sym_LPARENcomment] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
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
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map_kv_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map_key] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_map_value] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_map_repeat1] = {
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
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == 'f')
        ADVANCE(37);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 'o')
        ADVANCE(54);
      if (lookahead == 'r')
        ADVANCE(55);
      if (lookahead == 's')
        ADVANCE(61);
      if (lookahead == 't')
        ADVANCE(66);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(73);
      if (lookahead == '}')
        ADVANCE(74);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(81);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '_')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND_);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'c')
        ADVANCE(10);
      if (lookahead == 'q')
        ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'o')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'm')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'm')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'e')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'n')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPARENcomment);
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
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '_')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == '-')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '_')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'r')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'm')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'f')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'd')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_formfeed);
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
      if (lookahead == 'p')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'c')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 66:
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'b')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 69:
      if (lookahead == 'u')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(78);
      if (lookahead == '_')
        ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == '_')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '.')
        ADVANCE(78);
      if (lookahead == '_')
        ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 82:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        SKIP(82);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == 'a')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'l')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 's')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 88:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == ',')
        SKIP(90);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(73);
      if (lookahead == '}')
        ADVANCE(74);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == '\n')
        SKIP(91);
      if (lookahead == ',')
        ADVANCE(92);
      if (lookahead == 'b')
        ADVANCE(93);
      if (lookahead == 'f')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(54);
      if (lookahead == 'r')
        ADVANCE(104);
      if (lookahead == 's')
        ADVANCE(105);
      if (lookahead == 't')
        ADVANCE(106);
      if (lookahead == 'u')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'c')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'k')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'p')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'c')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(38);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(62);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(108);
      if (lookahead != 0)
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '\\')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(111);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == ',')
        SKIP(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(22);
      if (lookahead == ',')
        SKIP(116);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        SKIP(117);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == ']')
        ADVANCE(36);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ',')
        SKIP(118);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(83);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(73);
      if (lookahead == '}')
        ADVANCE(74);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(119);
      if (lookahead == ',')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      END_STATE();
    case 123:
      if (lookahead == ',')
        SKIP(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(81);
      END_STATE();
    case 124:
      if (lookahead == ',')
        SKIP(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(125);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 114},
  [10] = {.lex_state = 114},
  [11] = {.lex_state = 116},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 118},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 116},
  [19] = {.lex_state = 122},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 123},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 107},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 90},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 116},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 82},
  [37] = {.lex_state = 90},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 116},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 90},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 117},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 90},
  [46] = {.lex_state = 82},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 118},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 90},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 118},
  [54] = {.lex_state = 90},
  [55] = {.lex_state = 90},
  [56] = {.lex_state = 90},
  [57] = {.lex_state = 90},
  [58] = {.lex_state = 116},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 123},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 111},
  [66] = {.lex_state = 90},
  [67] = {.lex_state = 90},
  [68] = {.lex_state = 116},
  [69] = {.lex_state = 90},
  [70] = {.lex_state = 117},
  [71] = {.lex_state = 118},
  [72] = {.lex_state = 118},
  [73] = {.lex_state = 90},
  [74] = {.lex_state = 118},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 118},
  [77] = {.lex_state = 90},
  [78] = {.lex_state = 123},
  [79] = {.lex_state = 123},
  [80] = {.lex_state = 90},
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
    [anon_sym_formfeed] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_] = ACTIONS(1),
    [anon_sym_LPARENcomment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(19),
    [sym__anything] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym_number] = STATE(22),
    [sym_character] = STATE(22),
    [sym_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_keyword] = STATE(22),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_hash_map] = STATE(22),
    [sym_set] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(39),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_nil] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_number_long] = ACTIONS(43),
    [sym_number_double] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_LPARENquote] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_POUND_BANG] = ACTIONS(43),
    [anon_sym_POUND_] = ACTIONS(43),
    [anon_sym_LPARENcomment] = ACTIONS(43),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_nil] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_number_long] = ACTIONS(47),
    [sym_number_double] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_POUND_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_LPARENquote] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_POUND_LBRACE] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_POUND_BANG] = ACTIONS(47),
    [anon_sym_POUND_] = ACTIONS(47),
    [anon_sym_LPARENcomment] = ACTIONS(47),
  },
  [4] = {
    [sym__special_char] = STATE(23),
    [sym__unicode_char] = STATE(23),
    [sym__octal_char] = STATE(23),
    [sym__normal_char] = ACTIONS(51),
    [anon_sym_newline] = ACTIONS(51),
    [anon_sym_space] = ACTIONS(51),
    [anon_sym_tab] = ACTIONS(51),
    [anon_sym_formfeed] = ACTIONS(51),
    [anon_sym_backspace] = ACTIONS(51),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_u] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(55),
  },
  [5] = {
    [aux_sym_string_repeat1] = STATE(27),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(59),
  },
  [6] = {
    [aux_sym_regex_repeat1] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(63),
  },
  [7] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(39),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [8] = {
    [sym__anything] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_character] = STATE(33),
    [sym_string] = STATE(33),
    [sym_regex] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_hash_map] = STATE(33),
    [sym_set] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(67),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(71),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [9] = {
    [sym__keyword_chars] = ACTIONS(73),
  },
  [10] = {
    [sym__keyword_chars] = ACTIONS(75),
  },
  [11] = {
    [sym__anything] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_number] = STATE(39),
    [sym_character] = STATE(39),
    [sym_string] = STATE(39),
    [sym_regex] = STATE(39),
    [sym_quote] = STATE(39),
    [sym_keyword] = STATE(39),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(39),
    [sym_vector] = STATE(39),
    [sym_hash_map] = STATE(39),
    [sym_set] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(39),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [12] = {
    [sym__anything] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_number] = STATE(43),
    [sym_character] = STATE(43),
    [sym_string] = STATE(43),
    [sym_regex] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_keyword] = STATE(43),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_hash_map] = STATE(43),
    [sym_set] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(43),
    [sym_nil] = ACTIONS(85),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [13] = {
    [sym__anything] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_string] = STATE(47),
    [sym_regex] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_keyword] = STATE(47),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_hash_map] = STATE(47),
    [sym_hash_map_kv_pair] = STATE(49),
    [sym_hash_map_key] = STATE(48),
    [sym_set] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_hash_map_repeat1] = STATE(49),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [14] = {
    [sym__anything] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_number] = STATE(53),
    [sym_character] = STATE(53),
    [sym_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym_quote] = STATE(53),
    [sym_keyword] = STATE(53),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_hash_map] = STATE(53),
    [sym_set] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(53),
    [sym_nil] = ACTIONS(101),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [15] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(109),
  },
  [16] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(111),
  },
  [17] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(39),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [18] = {
    [sym__anything] = STATE(58),
    [sym_boolean] = STATE(58),
    [sym_number] = STATE(58),
    [sym_character] = STATE(58),
    [sym_string] = STATE(58),
    [sym_regex] = STATE(58),
    [sym_quote] = STATE(58),
    [sym_keyword] = STATE(58),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_hash_map] = STATE(58),
    [sym_set] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(58),
    [sym_nil] = ACTIONS(115),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(119),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(121),
    [sym_false] = ACTIONS(121),
    [sym_number_long] = ACTIONS(121),
    [sym_number_double] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_POUND_DQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LPARENquote] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_POUND_LBRACE] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_POUND_BANG] = ACTIONS(121),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(121),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(125),
    [sym_number_double] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_LPARENquote] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_POUND_BANG] = ACTIONS(125),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(125),
  },
  [22] = {
    [sym__anything] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym_character] = STATE(59),
    [sym_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_hash_map] = STATE(59),
    [sym_set] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_nil] = ACTIONS(131),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(39),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_number_long] = ACTIONS(133),
    [sym_number_double] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_POUND_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_LPARENquote] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_POUND_LBRACE] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_POUND_BANG] = ACTIONS(133),
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_LPARENcomment] = ACTIONS(133),
  },
  [24] = {
    [sym__hex_char] = ACTIONS(137),
  },
  [25] = {
    [sym__octal_num] = STATE(61),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(141),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_nil] = ACTIONS(143),
    [sym_true] = ACTIONS(143),
    [sym_false] = ACTIONS(143),
    [sym_number_long] = ACTIONS(143),
    [sym_number_double] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_POUND_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_LPARENquote] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_POUND_LBRACE] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_POUND_BANG] = ACTIONS(143),
    [anon_sym_POUND_] = ACTIONS(143),
    [anon_sym_LPARENcomment] = ACTIONS(143),
  },
  [27] = {
    [aux_sym_string_repeat1] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(149),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_nil] = ACTIONS(151),
    [sym_true] = ACTIONS(151),
    [sym_false] = ACTIONS(151),
    [sym_number_long] = ACTIONS(151),
    [sym_number_double] = ACTIONS(151),
    [anon_sym_BSLASH] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_POUND_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_LPARENquote] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_COLON_COLON] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_POUND_LBRACE] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_POUND_BANG] = ACTIONS(151),
    [anon_sym_POUND_] = ACTIONS(151),
    [anon_sym_LPARENcomment] = ACTIONS(151),
  },
  [29] = {
    [aux_sym_regex_repeat1] = STATE(65),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(157),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_nil] = ACTIONS(159),
    [sym_true] = ACTIONS(159),
    [sym_false] = ACTIONS(159),
    [sym_number_long] = ACTIONS(159),
    [sym_number_double] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_POUND_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_LPARENquote] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_POUND_LBRACE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(159),
    [anon_sym_POUND_] = ACTIONS(159),
    [anon_sym_LPARENcomment] = ACTIONS(159),
  },
  [31] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(71),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [32] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(71),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(163),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(165),
    [sym_false] = ACTIONS(165),
    [sym_number_long] = ACTIONS(165),
    [sym_number_double] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_POUND_DQUOTE] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_LPARENquote] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_POUND_LBRACE] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_POUND_BANG] = ACTIONS(165),
    [anon_sym_POUND_] = ACTIONS(165),
    [anon_sym_LPARENcomment] = ACTIONS(165),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_nil] = ACTIONS(169),
    [sym_true] = ACTIONS(169),
    [sym_false] = ACTIONS(169),
    [sym_number_long] = ACTIONS(169),
    [sym_number_double] = ACTIONS(169),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_POUND_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_LPARENquote] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_POUND_LBRACE] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_POUND_BANG] = ACTIONS(169),
    [anon_sym_POUND_] = ACTIONS(169),
    [anon_sym_LPARENcomment] = ACTIONS(169),
  },
  [36] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_nil] = ACTIONS(173),
    [sym_true] = ACTIONS(173),
    [sym_false] = ACTIONS(173),
    [sym_number_long] = ACTIONS(173),
    [sym_number_double] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND_DQUOTE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPARENquote] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_POUND_LBRACE] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(173),
    [anon_sym_POUND_] = ACTIONS(173),
    [anon_sym_LPARENcomment] = ACTIONS(173),
  },
  [38] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [39] = {
    [sym__anything] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym_number] = STATE(68),
    [sym_character] = STATE(68),
    [sym_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_hash_map] = STATE(68),
    [sym_set] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(68),
    [sym_nil] = ACTIONS(177),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [40] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_nil] = ACTIONS(181),
    [sym_true] = ACTIONS(181),
    [sym_false] = ACTIONS(181),
    [sym_number_long] = ACTIONS(181),
    [sym_number_double] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_LPARENquote] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_POUND_LBRACE] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_POUND_BANG] = ACTIONS(181),
    [anon_sym_POUND_] = ACTIONS(181),
    [anon_sym_LPARENcomment] = ACTIONS(181),
  },
  [42] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [43] = {
    [sym__anything] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_number] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_keyword] = STATE(70),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_hash_map] = STATE(70),
    [sym_set] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(70),
    [sym_nil] = ACTIONS(185),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(91),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [44] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_nil] = ACTIONS(189),
    [sym_true] = ACTIONS(189),
    [sym_false] = ACTIONS(189),
    [sym_number_long] = ACTIONS(189),
    [sym_number_double] = ACTIONS(189),
    [anon_sym_BSLASH] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_POUND_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_LPARENquote] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_POUND_LBRACE] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_POUND_BANG] = ACTIONS(189),
    [anon_sym_POUND_] = ACTIONS(189),
    [anon_sym_LPARENcomment] = ACTIONS(189),
  },
  [46] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [47] = {
    [sym_nil] = ACTIONS(193),
    [sym_true] = ACTIONS(193),
    [sym_false] = ACTIONS(193),
    [sym_number_long] = ACTIONS(193),
    [sym_number_double] = ACTIONS(193),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_POUND_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_LPARENquote] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_POUND_BANG] = ACTIONS(193),
    [anon_sym_POUND_] = ACTIONS(193),
    [anon_sym_LPARENcomment] = ACTIONS(193),
  },
  [48] = {
    [sym__anything] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_number] = STATE(71),
    [sym_character] = STATE(71),
    [sym_string] = STATE(71),
    [sym_regex] = STATE(71),
    [sym_quote] = STATE(71),
    [sym_keyword] = STATE(71),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(71),
    [sym_vector] = STATE(71),
    [sym_hash_map] = STATE(71),
    [sym_hash_map_value] = STATE(72),
    [sym_set] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(197),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [49] = {
    [sym__anything] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_string] = STATE(47),
    [sym_regex] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_keyword] = STATE(47),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_hash_map] = STATE(47),
    [sym_hash_map_kv_pair] = STATE(74),
    [sym_hash_map_key] = STATE(48),
    [sym_set] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_hash_map_repeat1] = STATE(74),
    [sym_nil] = ACTIONS(93),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(99),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [50] = {
    [sym__anything] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_string] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_set] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_nil] = ACTIONS(201),
    [sym_true] = ACTIONS(201),
    [sym_false] = ACTIONS(201),
    [sym_number_long] = ACTIONS(201),
    [sym_number_double] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_POUND_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_LPARENquote] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_COLON_COLON] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_POUND_LBRACE] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_POUND_BANG] = ACTIONS(201),
    [anon_sym_POUND_] = ACTIONS(201),
    [anon_sym_LPARENcomment] = ACTIONS(201),
  },
  [52] = {
    [sym__anything] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_set] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [sym_nil] = ACTIONS(113),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [53] = {
    [sym__anything] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym_character] = STATE(76),
    [sym_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_keyword] = STATE(76),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_hash_map] = STATE(76),
    [sym_set] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(76),
    [sym_nil] = ACTIONS(205),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_nil] = ACTIONS(209),
    [sym_true] = ACTIONS(209),
    [sym_false] = ACTIONS(209),
    [sym_number_long] = ACTIONS(209),
    [sym_number_double] = ACTIONS(209),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_POUND_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_LPARENquote] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_POUND_LBRACE] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_POUND_BANG] = ACTIONS(209),
    [anon_sym_POUND_] = ACTIONS(209),
    [anon_sym_LPARENcomment] = ACTIONS(209),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_nil] = ACTIONS(213),
    [sym_true] = ACTIONS(213),
    [sym_false] = ACTIONS(213),
    [sym_number_long] = ACTIONS(213),
    [sym_number_double] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_POUND_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_LPARENquote] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUND_LBRACE] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_POUND_BANG] = ACTIONS(213),
    [anon_sym_POUND_] = ACTIONS(213),
    [anon_sym_LPARENcomment] = ACTIONS(213),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_nil] = ACTIONS(217),
    [sym_true] = ACTIONS(217),
    [sym_false] = ACTIONS(217),
    [sym_number_long] = ACTIONS(217),
    [sym_number_double] = ACTIONS(217),
    [anon_sym_BSLASH] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_POUND_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_LPARENquote] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_COLON_COLON] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_POUND_LBRACE] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_POUND_BANG] = ACTIONS(217),
    [anon_sym_POUND_] = ACTIONS(217),
    [anon_sym_LPARENcomment] = ACTIONS(217),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_nil] = ACTIONS(221),
    [sym_true] = ACTIONS(221),
    [sym_false] = ACTIONS(221),
    [sym_number_long] = ACTIONS(221),
    [sym_number_double] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LPARENquote] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_POUND_LBRACE] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_POUND_BANG] = ACTIONS(221),
    [anon_sym_POUND_] = ACTIONS(221),
    [anon_sym_LPARENcomment] = ACTIONS(221),
  },
  [58] = {
    [sym__anything] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym_number] = STATE(68),
    [sym_character] = STATE(68),
    [sym_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_hash_map] = STATE(68),
    [sym_set] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(68),
    [sym_nil] = ACTIONS(177),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_number_long] = ACTIONS(11),
    [sym_number_double] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_LPARENquote] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [anon_sym_POUND_] = ACTIONS(83),
    [anon_sym_LPARENcomment] = ACTIONS(41),
  },
  [59] = {
    [sym__anything] = STATE(59),
    [sym_boolean] = STATE(59),
    [sym_number] = STATE(59),
    [sym_character] = STATE(59),
    [sym_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym_quote] = STATE(59),
    [sym_keyword] = STATE(59),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_hash_map] = STATE(59),
    [sym_set] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_nil] = ACTIONS(229),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_LPARENquote] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_POUND_LBRACE] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(274),
    [anon_sym_POUND_] = ACTIONS(277),
    [anon_sym_LPARENcomment] = ACTIONS(280),
  },
  [60] = {
    [sym__hex_char] = ACTIONS(283),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_nil] = ACTIONS(285),
    [sym_true] = ACTIONS(285),
    [sym_false] = ACTIONS(285),
    [sym_number_long] = ACTIONS(285),
    [sym_number_double] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_POUND_DQUOTE] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_LPARENquote] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_POUND_LBRACE] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_POUND_BANG] = ACTIONS(285),
    [anon_sym_POUND_] = ACTIONS(285),
    [anon_sym_LPARENcomment] = ACTIONS(285),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_nil] = ACTIONS(289),
    [sym_true] = ACTIONS(289),
    [sym_false] = ACTIONS(289),
    [sym_number_long] = ACTIONS(289),
    [sym_number_double] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_POUND_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_LPARENquote] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_COLON_COLON] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_POUND_LBRACE] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_POUND_BANG] = ACTIONS(289),
    [anon_sym_POUND_] = ACTIONS(289),
    [anon_sym_LPARENcomment] = ACTIONS(289),
  },
  [63] = {
    [aux_sym_string_repeat1] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(295),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_nil] = ACTIONS(298),
    [sym_true] = ACTIONS(298),
    [sym_false] = ACTIONS(298),
    [sym_number_long] = ACTIONS(298),
    [sym_number_double] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_POUND_DQUOTE] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [anon_sym_LPARENquote] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(300),
    [anon_sym_COLON_COLON] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_POUND_LBRACE] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_POUND_BANG] = ACTIONS(298),
    [anon_sym_POUND_] = ACTIONS(298),
    [anon_sym_LPARENcomment] = ACTIONS(298),
  },
  [65] = {
    [aux_sym_regex_repeat1] = STATE(65),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASHn_BSLASHr_RBRACK_SLASH] = ACTIONS(304),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_nil] = ACTIONS(307),
    [sym_true] = ACTIONS(307),
    [sym_false] = ACTIONS(307),
    [sym_number_long] = ACTIONS(307),
    [sym_number_double] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_POUND_DQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_LPARENquote] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_POUND_LBRACE] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_POUND_BANG] = ACTIONS(307),
    [anon_sym_POUND_] = ACTIONS(307),
    [anon_sym_LPARENcomment] = ACTIONS(307),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_nil] = ACTIONS(311),
    [sym_true] = ACTIONS(311),
    [sym_false] = ACTIONS(311),
    [sym_number_long] = ACTIONS(311),
    [sym_number_double] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_POUND_DQUOTE] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_LPARENquote] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_POUND_LBRACE] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_POUND_BANG] = ACTIONS(311),
    [anon_sym_POUND_] = ACTIONS(311),
    [anon_sym_LPARENcomment] = ACTIONS(311),
  },
  [68] = {
    [sym__anything] = STATE(68),
    [sym_boolean] = STATE(68),
    [sym_number] = STATE(68),
    [sym_character] = STATE(68),
    [sym_string] = STATE(68),
    [sym_regex] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_keyword] = STATE(68),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_hash_map] = STATE(68),
    [sym_set] = STATE(68),
    [sym_comment] = STATE(68),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(68),
    [sym_nil] = ACTIONS(315),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_LPARENquote] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_POUND_LBRACE] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(274),
    [anon_sym_POUND_] = ACTIONS(321),
    [anon_sym_LPARENcomment] = ACTIONS(280),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [sym_nil] = ACTIONS(324),
    [sym_true] = ACTIONS(324),
    [sym_false] = ACTIONS(324),
    [sym_number_long] = ACTIONS(324),
    [sym_number_double] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_POUND_DQUOTE] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_LPARENquote] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_COLON_COLON] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_POUND_LBRACE] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_POUND_BANG] = ACTIONS(324),
    [anon_sym_POUND_] = ACTIONS(324),
    [anon_sym_LPARENcomment] = ACTIONS(324),
  },
  [70] = {
    [sym__anything] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_number] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_regex] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_keyword] = STATE(70),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_hash_map] = STATE(70),
    [sym_set] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(70),
    [sym_nil] = ACTIONS(328),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_LPARENquote] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_POUND_LBRACE] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(274),
    [anon_sym_POUND_] = ACTIONS(334),
    [anon_sym_LPARENcomment] = ACTIONS(280),
  },
  [71] = {
    [sym_nil] = ACTIONS(337),
    [sym_true] = ACTIONS(337),
    [sym_false] = ACTIONS(337),
    [sym_number_long] = ACTIONS(337),
    [sym_number_double] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_POUND_DQUOTE] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LPARENquote] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_POUND_LBRACE] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_POUND_BANG] = ACTIONS(337),
    [anon_sym_POUND_] = ACTIONS(337),
    [anon_sym_LPARENcomment] = ACTIONS(337),
  },
  [72] = {
    [sym_nil] = ACTIONS(341),
    [sym_true] = ACTIONS(341),
    [sym_false] = ACTIONS(341),
    [sym_number_long] = ACTIONS(341),
    [sym_number_double] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_POUND_DQUOTE] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_LPARENquote] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_COLON_COLON] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_POUND_LBRACE] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_POUND_BANG] = ACTIONS(341),
    [anon_sym_POUND_] = ACTIONS(341),
    [anon_sym_LPARENcomment] = ACTIONS(341),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [sym_nil] = ACTIONS(345),
    [sym_true] = ACTIONS(345),
    [sym_false] = ACTIONS(345),
    [sym_number_long] = ACTIONS(345),
    [sym_number_double] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_POUND_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_LPARENquote] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_COLON_COLON] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_POUND_LBRACE] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_POUND_BANG] = ACTIONS(345),
    [anon_sym_POUND_] = ACTIONS(345),
    [anon_sym_LPARENcomment] = ACTIONS(345),
  },
  [74] = {
    [sym__anything] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym_character] = STATE(47),
    [sym_string] = STATE(47),
    [sym_regex] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_keyword] = STATE(47),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_hash_map] = STATE(47),
    [sym_hash_map_kv_pair] = STATE(74),
    [sym_hash_map_key] = STATE(48),
    [sym_set] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_hash_map_repeat1] = STATE(74),
    [sym_nil] = ACTIONS(349),
    [sym_true] = ACTIONS(352),
    [sym_false] = ACTIONS(352),
    [sym_number_long] = ACTIONS(355),
    [sym_number_double] = ACTIONS(355),
    [anon_sym_BSLASH] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_POUND_DQUOTE] = ACTIONS(364),
    [anon_sym_SQUOTE] = ACTIONS(367),
    [anon_sym_LPARENquote] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_COLON_COLON] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_POUND_LBRACE] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_POUND_BANG] = ACTIONS(396),
    [anon_sym_POUND_] = ACTIONS(399),
    [anon_sym_LPARENcomment] = ACTIONS(402),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_nil] = ACTIONS(405),
    [sym_true] = ACTIONS(405),
    [sym_false] = ACTIONS(405),
    [sym_number_long] = ACTIONS(405),
    [sym_number_double] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_LPARENquote] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_POUND_LBRACE] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_POUND_BANG] = ACTIONS(405),
    [anon_sym_POUND_] = ACTIONS(405),
    [anon_sym_LPARENcomment] = ACTIONS(405),
  },
  [76] = {
    [sym__anything] = STATE(76),
    [sym_boolean] = STATE(76),
    [sym_number] = STATE(76),
    [sym_character] = STATE(76),
    [sym_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_keyword] = STATE(76),
    [sym_unqualified_keyword] = STATE(20),
    [sym_qualified_keyword] = STATE(20),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_hash_map] = STATE(76),
    [sym_set] = STATE(76),
    [sym_comment] = STATE(76),
    [sym_semicolon] = STATE(21),
    [sym_shebang_line] = STATE(21),
    [sym_ignore_form] = STATE(21),
    [sym_comment_macro] = STATE(21),
    [aux_sym_program_repeat1] = STATE(76),
    [sym_nil] = ACTIONS(409),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [sym_number_long] = ACTIONS(235),
    [sym_number_double] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND_DQUOTE] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [anon_sym_LPARENquote] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_COLON_COLON] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_POUND_LBRACE] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(274),
    [anon_sym_POUND_] = ACTIONS(415),
    [anon_sym_LPARENcomment] = ACTIONS(280),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_nil] = ACTIONS(418),
    [sym_true] = ACTIONS(418),
    [sym_false] = ACTIONS(418),
    [sym_number_long] = ACTIONS(418),
    [sym_number_double] = ACTIONS(418),
    [anon_sym_BSLASH] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [anon_sym_POUND_DQUOTE] = ACTIONS(418),
    [anon_sym_SQUOTE] = ACTIONS(418),
    [anon_sym_LPARENquote] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_COLON_COLON] = ACTIONS(418),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_POUND_LBRACE] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_POUND_BANG] = ACTIONS(418),
    [anon_sym_POUND_] = ACTIONS(418),
    [anon_sym_LPARENcomment] = ACTIONS(418),
  },
  [78] = {
    [sym__hex_char] = ACTIONS(422),
  },
  [79] = {
    [sym__hex_char] = ACTIONS(424),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym_nil] = ACTIONS(426),
    [sym_true] = ACTIONS(426),
    [sym_false] = ACTIONS(426),
    [sym_number_long] = ACTIONS(426),
    [sym_number_double] = ACTIONS(426),
    [anon_sym_BSLASH] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [anon_sym_POUND_DQUOTE] = ACTIONS(426),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [anon_sym_LPARENquote] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_COLON_COLON] = ACTIONS(426),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_POUND_LBRACE] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_POUND_BANG] = ACTIONS(426),
    [anon_sym_POUND_] = ACTIONS(426),
    [anon_sym_LPARENcomment] = ACTIONS(426),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(22),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = false}, SHIFT(24),
  [55] = {.count = 1, .reusable = false}, SHIFT(25),
  [57] = {.count = 1, .reusable = false}, SHIFT(26),
  [59] = {.count = 1, .reusable = false}, SHIFT(27),
  [61] = {.count = 1, .reusable = false}, SHIFT(28),
  [63] = {.count = 1, .reusable = false}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, SHIFT(30),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, SHIFT(31),
  [71] = {.count = 1, .reusable = true}, SHIFT(32),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, SHIFT(35),
  [77] = {.count = 1, .reusable = true}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, SHIFT(36),
  [81] = {.count = 1, .reusable = true}, SHIFT(37),
  [83] = {.count = 1, .reusable = true}, SHIFT(38),
  [85] = {.count = 1, .reusable = true}, SHIFT(43),
  [87] = {.count = 1, .reusable = true}, SHIFT(40),
  [89] = {.count = 1, .reusable = true}, SHIFT(41),
  [91] = {.count = 1, .reusable = true}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, SHIFT(47),
  [95] = {.count = 1, .reusable = true}, SHIFT(44),
  [97] = {.count = 1, .reusable = true}, SHIFT(45),
  [99] = {.count = 1, .reusable = true}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, SHIFT(53),
  [103] = {.count = 1, .reusable = true}, SHIFT(50),
  [105] = {.count = 1, .reusable = true}, SHIFT(51),
  [107] = {.count = 1, .reusable = true}, SHIFT(52),
  [109] = {.count = 1, .reusable = false}, SHIFT(54),
  [111] = {.count = 1, .reusable = false}, SHIFT(55),
  [113] = {.count = 1, .reusable = true}, SHIFT(56),
  [115] = {.count = 1, .reusable = true}, SHIFT(58),
  [117] = {.count = 1, .reusable = true}, SHIFT(57),
  [119] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(59),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(60),
  [139] = {.count = 1, .reusable = true}, SHIFT(61),
  [141] = {.count = 1, .reusable = false}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [147] = {.count = 1, .reusable = false}, SHIFT(62),
  [149] = {.count = 1, .reusable = false}, SHIFT(63),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [155] = {.count = 1, .reusable = false}, SHIFT(64),
  [157] = {.count = 1, .reusable = false}, SHIFT(65),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(66),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(68),
  [179] = {.count = 1, .reusable = true}, SHIFT(67),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(70),
  [187] = {.count = 1, .reusable = true}, SHIFT(69),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [197] = {.count = 1, .reusable = true}, SHIFT(71),
  [199] = {.count = 1, .reusable = true}, SHIFT(73),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(76),
  [207] = {.count = 1, .reusable = true}, SHIFT(75),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(77),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [283] = {.count = 1, .reusable = true}, SHIFT(78),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [304] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(65),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_quote, 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_quote, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(47),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(44),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(12),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(14),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(15),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(16),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(46),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(18),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [422] = {.count = 1, .reusable = true}, SHIFT(79),
  [424] = {.count = 1, .reusable = true}, SHIFT(80),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
