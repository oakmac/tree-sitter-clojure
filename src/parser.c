#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 60
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  sym_string = 20,
  anon_sym_POUND_DQUOTE = 21,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 22,
  aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH = 23,
  anon_sym_DQUOTE = 24,
  anon_sym_COLON = 25,
  anon_sym_COLON_COLON = 26,
  sym__keyword_chars = 27,
  anon_sym_POUND_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_LBRACE = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_SEMI = 33,
  aux_sym_SLASH_DOT_STAR_SLASH = 34,
  anon_sym_POUND_BANG = 35,
  anon_sym_POUND_ = 36,
  anon_sym_LPARENcomment = 37,
  anon_sym_RPAREN = 38,
  sym_program = 39,
  sym__anything = 40,
  sym_number = 41,
  sym_character = 42,
  sym__special_char = 43,
  sym__unicode_char = 44,
  sym__octal_char = 45,
  sym__octal_num = 46,
  sym_regex = 47,
  sym_keyword = 48,
  sym_unqualified_keyword = 49,
  sym_qualified_keyword = 50,
  sym_set = 51,
  sym_hash_map = 52,
  sym_hash_map_kv_pair = 53,
  sym_hash_map_key = 54,
  sym_hash_map_value = 55,
  sym_vector = 56,
  sym_comment = 57,
  sym_semicolon = 58,
  sym_shebang_line = 59,
  sym_ignore_form = 60,
  sym_comment_macro = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym_regex_repeat1 = 63,
  aux_sym_hash_map_repeat1 = 64,
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
  [sym_string] = "string",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = "/\\\\(.|\\n)/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [sym__keyword_chars] = "_keyword_chars",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_DOT_STAR_SLASH] = "/.*/",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_POUND_] = "#_",
  [anon_sym_LPARENcomment] = "(comment",
  [anon_sym_RPAREN] = ")",
  [sym_program] = "program",
  [sym__anything] = "_anything",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym__special_char] = "_special_char",
  [sym__unicode_char] = "_unicode_char",
  [sym__octal_char] = "_octal_char",
  [sym__octal_num] = "_octal_num",
  [sym_regex] = "regex",
  [sym_keyword] = "keyword",
  [sym_unqualified_keyword] = "unqualified_keyword",
  [sym_qualified_keyword] = "qualified_keyword",
  [sym_set] = "set",
  [sym_hash_map] = "hash_map",
  [sym_hash_map_kv_pair] = "hash_map_kv_pair",
  [sym_hash_map_key] = "hash_map_key",
  [sym_hash_map_value] = "hash_map_value",
  [sym_vector] = "vector",
  [sym_comment] = "comment",
  [sym_semicolon] = "semicolon",
  [sym_shebang_line] = "shebang_line",
  [sym_ignore_form] = "ignore_form",
  [sym_comment_macro] = "comment_macro",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
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
  [anon_sym_RPAREN] = {
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
  [sym_regex] = {
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
  [sym_set] = {
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
  [sym_vector] = {
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
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        SKIP(0);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(39);
      if (lookahead == 'o')
        ADVANCE(48);
      if (lookahead == 'r')
        ADVANCE(49);
      if (lookahead == 's')
        ADVANCE(55);
      if (lookahead == 't')
        ADVANCE(60);
      if (lookahead == 'u')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '}')
        ADVANCE(68);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(75);
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
      if (lookahead == 'c')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'o')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'm')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'm')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'n')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 't')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPARENcomment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_double);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__hex_char);
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'r')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'm')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'f')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'd')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_formfeed);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      if (lookahead == 'i')
        ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'w')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'l')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'i')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_newline);
      END_STATE();
    case 46:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_o);
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
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 55:
      if (lookahead == 'p')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'a')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'c')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'b')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 63:
      if (lookahead == 'u')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_long);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number_long);
      if (lookahead == '.')
        ADVANCE(72);
      if (lookahead == '_')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_double);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 73:
      if (lookahead == '_')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '.')
        ADVANCE(72);
      if (lookahead == '_')
        ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__hex_char);
      END_STATE();
    case 76:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ',')
        SKIP(76);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == '\"')
        ADVANCE(78);
      if (lookahead == '\\')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 79:
      if (lookahead == '\n')
        ADVANCE(77);
      if (lookahead != 0)
        ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 's')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'e')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 85:
      if (lookahead == 'i')
        ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 87:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        SKIP(87);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '}')
        ADVANCE(68);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(88);
      if (lookahead == ',')
        ADVANCE(89);
      if (lookahead == 'b')
        ADVANCE(90);
      if (lookahead == 'f')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 'o')
        ADVANCE(48);
      if (lookahead == 'r')
        ADVANCE(101);
      if (lookahead == 's')
        ADVANCE(102);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_char);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'c')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'k')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'p')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'a')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'c')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'e')
        ADVANCE(50);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'p')
        ADVANCE(56);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_char);
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 104:
      if (lookahead == '\n')
        SKIP(104);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (lookahead != 0)
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 106:
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 108:
      if (lookahead == ',')
        SKIP(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (lookahead == '!' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__keyword_chars);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ',')
        SKIP(110);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '}')
        ADVANCE(68);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 111:
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ',')
        SKIP(111);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '\"')
        ADVANCE(77);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(16);
      if (lookahead == ',')
        SKIP(115);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(27);
      if (lookahead == '[')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '{')
        ADVANCE(67);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        SKIP(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == ',')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(75);
      END_STATE();
    case 118:
      if (lookahead == ',')
        SKIP(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(119);
      if (('4' <= lookahead && lookahead <= '7'))
        ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 108},
  [6] = {.lex_state = 108},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 112},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 115},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 118},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 110},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 115},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 117},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 104},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 110},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 110},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 87},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 87},
  [56] = {.lex_state = 115},
  [57] = {.lex_state = 117},
  [58] = {.lex_state = 117},
  [59] = {.lex_state = 87},
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
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_POUND_] = ACTIONS(1),
    [anon_sym_LPARENcomment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(14),
    [sym__anything] = STATE(17),
    [sym_number] = STATE(17),
    [sym_character] = STATE(17),
    [sym_regex] = STATE(17),
    [sym_keyword] = STATE(17),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(17),
    [sym_hash_map] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(7),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(29),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_nil] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_number_long] = ACTIONS(33),
    [sym_number_double] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_COLON_COLON] = ACTIONS(33),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_POUND_BANG] = ACTIONS(33),
    [anon_sym_POUND_] = ACTIONS(33),
    [anon_sym_LPARENcomment] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [3] = {
    [sym__special_char] = STATE(18),
    [sym__unicode_char] = STATE(18),
    [sym__octal_char] = STATE(18),
    [sym__normal_char] = ACTIONS(37),
    [anon_sym_newline] = ACTIONS(37),
    [anon_sym_space] = ACTIONS(37),
    [anon_sym_tab] = ACTIONS(37),
    [anon_sym_formfeed] = ACTIONS(37),
    [anon_sym_backspace] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_u] = ACTIONS(39),
    [anon_sym_o] = ACTIONS(41),
  },
  [4] = {
    [aux_sym_regex_repeat1] = STATE(22),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
  },
  [5] = {
    [sym__keyword_chars] = ACTIONS(49),
  },
  [6] = {
    [sym__keyword_chars] = ACTIONS(51),
  },
  [7] = {
    [sym__anything] = STATE(27),
    [sym_number] = STATE(27),
    [sym_character] = STATE(27),
    [sym_regex] = STATE(27),
    [sym_keyword] = STATE(27),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(27),
    [sym_hash_map] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(27),
    [sym_nil] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(53),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(57),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [8] = {
    [sym__anything] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_hash_map_kv_pair] = STATE(32),
    [sym_hash_map_key] = STATE(31),
    [sym_vector] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_hash_map_repeat1] = STATE(32),
    [sym_nil] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [9] = {
    [sym__anything] = STATE(35),
    [sym_number] = STATE(35),
    [sym_character] = STATE(35),
    [sym_regex] = STATE(35),
    [sym_keyword] = STATE(35),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(35),
    [sym_hash_map] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(35),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(65),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(69),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [10] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(71),
  },
  [11] = {
    [aux_sym_SLASH_DOT_STAR_SLASH] = ACTIONS(73),
  },
  [12] = {
    [sym__anything] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(29),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [13] = {
    [sym__anything] = STATE(41),
    [sym_number] = STATE(41),
    [sym_character] = STATE(41),
    [sym_regex] = STATE(41),
    [sym_keyword] = STATE(41),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(41),
    [sym_hash_map] = STATE(41),
    [sym_vector] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(41),
    [sym_nil] = ACTIONS(77),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(77),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(81),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(83),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_nil] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_number_long] = ACTIONS(85),
    [sym_number_double] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
    [anon_sym_POUND_DQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_POUND_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_POUND_BANG] = ACTIONS(85),
    [anon_sym_POUND_] = ACTIONS(85),
    [anon_sym_LPARENcomment] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_number_long] = ACTIONS(89),
    [sym_number_double] = ACTIONS(89),
    [anon_sym_BSLASH] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [anon_sym_POUND_DQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_POUND_BANG] = ACTIONS(89),
    [anon_sym_POUND_] = ACTIONS(89),
    [anon_sym_LPARENcomment] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [17] = {
    [sym__anything] = STATE(42),
    [sym_number] = STATE(42),
    [sym_character] = STATE(42),
    [sym_regex] = STATE(42),
    [sym_keyword] = STATE(42),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(42),
    [sym_hash_map] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_nil] = ACTIONS(95),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(95),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(29),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_number_long] = ACTIONS(97),
    [sym_number_double] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [anon_sym_POUND_DQUOTE] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_POUND_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_POUND_BANG] = ACTIONS(97),
    [anon_sym_POUND_] = ACTIONS(97),
    [anon_sym_LPARENcomment] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
  },
  [19] = {
    [sym__hex_char] = ACTIONS(101),
  },
  [20] = {
    [sym__octal_num] = STATE(44),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(105),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_nil] = ACTIONS(107),
    [sym_true] = ACTIONS(107),
    [sym_false] = ACTIONS(107),
    [sym_number_long] = ACTIONS(107),
    [sym_number_double] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [anon_sym_POUND_DQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [anon_sym_POUND_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_POUND_BANG] = ACTIONS(107),
    [anon_sym_POUND_] = ACTIONS(107),
    [anon_sym_LPARENcomment] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
  },
  [22] = {
    [aux_sym_regex_repeat1] = STATE(46),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_nil] = ACTIONS(117),
    [sym_true] = ACTIONS(117),
    [sym_false] = ACTIONS(117),
    [sym_number_long] = ACTIONS(117),
    [sym_number_double] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [anon_sym_POUND_DQUOTE] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_POUND_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_POUND_BANG] = ACTIONS(117),
    [anon_sym_POUND_] = ACTIONS(117),
    [anon_sym_LPARENcomment] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_nil] = ACTIONS(121),
    [sym_true] = ACTIONS(121),
    [sym_false] = ACTIONS(121),
    [sym_number_long] = ACTIONS(121),
    [sym_number_double] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [anon_sym_POUND_DQUOTE] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_POUND_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_POUND_BANG] = ACTIONS(121),
    [anon_sym_POUND_] = ACTIONS(121),
    [anon_sym_LPARENcomment] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_nil] = ACTIONS(125),
    [sym_true] = ACTIONS(125),
    [sym_false] = ACTIONS(125),
    [sym_number_long] = ACTIONS(125),
    [sym_number_double] = ACTIONS(125),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym_string] = ACTIONS(125),
    [anon_sym_POUND_DQUOTE] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_POUND_BANG] = ACTIONS(125),
    [anon_sym_POUND_] = ACTIONS(125),
    [anon_sym_LPARENcomment] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
  },
  [26] = {
    [sym__anything] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(57),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [27] = {
    [sym__anything] = STATE(48),
    [sym_number] = STATE(48),
    [sym_character] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_keyword] = STATE(48),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(48),
    [sym_hash_map] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(129),
    [sym_true] = ACTIONS(129),
    [sym_false] = ACTIONS(129),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(129),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(57),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_nil] = ACTIONS(133),
    [sym_true] = ACTIONS(133),
    [sym_false] = ACTIONS(133),
    [sym_number_long] = ACTIONS(133),
    [sym_number_double] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [sym_string] = ACTIONS(133),
    [anon_sym_POUND_DQUOTE] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_POUND_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_POUND_BANG] = ACTIONS(133),
    [anon_sym_POUND_] = ACTIONS(133),
    [anon_sym_LPARENcomment] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
  },
  [29] = {
    [sym__anything] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [30] = {
    [sym_nil] = ACTIONS(137),
    [sym_true] = ACTIONS(137),
    [sym_false] = ACTIONS(137),
    [sym_number_long] = ACTIONS(137),
    [sym_number_double] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(137),
    [sym_string] = ACTIONS(137),
    [anon_sym_POUND_DQUOTE] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_POUND_LBRACE] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_POUND_BANG] = ACTIONS(137),
    [anon_sym_POUND_] = ACTIONS(137),
    [anon_sym_LPARENcomment] = ACTIONS(137),
  },
  [31] = {
    [sym__anything] = STATE(49),
    [sym_number] = STATE(49),
    [sym_character] = STATE(49),
    [sym_regex] = STATE(49),
    [sym_keyword] = STATE(49),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(49),
    [sym_hash_map] = STATE(49),
    [sym_hash_map_value] = STATE(50),
    [sym_vector] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(141),
    [sym_true] = ACTIONS(141),
    [sym_false] = ACTIONS(141),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(141),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(57),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [32] = {
    [sym__anything] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_hash_map_kv_pair] = STATE(52),
    [sym_hash_map_key] = STATE(31),
    [sym_vector] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_hash_map_repeat1] = STATE(52),
    [sym_nil] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(59),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(63),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_nil] = ACTIONS(145),
    [sym_true] = ACTIONS(145),
    [sym_false] = ACTIONS(145),
    [sym_number_long] = ACTIONS(145),
    [sym_number_double] = ACTIONS(145),
    [anon_sym_BSLASH] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [anon_sym_POUND_DQUOTE] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_POUND_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_POUND_BANG] = ACTIONS(145),
    [anon_sym_POUND_] = ACTIONS(145),
    [anon_sym_LPARENcomment] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
  },
  [34] = {
    [sym__anything] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(69),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [35] = {
    [sym__anything] = STATE(54),
    [sym_number] = STATE(54),
    [sym_character] = STATE(54),
    [sym_regex] = STATE(54),
    [sym_keyword] = STATE(54),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(54),
    [sym_hash_map] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(54),
    [sym_nil] = ACTIONS(149),
    [sym_true] = ACTIONS(149),
    [sym_false] = ACTIONS(149),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(149),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(69),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_nil] = ACTIONS(153),
    [sym_true] = ACTIONS(153),
    [sym_false] = ACTIONS(153),
    [sym_number_long] = ACTIONS(153),
    [sym_number_double] = ACTIONS(153),
    [anon_sym_BSLASH] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [anon_sym_POUND_DQUOTE] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_POUND_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_POUND_BANG] = ACTIONS(153),
    [anon_sym_POUND_] = ACTIONS(153),
    [anon_sym_LPARENcomment] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_nil] = ACTIONS(157),
    [sym_true] = ACTIONS(157),
    [sym_false] = ACTIONS(157),
    [sym_number_long] = ACTIONS(157),
    [sym_number_double] = ACTIONS(157),
    [anon_sym_BSLASH] = ACTIONS(157),
    [sym_string] = ACTIONS(157),
    [anon_sym_POUND_DQUOTE] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(157),
    [anon_sym_POUND_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_POUND_BANG] = ACTIONS(157),
    [anon_sym_POUND_] = ACTIONS(157),
    [anon_sym_LPARENcomment] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_nil] = ACTIONS(161),
    [sym_true] = ACTIONS(161),
    [sym_false] = ACTIONS(161),
    [sym_number_long] = ACTIONS(161),
    [sym_number_double] = ACTIONS(161),
    [anon_sym_BSLASH] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [anon_sym_POUND_DQUOTE] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [anon_sym_POUND_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_POUND_BANG] = ACTIONS(161),
    [anon_sym_POUND_] = ACTIONS(161),
    [anon_sym_LPARENcomment] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
  },
  [39] = {
    [sym__anything] = STATE(38),
    [sym_number] = STATE(38),
    [sym_character] = STATE(38),
    [sym_regex] = STATE(38),
    [sym_keyword] = STATE(38),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(38),
    [sym_hash_map] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [sym_nil] = ACTIONS(75),
    [sym_true] = ACTIONS(75),
    [sym_false] = ACTIONS(75),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(31),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_nil] = ACTIONS(165),
    [sym_true] = ACTIONS(165),
    [sym_false] = ACTIONS(165),
    [sym_number_long] = ACTIONS(165),
    [sym_number_double] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(165),
    [sym_string] = ACTIONS(165),
    [anon_sym_POUND_DQUOTE] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(165),
    [anon_sym_POUND_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_POUND_BANG] = ACTIONS(165),
    [anon_sym_POUND_] = ACTIONS(165),
    [anon_sym_LPARENcomment] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
  },
  [41] = {
    [sym__anything] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(56),
    [sym_nil] = ACTIONS(169),
    [sym_true] = ACTIONS(169),
    [sym_false] = ACTIONS(169),
    [sym_number_long] = ACTIONS(9),
    [sym_number_double] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_string] = ACTIONS(169),
    [anon_sym_POUND_DQUOTE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_COLON_COLON] = ACTIONS(17),
    [anon_sym_POUND_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_POUND_BANG] = ACTIONS(27),
    [anon_sym_POUND_] = ACTIONS(79),
    [anon_sym_LPARENcomment] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(171),
  },
  [42] = {
    [sym__anything] = STATE(42),
    [sym_number] = STATE(42),
    [sym_character] = STATE(42),
    [sym_regex] = STATE(42),
    [sym_keyword] = STATE(42),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(42),
    [sym_hash_map] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_nil] = ACTIONS(175),
    [sym_true] = ACTIONS(175),
    [sym_false] = ACTIONS(175),
    [sym_number_long] = ACTIONS(178),
    [sym_number_double] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(181),
    [sym_string] = ACTIONS(175),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(208),
    [anon_sym_LPARENcomment] = ACTIONS(211),
  },
  [43] = {
    [sym__hex_char] = ACTIONS(214),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_nil] = ACTIONS(216),
    [sym_true] = ACTIONS(216),
    [sym_false] = ACTIONS(216),
    [sym_number_long] = ACTIONS(216),
    [sym_number_double] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [anon_sym_POUND_DQUOTE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_COLON_COLON] = ACTIONS(216),
    [anon_sym_POUND_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_POUND_BANG] = ACTIONS(216),
    [anon_sym_POUND_] = ACTIONS(216),
    [anon_sym_LPARENcomment] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_nil] = ACTIONS(220),
    [sym_true] = ACTIONS(220),
    [sym_false] = ACTIONS(220),
    [sym_number_long] = ACTIONS(220),
    [sym_number_double] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(220),
    [sym_string] = ACTIONS(220),
    [anon_sym_POUND_DQUOTE] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_COLON_COLON] = ACTIONS(220),
    [anon_sym_POUND_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_POUND_BANG] = ACTIONS(220),
    [anon_sym_POUND_] = ACTIONS(220),
    [anon_sym_LPARENcomment] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
  },
  [46] = {
    [aux_sym_regex_repeat1] = STATE(46),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(230),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_nil] = ACTIONS(232),
    [sym_true] = ACTIONS(232),
    [sym_false] = ACTIONS(232),
    [sym_number_long] = ACTIONS(232),
    [sym_number_double] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(232),
    [sym_string] = ACTIONS(232),
    [anon_sym_POUND_DQUOTE] = ACTIONS(232),
    [anon_sym_COLON] = ACTIONS(234),
    [anon_sym_COLON_COLON] = ACTIONS(232),
    [anon_sym_POUND_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_POUND_BANG] = ACTIONS(232),
    [anon_sym_POUND_] = ACTIONS(232),
    [anon_sym_LPARENcomment] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
  },
  [48] = {
    [sym__anything] = STATE(48),
    [sym_number] = STATE(48),
    [sym_character] = STATE(48),
    [sym_regex] = STATE(48),
    [sym_keyword] = STATE(48),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(48),
    [sym_hash_map] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(48),
    [sym_nil] = ACTIONS(236),
    [sym_true] = ACTIONS(236),
    [sym_false] = ACTIONS(236),
    [sym_number_long] = ACTIONS(178),
    [sym_number_double] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(181),
    [sym_string] = ACTIONS(236),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(239),
    [anon_sym_LPARENcomment] = ACTIONS(211),
  },
  [49] = {
    [sym_nil] = ACTIONS(242),
    [sym_true] = ACTIONS(242),
    [sym_false] = ACTIONS(242),
    [sym_number_long] = ACTIONS(242),
    [sym_number_double] = ACTIONS(242),
    [anon_sym_BSLASH] = ACTIONS(242),
    [sym_string] = ACTIONS(242),
    [anon_sym_POUND_DQUOTE] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_COLON_COLON] = ACTIONS(242),
    [anon_sym_POUND_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_POUND_BANG] = ACTIONS(242),
    [anon_sym_POUND_] = ACTIONS(242),
    [anon_sym_LPARENcomment] = ACTIONS(242),
  },
  [50] = {
    [sym_nil] = ACTIONS(246),
    [sym_true] = ACTIONS(246),
    [sym_false] = ACTIONS(246),
    [sym_number_long] = ACTIONS(246),
    [sym_number_double] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [anon_sym_POUND_DQUOTE] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_COLON_COLON] = ACTIONS(246),
    [anon_sym_POUND_LBRACE] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_POUND_BANG] = ACTIONS(246),
    [anon_sym_POUND_] = ACTIONS(246),
    [anon_sym_LPARENcomment] = ACTIONS(246),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym_nil] = ACTIONS(250),
    [sym_true] = ACTIONS(250),
    [sym_false] = ACTIONS(250),
    [sym_number_long] = ACTIONS(250),
    [sym_number_double] = ACTIONS(250),
    [anon_sym_BSLASH] = ACTIONS(250),
    [sym_string] = ACTIONS(250),
    [anon_sym_POUND_DQUOTE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_COLON_COLON] = ACTIONS(250),
    [anon_sym_POUND_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_POUND_BANG] = ACTIONS(250),
    [anon_sym_POUND_] = ACTIONS(250),
    [anon_sym_LPARENcomment] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
  },
  [52] = {
    [sym__anything] = STATE(30),
    [sym_number] = STATE(30),
    [sym_character] = STATE(30),
    [sym_regex] = STATE(30),
    [sym_keyword] = STATE(30),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(30),
    [sym_hash_map] = STATE(30),
    [sym_hash_map_kv_pair] = STATE(52),
    [sym_hash_map_key] = STATE(31),
    [sym_vector] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_hash_map_repeat1] = STATE(52),
    [sym_nil] = ACTIONS(254),
    [sym_true] = ACTIONS(254),
    [sym_false] = ACTIONS(254),
    [sym_number_long] = ACTIONS(257),
    [sym_number_double] = ACTIONS(257),
    [anon_sym_BSLASH] = ACTIONS(260),
    [sym_string] = ACTIONS(254),
    [anon_sym_POUND_DQUOTE] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(266),
    [anon_sym_COLON_COLON] = ACTIONS(269),
    [anon_sym_POUND_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_POUND_BANG] = ACTIONS(286),
    [anon_sym_POUND_] = ACTIONS(289),
    [anon_sym_LPARENcomment] = ACTIONS(292),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_nil] = ACTIONS(295),
    [sym_true] = ACTIONS(295),
    [sym_false] = ACTIONS(295),
    [sym_number_long] = ACTIONS(295),
    [sym_number_double] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(295),
    [sym_string] = ACTIONS(295),
    [anon_sym_POUND_DQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(295),
    [anon_sym_POUND_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_POUND_BANG] = ACTIONS(295),
    [anon_sym_POUND_] = ACTIONS(295),
    [anon_sym_LPARENcomment] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
  },
  [54] = {
    [sym__anything] = STATE(54),
    [sym_number] = STATE(54),
    [sym_character] = STATE(54),
    [sym_regex] = STATE(54),
    [sym_keyword] = STATE(54),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(54),
    [sym_hash_map] = STATE(54),
    [sym_vector] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(54),
    [sym_nil] = ACTIONS(299),
    [sym_true] = ACTIONS(299),
    [sym_false] = ACTIONS(299),
    [sym_number_long] = ACTIONS(178),
    [sym_number_double] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(181),
    [sym_string] = ACTIONS(299),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(302),
    [anon_sym_LPARENcomment] = ACTIONS(211),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_nil] = ACTIONS(305),
    [sym_true] = ACTIONS(305),
    [sym_false] = ACTIONS(305),
    [sym_number_long] = ACTIONS(305),
    [sym_number_double] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [sym_string] = ACTIONS(305),
    [anon_sym_POUND_DQUOTE] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_COLON_COLON] = ACTIONS(305),
    [anon_sym_POUND_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_POUND_BANG] = ACTIONS(305),
    [anon_sym_POUND_] = ACTIONS(305),
    [anon_sym_LPARENcomment] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
  },
  [56] = {
    [sym__anything] = STATE(56),
    [sym_number] = STATE(56),
    [sym_character] = STATE(56),
    [sym_regex] = STATE(56),
    [sym_keyword] = STATE(56),
    [sym_unqualified_keyword] = STATE(15),
    [sym_qualified_keyword] = STATE(15),
    [sym_set] = STATE(56),
    [sym_hash_map] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_semicolon] = STATE(16),
    [sym_shebang_line] = STATE(16),
    [sym_ignore_form] = STATE(16),
    [sym_comment_macro] = STATE(16),
    [aux_sym_program_repeat1] = STATE(56),
    [sym_nil] = ACTIONS(309),
    [sym_true] = ACTIONS(309),
    [sym_false] = ACTIONS(309),
    [sym_number_long] = ACTIONS(178),
    [sym_number_double] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(181),
    [sym_string] = ACTIONS(309),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_POUND_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_POUND_BANG] = ACTIONS(205),
    [anon_sym_POUND_] = ACTIONS(312),
    [anon_sym_LPARENcomment] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(173),
  },
  [57] = {
    [sym__hex_char] = ACTIONS(315),
  },
  [58] = {
    [sym__hex_char] = ACTIONS(317),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_nil] = ACTIONS(319),
    [sym_true] = ACTIONS(319),
    [sym_false] = ACTIONS(319),
    [sym_number_long] = ACTIONS(319),
    [sym_number_double] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(319),
    [sym_string] = ACTIONS(319),
    [anon_sym_POUND_DQUOTE] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_COLON_COLON] = ACTIONS(319),
    [anon_sym_POUND_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_POUND_BANG] = ACTIONS(319),
    [anon_sym_POUND_] = ACTIONS(319),
    [anon_sym_LPARENcomment] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(17),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_number, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_number, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT(18),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, SHIFT(35),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = false}, SHIFT(36),
  [73] = {.count = 1, .reusable = false}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, SHIFT(41),
  [79] = {.count = 1, .reusable = true}, SHIFT(39),
  [81] = {.count = 1, .reusable = true}, SHIFT(40),
  [83] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(42),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_character, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_character, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(43),
  [103] = {.count = 1, .reusable = true}, SHIFT(44),
  [105] = {.count = 1, .reusable = false}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(46),
  [113] = {.count = 1, .reusable = false}, SHIFT(46),
  [115] = {.count = 1, .reusable = false}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_unqualified_keyword, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_unqualified_keyword, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_keyword, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_qualified_keyword, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(48),
  [131] = {.count = 1, .reusable = true}, SHIFT(47),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_key, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_key, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(49),
  [143] = {.count = 1, .reusable = true}, SHIFT(51),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(54),
  [151] = {.count = 1, .reusable = true}, SHIFT(53),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_semicolon, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_semicolon, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_ignore_form, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_ignore_form, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(56),
  [171] = {.count = 1, .reusable = true}, SHIFT(55),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [214] = {.count = 1, .reusable = true}, SHIFT(57),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__octal_char, 2),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym__octal_char, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_regex, 3),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(46),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(46),
  [230] = {.count = 1, .reusable = false}, REDUCE(aux_sym_regex_repeat1, 2),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_value, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_value, 1),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map_kv_pair, 2),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map_kv_pair, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_hash_map, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_hash_map, 3),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(30),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(3),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(4),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(5),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(6),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(7),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(8),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(9),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(10),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(11),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(29),
  [292] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hash_map_repeat1, 2), SHIFT_REPEAT(13),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_vector, 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_vector, 3),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_comment_macro, 3),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_comment_macro, 3),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [315] = {.count = 1, .reusable = true}, SHIFT(58),
  [317] = {.count = 1, .reusable = true}, SHIFT(59),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__unicode_char, 5),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__unicode_char, 5),
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
