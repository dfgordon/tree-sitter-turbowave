module.exports = grammar(
{
  name: 'turbowave',

  extras: $ => [/\s|,/,$.comment,],

  rules:
  {
    input_file: $ => repeat($._top),

    _top: $ => choice($.include,$.define,$.ifxdef,$._directive),

    _nested: $ => choice($.include,$.define,$.ifxdef,$._nested_directive),

    include: $ => seq('#include',choice($.identifier,$.string_literal)),

    define: $ => seq('#define',$.define_key,$._define_value),

    ifxdef: $ => seq(choice('#ifdef','#ifndef'),$.define_key,
      repeat($._top),
      optional($.else_block),
      '#endif'),

    _directive: $ => choice($.assignment,$._statement),

    _nested_directive: $ => choice($.assignment,$._nested_statement),

    assignment: $ => seq($.obj_key,'=',choice($._value,$.tuple,$.list)),

    _statement: $ => choice($.new,$.associative_new,$.generate,$.reaction,$.collision,$.excitation),

    _nested_statement: $ => choice($.get,$.new),

    new: $ => seq(
      'new',
      $.obj_key,
      optional($.string_literal),
      $.block),

    associative_new: $ => seq(
      'new',
      $.obj_key,
      optional($.string_literal),
      seq('for',choice($.string_literal,$.identifier)),
      $.block),

    generate: $ => seq(
      'generate',
      $.obj_key,
      optional($.string_literal),
      $.block),

    reaction: $ => seq('new','reaction','=',$.full_formula,$.rate,$.range),

    collision: $ => seq(
      'new','collision','=',
      $.identifier,'<->',$.identifier,
      choice(
        'coulomb',
        seq('cross','section','=',$._rawqty),
        seq('metallic','ks','=',$._rawqty,'fermi_energy_ev','=',$._rawqty,'ref_density','=',$._rawqty)
      )),

    excitation: $ => seq(
      'new','excitation','=',
      $.identifier,'->',$.identifier,
      'level','=',$._rawqty,
      $.rate),

    get: $ => seq('get',choice($.identifier,$.string_literal)),

    else_block: $ => seq('#else',repeat($._top)),
    define_key: $ => /\$[^,=(){}:\s]+/,
    define_ref: $ => /[+-]?\$[^,=(){}:\s]+/,
    decimal: $ => /(\+|\-)?([0-9]+\.?[0-9]*|\.[0-9]+)([eE](\+|\-)?[0-9]+)?/,
    boolean: $ => choice('true','false','yes','no','on','off'),
    unit: $ => choice('[deg]','[rad]','[mrad]','[urad]',
      '[um]','[mm]','[cm]','[m]',
      '[fs]','[ps]','[ns]','[us]','[s]',
      '[/m3]','[/cm3]','[kg/m3]','[g/cm3]','[J/m3]','[J/cm3]',
      '[eV]','[K]','[Pa]','[dynes/cm2]','[bar]','[ergs/g]','[J/kg]',
      '[cm2]','[m2]','[cm2/s]','[m2/s]',
      '[V]','[webers/m]','[G*cm]','[V/m]','[V/cm]','[T]','[G]'),
    dimension: $ => seq($.decimal,$.unit),
    identifier: $ => /[a-zA-Z_][\w\[\]\+\-\^\.]*/,
    special_keys: $ => choice('1d','2d','3d'),
    obj_key: $ => prec(1,repeat1(choice($.identifier,$.special_keys))),
    _string_literal_single: $ => seq('\'',$.identifier,'\''),
    _string_literal_double: $ => seq('\"',$.identifier,'\"'),
    string_literal: $ => choice($._string_literal_double,$._string_literal_single),
    _value: $ => prec(2,choice($.identifier,$.decimal,$.dimension,$.define_ref,$.string_literal,$.boolean)),
    _qty: $ => prec(2,choice($.decimal,$.define_ref,$.dimension)),
    _rawqty: $ => prec(2,choice($.decimal,$.define_ref)),
    block: $ => seq('{',repeat($._nested),'}'),
    tuple: $ => seq('(',repeat1($._value),')'),
    list: $ => seq('{',repeat1($._value),'}'),
    _define_value: $ => seq(prec(3,repeat(choice($._directive,$._value,$.block,$.tuple,$.list,$.obj_key))),/\r?\n/),

    comment: $ => token(choice(
        seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
        seq('/*',/[^*]*\*+([^/*][^*]*\*+)*/,'/'))),

    // Reaction rule is complex, broken down into the following pieces:
    _pterm: $ => seq(/\s+\+\s+/,choice($.identifier,$._rawqty)),
    _nterm: $ => seq(/\s+\-\s+/,$._rawqty),
    chems: $ => seq(choice($.identifier,$.define_key),repeat(choice($._pterm,$._nterm))),
    sub_formula: $ => seq($.chems,'->',$.chems),
    full_formula: $ => seq('\{',$.sub_formula,repeat(seq(':',$.sub_formula)),'\}'),
    arrhenius: $ => seq('rate','=',$._rawqty,$._rawqty,$._rawqty),
    janev: $ => seq('janev_rate','=',$._rawqty,$._rawqty,$._rawqty,$._rawqty,$._rawqty,$._rawqty,$._rawqty,$._rawqty,$._rawqty),
    rate: $=> choice($.arrhenius,$.janev),
    range: $=> seq($.identifier,'(',optional($._rawqty),':',optional($._rawqty),')'),

  }
});
