#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_code_begin = 1,
  sym_code_end = 2,
  sym_list_item_numbered = 3,
  sym_list_item_dash = 4,
  sym_list_item_star = 5,
  sym_text_title = 6,
  sym_bold_text = 7,
  sym_characters = 8,
  sym__new_line = 9,
  sym__indent_levelone = 10,
  sym__indent_leveltwo = 11,
  sym_document = 12,
  sym_sections = 13,
  sym_section_levelzero = 14,
  sym_section_levelone = 15,
  sym_section_leveltwo = 16,
  sym_code_block_levelzero = 17,
  sym_code_line_levelzero = 18,
  sym_paragraph_levelzero = 19,
  sym_title_levelzero = 20,
  sym_line_levelzero = 21,
  sym_paragraph_levelone = 22,
  sym_title_levelone = 23,
  sym_line_levelone = 24,
  sym_paragraph_leveltwo = 25,
  sym_title_leveltwo = 26,
  sym_line_leveltwo = 27,
  sym_text = 28,
  aux_sym_sections_repeat1 = 29,
  aux_sym_section_levelzero_repeat1 = 30,
  aux_sym_section_levelone_repeat1 = 31,
  aux_sym_section_leveltwo_repeat1 = 32,
  aux_sym_code_block_levelzero_repeat1 = 33,
  aux_sym_code_block_levelzero_repeat2 = 34,
  aux_sym_paragraph_levelzero_repeat1 = 35,
  aux_sym_paragraph_levelone_repeat1 = 36,
  aux_sym_paragraph_leveltwo_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_code_begin] = "code_begin",
  [sym_code_end] = "code_end",
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
  [sym_code_block_levelzero] = "code_block_levelzero",
  [sym_code_line_levelzero] = "code_line_levelzero",
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
  [aux_sym_code_block_levelzero_repeat1] = "code_block_levelzero_repeat1",
  [aux_sym_code_block_levelzero_repeat2] = "code_block_levelzero_repeat2",
  [aux_sym_paragraph_levelzero_repeat1] = "paragraph_levelzero_repeat1",
  [aux_sym_paragraph_levelone_repeat1] = "paragraph_levelone_repeat1",
  [aux_sym_paragraph_leveltwo_repeat1] = "paragraph_leveltwo_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_code_begin] = sym_code_begin,
  [sym_code_end] = sym_code_end,
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
  [sym_code_block_levelzero] = sym_code_block_levelzero,
  [sym_code_line_levelzero] = sym_code_line_levelzero,
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
  [aux_sym_code_block_levelzero_repeat1] = aux_sym_code_block_levelzero_repeat1,
  [aux_sym_code_block_levelzero_repeat2] = aux_sym_code_block_levelzero_repeat2,
  [aux_sym_paragraph_levelzero_repeat1] = aux_sym_paragraph_levelzero_repeat1,
  [aux_sym_paragraph_levelone_repeat1] = aux_sym_paragraph_levelone_repeat1,
  [aux_sym_paragraph_leveltwo_repeat1] = aux_sym_paragraph_leveltwo_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_code_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_code_end] = {
    .visible = true,
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
  [sym_code_block_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_code_line_levelzero] = {
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
  [aux_sym_code_block_levelzero_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_levelzero_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_levelzero_repeat1] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(15);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_code_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_code_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_list_item_numbered);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_list_item_dash);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_list_item_star);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_bold_text);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'B') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'B') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'G') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__new_line);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__indent_levelone);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__indent_leveltwo);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_code_begin] = ACTIONS(1),
    [sym_code_end] = ACTIONS(1),
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
    [sym_document] = STATE(54),
    [sym_sections] = STATE(52),
    [sym_section_levelzero] = STATE(31),
    [sym_title_levelzero] = STATE(3),
    [aux_sym_sections_repeat1] = STATE(31),
    [sym_text_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym_code_begin,
    ACTIONS(16), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(44), 1,
      sym_text,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(13), 2,
      sym_bold_text,
      sym_characters,
    STATE(21), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(10), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(2), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [36] = 9,
    ACTIONS(21), 1,
      sym_code_begin,
    ACTIONS(27), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(44), 1,
      sym_text,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(25), 2,
      sym_bold_text,
      sym_characters,
    STATE(21), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(23), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(4), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [72] = 9,
    ACTIONS(21), 1,
      sym_code_begin,
    ACTIONS(27), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(44), 1,
      sym_text,
    ACTIONS(25), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_text_title,
    STATE(21), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(23), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(2), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [108] = 7,
    ACTIONS(35), 1,
      sym__indent_levelone,
    ACTIONS(38), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    STATE(32), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(33), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(5), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [139] = 7,
    ACTIONS(45), 1,
      sym__indent_levelone,
    ACTIONS(47), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    STATE(32), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(43), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(5), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [170] = 7,
    ACTIONS(45), 1,
      sym__indent_levelone,
    ACTIONS(47), 1,
      sym__indent_leveltwo,
    STATE(10), 1,
      sym_title_leveltwo,
    STATE(32), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(51), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(6), 3,
      sym_section_leveltwo,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [201] = 5,
    ACTIONS(57), 1,
      sym__indent_leveltwo,
    STATE(9), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(33), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(55), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [226] = 5,
    ACTIONS(63), 1,
      sym__indent_leveltwo,
    STATE(9), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(33), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(61), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [251] = 5,
    ACTIONS(57), 1,
      sym__indent_leveltwo,
    STATE(8), 2,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    STATE(33), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    ACTIONS(68), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [276] = 4,
    ACTIONS(74), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(72), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [297] = 4,
    ACTIONS(81), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(79), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [318] = 4,
    ACTIONS(81), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(85), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [339] = 4,
    ACTIONS(81), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(89), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [359] = 4,
    ACTIONS(81), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(93), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [379] = 4,
    ACTIONS(95), 1,
      sym__new_line,
    STATE(14), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(93), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [399] = 3,
    ACTIONS(101), 1,
      sym__new_line,
    ACTIONS(99), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [417] = 3,
    ACTIONS(107), 1,
      sym__new_line,
    ACTIONS(105), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [435] = 4,
    ACTIONS(113), 1,
      sym__new_line,
    STATE(15), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(111), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [455] = 4,
    ACTIONS(81), 1,
      sym__new_line,
    STATE(11), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(117), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [475] = 6,
    ACTIONS(119), 1,
      sym__new_line,
    STATE(20), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(44), 1,
      sym_text,
    ACTIONS(25), 2,
      sym_bold_text,
      sym_characters,
    STATE(25), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(23), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [498] = 2,
    ACTIONS(123), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [513] = 3,
    ACTIONS(129), 1,
      sym__new_line,
    ACTIONS(127), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [530] = 2,
    ACTIONS(133), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [545] = 5,
    ACTIONS(141), 1,
      sym__new_line,
    STATE(44), 1,
      sym_text,
    ACTIONS(138), 2,
      sym_bold_text,
      sym_characters,
    STATE(25), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(135), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [565] = 2,
    ACTIONS(145), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [579] = 3,
    STATE(48), 1,
      sym_text,
    ACTIONS(25), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(147), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [592] = 2,
    ACTIONS(151), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(149), 4,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym__new_line,
  [603] = 3,
    STATE(50), 1,
      sym_text,
    ACTIONS(25), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(153), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [616] = 4,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_text_title,
    STATE(3), 1,
      sym_title_levelzero,
    STATE(30), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [630] = 4,
    ACTIONS(3), 1,
      sym_text_title,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_title_levelzero,
    STATE(30), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [644] = 4,
    ACTIONS(162), 1,
      sym__new_line,
    ACTIONS(164), 1,
      sym__indent_levelone,
    STATE(12), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(37), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [658] = 4,
    ACTIONS(57), 1,
      sym__indent_leveltwo,
    ACTIONS(166), 1,
      sym__new_line,
    STATE(13), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(36), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [672] = 4,
    ACTIONS(168), 1,
      sym_code_end,
    ACTIONS(170), 1,
      sym_characters,
    STATE(34), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(47), 1,
      sym_code_line_levelzero,
  [685] = 4,
    ACTIONS(173), 1,
      sym_code_end,
    ACTIONS(175), 1,
      sym_characters,
    STATE(38), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(47), 1,
      sym_code_line_levelzero,
  [698] = 3,
    ACTIONS(177), 1,
      sym__new_line,
    ACTIONS(179), 1,
      sym__indent_leveltwo,
    STATE(36), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [709] = 3,
    ACTIONS(182), 1,
      sym__new_line,
    ACTIONS(184), 1,
      sym__indent_levelone,
    STATE(37), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [720] = 4,
    ACTIONS(175), 1,
      sym_characters,
    ACTIONS(187), 1,
      sym_code_end,
    STATE(34), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(47), 1,
      sym_code_line_levelzero,
  [733] = 1,
    ACTIONS(168), 2,
      sym_code_end,
      sym_characters,
  [738] = 1,
    ACTIONS(189), 2,
      sym__new_line,
      sym__indent_leveltwo,
  [743] = 1,
    ACTIONS(191), 2,
      sym__new_line,
      sym__indent_levelone,
  [748] = 1,
    ACTIONS(193), 1,
      sym__new_line,
  [752] = 1,
    ACTIONS(195), 1,
      sym__new_line,
  [756] = 1,
    ACTIONS(197), 1,
      sym__new_line,
  [760] = 1,
    ACTIONS(199), 1,
      sym__new_line,
  [764] = 1,
    ACTIONS(201), 1,
      sym__new_line,
  [768] = 1,
    ACTIONS(203), 1,
      sym__new_line,
  [772] = 1,
    ACTIONS(205), 1,
      sym__new_line,
  [776] = 1,
    ACTIONS(207), 1,
      sym__new_line,
  [780] = 1,
    ACTIONS(209), 1,
      sym__new_line,
  [784] = 1,
    ACTIONS(211), 1,
      sym__new_line,
  [788] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [792] = 1,
    ACTIONS(215), 1,
      sym_text_title,
  [796] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [800] = 1,
    ACTIONS(219), 1,
      sym_text_title,
  [804] = 1,
    ACTIONS(221), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 276,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 417,
  [SMALL_STATE(19)] = 435,
  [SMALL_STATE(20)] = 455,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 498,
  [SMALL_STATE(23)] = 513,
  [SMALL_STATE(24)] = 530,
  [SMALL_STATE(25)] = 545,
  [SMALL_STATE(26)] = 565,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 592,
  [SMALL_STATE(29)] = 603,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 644,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 672,
  [SMALL_STATE(35)] = 685,
  [SMALL_STATE(36)] = 698,
  [SMALL_STATE(37)] = 709,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 733,
  [SMALL_STATE(40)] = 738,
  [SMALL_STATE(41)] = 743,
  [SMALL_STATE(42)] = 748,
  [SMALL_STATE(43)] = 752,
  [SMALL_STATE(44)] = 756,
  [SMALL_STATE(45)] = 760,
  [SMALL_STATE(46)] = 764,
  [SMALL_STATE(47)] = 768,
  [SMALL_STATE(48)] = 772,
  [SMALL_STATE(49)] = 776,
  [SMALL_STATE(50)] = 780,
  [SMALL_STATE(51)] = 784,
  [SMALL_STATE(52)] = 788,
  [SMALL_STATE(53)] = 792,
  [SMALL_STATE(54)] = 796,
  [SMALL_STATE(55)] = 800,
  [SMALL_STATE(56)] = 804,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(42),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(44),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(43),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2), SHIFT_REPEAT(29),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelone, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelone, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_leveltwo, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_leveltwo, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelzero, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelzero, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 4),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(44),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelzero, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_levelzero, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(51),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat1, 2), SHIFT_REPEAT(49),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2), SHIFT_REPEAT(29),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2), SHIFT_REPEAT(27),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_leveltwo, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelone, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_line_levelzero, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
