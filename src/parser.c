#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_RPAREN = 13,
  anon_sym_COLON_COLON_EQ = 14,
  anon_sym_or = 15,
  anon_sym_LF_LF = 16,
  sym_goal = 17,
  sym_string = 18,
  sym_regex = 19,
  sym__rule_item = 20,
  sym_modifier = 21,
  sym_rule_block = 22,
  sym_rule_option = 23,
  sym_rule_definition = 24,
  aux_sym_goal_repeat1 = 25,
  aux_sym_rule_block_repeat1 = 26,
  aux_sym_rule_definition_repeat1 = 27,
  alias_sym_rule_name = 28,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
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
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 0},
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LF_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_goal] = STATE(28),
    [sym_rule_definition] = STATE(14),
    [aux_sym_goal_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
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
    ACTIONS(23), 2,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [27] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_rule_option,
    STATE(5), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [53] = 4,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_modifier,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(35), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [73] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_LF_LF,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [99] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_rule_option,
    STATE(5), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [122] = 6,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(2), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [145] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(7), 5,
      sym_string,
      sym_regex,
      sym__rule_item,
      sym_rule_block,
      aux_sym_rule_block_repeat1,
  [165] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(47), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [177] = 2,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(51), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [189] = 2,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(55), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [201] = 2,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(59), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [213] = 2,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(63), 6,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LF_LF,
      sym_identifier,
  [225] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 2,
      anon_sym_LF,
      sym_comment,
    STATE(15), 2,
      sym_rule_definition,
      aux_sym_goal_repeat1,
  [240] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(76), 2,
      anon_sym_LF,
      sym_comment,
    STATE(15), 2,
      sym_rule_definition,
      aux_sym_goal_repeat1,
  [255] = 1,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_identifier,
  [262] = 1,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      sym_identifier,
  [269] = 3,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(86), 1,
      anon_sym_LF_LF,
    STATE(18), 1,
      aux_sym_rule_definition_repeat1,
  [279] = 3,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      anon_sym_LF_LF,
    STATE(20), 1,
      aux_sym_rule_definition_repeat1,
  [289] = 3,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      anon_sym_LF_LF,
    STATE(18), 1,
      aux_sym_rule_definition_repeat1,
  [299] = 2,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(96), 1,
      anon_sym_LF_LF,
  [306] = 1,
    ACTIONS(98), 1,
      sym_regex_pattern,
  [310] = 1,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON_EQ,
  [314] = 1,
    ACTIONS(102), 1,
      anon_sym_or,
  [318] = 1,
    ACTIONS(104), 1,
      anon_sym_LF,
  [322] = 1,
    ACTIONS(106), 1,
      anon_sym_SLASH2,
  [326] = 1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
  [330] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [334] = 1,
    ACTIONS(112), 1,
      aux_sym_string_token1,
  [338] = 1,
    ACTIONS(90), 1,
      anon_sym_LF_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 326,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(11),
  [12] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_block_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(29),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(22),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_option, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_option, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_block, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_item, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_item, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goal, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_goal_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2), SHIFT_REPEAT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
