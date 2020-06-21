#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
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
  anon_sym_true = 24,
  anon_sym_false = 25,
  anon_sym_yes = 26,
  anon_sym_no = 27,
  anon_sym_on = 28,
  anon_sym_off = 29,
  anon_sym_deg = 30,
  anon_sym_rad = 31,
  anon_sym_mrad = 32,
  anon_sym_urad = 33,
  anon_sym_cm2 = 34,
  anon_sym_m2 = 35,
  anon_sym_cm2s = 36,
  anon_sym_m2s = 37,
  anon_sym_um = 38,
  anon_sym_mm = 39,
  anon_sym_cm = 40,
  anon_sym_m = 41,
  anon_sym_fs = 42,
  anon_sym_ps = 43,
  anon_sym_ns = 44,
  anon_sym_us = 45,
  anon_sym_s = 46,
  anon_sym_m_DASH3 = 47,
  anon_sym_cm_DASH3 = 48,
  anon_sym_Jm3 = 49,
  anon_sym_Jcm3 = 50,
  anon_sym_eV = 51,
  anon_sym_K = 52,
  anon_sym_V = 53,
  anon_sym_Vm = 54,
  anon_sym_Vcm = 55,
  anon_sym_T = 56,
  anon_sym_DASH = 57,
  anon_sym_PERCENT = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  anon_sym_LPAREN = 61,
  anon_sym_RPAREN = 62,
  sym_comment = 63,
  aux_sym__pterm_token1 = 64,
  aux_sym__nterm_token1 = 65,
  anon_sym_COLON = 66,
  anon_sym_rate = 67,
  anon_sym_janev_rate = 68,
  sym_input_file = 69,
  sym__top = 70,
  sym__nested = 71,
  sym_include = 72,
  sym_define = 73,
  sym__directive = 74,
  sym__nested_directive = 75,
  sym_assignment = 76,
  sym__statement = 77,
  sym__nested_statement = 78,
  sym_new = 79,
  sym_associative_new = 80,
  sym_generate = 81,
  sym_reaction = 82,
  sym_collision = 83,
  sym_excitation = 84,
  sym_get = 85,
  sym_identifier_sequence = 86,
  sym__string_literal_single = 87,
  sym__string_literal_double = 88,
  sym_string_literal = 89,
  sym_decimal = 90,
  sym_boolean = 91,
  sym_unit = 92,
  sym_dimension = 93,
  sym_value = 94,
  sym_define_value = 95,
  sym_block = 96,
  sym_tuple = 97,
  sym_list = 98,
  sym__pterm = 99,
  sym__nterm = 100,
  sym_chems = 101,
  sym_sub_formula = 102,
  sym_full_formula = 103,
  sym_arrhenius = 104,
  sym_janev = 105,
  sym_rate = 106,
  sym_range = 107,
  aux_sym_input_file_repeat1 = 108,
  aux_sym_identifier_sequence_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_tuple_repeat1 = 111,
  aux_sym_chems_repeat1 = 112,
  aux_sym_full_formula_repeat1 = 113,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
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
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
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
  [sym_boolean] = "boolean",
  [sym_unit] = "unit",
  [sym_dimension] = "dimension",
  [sym_value] = "value",
  [sym_define_value] = "define_value",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [sym_boolean] = sym_boolean,
  [sym_unit] = sym_unit,
  [sym_dimension] = sym_dimension,
  [sym_value] = sym_value,
  [sym_define_value] = sym_define_value,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
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
      if (eof) ADVANCE(129);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == 'K') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == 'K') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == 'K') ADVANCE(246);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'y') ADVANCE(164);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '$') ADVANCE(126);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '{') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == '{') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(6)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(6)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(8)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '}') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '>') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(243);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(241);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(244);
      END_STATE();
    case 20:
      if (lookahead == '3') ADVANCE(242);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 22:
      if (lookahead == 'V') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(222);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 120:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(120)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 121:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(121)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 126:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 127:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(260);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(128)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_define_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__decimal1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__decimal1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__decimal2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__decimal2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_rad);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_mrad);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_urad);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_cm2);
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_m2);
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_cm2s);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_m2s);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_um);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_mm);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_cm);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '2') ADVANCE(228);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '2') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ps);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_m_DASH3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_cm_DASH3);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Jm3);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Jcm3);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_eV);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_K);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Vm);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Vcm);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '>') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(127);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 128},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 128},
  [41] = {.lex_state = 128},
  [42] = {.lex_state = 128},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 128},
  [46] = {.lex_state = 128},
  [47] = {.lex_state = 128},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 120},
  [51] = {.lex_state = 128},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 128},
  [54] = {.lex_state = 128},
  [55] = {.lex_state = 128},
  [56] = {.lex_state = 128},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 128},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 128},
  [66] = {.lex_state = 128},
  [67] = {.lex_state = 128},
  [68] = {.lex_state = 128},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 128},
  [75] = {.lex_state = 128},
  [76] = {.lex_state = 128},
  [77] = {.lex_state = 128},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 128},
  [80] = {.lex_state = 128},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 128},
  [83] = {.lex_state = 128},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 128},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 128},
  [90] = {.lex_state = 128},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 128},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 128},
  [98] = {.lex_state = 128},
  [99] = {.lex_state = 128},
  [100] = {.lex_state = 128},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 128},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 128},
  [110] = {.lex_state = 128},
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
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
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
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 128},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 128},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 121},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [sym_input_file] = STATE(191),
    [sym__top] = STATE(20),
    [sym_include] = STATE(20),
    [sym_define] = STATE(20),
    [sym__directive] = STATE(20),
    [sym_assignment] = STATE(20),
    [sym__statement] = STATE(20),
    [sym_new] = STATE(20),
    [sym_associative_new] = STATE(20),
    [sym_generate] = STATE(20),
    [sym_reaction] = STATE(20),
    [sym_collision] = STATE(20),
    [sym_excitation] = STATE(20),
    [sym_identifier_sequence] = STATE(186),
    [aux_sym_input_file_repeat1] = STATE(20),
    [aux_sym_identifier_sequence_repeat1] = STATE(52),
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
    STATE(68), 1,
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
    STATE(69), 1,
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
    STATE(70), 1,
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
    STATE(27), 1,
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
    STATE(28), 1,
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
  [190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
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
  [263] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_define_key,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__decimal2,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 2,
      sym__integer,
      sym__decimal1,
    STATE(61), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(94), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(73), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(45), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [321] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_define_key,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(55), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(54), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(67), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [379] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_define_key,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      sym__decimal2,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(95), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [434] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [488] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [542] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [596] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [650] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [701] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(12), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [752] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(14), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [803] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_define_key,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym__decimal2,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      sym__integer,
      sym__decimal1,
    STATE(15), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(25), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(30), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [854] = 10,
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
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(186), 1,
      sym_identifier_sequence,
    STATE(21), 13,
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
  [897] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_POUNDinclude,
    ACTIONS(139), 1,
      anon_sym_POUNDdefine,
    ACTIONS(142), 1,
      anon_sym_new,
    ACTIONS(145), 1,
      anon_sym_generate,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(186), 1,
      sym_identifier_sequence,
    STATE(21), 13,
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
  [940] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_POUNDinclude,
    ACTIONS(153), 1,
      anon_sym_POUNDdefine,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(157), 1,
      anon_sym_get,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    STATE(32), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [979] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_POUNDinclude,
    ACTIONS(153), 1,
      anon_sym_POUNDdefine,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(157), 1,
      anon_sym_get,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    STATE(26), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(31), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(165), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1068] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_POUNDinclude,
    ACTIONS(153), 1,
      anon_sym_POUNDdefine,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(157), 1,
      anon_sym_get,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    STATE(33), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(171), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(175), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(179), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(183), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(187), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1232] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_POUNDinclude,
    ACTIONS(153), 1,
      anon_sym_POUNDdefine,
    ACTIONS(155), 1,
      anon_sym_new,
    ACTIONS(157), 1,
      anon_sym_get,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    STATE(33), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1271] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_POUNDinclude,
    ACTIONS(194), 1,
      anon_sym_POUNDdefine,
    ACTIONS(197), 1,
      anon_sym_new,
    ACTIONS(200), 1,
      anon_sym_get,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    STATE(33), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(210), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(214), 10,
      sym_identifier,
      sym__integer,
      sym__decimal1,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_DASH,
  [1360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__decimal2,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(96), 1,
      sym_define_value,
    ACTIONS(41), 2,
      sym__integer,
      sym__decimal1,
    STATE(103), 3,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(45), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1396] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_PERCENT,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(90), 1,
      sym_define_value,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
    STATE(74), 3,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(67), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1432] = 3,
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
  [1455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    STATE(150), 1,
      sym_string_literal,
    STATE(169), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym__pterm_token1,
    ACTIONS(232), 1,
      aux_sym__nterm_token1,
    ACTIONS(228), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(42), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym__pterm_token1,
    ACTIONS(232), 1,
      aux_sym__nterm_token1,
    ACTIONS(234), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(40), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__pterm_token1,
    ACTIONS(241), 1,
      aux_sym__nterm_token1,
    ACTIONS(236), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(42), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1541] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    STATE(159), 1,
      sym_string_literal,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    STATE(162), 1,
      sym_string_literal,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(187), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1646] = 3,
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
  [1660] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_reaction,
    ACTIONS(252), 1,
      anon_sym_collision,
    ACTIONS(254), 1,
      anon_sym_excitation,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(39), 1,
      sym_identifier_sequence,
    STATE(106), 1,
      aux_sym_identifier_sequence_repeat1,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(260), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(262), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1712] = 3,
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
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(183), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1740] = 3,
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
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(276), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(105), 1,
      sym_string_literal,
    STATE(61), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(210), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(214), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1816] = 3,
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
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(165), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(78), 1,
      sym_string_literal,
    STATE(61), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(284), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(163), 1,
      sym_string_literal,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(290), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(294), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(179), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(175), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(171), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(175), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(179), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(296), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(183), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(303), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(187), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(307), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(311), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(315), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(319), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(323), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(168), 1,
      sym_string_literal,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2144] = 3,
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
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(171), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(110), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(331), 2,
      sym_define_key,
      sym_identifier,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(329), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(248), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(335), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(319), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(339), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(343), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(290), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(284), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(347), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(272), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(260), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(343), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(351), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(355), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(359), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(363), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(367), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(56), 1,
      sym_string_literal,
    STATE(47), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(303), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_for,
    ACTIONS(373), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(296), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(276), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_for,
    ACTIONS(378), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(262), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(382), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(384), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(390), 1,
      sym_define_key,
    STATE(109), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_rate,
    ACTIONS(394), 1,
      anon_sym_janev_rate,
    STATE(167), 1,
      sym_rate,
    STATE(184), 2,
      sym_arrhenius,
      sym_janev,
  [2599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_rate,
    ACTIONS(402), 1,
      anon_sym_janev_rate,
    STATE(100), 1,
      sym_rate,
    STATE(89), 2,
      sym_arrhenius,
      sym_janev,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__decimal2,
    STATE(204), 1,
      sym_decimal,
    ACTIONS(404), 2,
      sym__integer,
      sym__decimal1,
  [2664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(116), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(119), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(120), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(121), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(123), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(125), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(127), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(99), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(130), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(122), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(134), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__decimal2,
    STATE(217), 1,
      sym_decimal,
    ACTIONS(404), 2,
      sym__integer,
      sym__decimal1,
  [2832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(3), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(132), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(4), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [2874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(117), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(2), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(141), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(140), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(126), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(128), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [2958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 1,
      sym_sub_formula,
    STATE(171), 1,
      sym_chems,
    ACTIONS(412), 2,
      sym_define_key,
      sym_identifier,
  [2972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(7), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [2986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(144), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(143), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(5), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [3028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(76), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(80), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      sym_sub_formula,
    STATE(171), 1,
      sym_chems,
    ACTIONS(412), 2,
      sym_define_key,
      sym_identifier,
  [3070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(137), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__decimal2,
    STATE(6), 1,
      sym_decimal,
    ACTIONS(408), 2,
      sym__integer,
      sym__decimal1,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__decimal2,
    STATE(136), 1,
      sym_decimal,
    ACTIONS(63), 2,
      sym__integer,
      sym__decimal1,
  [3112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(43), 1,
      sym_identifier_sequence,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
  [3125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_for,
    STATE(65), 1,
      sym_block,
  [3138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym_full_formula_repeat1,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(44), 1,
      sym_identifier_sequence,
    STATE(52), 1,
      aux_sym_identifier_sequence_repeat1,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(164), 1,
      sym_chems,
    ACTIONS(412), 2,
      sym_define_key,
      sym_identifier,
  [3175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym_full_formula_repeat1,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_full_formula_repeat1,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_coulomb,
    ACTIONS(431), 1,
      anon_sym_cross,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_full_formula,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(93), 1,
      sym_range,
  [3309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_block,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_EQ,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DASH_GT,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DASH_GT,
  [3362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT_DASH_GT,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_EQ,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_EQ,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
  [3495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
  [3502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_define_key,
  [3509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [3516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
  [3523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_PERCENT,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_define_key,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_level,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_identifier,
  [3586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [3593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_section,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [3607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_PERCENT,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_EQ,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__integer,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_EQ,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
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
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 596,
  [SMALL_STATE(16)] = 650,
  [SMALL_STATE(17)] = 701,
  [SMALL_STATE(18)] = 752,
  [SMALL_STATE(19)] = 803,
  [SMALL_STATE(20)] = 854,
  [SMALL_STATE(21)] = 897,
  [SMALL_STATE(22)] = 940,
  [SMALL_STATE(23)] = 979,
  [SMALL_STATE(24)] = 1018,
  [SMALL_STATE(25)] = 1043,
  [SMALL_STATE(26)] = 1068,
  [SMALL_STATE(27)] = 1107,
  [SMALL_STATE(28)] = 1132,
  [SMALL_STATE(29)] = 1157,
  [SMALL_STATE(30)] = 1182,
  [SMALL_STATE(31)] = 1207,
  [SMALL_STATE(32)] = 1232,
  [SMALL_STATE(33)] = 1271,
  [SMALL_STATE(34)] = 1310,
  [SMALL_STATE(35)] = 1335,
  [SMALL_STATE(36)] = 1360,
  [SMALL_STATE(37)] = 1396,
  [SMALL_STATE(38)] = 1432,
  [SMALL_STATE(39)] = 1455,
  [SMALL_STATE(40)] = 1481,
  [SMALL_STATE(41)] = 1501,
  [SMALL_STATE(42)] = 1521,
  [SMALL_STATE(43)] = 1541,
  [SMALL_STATE(44)] = 1564,
  [SMALL_STATE(45)] = 1587,
  [SMALL_STATE(46)] = 1602,
  [SMALL_STATE(47)] = 1617,
  [SMALL_STATE(48)] = 1632,
  [SMALL_STATE(49)] = 1646,
  [SMALL_STATE(50)] = 1660,
  [SMALL_STATE(51)] = 1682,
  [SMALL_STATE(52)] = 1696,
  [SMALL_STATE(53)] = 1712,
  [SMALL_STATE(54)] = 1726,
  [SMALL_STATE(55)] = 1740,
  [SMALL_STATE(56)] = 1754,
  [SMALL_STATE(57)] = 1768,
  [SMALL_STATE(58)] = 1788,
  [SMALL_STATE(59)] = 1802,
  [SMALL_STATE(60)] = 1816,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1844,
  [SMALL_STATE(63)] = 1864,
  [SMALL_STATE(64)] = 1878,
  [SMALL_STATE(65)] = 1898,
  [SMALL_STATE(66)] = 1912,
  [SMALL_STATE(67)] = 1926,
  [SMALL_STATE(68)] = 1940,
  [SMALL_STATE(69)] = 1954,
  [SMALL_STATE(70)] = 1968,
  [SMALL_STATE(71)] = 1982,
  [SMALL_STATE(72)] = 1996,
  [SMALL_STATE(73)] = 2012,
  [SMALL_STATE(74)] = 2026,
  [SMALL_STATE(75)] = 2040,
  [SMALL_STATE(76)] = 2054,
  [SMALL_STATE(77)] = 2068,
  [SMALL_STATE(78)] = 2082,
  [SMALL_STATE(79)] = 2096,
  [SMALL_STATE(80)] = 2110,
  [SMALL_STATE(81)] = 2124,
  [SMALL_STATE(82)] = 2144,
  [SMALL_STATE(83)] = 2158,
  [SMALL_STATE(84)] = 2172,
  [SMALL_STATE(85)] = 2190,
  [SMALL_STATE(86)] = 2204,
  [SMALL_STATE(87)] = 2218,
  [SMALL_STATE(88)] = 2232,
  [SMALL_STATE(89)] = 2246,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2274,
  [SMALL_STATE(92)] = 2288,
  [SMALL_STATE(93)] = 2302,
  [SMALL_STATE(94)] = 2316,
  [SMALL_STATE(95)] = 2330,
  [SMALL_STATE(96)] = 2344,
  [SMALL_STATE(97)] = 2358,
  [SMALL_STATE(98)] = 2372,
  [SMALL_STATE(99)] = 2386,
  [SMALL_STATE(100)] = 2400,
  [SMALL_STATE(101)] = 2414,
  [SMALL_STATE(102)] = 2428,
  [SMALL_STATE(103)] = 2448,
  [SMALL_STATE(104)] = 2462,
  [SMALL_STATE(105)] = 2480,
  [SMALL_STATE(106)] = 2494,
  [SMALL_STATE(107)] = 2512,
  [SMALL_STATE(108)] = 2526,
  [SMALL_STATE(109)] = 2543,
  [SMALL_STATE(110)] = 2554,
  [SMALL_STATE(111)] = 2565,
  [SMALL_STATE(112)] = 2582,
  [SMALL_STATE(113)] = 2599,
  [SMALL_STATE(114)] = 2616,
  [SMALL_STATE(115)] = 2633,
  [SMALL_STATE(116)] = 2650,
  [SMALL_STATE(117)] = 2664,
  [SMALL_STATE(118)] = 2678,
  [SMALL_STATE(119)] = 2692,
  [SMALL_STATE(120)] = 2706,
  [SMALL_STATE(121)] = 2720,
  [SMALL_STATE(122)] = 2734,
  [SMALL_STATE(123)] = 2748,
  [SMALL_STATE(124)] = 2762,
  [SMALL_STATE(125)] = 2776,
  [SMALL_STATE(126)] = 2790,
  [SMALL_STATE(127)] = 2804,
  [SMALL_STATE(128)] = 2818,
  [SMALL_STATE(129)] = 2832,
  [SMALL_STATE(130)] = 2846,
  [SMALL_STATE(131)] = 2860,
  [SMALL_STATE(132)] = 2874,
  [SMALL_STATE(133)] = 2888,
  [SMALL_STATE(134)] = 2902,
  [SMALL_STATE(135)] = 2916,
  [SMALL_STATE(136)] = 2930,
  [SMALL_STATE(137)] = 2944,
  [SMALL_STATE(138)] = 2958,
  [SMALL_STATE(139)] = 2972,
  [SMALL_STATE(140)] = 2986,
  [SMALL_STATE(141)] = 3000,
  [SMALL_STATE(142)] = 3014,
  [SMALL_STATE(143)] = 3028,
  [SMALL_STATE(144)] = 3042,
  [SMALL_STATE(145)] = 3056,
  [SMALL_STATE(146)] = 3070,
  [SMALL_STATE(147)] = 3084,
  [SMALL_STATE(148)] = 3098,
  [SMALL_STATE(149)] = 3112,
  [SMALL_STATE(150)] = 3125,
  [SMALL_STATE(151)] = 3138,
  [SMALL_STATE(152)] = 3151,
  [SMALL_STATE(153)] = 3164,
  [SMALL_STATE(154)] = 3175,
  [SMALL_STATE(155)] = 3188,
  [SMALL_STATE(156)] = 3201,
  [SMALL_STATE(157)] = 3209,
  [SMALL_STATE(158)] = 3217,
  [SMALL_STATE(159)] = 3227,
  [SMALL_STATE(160)] = 3237,
  [SMALL_STATE(161)] = 3245,
  [SMALL_STATE(162)] = 3255,
  [SMALL_STATE(163)] = 3265,
  [SMALL_STATE(164)] = 3275,
  [SMALL_STATE(165)] = 3283,
  [SMALL_STATE(166)] = 3291,
  [SMALL_STATE(167)] = 3299,
  [SMALL_STATE(168)] = 3309,
  [SMALL_STATE(169)] = 3319,
  [SMALL_STATE(170)] = 3327,
  [SMALL_STATE(171)] = 3334,
  [SMALL_STATE(172)] = 3341,
  [SMALL_STATE(173)] = 3348,
  [SMALL_STATE(174)] = 3355,
  [SMALL_STATE(175)] = 3362,
  [SMALL_STATE(176)] = 3369,
  [SMALL_STATE(177)] = 3376,
  [SMALL_STATE(178)] = 3383,
  [SMALL_STATE(179)] = 3390,
  [SMALL_STATE(180)] = 3397,
  [SMALL_STATE(181)] = 3404,
  [SMALL_STATE(182)] = 3411,
  [SMALL_STATE(183)] = 3418,
  [SMALL_STATE(184)] = 3425,
  [SMALL_STATE(185)] = 3432,
  [SMALL_STATE(186)] = 3439,
  [SMALL_STATE(187)] = 3446,
  [SMALL_STATE(188)] = 3453,
  [SMALL_STATE(189)] = 3460,
  [SMALL_STATE(190)] = 3467,
  [SMALL_STATE(191)] = 3474,
  [SMALL_STATE(192)] = 3481,
  [SMALL_STATE(193)] = 3488,
  [SMALL_STATE(194)] = 3495,
  [SMALL_STATE(195)] = 3502,
  [SMALL_STATE(196)] = 3509,
  [SMALL_STATE(197)] = 3516,
  [SMALL_STATE(198)] = 3523,
  [SMALL_STATE(199)] = 3530,
  [SMALL_STATE(200)] = 3537,
  [SMALL_STATE(201)] = 3544,
  [SMALL_STATE(202)] = 3551,
  [SMALL_STATE(203)] = 3558,
  [SMALL_STATE(204)] = 3565,
  [SMALL_STATE(205)] = 3572,
  [SMALL_STATE(206)] = 3579,
  [SMALL_STATE(207)] = 3586,
  [SMALL_STATE(208)] = 3593,
  [SMALL_STATE(209)] = 3600,
  [SMALL_STATE(210)] = 3607,
  [SMALL_STATE(211)] = 3614,
  [SMALL_STATE(212)] = 3621,
  [SMALL_STATE(213)] = 3628,
  [SMALL_STATE(214)] = 3635,
  [SMALL_STATE(215)] = 3642,
  [SMALL_STATE(216)] = 3649,
  [SMALL_STATE(217)] = 3656,
  [SMALL_STATE(218)] = 3663,
  [SMALL_STATE(219)] = 3670,
  [SMALL_STATE(220)] = 3677,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(205),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(206),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(24),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(31),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(211),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(147),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(102),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(201),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(50),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(149),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(195),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(84),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(111),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_sequence, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(72),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(104),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_sequence, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(145),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [481] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
