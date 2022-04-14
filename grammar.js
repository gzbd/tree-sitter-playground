// // paragraphs, bold text, list items
// module.exports = grammar({
//   name: "bazgranina",
//   extras: $ => [],
//   rules: {
//     document: $ => $.paragraphs,
//     paragraphs: $ => seq(repeat1($.paragraph), optional($.endparagraph)),
//     paragraph: $ => seq(repeat1($.line), repeat1($._new_line)),
//     endparagraph: $ => repeat1($.line),
//     line: $ => choice(
//       seq($.list_item_numbered, $._new_line),
//       seq($.list_item_dash, $._new_line),
//       seq($.list_item_star, $._new_line),
//       seq($.text, $._new_line),
//     ),
//     list_item_numbered: $ => /[ \t]*\d+\. .+/,
//     list_item_dash: $ => /[ \t]*\- .+/,
//     list_item_star: $ => /[ \t]*\* .+/,
//     text: $ => choice($.bold_text, $.characters),
//     bold_text: $ => /.*\*.+\*.*/,
//     characters: $ => /.+/, // order matters!!!
//     _new_line: $ => "\n",
//   },
// })

// // sections with titles, paragraphs, bold text, list items
// module.exports = grammar({
//   name: "bazgranina",
//   extras: $ => [],
//   rules: {
//     document: $ => $.sections,
//     sections: $ => repeat1($.section),
//     section: $ => seq($.title, repeat($.paragraph)),

//     paragraph: $ => seq(repeat1($.line), repeat1($._new_line)),
//     title: $ => seq(
//       $.text_title, $._new_line, optional($._new_line),
//     ),
//     line: $ => choice(
//       seq($.list_item_numbered, $._new_line),
//       seq($.list_item_dash, $._new_line),
//       seq($.list_item_star, $._new_line),
//       seq($.text, $._new_line),
//     ),
//     list_item_numbered: $ => /[ \t]*\d+\. .+/,
//     list_item_dash: $ => /[ \t]*\- .+/,
//     list_item_star: $ => /[ \t]*\* .+/,
//     text: $ => choice($.bold_text, $.characters),
//     text_title: $ => /# .+/,
//     bold_text: $ => /.*\*.+\*.*/,
//     characters: $ => /.+/, // order matters!!!
//     _new_line: $ => "\n",
//   },
// })


// sections with titles and indentation, paragraphs, bold text, list items
module.exports = grammar({
  name: "bazgranina",
  extras: $ => [],
  rules: {
    document: $ => $.sections,
    sections: $ => repeat1($.section_levelzero),
    section_levelzero: $ => seq(
      $.title_levelzero,
      repeat(choice($.section_levelone, $.paragraph_levelzero, $.code_block_levelzero))
    ),
    section_levelone: $ => prec.right(seq(
      $.title_levelone,
      repeat(choice($.section_leveltwo, $.paragraph_levelone, $.code_block_levelone)))
    ),
    section_leveltwo: $ => prec.right(seq(
      $.title_leveltwo,
      repeat(choice($.paragraph_leveltwo, $.code_block_leveltwo)))
    ),

    code_block_levelzero: $ => seq(
      $.code_begin_levelzero, $._new_line,
      repeat(seq($.code_line_levelzero, $._new_line)),
      $.code_end_levelzero, repeat($._new_line)
    ),
    code_begin_levelzero: $ => $.code_begin,
    code_end_levelzero: $ => $.code_end,
    code_line_levelzero: $ => seq($.characters, $._new_line),

    code_block_levelone: $ => seq(
      $.code_begin_levelone, $._new_line,
      repeat(seq($.code_line_levelone, $._new_line)),
      $.code_end_levelone, repeat($._new_line)
    ),
    code_begin_levelone: $ => seq($._indent_levelone, $.code_begin),
    code_end_levelone: $ => seq($._indent_levelone, $.code_end),
    code_line_levelone: $ => seq($._indent_levelone, $.characters, $._new_line),

    code_block_leveltwo: $ => seq(
      $.code_begin_leveltwo, $._new_line,
      repeat(seq($.code_line_leveltwo, $._new_line)),
      $.code_end_leveltwo, repeat($._new_line)
    ),
    code_begin_leveltwo: $ => seq($._indent_leveltwo, $.code_begin),
    code_end_leveltwo: $ => seq($._indent_leveltwo, $.code_end),
    code_line_leveltwo: $ => seq($._indent_leveltwo, $.characters, $._new_line),

    code_begin: $ => /=CODE_BEGIN [a-zA-Z0-9]*/,
    code_end: $ => /=CODE_END/,


    paragraph_levelzero: $ => seq(repeat1($.line_levelzero), repeat1($._new_line)),
    title_levelzero: $ => seq(
      $.text_title, $._new_line, optional($._new_line),
    ),
    line_levelzero: $ => choice(
      seq($.list_item_numbered, $._new_line),
      seq($.list_item_dash, $._new_line),
      seq($.list_item_star, $._new_line),
      seq($.text, $._new_line),
    ),


    paragraph_levelone: $ => seq(repeat1($.line_levelone), repeat1($._new_line)),
    title_levelone: $ => seq(
      $._indent_levelone, $.text_title, $._new_line, optional($._new_line),
    ),
    line_levelone: $ => choice(
      seq($._indent_levelone, $.list_item_numbered, $._new_line),
      seq($._indent_levelone, $.list_item_dash, $._new_line),
      seq($._indent_levelone, $.list_item_star, $._new_line),
      seq($._indent_levelone, $.text, $._new_line),
    ),

    paragraph_leveltwo: $ => seq(repeat1($.line_leveltwo), repeat1($._new_line)),
    title_leveltwo: $ => seq(
      $._indent_leveltwo, $.text_title, $._new_line, optional($._new_line),
    ),
    line_leveltwo: $ => choice(
      seq($._indent_leveltwo, $.list_item_numbered, $._new_line),
      seq($._indent_leveltwo, $.list_item_dash, $._new_line),
      seq($._indent_leveltwo, $.list_item_star, $._new_line),
      seq($._indent_leveltwo, $.text, $._new_line),
    ),


    list_item_numbered: $ => /\d+\. .+/,
    list_item_dash: $ => /\- .+/,
    list_item_star: $ => /\* .+/,
    text: $ => choice($.bold_text, $.characters),
    text_title: $ => /# .+/,
    bold_text: $ => /\*.+\*/,
    characters: $ => /[!-~]{1}.+/, // all ascii except space, then any characters, order matters!!!
    _new_line: $ => "\n",
    _indent_levelone: $ => /[ ]{4}/,
    _indent_leveltwo: $ => /[ ]{8}/,
  },
})



// // sections with titles and indentation, paragraphs, bold text, list items
// module.exports = grammar({
//   name: "bazgranina",
//   extras: $ => [],
//   rules: {
//     document: $ => $.sections,
//     sections: $ => repeat1($.section_levelzero),
//     section_levelzero: $ => seq(
//       $.title_levelzero,
//       repeat(choice($.section_levelone, $.paragraph_levelzero))
//     ),
//     section_levelone: $ => seq($.title_levelone, repeat($.paragraph_levelone)),



//     paragraph_levelzero: $ => seq(repeat1($.line_levelzero), repeat1($._new_line)),
//     title_levelzero: $ => seq(
//       $.text_title, $._new_line, optional($._new_line),
//     ),
//     line_levelzero: $ => choice(
//       seq($.list_item_numbered, $._new_line),
//       seq($.list_item_dash, $._new_line),
//       seq($.list_item_star, $._new_line),
//       seq($.text, $._new_line),
//     ),



//     paragraph_levelone: $ => seq(repeat1($.line_levelone), repeat1($._new_line)),
//     title_levelone: $ => seq(
//       $.text_title_levelone, $._new_line, optional($._new_line),
//     ),
//     line_levelone: $ => choice(
//       // seq('    ', $.list_item_numbered, $._new_line),
//       // seq('    ', $.list_item_dash, $._new_line),
//       // seq('    ', $.list_item_star, $._new_line),
//       seq($.text_levelone, $._new_line),
//     ),



//     list_item_numbered: $ => /\d+\. .+/,
//     list_item_dash: $ => /\- .+/,
//     list_item_star: $ => /\* .+/,
//     text: $ => choice($.bold_text, $.characters),
//     text_levelone: $ => choice($.characters_levelone),
//     text_title: $ => /# .+/,
//     text_title_levelone: $ => /    # .+/,
//     bold_text: $ => /\*.+\*/,
//     characters: $ => /[!-~]{1}.+/, // all ascii except space, order matters!!!
//     characters_levelone: $ => /    [!-~]{1}.+/, // order matters!!!
//     _new_line: $ => "\n",
//   },
// })
