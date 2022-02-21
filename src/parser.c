#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_SLASH2 = 7,
  sym_regex_pattern = 8,
  anon_sym_STAR = 9,
  anon_sym_PLUS = 10,
  anon_sym_QMARK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COLON = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON_COLON_EQ = 15,
  anon_sym_or = 16,
  anon_sym_LF_LF = 17,
  sym_goal = 18,
  sym_string = 19,
  sym_regex = 20,
  sym__rule_item = 21,
  sym_modifier = 22,
  sym_rule_block = 23,
  sym_rule_option = 24,
  sym_rule_definition = 25,
  aux_sym_goal_repeat1 = 26,
  aux_sym_rule_block_repeat1 = 27,
  aux_sym_rule_definition_repeat1 = 28,
  alias_sym_rule_name = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "name",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [sym_regex_pattern] = "regex_pattern",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_or] = "or",
  [anon_sym_LF_LF] = "\n\n",
  [sym_goal] = "goal",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym__rule_item] = "_rule_item",
  [sym_modifier] = "modifier",
  [sym_rule_block] = "rule_block",
  [sym_rule_option] = "rule_option",
  [sym_rule_definition] = "rule_definition",
  [aux_sym_goal_repeat1] = "goal_repeat1",
  [aux_sym_rule_block_repeat1] = "rule_block_repeat1",
  [aux_sym_rule_definition_repeat1] = "rule_definition_repeat1",
  [alias_sym_rule_name] = "rule_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_regex_pattern] = sym_regex_pattern,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [sym_goal] = sym_goal,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym__rule_item] = sym__rule_item,
  [sym_modifier] = sym_modifier,
  [sym_rule_block] = sym_rule_block,
  [sym_rule_option] = sym_rule_option,
  [sym_rule_definition] = sym_rule_definition,
  [aux_sym_goal_repeat1] = aux_sym_goal_repeat1,
  [aux_sym_rule_block_repeat1] = aux_sym_rule_block_repeat1,
  [aux_sym_rule_definition_repeat1] = aux_sym_rule_definition_repeat1,
  [alias_sym_rule_name] = alias_sym_rule_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_goal] = {
    .visible = true,
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
  [sym__rule_item] = {
    .visible = false,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_option] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_goal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_rule_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_pattern = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_pattern] = "pattern",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'o') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LF_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_goal] = STATE(46),
    [sym_rule_definition] = STATE(31),
    [aux_sym_goal_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(12), 1,
      anon_sym_LF,
    ACTIONS(14), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    ACTIONS(20), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(26), 2,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [30] = 4,
    ACTIONS(30), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_modifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(28), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [51] = 4,
    ACTIONS(36), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_modifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(34), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [72] = 8,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_LF,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_COLON,
    ACTIONS(50), 1,
      anon_sym_LF_LF,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [101] = 4,
    ACTIONS(54), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_modifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(52), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [122] = 4,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_modifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(56), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [143] = 8,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_COLON,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      anon_sym_LF_LF,
    STATE(5), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [172] = 7,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [198] = 7,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [224] = 7,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(9), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [250] = 7,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_COLON,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(10), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [276] = 7,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_comment,
    STATE(36), 1,
      sym_rule_option,
    STATE(8), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [301] = 6,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(29), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [323] = 6,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_COLON,
    STATE(12), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [345] = 6,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(29), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [367] = 6,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_rule_option,
    STATE(8), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [389] = 6,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(29), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [411] = 2,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(56), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [424] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(82), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [437] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(86), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [450] = 5,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(11), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [469] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(90), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [482] = 5,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(29), 4,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
  [501] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(52), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [514] = 2,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(94), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [527] = 2,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(98), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [540] = 2,
    ACTIONS(30), 1,
      anon_sym_LF,
    ACTIONS(28), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [553] = 2,
    ACTIONS(12), 1,
      anon_sym_LF,
    ACTIONS(26), 7,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [566] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 2,
      anon_sym_LF,
      sym_comment,
    STATE(30), 2,
      sym_rule_definition,
      aux_sym_goal_repeat1,
  [581] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      anon_sym_LF,
      sym_comment,
    STATE(30), 2,
      sym_rule_definition,
      aux_sym_goal_repeat1,
  [596] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_identifier,
  [603] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_identifier,
  [610] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      anon_sym_LF_LF,
    STATE(34), 1,
      aux_sym_rule_definition_repeat1,
  [620] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_LF_LF,
    STATE(34), 1,
      aux_sym_rule_definition_repeat1,
  [630] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym_LF_LF,
    STATE(35), 1,
      aux_sym_rule_definition_repeat1,
  [640] = 2,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_LF_LF,
  [647] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON_EQ,
  [651] = 1,
    ACTIONS(135), 1,
      anon_sym_or,
  [655] = 1,
    ACTIONS(137), 1,
      anon_sym_SLASH2,
  [659] = 1,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
  [663] = 1,
    ACTIONS(141), 1,
      sym_regex_pattern,
  [667] = 1,
    ACTIONS(143), 1,
      aux_sym_string_token1,
  [671] = 1,
    ACTIONS(127), 1,
      anon_sym_LF_LF,
  [675] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [679] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 389,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 424,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 450,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 501,
  [SMALL_STATE(26)] = 514,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 566,
  [SMALL_STATE(31)] = 581,
  [SMALL_STATE(32)] = 596,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 610,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 640,
  [SMALL_STATE(38)] = 647,
  [SMALL_STATE(39)] = 651,
  [SMALL_STATE(40)] = 655,
  [SMALL_STATE(41)] = 659,
  [SMALL_STATE(42)] = 663,
  [SMALL_STATE(43)] = 667,
  [SMALL_STATE(44)] = 671,
  [SMALL_STATE(45)] = 675,
  [SMALL_STATE(46)] = 679,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(23),
  [12] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_block_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(43),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(42),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 6),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 6),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_option, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_option, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 5),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_option, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_option, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 7),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_item, 1, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_item, 1, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(38),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2), SHIFT_REPEAT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_grammar(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
