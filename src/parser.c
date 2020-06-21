#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_POUNDdefine = 2,
  anon_sym_EQ = 3,
  anon_sym_new = 4,
  anon_sym_for = 5,
  anon_sym_generate = 6,
  anon_sym_reaction = 7,
  anon_sym_collision = 8,
  anon_sym_LT_DASH_GT = 9,
  anon_sym_coulomb = 10,
  anon_sym_cross = 11,
  anon_sym_section = 12,
  anon_sym_excitation = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_level = 15,
  anon_sym_get = 16,
  sym_define_key = 17,
  sym_identifier = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_DQUOTE = 20,
  sym__integer = 21,
  sym__decimal1 = 22,
  sym__decimal2 = 23,
  anon_sym_DASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_deg = 26,
  anon_sym_rad = 27,
  anon_sym_mrad = 28,
  anon_sym_urad = 29,
  anon_sym_cm2 = 30,
  anon_sym_m2 = 31,
  anon_sym_cm2s = 32,
  anon_sym_m2s = 33,
  anon_sym_um = 34,
  anon_sym_mm = 35,
  anon_sym_cm = 36,
  anon_sym_m = 37,
  anon_sym_fs = 38,
  anon_sym_ps = 39,
  anon_sym_ns = 40,
  anon_sym_us = 41,
  anon_sym_s = 42,
  anon_sym_m_DASH3 = 43,
  anon_sym_cm_DASH3 = 44,
  anon_sym_Jm3 = 45,
  anon_sym_Jcm3 = 46,
  anon_sym_eV = 47,
  anon_sym_K = 48,
  anon_sym_V = 49,
  anon_sym_Vm = 50,
  anon_sym_Vcm = 51,
  anon_sym_T = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  sym_comment = 57,
  aux_sym__pterm_token1 = 58,
  aux_sym__nterm_token1 = 59,
  anon_sym_COLON = 60,
  anon_sym_rate = 61,
  anon_sym_janev_rate = 62,
  sym_input_file = 63,
  sym__top = 64,
  sym__nested = 65,
  sym_include = 66,
  sym_define = 67,
  sym__directive = 68,
  sym__nested_directive = 69,
  sym_assignment = 70,
  sym__statement = 71,
  sym__nested_statement = 72,
  sym_new = 73,
  sym_associative_new = 74,
  sym_generate = 75,
  sym_reaction = 76,
  sym_collision = 77,
  sym_excitation = 78,
  sym_get = 79,
  sym_identifier_sequence = 80,
  sym__string_literal_single = 81,
  sym__string_literal_double = 82,
  sym_string_literal = 83,
  sym_decimal = 84,
  sym_value = 85,
  sym_define_value = 86,
  sym_dimension = 87,
  sym_unit = 88,
  sym_block = 89,
  sym_tuple = 90,
  sym_list = 91,
  sym__pterm = 92,
  sym__nterm = 93,
  sym_chems = 94,
  sym_sub_formula = 95,
  sym_full_formula = 96,
  sym_arrhenius = 97,
  sym_janev = 98,
  sym_rate = 99,
  sym_range = 100,
  aux_sym_input_file_repeat1 = 101,
  aux_sym_identifier_sequence_repeat1 = 102,
  aux_sym_block_repeat1 = 103,
  aux_sym_tuple_repeat1 = 104,
  aux_sym_chems_repeat1 = 105,
  aux_sym_full_formula_repeat1 = 106,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDdefine] = "#define",
  [anon_sym_EQ] = "=",
  [anon_sym_new] = "new",
  [anon_sym_for] = "for",
  [anon_sym_generate] = "generate",
  [anon_sym_reaction] = "reaction",
  [anon_sym_collision] = "collision",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_coulomb] = "coulomb",
  [anon_sym_cross] = "cross",
  [anon_sym_section] = "section",
  [anon_sym_excitation] = "excitation",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_level] = "level",
  [anon_sym_get] = "get",
  [sym_define_key] = "define_key",
  [sym_identifier] = "identifier",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__integer] = "_integer",
  [sym__decimal1] = "_decimal1",
  [sym__decimal2] = "_decimal2",
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
  [anon_sym_deg] = "deg",
  [anon_sym_rad] = "rad",
  [anon_sym_mrad] = "mrad",
  [anon_sym_urad] = "urad",
  [anon_sym_cm2] = "cm2",
  [anon_sym_m2] = "m2",
  [anon_sym_cm2s] = "cm2s",
  [anon_sym_m2s] = "m2s",
  [anon_sym_um] = "um",
  [anon_sym_mm] = "mm",
  [anon_sym_cm] = "cm",
  [anon_sym_m] = "m",
  [anon_sym_fs] = "fs",
  [anon_sym_ps] = "ps",
  [anon_sym_ns] = "ns",
  [anon_sym_us] = "us",
  [anon_sym_s] = "s",
  [anon_sym_m_DASH3] = "m-3",
  [anon_sym_cm_DASH3] = "cm-3",
  [anon_sym_Jm3] = "Jm3",
  [anon_sym_Jcm3] = "Jcm3",
  [anon_sym_eV] = "eV",
  [anon_sym_K] = "K",
  [anon_sym_V] = "V",
  [anon_sym_Vm] = "Vm",
  [anon_sym_Vcm] = "Vcm",
  [anon_sym_T] = "T",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [aux_sym__pterm_token1] = "_pterm_token1",
  [aux_sym__nterm_token1] = "_nterm_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_rate] = "rate",
  [anon_sym_janev_rate] = "janev_rate",
  [sym_input_file] = "input_file",
  [sym__top] = "_top",
  [sym__nested] = "_nested",
  [sym_include] = "include",
  [sym_define] = "define",
  [sym__directive] = "_directive",
  [sym__nested_directive] = "_nested_directive",
  [sym_assignment] = "assignment",
  [sym__statement] = "_statement",
  [sym__nested_statement] = "_nested_statement",
  [sym_new] = "new",
  [sym_associative_new] = "associative_new",
  [sym_generate] = "generate",
  [sym_reaction] = "reaction",
  [sym_collision] = "collision",
  [sym_excitation] = "excitation",
  [sym_get] = "get",
  [sym_identifier_sequence] = "identifier_sequence",
  [sym__string_literal_single] = "_string_literal_single",
  [sym__string_literal_double] = "_string_literal_double",
  [sym_string_literal] = "string_literal",
  [sym_decimal] = "decimal",
  [sym_value] = "value",
  [sym_define_value] = "define_value",
  [sym_dimension] = "dimension",
  [sym_unit] = "unit",
  [sym_block] = "block",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__pterm] = "_pterm",
  [sym__nterm] = "_nterm",
  [sym_chems] = "chems",
  [sym_sub_formula] = "sub_formula",
  [sym_full_formula] = "full_formula",
  [sym_arrhenius] = "arrhenius",
  [sym_janev] = "janev",
  [sym_rate] = "rate",
  [sym_range] = "range",
  [aux_sym_input_file_repeat1] = "input_file_repeat1",
  [aux_sym_identifier_sequence_repeat1] = "identifier_sequence_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_chems_repeat1] = "chems_repeat1",
  [aux_sym_full_formula_repeat1] = "full_formula_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_generate] = anon_sym_generate,
  [anon_sym_reaction] = anon_sym_reaction,
  [anon_sym_collision] = anon_sym_collision,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [anon_sym_coulomb] = anon_sym_coulomb,
  [anon_sym_cross] = anon_sym_cross,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_excitation] = anon_sym_excitation,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_get] = anon_sym_get,
  [sym_define_key] = sym_define_key,
  [sym_identifier] = sym_identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__integer] = sym__integer,
  [sym__decimal1] = sym__decimal1,
  [sym__decimal2] = sym__decimal2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_rad] = anon_sym_rad,
  [anon_sym_mrad] = anon_sym_mrad,
  [anon_sym_urad] = anon_sym_urad,
  [anon_sym_cm2] = anon_sym_cm2,
  [anon_sym_m2] = anon_sym_m2,
  [anon_sym_cm2s] = anon_sym_cm2s,
  [anon_sym_m2s] = anon_sym_m2s,
  [anon_sym_um] = anon_sym_um,
  [anon_sym_mm] = anon_sym_mm,
  [anon_sym_cm] = anon_sym_cm,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_ps] = anon_sym_ps,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m_DASH3] = anon_sym_m_DASH3,
  [anon_sym_cm_DASH3] = anon_sym_cm_DASH3,
  [anon_sym_Jm3] = anon_sym_Jm3,
  [anon_sym_Jcm3] = anon_sym_Jcm3,
  [anon_sym_eV] = anon_sym_eV,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_Vm] = anon_sym_Vm,
  [anon_sym_Vcm] = anon_sym_Vcm,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [aux_sym__pterm_token1] = aux_sym__pterm_token1,
  [aux_sym__nterm_token1] = aux_sym__nterm_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_rate] = anon_sym_rate,
  [anon_sym_janev_rate] = anon_sym_janev_rate,
  [sym_input_file] = sym_input_file,
  [sym__top] = sym__top,
  [sym__nested] = sym__nested,
  [sym_include] = sym_include,
  [sym_define] = sym_define,
  [sym__directive] = sym__directive,
  [sym__nested_directive] = sym__nested_directive,
  [sym_assignment] = sym_assignment,
  [sym__statement] = sym__statement,
  [sym__nested_statement] = sym__nested_statement,
  [sym_new] = sym_new,
  [sym_associative_new] = sym_associative_new,
  [sym_generate] = sym_generate,
  [sym_reaction] = sym_reaction,
  [sym_collision] = sym_collision,
  [sym_excitation] = sym_excitation,
  [sym_get] = sym_get,
  [sym_identifier_sequence] = sym_identifier_sequence,
  [sym__string_literal_single] = sym__string_literal_single,
  [sym__string_literal_double] = sym__string_literal_double,
  [sym_string_literal] = sym_string_literal,
  [sym_decimal] = sym_decimal,
  [sym_value] = sym_value,
  [sym_define_value] = sym_define_value,
  [sym_dimension] = sym_dimension,
  [sym_unit] = sym_unit,
  [sym_block] = sym_block,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym__pterm] = sym__pterm,
  [sym__nterm] = sym__nterm,
  [sym_chems] = sym_chems,
  [sym_sub_formula] = sym_sub_formula,
  [sym_full_formula] = sym_full_formula,
  [sym_arrhenius] = sym_arrhenius,
  [sym_janev] = sym_janev,
  [sym_rate] = sym_rate,
  [sym_range] = sym_range,
  [aux_sym_input_file_repeat1] = aux_sym_input_file_repeat1,
  [aux_sym_identifier_sequence_repeat1] = aux_sym_identifier_sequence_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_chems_repeat1] = aux_sym_chems_repeat1,
  [aux_sym_full_formula_repeat1] = aux_sym_full_formula_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coulomb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cross] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_excitation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [sym_define_key] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal1] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal2] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mrad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm2s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m2s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_um] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m_DASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cm_DASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jcm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vcm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__pterm_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__nterm_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_janev_rate] = {
    .visible = true,
    .named = false,
  },
  [sym_input_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top] = {
    .visible = false,
    .named = true,
  },
  [sym__nested] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__nested_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__nested_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym_associative_new] = {
    .visible = true,
    .named = true,
  },
  [sym_generate] = {
    .visible = true,
    .named = true,
  },
  [sym_reaction] = {
    .visible = true,
    .named = true,
  },
  [sym_collision] = {
    .visible = true,
    .named = true,
  },
  [sym_excitation] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal_single] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_double] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_define_value] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__pterm] = {
    .visible = false,
    .named = true,
  },
  [sym__nterm] = {
    .visible = false,
    .named = true,
  },
  [sym_chems] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_full_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_arrhenius] = {
    .visible = true,
    .named = true,
  },
  [sym_janev] = {
    .visible = true,
    .named = true,
  },
  [sym_rate] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_input_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_formula_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'J') ADVANCE(32);
      if (lookahead == 'K') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(218);
      if (lookahead == 'V') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'j') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'J') ADVANCE(32);
      if (lookahead == 'K') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(218);
      if (lookahead == 'V') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'j') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'J') ADVANCE(32);
      if (lookahead == 'K') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(218);
      if (lookahead == 'V') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'j') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '{') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(5)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(5)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(7)
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '}') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '>') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(211);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(212);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(210);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 'V') ADVANCE(213);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(109)
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(110)
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 115:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(225);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(117)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_define_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__decimal1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__decimal1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__decimal2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__decimal2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '>') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_mrad);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_urad);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_cm2);
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_m2);
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_cm2s);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_m2s);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_um);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_cm);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '2') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ps);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_m_DASH3);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_cm_DASH3);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Jm3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Jcm3);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_eV);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_K);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Vm);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Vcm);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(116);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 117},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 117},
  [39] = {.lex_state = 117},
  [40] = {.lex_state = 117},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 117},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 117},
  [46] = {.lex_state = 117},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 117},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 117},
  [53] = {.lex_state = 117},
  [54] = {.lex_state = 117},
  [55] = {.lex_state = 117},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 117},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 117},
  [65] = {.lex_state = 117},
  [66] = {.lex_state = 117},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 117},
  [73] = {.lex_state = 117},
  [74] = {.lex_state = 117},
  [75] = {.lex_state = 117},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 117},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 117},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 117},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 117},
  [86] = {.lex_state = 117},
  [87] = {.lex_state = 117},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 117},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 117},
  [96] = {.lex_state = 117},
  [97] = {.lex_state = 117},
  [98] = {.lex_state = 117},
  [99] = {.lex_state = 117},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 117},
  [105] = {.lex_state = 117},
  [106] = {.lex_state = 117},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 117},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 117},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 110},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_generate] = ACTIONS(1),
    [anon_sym_reaction] = ACTIONS(1),
    [anon_sym_collision] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_coulomb] = ACTIONS(1),
    [anon_sym_cross] = ACTIONS(1),
    [anon_sym_excitation] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [sym_define_key] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [sym__decimal1] = ACTIONS(1),
    [sym__decimal2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_rad] = ACTIONS(1),
    [anon_sym_mrad] = ACTIONS(1),
    [anon_sym_urad] = ACTIONS(1),
    [anon_sym_cm2] = ACTIONS(1),
    [anon_sym_m2] = ACTIONS(1),
    [anon_sym_cm2s] = ACTIONS(1),
    [anon_sym_m2s] = ACTIONS(1),
    [anon_sym_um] = ACTIONS(1),
    [anon_sym_mm] = ACTIONS(1),
    [anon_sym_cm] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_fs] = ACTIONS(1),
    [anon_sym_ps] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m_DASH3] = ACTIONS(1),
    [anon_sym_cm_DASH3] = ACTIONS(1),
    [anon_sym_Jm3] = ACTIONS(1),
    [anon_sym_Jcm3] = ACTIONS(1),
    [anon_sym_eV] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_Vm] = ACTIONS(1),
    [anon_sym_Vcm] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__pterm_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_rate] = ACTIONS(1),
    [anon_sym_janev_rate] = ACTIONS(1),
  },
  [1] = {
    [sym_input_file] = STATE(187),
    [sym__top] = STATE(10),
    [sym_include] = STATE(10),
    [sym_define] = STATE(10),
    [sym__directive] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym__statement] = STATE(10),
    [sym_new] = STATE(10),
    [sym_associative_new] = STATE(10),
    [sym_generate] = STATE(10),
    [sym_reaction] = STATE(10),
    [sym_collision] = STATE(10),
    [sym_excitation] = STATE(10),
    [sym_identifier_sequence] = STATE(182),
    [aux_sym_input_file_repeat1] = STATE(10),
    [aux_sym_identifier_sequence_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_new] = ACTIONS(11),
    [anon_sym_generate] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym_unit,
    ACTIONS(19), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(17), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [38] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(67), 1,
      sym_unit,
    ACTIONS(23), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(21), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [76] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_unit,
    ACTIONS(23), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(21), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym_unit,
    ACTIONS(27), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(25), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym_unit,
    ACTIONS(19), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(17), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_unit,
    ACTIONS(27), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(25), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      anon_sym_cm2,
      anon_sym_m2,
      anon_sym_cm,
      anon_sym_m,
      anon_sym_V,
    ACTIONS(29), 22,
      anon_sym_deg,
      anon_sym_rad,
      anon_sym_mrad,
      anon_sym_urad,
      anon_sym_cm2s,
      anon_sym_m2s,
      anon_sym_um,
      anon_sym_mm,
      anon_sym_fs,
      anon_sym_ps,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_s,
      anon_sym_m_DASH3,
      anon_sym_cm_DASH3,
      anon_sym_Jm3,
      anon_sym_Jcm3,
      anon_sym_eV,
      anon_sym_K,
      anon_sym_Vm,
      anon_sym_Vcm,
      anon_sym_T,
  [263] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_POUNDinclude,
    ACTIONS(38), 1,
      anon_sym_POUNDdefine,
    ACTIONS(41), 1,
      anon_sym_new,
    ACTIONS(44), 1,
      anon_sym_generate,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(9), 13,
      sym__top,
      sym_include,
      sym_define,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      aux_sym_input_file_repeat1,
  [306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(11), 1,
      anon_sym_new,
    ACTIONS(13), 1,
      anon_sym_generate,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(9), 13,
      sym__top,
      sym_include,
      sym_define,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      aux_sym_input_file_repeat1,
  [349] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      sym__decimal2,
    ACTIONS(62), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(58), 2,
      sym__integer,
      sym__decimal1,
    STATE(60), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(71), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
    STATE(90), 3,
      sym_value,
      sym_tuple,
      sym_list,
  [396] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(80), 1,
      anon_sym_DASH,
    ACTIONS(82), 1,
      anon_sym_PERCENT,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(53), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
    STATE(54), 3,
      sym_value,
      sym_tuple,
      sym_list,
  [443] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      sym__decimal2,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
    ACTIONS(88), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(97), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [487] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [530] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_POUNDinclude,
    ACTIONS(129), 1,
      anon_sym_POUNDdefine,
    ACTIONS(131), 1,
      anon_sym_new,
    ACTIONS(133), 1,
      anon_sym_get,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(192), 1,
      sym_identifier_sequence,
    STATE(18), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [569] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_POUNDinclude,
    ACTIONS(129), 1,
      anon_sym_POUNDdefine,
    ACTIONS(131), 1,
      anon_sym_new,
    ACTIONS(133), 1,
      anon_sym_get,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(192), 1,
      sym_identifier_sequence,
    STATE(22), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [694] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [737] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_POUNDinclude,
    ACTIONS(129), 1,
      anon_sym_POUNDdefine,
    ACTIONS(131), 1,
      anon_sym_new,
    ACTIONS(133), 1,
      anon_sym_get,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(192), 1,
      sym_identifier_sequence,
    STATE(22), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [776] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_POUNDinclude,
    ACTIONS(129), 1,
      anon_sym_POUNDdefine,
    ACTIONS(131), 1,
      anon_sym_new,
    ACTIONS(133), 1,
      anon_sym_get,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(192), 1,
      sym_identifier_sequence,
    STATE(20), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [815] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_POUNDinclude,
    ACTIONS(152), 1,
      anon_sym_POUNDdefine,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(158), 1,
      anon_sym_get,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(192), 1,
      sym_identifier_sequence,
    STATE(22), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [854] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(16), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [894] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(14), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [934] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(17), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [974] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym__decimal2,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 2,
      sym_define_key,
      sym_identifier,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
    STATE(19), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 3,
      sym_string_literal,
      sym_decimal,
      sym_dimension,
  [1014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
      sym__integer,
      sym__decimal1,
    ACTIONS(29), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_DASH_GT,
      sym__decimal2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(166), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(170), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(174), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(178), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(182), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(29), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(186), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      sym__integer,
      sym__decimal1,
      anon_sym_DASH,
    ACTIONS(190), 8,
      sym_define_key,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1189] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym__decimal2,
    ACTIONS(62), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      anon_sym_PERCENT,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(93), 1,
      sym_define_value,
    ACTIONS(58), 2,
      sym__integer,
      sym__decimal1,
    STATE(94), 2,
      sym_decimal,
      sym_dimension,
  [1216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(80), 1,
      anon_sym_DASH,
    ACTIONS(82), 1,
      anon_sym_PERCENT,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(87), 1,
      sym_define_value,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
    STATE(72), 2,
      sym_decimal,
      sym_dimension,
  [1243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym__pterm_token1,
    ACTIONS(203), 1,
      aux_sym__nterm_token1,
    ACTIONS(198), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(38), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym__pterm_token1,
    ACTIONS(210), 1,
      aux_sym__nterm_token1,
    ACTIONS(206), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(38), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym__pterm_token1,
    ACTIONS(210), 1,
      aux_sym__nterm_token1,
    ACTIONS(212), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(39), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1303] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    STATE(147), 1,
      sym_string_literal,
    STATE(163), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1329] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
    STATE(160), 1,
      sym_string_literal,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1367] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    STATE(158), 1,
      sym_string_literal,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(76), 1,
      sym_string_literal,
    STATE(60), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(228), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1454] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_reaction,
    ACTIONS(232), 1,
      anon_sym_collision,
    ACTIONS(234), 1,
      anon_sym_excitation,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(41), 1,
      sym_identifier_sequence,
    STATE(103), 1,
      aux_sym_identifier_sequence_repeat1,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(240), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(242), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(248), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(184), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(252), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(256), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(102), 1,
      sym_string_literal,
    STATE(60), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(192), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(188), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(31), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(168), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(262), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(159), 1,
      sym_string_literal,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(268), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(272), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(180), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(176), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(172), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(176), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(180), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(274), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(184), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(281), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(285), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(289), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(293), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(297), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(301), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(305), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(166), 1,
      sym_string_literal,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(172), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(106), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(309), 2,
      sym_define_key,
      sym_identifier,
  [1964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(305), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(301), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(313), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(317), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(321), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(268), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(262), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(252), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(325), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(240), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(321), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(281), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(329), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(333), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(337), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(341), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(345), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(55), 1,
      sym_string_literal,
    STATE(43), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_for,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(274), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(256), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_for,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(242), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(360), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(368), 1,
      sym_define_key,
    STATE(105), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_rate,
    ACTIONS(372), 1,
      anon_sym_janev_rate,
    STATE(164), 1,
      sym_rate,
    STATE(167), 2,
      sym_arrhenius,
      sym_janev,
  [2359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_rate,
    ACTIONS(376), 1,
      anon_sym_janev_rate,
    STATE(99), 1,
      sym_rate,
    STATE(86), 2,
      sym_arrhenius,
      sym_janev,
  [2376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(133), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(123), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(120), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(117), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(118), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(119), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(121), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(124), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(125), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(98), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym__decimal2,
    STATE(213), 1,
      sym_decimal,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
  [2564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(129), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(132), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(3), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(4), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(115), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(131), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(114), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(113), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(138), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym__decimal2,
    STATE(200), 1,
      sym_decimal,
    ACTIONS(117), 2,
      sym__integer,
      sym__decimal1,
  [2704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(137), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      sym_sub_formula,
    STATE(168), 1,
      sym_chems,
    ACTIONS(386), 2,
      sym_define_key,
      sym_identifier,
  [2732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(6), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(141), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(139), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(73), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(5), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(74), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_sub_formula,
    STATE(168), 1,
      sym_chems,
    ACTIONS(386), 2,
      sym_define_key,
      sym_identifier,
  [2830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(2), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__decimal2,
    STATE(7), 1,
      sym_decimal,
    ACTIONS(382), 2,
      sym__integer,
      sym__decimal1,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__decimal2,
    STATE(128), 1,
      sym_decimal,
    ACTIONS(76), 2,
      sym__integer,
      sym__decimal1,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      sym_chems,
    ACTIONS(386), 2,
      sym_define_key,
      sym_identifier,
  [2883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      anon_sym_for,
    STATE(63), 1,
      sym_block,
  [2896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym_full_formula_repeat1,
  [2909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(42), 1,
      sym_identifier_sequence,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
  [2922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(44), 1,
      sym_identifier_sequence,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
  [2935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym_full_formula_repeat1,
  [2948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_full_formula_repeat1,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_coulomb,
    ACTIONS(405), 1,
      anon_sym_cross,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_full_formula,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [3015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(91), 1,
      sym_range,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DASH_GT,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_DASH_GT,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LT_DASH_GT,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_EQ,
  [3136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_EQ,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
  [3150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [3178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_define_key,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_PERCENT,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_define_key,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_level,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_identifier,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_section,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_identifier,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_PERCENT,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_EQ,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_PERCENT,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_identifier,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__integer,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_EQ,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 443,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 569,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 737,
  [SMALL_STATE(21)] = 776,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 854,
  [SMALL_STATE(24)] = 894,
  [SMALL_STATE(25)] = 934,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1037,
  [SMALL_STATE(29)] = 1056,
  [SMALL_STATE(30)] = 1075,
  [SMALL_STATE(31)] = 1094,
  [SMALL_STATE(32)] = 1113,
  [SMALL_STATE(33)] = 1132,
  [SMALL_STATE(34)] = 1151,
  [SMALL_STATE(35)] = 1170,
  [SMALL_STATE(36)] = 1189,
  [SMALL_STATE(37)] = 1216,
  [SMALL_STATE(38)] = 1243,
  [SMALL_STATE(39)] = 1263,
  [SMALL_STATE(40)] = 1283,
  [SMALL_STATE(41)] = 1303,
  [SMALL_STATE(42)] = 1329,
  [SMALL_STATE(43)] = 1352,
  [SMALL_STATE(44)] = 1367,
  [SMALL_STATE(45)] = 1390,
  [SMALL_STATE(46)] = 1405,
  [SMALL_STATE(47)] = 1420,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1454,
  [SMALL_STATE(50)] = 1476,
  [SMALL_STATE(51)] = 1490,
  [SMALL_STATE(52)] = 1506,
  [SMALL_STATE(53)] = 1520,
  [SMALL_STATE(54)] = 1534,
  [SMALL_STATE(55)] = 1548,
  [SMALL_STATE(56)] = 1562,
  [SMALL_STATE(57)] = 1582,
  [SMALL_STATE(58)] = 1596,
  [SMALL_STATE(59)] = 1610,
  [SMALL_STATE(60)] = 1624,
  [SMALL_STATE(61)] = 1638,
  [SMALL_STATE(62)] = 1652,
  [SMALL_STATE(63)] = 1672,
  [SMALL_STATE(64)] = 1686,
  [SMALL_STATE(65)] = 1700,
  [SMALL_STATE(66)] = 1714,
  [SMALL_STATE(67)] = 1728,
  [SMALL_STATE(68)] = 1742,
  [SMALL_STATE(69)] = 1756,
  [SMALL_STATE(70)] = 1770,
  [SMALL_STATE(71)] = 1786,
  [SMALL_STATE(72)] = 1800,
  [SMALL_STATE(73)] = 1814,
  [SMALL_STATE(74)] = 1828,
  [SMALL_STATE(75)] = 1842,
  [SMALL_STATE(76)] = 1856,
  [SMALL_STATE(77)] = 1870,
  [SMALL_STATE(78)] = 1884,
  [SMALL_STATE(79)] = 1898,
  [SMALL_STATE(80)] = 1912,
  [SMALL_STATE(81)] = 1932,
  [SMALL_STATE(82)] = 1946,
  [SMALL_STATE(83)] = 1964,
  [SMALL_STATE(84)] = 1978,
  [SMALL_STATE(85)] = 1992,
  [SMALL_STATE(86)] = 2006,
  [SMALL_STATE(87)] = 2020,
  [SMALL_STATE(88)] = 2034,
  [SMALL_STATE(89)] = 2048,
  [SMALL_STATE(90)] = 2062,
  [SMALL_STATE(91)] = 2076,
  [SMALL_STATE(92)] = 2090,
  [SMALL_STATE(93)] = 2104,
  [SMALL_STATE(94)] = 2118,
  [SMALL_STATE(95)] = 2132,
  [SMALL_STATE(96)] = 2146,
  [SMALL_STATE(97)] = 2160,
  [SMALL_STATE(98)] = 2174,
  [SMALL_STATE(99)] = 2188,
  [SMALL_STATE(100)] = 2202,
  [SMALL_STATE(101)] = 2222,
  [SMALL_STATE(102)] = 2240,
  [SMALL_STATE(103)] = 2254,
  [SMALL_STATE(104)] = 2272,
  [SMALL_STATE(105)] = 2286,
  [SMALL_STATE(106)] = 2297,
  [SMALL_STATE(107)] = 2308,
  [SMALL_STATE(108)] = 2325,
  [SMALL_STATE(109)] = 2342,
  [SMALL_STATE(110)] = 2359,
  [SMALL_STATE(111)] = 2376,
  [SMALL_STATE(112)] = 2393,
  [SMALL_STATE(113)] = 2410,
  [SMALL_STATE(114)] = 2424,
  [SMALL_STATE(115)] = 2438,
  [SMALL_STATE(116)] = 2452,
  [SMALL_STATE(117)] = 2466,
  [SMALL_STATE(118)] = 2480,
  [SMALL_STATE(119)] = 2494,
  [SMALL_STATE(120)] = 2508,
  [SMALL_STATE(121)] = 2522,
  [SMALL_STATE(122)] = 2536,
  [SMALL_STATE(123)] = 2550,
  [SMALL_STATE(124)] = 2564,
  [SMALL_STATE(125)] = 2578,
  [SMALL_STATE(126)] = 2592,
  [SMALL_STATE(127)] = 2606,
  [SMALL_STATE(128)] = 2620,
  [SMALL_STATE(129)] = 2634,
  [SMALL_STATE(130)] = 2648,
  [SMALL_STATE(131)] = 2662,
  [SMALL_STATE(132)] = 2676,
  [SMALL_STATE(133)] = 2690,
  [SMALL_STATE(134)] = 2704,
  [SMALL_STATE(135)] = 2718,
  [SMALL_STATE(136)] = 2732,
  [SMALL_STATE(137)] = 2746,
  [SMALL_STATE(138)] = 2760,
  [SMALL_STATE(139)] = 2774,
  [SMALL_STATE(140)] = 2788,
  [SMALL_STATE(141)] = 2802,
  [SMALL_STATE(142)] = 2816,
  [SMALL_STATE(143)] = 2830,
  [SMALL_STATE(144)] = 2844,
  [SMALL_STATE(145)] = 2858,
  [SMALL_STATE(146)] = 2872,
  [SMALL_STATE(147)] = 2883,
  [SMALL_STATE(148)] = 2896,
  [SMALL_STATE(149)] = 2909,
  [SMALL_STATE(150)] = 2922,
  [SMALL_STATE(151)] = 2935,
  [SMALL_STATE(152)] = 2948,
  [SMALL_STATE(153)] = 2961,
  [SMALL_STATE(154)] = 2971,
  [SMALL_STATE(155)] = 2979,
  [SMALL_STATE(156)] = 2987,
  [SMALL_STATE(157)] = 2997,
  [SMALL_STATE(158)] = 3005,
  [SMALL_STATE(159)] = 3015,
  [SMALL_STATE(160)] = 3025,
  [SMALL_STATE(161)] = 3035,
  [SMALL_STATE(162)] = 3043,
  [SMALL_STATE(163)] = 3051,
  [SMALL_STATE(164)] = 3059,
  [SMALL_STATE(165)] = 3069,
  [SMALL_STATE(166)] = 3077,
  [SMALL_STATE(167)] = 3087,
  [SMALL_STATE(168)] = 3094,
  [SMALL_STATE(169)] = 3101,
  [SMALL_STATE(170)] = 3108,
  [SMALL_STATE(171)] = 3115,
  [SMALL_STATE(172)] = 3122,
  [SMALL_STATE(173)] = 3129,
  [SMALL_STATE(174)] = 3136,
  [SMALL_STATE(175)] = 3143,
  [SMALL_STATE(176)] = 3150,
  [SMALL_STATE(177)] = 3157,
  [SMALL_STATE(178)] = 3164,
  [SMALL_STATE(179)] = 3171,
  [SMALL_STATE(180)] = 3178,
  [SMALL_STATE(181)] = 3185,
  [SMALL_STATE(182)] = 3192,
  [SMALL_STATE(183)] = 3199,
  [SMALL_STATE(184)] = 3206,
  [SMALL_STATE(185)] = 3213,
  [SMALL_STATE(186)] = 3220,
  [SMALL_STATE(187)] = 3227,
  [SMALL_STATE(188)] = 3234,
  [SMALL_STATE(189)] = 3241,
  [SMALL_STATE(190)] = 3248,
  [SMALL_STATE(191)] = 3255,
  [SMALL_STATE(192)] = 3262,
  [SMALL_STATE(193)] = 3269,
  [SMALL_STATE(194)] = 3276,
  [SMALL_STATE(195)] = 3283,
  [SMALL_STATE(196)] = 3290,
  [SMALL_STATE(197)] = 3297,
  [SMALL_STATE(198)] = 3304,
  [SMALL_STATE(199)] = 3311,
  [SMALL_STATE(200)] = 3318,
  [SMALL_STATE(201)] = 3325,
  [SMALL_STATE(202)] = 3332,
  [SMALL_STATE(203)] = 3339,
  [SMALL_STATE(204)] = 3346,
  [SMALL_STATE(205)] = 3353,
  [SMALL_STATE(206)] = 3360,
  [SMALL_STATE(207)] = 3367,
  [SMALL_STATE(208)] = 3374,
  [SMALL_STATE(209)] = 3381,
  [SMALL_STATE(210)] = 3388,
  [SMALL_STATE(211)] = 3395,
  [SMALL_STATE(212)] = 3402,
  [SMALL_STATE(213)] = 3409,
  [SMALL_STATE(214)] = 3416,
  [SMALL_STATE(215)] = 3423,
  [SMALL_STATE(216)] = 3430,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(100),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(197),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(49),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(150),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(201),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(202),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(207),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(144),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(191),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(82),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(108),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_sequence, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(70),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(101),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_sequence, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(142),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [455] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turbowave(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
