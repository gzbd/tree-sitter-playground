#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_list_item_numbered = 1,
  sym_list_item_dash = 2,
  sym_list_item_star = 3,
  sym_text_title = 4,
  sym_bold_text = 5,
  sym_characters = 6,
  sym__new_line = 7,
  sym__indent_levelone = 8,
  sym__indent_leveltwo = 9,
  sym_document = 10,
  sym_sections = 11,
  sym_section_levelzero = 12,
  sym_section_levelone = 13,
  sym_section_leveltwo = 14,
  sym_paragraph_levelzero = 15,
  sym_title_levelzero = 16,
  sym_line_levelzero = 17,
  sym_paragraph_levelone = 18,
  sym_title_levelone = 19,
  sym_line_levelone = 20,
  sym_paragraph_leveltwo = 21,
  sym_title_leveltwo = 22,
  sym_line_leveltwo = 23,
  sym_text = 24,
  aux_sym_sections_repeat1 = 25,
  aux_sym_section_levelzero_repeat1 = 26,
  aux_sym_section_levelone_repeat1 = 27,
  aux_sym_section_leveltwo_repeat1 = 28,
  aux_sym_paragraph_levelzero_repeat1 = 29,
  aux_sym_paragraph_levelzero_repeat2 = 30,
  aux_sym_paragraph_levelone_repeat1 = 31,
  aux_sym_paragraph_leveltwo_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_list_item_numbered] = "list_item_numbered",
  [sym_list_item_dash] = "list_item_dash",
  [sym_list_item_star] = "list_item_star",
  [sym_text_title] = "text_title",
  [sym_bold_text] = "bold_text",
  [sym_characters] = "characters",
  [sym__new_line] = "_new_line",
  [sym__indent_levelone] = "_indent_levelone",
  [sym__indent_leveltwo] = "_indent_leveltwo",
  [sym_document] = "document",
  [sym_sections] = "sections",
  [sym_section_levelzero] = "section_levelzero",
  [sym_section_levelone] = "section_levelone",
  [sym_section_leveltwo] = "section_leveltwo",
  [sym_paragraph_levelzero] = "paragraph_levelzero",
  [sym_title_levelzero] = "title_levelzero",
  [sym_line_levelzero] = "line_levelzero",
  [sym_paragraph_levelone] = "paragraph_levelone",
  [sym_title_levelone] = "title_levelone",
  [sym_line_levelone] = "line_levelone",
  [sym_paragraph_leveltwo] = "paragraph_leveltwo",
  [sym_title_leveltwo] = "title_leveltwo",
  [sym_line_leveltwo] = "line_leveltwo",
  [sym_text] = "text",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_section_levelzero_repeat1] = "section_levelzero_repeat1",
  [aux_sym_section_levelone_repeat1] = "section_levelone_repeat1",
  [aux_sym_section_leveltwo_repeat1] = "section_leveltwo_repeat1",
  [aux_sym_paragraph_levelzero_repeat1] = "paragraph_levelzero_repeat1",
  [aux_sym_paragraph_levelzero_repeat2] = "paragraph_levelzero_repeat2",
  [aux_sym_paragraph_levelone_repeat1] = "paragraph_levelone_repeat1",
  [aux_sym_paragraph_leveltwo_repeat1] = "paragraph_leveltwo_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_list_item_numbered] = sym_list_item_numbered,
  [sym_list_item_dash] = sym_list_item_dash,
  [sym_list_item_star] = sym_list_item_star,
  [sym_text_title] = sym_text_title,
  [sym_bold_text] = sym_bold_text,
  [sym_characters] = sym_characters,
  [sym__new_line] = sym__new_line,
  [sym__indent_levelone] = sym__indent_levelone,
  [sym__indent_leveltwo] = sym__indent_leveltwo,
  [sym_document] = sym_document,
  [sym_sections] = sym_sections,
  [sym_section_levelzero] = sym_section_levelzero,
  [sym_section_levelone] = sym_section_levelone,
  [sym_section_leveltwo] = sym_section_leveltwo,
  [sym_paragraph_levelzero] = sym_paragraph_levelzero,
  [sym_title_levelzero] = sym_title_levelzero,
  [sym_line_levelzero] = sym_line_levelzero,
  [sym_paragraph_levelone] = sym_paragraph_levelone,
  [sym_title_levelone] = sym_title_levelone,
  [sym_line_levelone] = sym_line_levelone,
  [sym_paragraph_leveltwo] = sym_paragraph_leveltwo,
  [sym_title_leveltwo] = sym_title_leveltwo,
  [sym_line_leveltwo] = sym_line_leveltwo,
  [sym_text] = sym_text,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_section_levelzero_repeat1] = aux_sym_section_levelzero_repeat1,
  [aux_sym_section_levelone_repeat1] = aux_sym_section_levelone_repeat1,
  [aux_sym_section_leveltwo_repeat1] = aux_sym_section_leveltwo_repeat1,
  [aux_sym_paragraph_levelzero_repeat1] = aux_sym_paragraph_levelzero_repeat1,
  [aux_sym_paragraph_levelzero_repeat2] = aux_sym_paragraph_levelzero_repeat2,
  [aux_sym_paragraph_levelone_repeat1] = aux_sym_paragraph_levelone_repeat1,
  [aux_sym_paragraph_leveltwo_repeat1] = aux_sym_paragraph_leveltwo_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_list_item_numbered] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_star] = {
    .visible = true,
    .named = true,
  },
  [sym_text_title] = {
    .visible = true,
    .named = true,
  },
  [sym_bold_text] = {
    .visible = true,
    .named = true,
  },
  [sym_characters] = {
    .visible = true,
    .named = true,
  },
  [sym__new_line] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_levelone] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_leveltwo] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_section_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_section_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_section_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_title_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_line_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_title_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_line_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_title_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_line_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_levelzero_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_levelone_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_leveltwo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_levelzero_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_levelzero_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_levelone_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_leveltwo_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_list_item_numbered);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_list_item_dash);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_list_item_star);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_bold_text);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__new_line);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__indent_levelone);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__indent_leveltwo);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_list_item_numbered] = ACTIONS(1),
    [sym_list_item_dash] = ACTIONS(1),
    [sym_list_item_star] = ACTIONS(1),
    [sym_text_title] = ACTIONS(1),
    [sym_bold_text] = ACTIONS(1),
    [sym_characters] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
    [sym__indent_levelone] = ACTIONS(1),
    [sym__indent_leveltwo] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [sym_sections] = STATE(35),
    [sym_section_levelzero] = STATE(29),
    [sym_title_levelzero] = STATE(4),
    [aux_sym_sections_repeat1] = STATE(29),
    [sym_text_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym__indent_levelone,
    ACTIONS(11), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    ACTIONS(7), 2,
      sym_bold_text,
      sym_characters,
    STATE(26), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    STATE(6), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(5), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [30] = 7,
    ACTIONS(17), 1,
      sym__indent_levelone,
    ACTIONS(20), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    ACTIONS(15), 2,
      sym_bold_text,
      sym_characters,
    STATE(26), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    STATE(3), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [60] = 8,
    ACTIONS(29), 1,
      sym__indent_levelone,
    STATE(2), 1,
      sym_title_levelone,
    STATE(41), 1,
      sym_text,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(27), 2,
      sym_bold_text,
      sym_characters,
    STATE(15), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(25), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(7), 3,
      sym_section_levelone,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [92] = 8,
    ACTIONS(39), 1,
      sym__indent_levelone,
    STATE(2), 1,
      sym_title_levelone,
    STATE(41), 1,
      sym_text,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(36), 2,
      sym_bold_text,
      sym_characters,
    STATE(15), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(33), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(5), 3,
      sym_section_levelone,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [124] = 7,
    ACTIONS(9), 1,
      sym__indent_levelone,
    ACTIONS(11), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    ACTIONS(44), 2,
      sym_bold_text,
      sym_characters,
    STATE(26), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    STATE(3), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [154] = 8,
    ACTIONS(29), 1,
      sym__indent_levelone,
    STATE(2), 1,
      sym_title_levelone,
    STATE(41), 1,
      sym_text,
    ACTIONS(27), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_text_title,
    STATE(15), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(25), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(5), 3,
      sym_section_levelone,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [186] = 5,
    ACTIONS(52), 1,
      sym__indent_leveltwo,
    STATE(8), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(28), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(50), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [210] = 5,
    ACTIONS(59), 1,
      sym__indent_leveltwo,
    STATE(8), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(28), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(57), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [234] = 5,
    ACTIONS(59), 1,
      sym__indent_leveltwo,
    STATE(9), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(28), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(63), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [258] = 4,
    ACTIONS(69), 1,
      sym__new_line,
    STATE(13), 1,
      aux_sym_paragraph_levelzero_repeat2,
    ACTIONS(67), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [278] = 4,
    ACTIONS(69), 1,
      sym__new_line,
    STATE(13), 1,
      aux_sym_paragraph_levelzero_repeat2,
    ACTIONS(73), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [298] = 4,
    ACTIONS(79), 1,
      sym__new_line,
    STATE(13), 1,
      aux_sym_paragraph_levelzero_repeat2,
    ACTIONS(77), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [318] = 3,
    ACTIONS(86), 1,
      sym__new_line,
    ACTIONS(84), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [335] = 6,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_paragraph_levelzero_repeat2,
    STATE(41), 1,
      sym_text,
    ACTIONS(27), 2,
      sym_bold_text,
      sym_characters,
    STATE(21), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(25), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [358] = 3,
    ACTIONS(94), 1,
      sym__new_line,
    ACTIONS(92), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [375] = 4,
    ACTIONS(69), 1,
      sym__new_line,
    STATE(13), 1,
      aux_sym_paragraph_levelzero_repeat2,
    ACTIONS(98), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [394] = 3,
    ACTIONS(104), 1,
      sym__new_line,
    ACTIONS(102), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [410] = 2,
    ACTIONS(108), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [424] = 2,
    ACTIONS(112), 3,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [438] = 5,
    ACTIONS(120), 1,
      sym__new_line,
    STATE(41), 1,
      sym_text,
    ACTIONS(117), 2,
      sym_bold_text,
      sym_characters,
    STATE(21), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(114), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [458] = 2,
    ACTIONS(124), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [471] = 3,
    STATE(39), 1,
      sym_text,
    ACTIONS(27), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(126), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [484] = 2,
    ACTIONS(130), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(128), 4,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym__new_line,
  [495] = 3,
    STATE(38), 1,
      sym_text,
    ACTIONS(27), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(132), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [508] = 4,
    ACTIONS(134), 1,
      sym__new_line,
    ACTIONS(136), 1,
      sym__indent_levelone,
    STATE(11), 1,
      aux_sym_paragraph_levelzero_repeat2,
    STATE(31), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [522] = 4,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym_text_title,
    STATE(4), 1,
      sym_title_levelzero,
    STATE(27), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [536] = 4,
    ACTIONS(59), 1,
      sym__indent_leveltwo,
    ACTIONS(143), 1,
      sym__new_line,
    STATE(12), 1,
      aux_sym_paragraph_levelzero_repeat2,
    STATE(30), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [550] = 4,
    ACTIONS(3), 1,
      sym_text_title,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_title_levelzero,
    STATE(27), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [564] = 3,
    ACTIONS(147), 1,
      sym__new_line,
    ACTIONS(149), 1,
      sym__indent_leveltwo,
    STATE(30), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [575] = 3,
    ACTIONS(152), 1,
      sym__new_line,
    ACTIONS(154), 1,
      sym__indent_levelone,
    STATE(31), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [586] = 1,
    ACTIONS(157), 2,
      sym__new_line,
      sym__indent_levelone,
  [591] = 1,
    ACTIONS(159), 2,
      sym__new_line,
      sym__indent_leveltwo,
  [596] = 1,
    ACTIONS(161), 1,
      sym_text_title,
  [600] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [604] = 1,
    ACTIONS(165), 1,
      sym_text_title,
  [608] = 1,
    ACTIONS(167), 1,
      sym__new_line,
  [612] = 1,
    ACTIONS(169), 1,
      sym__new_line,
  [616] = 1,
    ACTIONS(171), 1,
      sym__new_line,
  [620] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [624] = 1,
    ACTIONS(175), 1,
      sym__new_line,
  [628] = 1,
    ACTIONS(177), 1,
      sym__new_line,
  [632] = 1,
    ACTIONS(179), 1,
      sym__new_line,
  [636] = 1,
    ACTIONS(181), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 278,
  [SMALL_STATE(13)] = 298,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 358,
  [SMALL_STATE(17)] = 375,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 424,
  [SMALL_STATE(21)] = 438,
  [SMALL_STATE(22)] = 458,
  [SMALL_STATE(23)] = 471,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 495,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 522,
  [SMALL_STATE(28)] = 536,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 564,
  [SMALL_STATE(31)] = 575,
  [SMALL_STATE(32)] = 586,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 596,
  [SMALL_STATE(35)] = 600,
  [SMALL_STATE(36)] = 604,
  [SMALL_STATE(37)] = 608,
  [SMALL_STATE(38)] = 612,
  [SMALL_STATE(39)] = 616,
  [SMALL_STATE(40)] = 620,
  [SMALL_STATE(41)] = 624,
  [SMALL_STATE(42)] = 628,
  [SMALL_STATE(43)] = 632,
  [SMALL_STATE(44)] = 636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(25),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(41),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(43),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2), SHIFT_REPEAT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelone, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelone, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_leveltwo, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_leveltwo, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat2, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_levelzero_repeat2, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat2, 2), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelzero, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelzero, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 4),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(41),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelzero, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_levelzero, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(42),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2), SHIFT_REPEAT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2), SHIFT_REPEAT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelone, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_leveltwo, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bazgranina(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
