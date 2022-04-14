#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
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
  sym_code_begin_levelzero = 18,
  sym_code_end_levelzero = 19,
  sym_code_line_levelzero = 20,
  sym_code_block_levelone = 21,
  sym_code_begin_levelone = 22,
  sym_code_end_levelone = 23,
  sym_code_line_levelone = 24,
  sym_code_block_leveltwo = 25,
  sym_code_begin_leveltwo = 26,
  sym_code_end_leveltwo = 27,
  sym_code_line_leveltwo = 28,
  sym_paragraph_levelzero = 29,
  sym_title_levelzero = 30,
  sym_line_levelzero = 31,
  sym_paragraph_levelone = 32,
  sym_title_levelone = 33,
  sym_line_levelone = 34,
  sym_paragraph_leveltwo = 35,
  sym_title_leveltwo = 36,
  sym_line_leveltwo = 37,
  sym_text = 38,
  aux_sym_sections_repeat1 = 39,
  aux_sym_section_levelzero_repeat1 = 40,
  aux_sym_section_levelone_repeat1 = 41,
  aux_sym_section_leveltwo_repeat1 = 42,
  aux_sym_code_block_levelzero_repeat1 = 43,
  aux_sym_code_block_levelzero_repeat2 = 44,
  aux_sym_code_block_levelone_repeat1 = 45,
  aux_sym_code_block_leveltwo_repeat1 = 46,
  aux_sym_paragraph_levelzero_repeat1 = 47,
  aux_sym_paragraph_levelone_repeat1 = 48,
  aux_sym_paragraph_leveltwo_repeat1 = 49,
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
  [sym_code_begin_levelzero] = "code_begin_levelzero",
  [sym_code_end_levelzero] = "code_end_levelzero",
  [sym_code_line_levelzero] = "code_line_levelzero",
  [sym_code_block_levelone] = "code_block_levelone",
  [sym_code_begin_levelone] = "code_begin_levelone",
  [sym_code_end_levelone] = "code_end_levelone",
  [sym_code_line_levelone] = "code_line_levelone",
  [sym_code_block_leveltwo] = "code_block_leveltwo",
  [sym_code_begin_leveltwo] = "code_begin_leveltwo",
  [sym_code_end_leveltwo] = "code_end_leveltwo",
  [sym_code_line_leveltwo] = "code_line_leveltwo",
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
  [aux_sym_code_block_levelone_repeat1] = "code_block_levelone_repeat1",
  [aux_sym_code_block_leveltwo_repeat1] = "code_block_leveltwo_repeat1",
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
  [sym_code_begin_levelzero] = sym_code_begin_levelzero,
  [sym_code_end_levelzero] = sym_code_end_levelzero,
  [sym_code_line_levelzero] = sym_code_line_levelzero,
  [sym_code_block_levelone] = sym_code_block_levelone,
  [sym_code_begin_levelone] = sym_code_begin_levelone,
  [sym_code_end_levelone] = sym_code_end_levelone,
  [sym_code_line_levelone] = sym_code_line_levelone,
  [sym_code_block_leveltwo] = sym_code_block_leveltwo,
  [sym_code_begin_leveltwo] = sym_code_begin_leveltwo,
  [sym_code_end_leveltwo] = sym_code_end_leveltwo,
  [sym_code_line_leveltwo] = sym_code_line_leveltwo,
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
  [aux_sym_code_block_levelone_repeat1] = aux_sym_code_block_levelone_repeat1,
  [aux_sym_code_block_leveltwo_repeat1] = aux_sym_code_block_leveltwo_repeat1,
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
  [sym_code_begin_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_code_end_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_code_line_levelzero] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_code_begin_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_code_end_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_code_line_levelone] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_code_begin_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_code_end_leveltwo] = {
    .visible = true,
    .named = true,
  },
  [sym_code_line_leveltwo] = {
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
  [aux_sym_code_block_levelone_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_leveltwo_repeat1] = {
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
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(16);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 17:
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_code_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_code_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_list_item_numbered);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_list_item_dash);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_list_item_star);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_bold_text);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'B') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'B') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'D') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'G') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_characters);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__new_line);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__indent_levelone);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__indent_leveltwo);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 17},
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
    [sym_document] = STATE(91),
    [sym_sections] = STATE(88),
    [sym_section_levelzero] = STATE(43),
    [sym_title_levelzero] = STATE(4),
    [aux_sym_sections_repeat1] = STATE(43),
    [sym_text_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      sym_code_begin,
    ACTIONS(13), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(72), 1,
      sym_code_begin_levelzero,
    STATE(82), 1,
      sym_text,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    STATE(35), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(9), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(5), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [39] = 8,
    ACTIONS(19), 1,
      sym__indent_levelone,
    ACTIONS(22), 1,
      sym__indent_leveltwo,
    STATE(9), 1,
      sym_title_leveltwo,
    STATE(69), 1,
      sym_code_begin_levelone,
    STATE(48), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(17), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(3), 4,
      sym_section_leveltwo,
      sym_code_block_levelone,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [74] = 10,
    ACTIONS(7), 1,
      sym_code_begin,
    ACTIONS(13), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(72), 1,
      sym_code_begin_levelzero,
    STATE(82), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_text_title,
    STATE(35), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(9), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(2), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [113] = 10,
    ACTIONS(29), 1,
      sym_code_begin,
    ACTIONS(38), 1,
      sym__indent_levelone,
    STATE(7), 1,
      sym_title_levelone,
    STATE(72), 1,
      sym_code_begin_levelzero,
    STATE(82), 1,
      sym_text,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_text_title,
    ACTIONS(35), 2,
      sym_bold_text,
      sym_characters,
    STATE(35), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(32), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
    STATE(5), 4,
      sym_section_levelone,
      sym_code_block_levelzero,
      sym_paragraph_levelzero,
      aux_sym_section_levelzero_repeat1,
  [152] = 8,
    ACTIONS(45), 1,
      sym__indent_levelone,
    ACTIONS(47), 1,
      sym__indent_leveltwo,
    STATE(9), 1,
      sym_title_leveltwo,
    STATE(69), 1,
      sym_code_begin_levelone,
    STATE(48), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(43), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(3), 4,
      sym_section_leveltwo,
      sym_code_block_levelone,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [187] = 8,
    ACTIONS(45), 1,
      sym__indent_levelone,
    ACTIONS(47), 1,
      sym__indent_leveltwo,
    STATE(9), 1,
      sym_title_leveltwo,
    STATE(69), 1,
      sym_code_begin_levelone,
    STATE(48), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
    ACTIONS(51), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    STATE(6), 4,
      sym_section_leveltwo,
      sym_code_block_levelone,
      sym_paragraph_levelone,
      aux_sym_section_levelone_repeat1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [222] = 6,
    ACTIONS(57), 1,
      sym__indent_leveltwo,
    STATE(86), 1,
      sym_code_begin_leveltwo,
    STATE(44), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    STATE(10), 3,
      sym_code_block_leveltwo,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
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
  [251] = 6,
    ACTIONS(57), 1,
      sym__indent_leveltwo,
    STATE(86), 1,
      sym_code_begin_leveltwo,
    STATE(44), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    STATE(8), 3,
      sym_code_block_leveltwo,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
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
  [280] = 6,
    ACTIONS(67), 1,
      sym__indent_leveltwo,
    STATE(86), 1,
      sym_code_begin_leveltwo,
    STATE(44), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
    STATE(10), 3,
      sym_code_block_leveltwo,
      sym_paragraph_leveltwo,
      aux_sym_section_leveltwo_repeat1,
    ACTIONS(65), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
  [309] = 4,
    ACTIONS(74), 1,
      sym__new_line,
    STATE(19), 1,
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
  [330] = 4,
    ACTIONS(80), 1,
      sym__new_line,
    STATE(14), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(78), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [351] = 4,
    ACTIONS(86), 1,
      sym__new_line,
    STATE(21), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(84), 4,
      sym_code_begin,
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
  [372] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
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
  [393] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(92), 4,
      sym_code_begin,
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
  [414] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(84), 4,
      sym_code_begin,
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
  [435] = 4,
    ACTIONS(98), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(96), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [456] = 4,
    ACTIONS(105), 1,
      sym__new_line,
    STATE(16), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(103), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [477] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(109), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [498] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(113), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [519] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(117), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [540] = 4,
    ACTIONS(123), 1,
      sym__new_line,
    STATE(23), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(121), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [560] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
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
  [580] = 3,
    ACTIONS(133), 1,
      sym__new_line,
    ACTIONS(131), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [598] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(137), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [618] = 3,
    ACTIONS(143), 1,
      sym__new_line,
    ACTIONS(141), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [636] = 4,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(121), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [656] = 4,
    ACTIONS(149), 1,
      sym__new_line,
    STATE(27), 1,
      aux_sym_code_block_levelzero_repeat2,
    ACTIONS(147), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [676] = 2,
    ACTIONS(153), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__new_line,
      sym__indent_leveltwo,
  [692] = 2,
    ACTIONS(157), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__new_line,
      sym__indent_leveltwo,
  [708] = 3,
    ACTIONS(163), 1,
      sym__new_line,
    ACTIONS(161), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [725] = 2,
    ACTIONS(167), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__new_line,
      sym__indent_levelone,
  [740] = 2,
    ACTIONS(171), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [755] = 2,
    ACTIONS(175), 4,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
      sym__indent_levelone,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_leveltwo,
  [770] = 6,
    ACTIONS(177), 1,
      sym__new_line,
    STATE(25), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(82), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    STATE(36), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(9), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [793] = 5,
    ACTIONS(185), 1,
      sym__new_line,
    STATE(82), 1,
      sym_text,
    ACTIONS(182), 2,
      sym_bold_text,
      sym_characters,
    STATE(36), 2,
      sym_line_levelzero,
      aux_sym_paragraph_levelzero_repeat1,
    ACTIONS(179), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [813] = 2,
    ACTIONS(189), 3,
      sym_code_begin,
      sym_bold_text,
      sym_characters,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym_text_title,
      sym__indent_levelone,
  [827] = 4,
    ACTIONS(191), 1,
      sym_code_begin,
    STATE(66), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(193), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [843] = 4,
    ACTIONS(195), 1,
      sym_code_begin,
    STATE(78), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(197), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [859] = 3,
    STATE(66), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(193), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [872] = 2,
    ACTIONS(201), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(199), 4,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
      sym__new_line,
  [883] = 3,
    STATE(78), 1,
      sym_text,
    ACTIONS(11), 2,
      sym_bold_text,
      sym_characters,
    ACTIONS(197), 3,
      sym_list_item_numbered,
      sym_list_item_dash,
      sym_list_item_star,
  [896] = 4,
    ACTIONS(3), 1,
      sym_text_title,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_title_levelzero,
    STATE(46), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [910] = 4,
    ACTIONS(205), 1,
      sym__new_line,
    ACTIONS(207), 1,
      sym__indent_leveltwo,
    STATE(20), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(53), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [924] = 5,
    ACTIONS(209), 1,
      sym_code_end,
    ACTIONS(211), 1,
      sym_characters,
    STATE(22), 1,
      sym_code_end_levelzero,
    STATE(54), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(70), 1,
      sym_code_line_levelzero,
  [940] = 4,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym_text_title,
    STATE(4), 1,
      sym_title_levelzero,
    STATE(46), 2,
      sym_section_levelzero,
      aux_sym_sections_repeat1,
  [954] = 5,
    ACTIONS(209), 1,
      sym_code_end,
    ACTIONS(211), 1,
      sym_characters,
    STATE(28), 1,
      sym_code_end_levelzero,
    STATE(45), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(70), 1,
      sym_code_line_levelzero,
  [970] = 4,
    ACTIONS(218), 1,
      sym__new_line,
    ACTIONS(220), 1,
      sym__indent_levelone,
    STATE(15), 1,
      aux_sym_code_block_levelzero_repeat2,
    STATE(52), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [984] = 4,
    ACTIONS(222), 1,
      sym__indent_leveltwo,
    STATE(18), 1,
      sym_code_end_leveltwo,
    STATE(51), 1,
      aux_sym_code_block_leveltwo_repeat1,
    STATE(79), 1,
      sym_code_line_leveltwo,
  [997] = 4,
    ACTIONS(224), 1,
      sym__indent_levelone,
    STATE(12), 1,
      sym_code_end_levelone,
    STATE(55), 1,
      aux_sym_code_block_levelone_repeat1,
    STATE(77), 1,
      sym_code_line_levelone,
  [1010] = 4,
    ACTIONS(222), 1,
      sym__indent_leveltwo,
    STATE(13), 1,
      sym_code_end_leveltwo,
    STATE(56), 1,
      aux_sym_code_block_leveltwo_repeat1,
    STATE(79), 1,
      sym_code_line_leveltwo,
  [1023] = 3,
    ACTIONS(226), 1,
      sym__new_line,
    ACTIONS(228), 1,
      sym__indent_levelone,
    STATE(52), 2,
      sym_line_levelone,
      aux_sym_paragraph_levelone_repeat1,
  [1034] = 3,
    ACTIONS(231), 1,
      sym__new_line,
    ACTIONS(233), 1,
      sym__indent_leveltwo,
    STATE(53), 2,
      sym_line_leveltwo,
      aux_sym_paragraph_leveltwo_repeat1,
  [1045] = 4,
    ACTIONS(236), 1,
      sym_code_end,
    ACTIONS(238), 1,
      sym_characters,
    STATE(54), 1,
      aux_sym_code_block_levelzero_repeat1,
    STATE(70), 1,
      sym_code_line_levelzero,
  [1058] = 4,
    ACTIONS(224), 1,
      sym__indent_levelone,
    STATE(11), 1,
      sym_code_end_levelone,
    STATE(57), 1,
      aux_sym_code_block_levelone_repeat1,
    STATE(77), 1,
      sym_code_line_levelone,
  [1071] = 3,
    ACTIONS(241), 1,
      sym__indent_leveltwo,
    STATE(56), 1,
      aux_sym_code_block_leveltwo_repeat1,
    STATE(79), 1,
      sym_code_line_leveltwo,
  [1081] = 3,
    ACTIONS(244), 1,
      sym__indent_levelone,
    STATE(57), 1,
      aux_sym_code_block_levelone_repeat1,
    STATE(77), 1,
      sym_code_line_levelone,
  [1091] = 1,
    ACTIONS(247), 2,
      sym__new_line,
      sym__indent_levelone,
  [1096] = 1,
    ACTIONS(236), 2,
      sym_code_end,
      sym_characters,
  [1101] = 2,
    ACTIONS(249), 1,
      sym_code_end,
    ACTIONS(251), 1,
      sym_characters,
  [1108] = 2,
    ACTIONS(253), 1,
      sym_code_end,
    ACTIONS(255), 1,
      sym_characters,
  [1115] = 1,
    ACTIONS(257), 2,
      sym__new_line,
      sym__indent_leveltwo,
  [1120] = 1,
    ACTIONS(259), 1,
      sym__new_line,
  [1124] = 1,
    ACTIONS(261), 1,
      sym__new_line,
  [1128] = 1,
    ACTIONS(263), 1,
      sym_text_title,
  [1132] = 1,
    ACTIONS(265), 1,
      sym__new_line,
  [1136] = 1,
    ACTIONS(267), 1,
      sym__new_line,
  [1140] = 1,
    ACTIONS(269), 1,
      sym__new_line,
  [1144] = 1,
    ACTIONS(271), 1,
      sym__new_line,
  [1148] = 1,
    ACTIONS(273), 1,
      sym__new_line,
  [1152] = 1,
    ACTIONS(275), 1,
      sym__new_line,
  [1156] = 1,
    ACTIONS(277), 1,
      sym__new_line,
  [1160] = 1,
    ACTIONS(279), 1,
      sym__indent_levelone,
  [1164] = 1,
    ACTIONS(281), 1,
      sym_text_title,
  [1168] = 1,
    ACTIONS(283), 1,
      sym__new_line,
  [1172] = 1,
    ACTIONS(285), 1,
      sym__new_line,
  [1176] = 1,
    ACTIONS(287), 1,
      sym__new_line,
  [1180] = 1,
    ACTIONS(289), 1,
      sym__new_line,
  [1184] = 1,
    ACTIONS(291), 1,
      sym__new_line,
  [1188] = 1,
    ACTIONS(293), 1,
      sym__new_line,
  [1192] = 1,
    ACTIONS(295), 1,
      sym__new_line,
  [1196] = 1,
    ACTIONS(297), 1,
      sym__new_line,
  [1200] = 1,
    ACTIONS(299), 1,
      sym_characters,
  [1204] = 1,
    ACTIONS(301), 1,
      sym__new_line,
  [1208] = 1,
    ACTIONS(303), 1,
      sym__new_line,
  [1212] = 1,
    ACTIONS(305), 1,
      sym__new_line,
  [1216] = 1,
    ACTIONS(307), 1,
      sym__indent_leveltwo,
  [1220] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1224] = 1,
    ACTIONS(311), 1,
      sym__new_line,
  [1228] = 1,
    ACTIONS(313), 1,
      sym__new_line,
  [1232] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [1236] = 1,
    ACTIONS(317), 1,
      sym_characters,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 393,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 456,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 498,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 540,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 580,
  [SMALL_STATE(25)] = 598,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 636,
  [SMALL_STATE(28)] = 656,
  [SMALL_STATE(29)] = 676,
  [SMALL_STATE(30)] = 692,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 725,
  [SMALL_STATE(33)] = 740,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 770,
  [SMALL_STATE(36)] = 793,
  [SMALL_STATE(37)] = 813,
  [SMALL_STATE(38)] = 827,
  [SMALL_STATE(39)] = 843,
  [SMALL_STATE(40)] = 859,
  [SMALL_STATE(41)] = 872,
  [SMALL_STATE(42)] = 883,
  [SMALL_STATE(43)] = 896,
  [SMALL_STATE(44)] = 910,
  [SMALL_STATE(45)] = 924,
  [SMALL_STATE(46)] = 940,
  [SMALL_STATE(47)] = 954,
  [SMALL_STATE(48)] = 970,
  [SMALL_STATE(49)] = 984,
  [SMALL_STATE(50)] = 997,
  [SMALL_STATE(51)] = 1010,
  [SMALL_STATE(52)] = 1023,
  [SMALL_STATE(53)] = 1034,
  [SMALL_STATE(54)] = 1045,
  [SMALL_STATE(55)] = 1058,
  [SMALL_STATE(56)] = 1071,
  [SMALL_STATE(57)] = 1081,
  [SMALL_STATE(58)] = 1091,
  [SMALL_STATE(59)] = 1096,
  [SMALL_STATE(60)] = 1101,
  [SMALL_STATE(61)] = 1108,
  [SMALL_STATE(62)] = 1115,
  [SMALL_STATE(63)] = 1120,
  [SMALL_STATE(64)] = 1124,
  [SMALL_STATE(65)] = 1128,
  [SMALL_STATE(66)] = 1132,
  [SMALL_STATE(67)] = 1136,
  [SMALL_STATE(68)] = 1140,
  [SMALL_STATE(69)] = 1144,
  [SMALL_STATE(70)] = 1148,
  [SMALL_STATE(71)] = 1152,
  [SMALL_STATE(72)] = 1156,
  [SMALL_STATE(73)] = 1160,
  [SMALL_STATE(74)] = 1164,
  [SMALL_STATE(75)] = 1168,
  [SMALL_STATE(76)] = 1172,
  [SMALL_STATE(77)] = 1176,
  [SMALL_STATE(78)] = 1180,
  [SMALL_STATE(79)] = 1184,
  [SMALL_STATE(80)] = 1188,
  [SMALL_STATE(81)] = 1192,
  [SMALL_STATE(82)] = 1196,
  [SMALL_STATE(83)] = 1200,
  [SMALL_STATE(84)] = 1204,
  [SMALL_STATE(85)] = 1208,
  [SMALL_STATE(86)] = 1212,
  [SMALL_STATE(87)] = 1216,
  [SMALL_STATE(88)] = 1220,
  [SMALL_STATE(89)] = 1224,
  [SMALL_STATE(90)] = 1228,
  [SMALL_STATE(91)] = 1232,
  [SMALL_STATE(92)] = 1236,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(38),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelone_repeat1, 2), SHIFT_REPEAT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelzero, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(84),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(82),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(64),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_levelzero_repeat1, 2), SHIFT_REPEAT(74),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_levelone, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_levelone, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_leveltwo, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_leveltwo, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_leveltwo_repeat1, 2), SHIFT_REPEAT(39),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelone, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelone, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelone, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelone, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_leveltwo, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_leveltwo, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelone, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelone, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_levelzero_repeat2, 2), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_leveltwo, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_leveltwo, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelone, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelone, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_leveltwo, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_leveltwo, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_leveltwo, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_leveltwo, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_levelzero, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_levelzero, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_levelzero, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block_levelzero, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_leveltwo, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_end_leveltwo, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_levelone, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_end_levelone, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_levelzero, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_end_levelzero, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelone, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelone, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_leveltwo, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_leveltwo, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(82),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2), SHIFT_REPEAT(64),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelzero_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_levelzero, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_levelzero, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelzero, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_levelzero, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(80),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_levelone_repeat1, 2), SHIFT_REPEAT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_leveltwo_repeat1, 2), SHIFT_REPEAT(42),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_levelzero_repeat1, 2), SHIFT_REPEAT(67),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_leveltwo_repeat1, 2), SHIFT_REPEAT(92),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_levelone_repeat1, 2), SHIFT_REPEAT(83),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_levelone, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_leveltwo, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_line_levelzero, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_levelone_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_begin_levelone, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_begin_leveltwo, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_line_levelone, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_begin_levelzero, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_leveltwo_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_line_leveltwo, 3),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
