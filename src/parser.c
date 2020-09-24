#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  anon_sym_LBRACKdeg_RBRACK = 30,
  anon_sym_LBRACKrad_RBRACK = 31,
  anon_sym_LBRACKmrad_RBRACK = 32,
  anon_sym_LBRACKurad_RBRACK = 33,
  anon_sym_LBRACKcm2_RBRACK = 34,
  anon_sym_LBRACKm2_RBRACK = 35,
  anon_sym_LBRACKcm2_SLASHs_RBRACK = 36,
  anon_sym_LBRACKm2_SLASHs_RBRACK = 37,
  anon_sym_LBRACKum_RBRACK = 38,
  anon_sym_LBRACKmm_RBRACK = 39,
  anon_sym_LBRACKcm_RBRACK = 40,
  anon_sym_LBRACKm_RBRACK = 41,
  anon_sym_LBRACKfs_RBRACK = 42,
  anon_sym_LBRACKps_RBRACK = 43,
  anon_sym_LBRACKns_RBRACK = 44,
  anon_sym_LBRACKus_RBRACK = 45,
  anon_sym_LBRACKs_RBRACK = 46,
  anon_sym_LBRACK_SLASHm3_RBRACK = 47,
  anon_sym_LBRACK_SLASHcm3_RBRACK = 48,
  anon_sym_LBRACKJ_SLASHm3_RBRACK = 49,
  anon_sym_LBRACKJ_SLASHcm3_RBRACK = 50,
  anon_sym_LBRACKeV_RBRACK = 51,
  anon_sym_LBRACKK_RBRACK = 52,
  anon_sym_LBRACKV_RBRACK = 53,
  anon_sym_LBRACKwebers_SLASHm_RBRACK = 54,
  anon_sym_LBRACKG_STARcm_RBRACK = 55,
  anon_sym_LBRACKV_SLASHm_RBRACK = 56,
  anon_sym_LBRACKV_SLASHcm_RBRACK = 57,
  anon_sym_LBRACKT_RBRACK = 58,
  anon_sym_LBRACKG_RBRACK = 59,
  anon_sym_DASH = 60,
  anon_sym_PERCENT = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_LPAREN = 64,
  anon_sym_RPAREN = 65,
  sym_comment = 66,
  aux_sym__pterm_token1 = 67,
  aux_sym__nterm_token1 = 68,
  anon_sym_COLON = 69,
  anon_sym_rate = 70,
  anon_sym_janev_rate = 71,
  sym_input_file = 72,
  sym__top = 73,
  sym__nested = 74,
  sym_include = 75,
  sym_define = 76,
  sym__directive = 77,
  sym__nested_directive = 78,
  sym_assignment = 79,
  sym__statement = 80,
  sym__nested_statement = 81,
  sym_new = 82,
  sym_associative_new = 83,
  sym_generate = 84,
  sym_reaction = 85,
  sym_collision = 86,
  sym_excitation = 87,
  sym_get = 88,
  sym_identifier_sequence = 89,
  sym__string_literal_single = 90,
  sym__string_literal_double = 91,
  sym_string_literal = 92,
  sym_decimal = 93,
  sym_boolean = 94,
  sym_unit = 95,
  sym_dimension = 96,
  sym_value = 97,
  sym_define_value = 98,
  sym_block = 99,
  sym_tuple = 100,
  sym_list = 101,
  sym__pterm = 102,
  sym__nterm = 103,
  sym_chems = 104,
  sym_sub_formula = 105,
  sym_full_formula = 106,
  sym_arrhenius = 107,
  sym_janev = 108,
  sym_rate = 109,
  sym_range = 110,
  aux_sym_input_file_repeat1 = 111,
  aux_sym_identifier_sequence_repeat1 = 112,
  aux_sym_block_repeat1 = 113,
  aux_sym_tuple_repeat1 = 114,
  aux_sym_chems_repeat1 = 115,
  aux_sym_full_formula_repeat1 = 116,
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
  [anon_sym_LBRACKdeg_RBRACK] = "[deg]",
  [anon_sym_LBRACKrad_RBRACK] = "[rad]",
  [anon_sym_LBRACKmrad_RBRACK] = "[mrad]",
  [anon_sym_LBRACKurad_RBRACK] = "[urad]",
  [anon_sym_LBRACKcm2_RBRACK] = "[cm2]",
  [anon_sym_LBRACKm2_RBRACK] = "[m2]",
  [anon_sym_LBRACKcm2_SLASHs_RBRACK] = "[cm2/s]",
  [anon_sym_LBRACKm2_SLASHs_RBRACK] = "[m2/s]",
  [anon_sym_LBRACKum_RBRACK] = "[um]",
  [anon_sym_LBRACKmm_RBRACK] = "[mm]",
  [anon_sym_LBRACKcm_RBRACK] = "[cm]",
  [anon_sym_LBRACKm_RBRACK] = "[m]",
  [anon_sym_LBRACKfs_RBRACK] = "[fs]",
  [anon_sym_LBRACKps_RBRACK] = "[ps]",
  [anon_sym_LBRACKns_RBRACK] = "[ns]",
  [anon_sym_LBRACKus_RBRACK] = "[us]",
  [anon_sym_LBRACKs_RBRACK] = "[s]",
  [anon_sym_LBRACK_SLASHm3_RBRACK] = "[/m3]",
  [anon_sym_LBRACK_SLASHcm3_RBRACK] = "[/cm3]",
  [anon_sym_LBRACKJ_SLASHm3_RBRACK] = "[J/m3]",
  [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = "[J/cm3]",
  [anon_sym_LBRACKeV_RBRACK] = "[eV]",
  [anon_sym_LBRACKK_RBRACK] = "[K]",
  [anon_sym_LBRACKV_RBRACK] = "[V]",
  [anon_sym_LBRACKwebers_SLASHm_RBRACK] = "[webers/m]",
  [anon_sym_LBRACKG_STARcm_RBRACK] = "[G*cm]",
  [anon_sym_LBRACKV_SLASHm_RBRACK] = "[V/m]",
  [anon_sym_LBRACKV_SLASHcm_RBRACK] = "[V/cm]",
  [anon_sym_LBRACKT_RBRACK] = "[T]",
  [anon_sym_LBRACKG_RBRACK] = "[G]",
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
  [anon_sym_LBRACKdeg_RBRACK] = anon_sym_LBRACKdeg_RBRACK,
  [anon_sym_LBRACKrad_RBRACK] = anon_sym_LBRACKrad_RBRACK,
  [anon_sym_LBRACKmrad_RBRACK] = anon_sym_LBRACKmrad_RBRACK,
  [anon_sym_LBRACKurad_RBRACK] = anon_sym_LBRACKurad_RBRACK,
  [anon_sym_LBRACKcm2_RBRACK] = anon_sym_LBRACKcm2_RBRACK,
  [anon_sym_LBRACKm2_RBRACK] = anon_sym_LBRACKm2_RBRACK,
  [anon_sym_LBRACKcm2_SLASHs_RBRACK] = anon_sym_LBRACKcm2_SLASHs_RBRACK,
  [anon_sym_LBRACKm2_SLASHs_RBRACK] = anon_sym_LBRACKm2_SLASHs_RBRACK,
  [anon_sym_LBRACKum_RBRACK] = anon_sym_LBRACKum_RBRACK,
  [anon_sym_LBRACKmm_RBRACK] = anon_sym_LBRACKmm_RBRACK,
  [anon_sym_LBRACKcm_RBRACK] = anon_sym_LBRACKcm_RBRACK,
  [anon_sym_LBRACKm_RBRACK] = anon_sym_LBRACKm_RBRACK,
  [anon_sym_LBRACKfs_RBRACK] = anon_sym_LBRACKfs_RBRACK,
  [anon_sym_LBRACKps_RBRACK] = anon_sym_LBRACKps_RBRACK,
  [anon_sym_LBRACKns_RBRACK] = anon_sym_LBRACKns_RBRACK,
  [anon_sym_LBRACKus_RBRACK] = anon_sym_LBRACKus_RBRACK,
  [anon_sym_LBRACKs_RBRACK] = anon_sym_LBRACKs_RBRACK,
  [anon_sym_LBRACK_SLASHm3_RBRACK] = anon_sym_LBRACK_SLASHm3_RBRACK,
  [anon_sym_LBRACK_SLASHcm3_RBRACK] = anon_sym_LBRACK_SLASHcm3_RBRACK,
  [anon_sym_LBRACKJ_SLASHm3_RBRACK] = anon_sym_LBRACKJ_SLASHm3_RBRACK,
  [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = anon_sym_LBRACKJ_SLASHcm3_RBRACK,
  [anon_sym_LBRACKeV_RBRACK] = anon_sym_LBRACKeV_RBRACK,
  [anon_sym_LBRACKK_RBRACK] = anon_sym_LBRACKK_RBRACK,
  [anon_sym_LBRACKV_RBRACK] = anon_sym_LBRACKV_RBRACK,
  [anon_sym_LBRACKwebers_SLASHm_RBRACK] = anon_sym_LBRACKwebers_SLASHm_RBRACK,
  [anon_sym_LBRACKG_STARcm_RBRACK] = anon_sym_LBRACKG_STARcm_RBRACK,
  [anon_sym_LBRACKV_SLASHm_RBRACK] = anon_sym_LBRACKV_SLASHm_RBRACK,
  [anon_sym_LBRACKV_SLASHcm_RBRACK] = anon_sym_LBRACKV_SLASHcm_RBRACK,
  [anon_sym_LBRACKT_RBRACK] = anon_sym_LBRACKT_RBRACK,
  [anon_sym_LBRACKG_RBRACK] = anon_sym_LBRACKG_RBRACK,
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
  [anon_sym_LBRACKdeg_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKrad_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKmrad_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKurad_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKcm2_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKm2_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKcm2_SLASHs_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKm2_SLASHs_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKum_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKmm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKcm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKfs_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKps_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKns_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKus_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKs_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASHm3_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASHcm3_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKJ_SLASHm3_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKeV_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKV_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwebers_SLASHm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKG_STARcm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKV_SLASHm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKV_SLASHcm_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKT_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKG_RBRACK] = {
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
      if (eof) ADVANCE(180);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(177);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(177);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(177);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'j') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '$') ADVANCE(177);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '(') ADVANCE(310);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'y') ADVANCE(215);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '$') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '{') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == '{') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') SKIP(6)
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') SKIP(6)
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(8)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '}') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(313);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '>') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'J') ADVANCE(23);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ']') ADVANCE(285);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '3') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '3') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(194);
      END_STATE();
    case 31:
      if (lookahead == 'V') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(303);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(287);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(284);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(283);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(276);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(293);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(302);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(277);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(281);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 166:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(184);
      END_STATE();
    case 169:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 170:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 172:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(172)
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 177:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(313);
      if (lookahead == '\r') ADVANCE(314);
      END_STATE();
    case 179:
      if (eof) ADVANCE(180);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ')') ADVANCE(311);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == ',') SKIP(179)
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '{') ADVANCE(308);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_define_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__decimal1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__decimal1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__decimal2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__decimal2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACKdeg_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACKrad_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACKmrad_RBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACKurad_RBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_SLASHs_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_SLASHs_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACKum_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACKmm_RBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACKcm_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACKm_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACKfs_RBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACKps_RBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACKns_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKus_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACKs_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHm3_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHcm3_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHm3_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHcm3_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACKeV_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKK_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACKV_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACKwebers_SLASHm_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACKG_STARcm_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHm_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHcm_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACKT_RBRACK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACKG_RBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '>') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(178);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 179},
  [2] = {.lex_state = 179},
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
  [20] = {.lex_state = 179},
  [21] = {.lex_state = 179},
  [22] = {.lex_state = 3},
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
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 179},
  [40] = {.lex_state = 179},
  [41] = {.lex_state = 179},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 179},
  [45] = {.lex_state = 179},
  [46] = {.lex_state = 179},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 179},
  [49] = {.lex_state = 172},
  [50] = {.lex_state = 179},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 179},
  [53] = {.lex_state = 179},
  [54] = {.lex_state = 179},
  [55] = {.lex_state = 179},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 179},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 179},
  [65] = {.lex_state = 179},
  [66] = {.lex_state = 179},
  [67] = {.lex_state = 179},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 179},
  [74] = {.lex_state = 179},
  [75] = {.lex_state = 179},
  [76] = {.lex_state = 179},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 179},
  [79] = {.lex_state = 179},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 179},
  [82] = {.lex_state = 179},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 179},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 179},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 179},
  [93] = {.lex_state = 179},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 179},
  [97] = {.lex_state = 179},
  [98] = {.lex_state = 179},
  [99] = {.lex_state = 179},
  [100] = {.lex_state = 179},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 179},
  [107] = {.lex_state = 179},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 179},
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
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
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
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 179},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 179},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
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
    [anon_sym_section] = ACTIONS(1),
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
    [anon_sym_LBRACKdeg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKrad_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKmrad_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKurad_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKcm2_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKm2_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKcm2_SLASHs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKm2_SLASHs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKum_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKmm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKcm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKfs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKps_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKns_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKus_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_SLASHm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_SLASHcm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKJ_SLASHm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKeV_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwebers_SLASHm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKG_STARcm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_SLASHm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_SLASHcm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKG_RBRACK] = ACTIONS(1),
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
    [sym_input_file] = STATE(190),
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
    [sym_identifier_sequence] = STATE(185),
    [aux_sym_input_file_repeat1] = STATE(20),
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
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 5,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
      sym__integer,
      sym__decimal1,
    ACTIONS(17), 40,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_DASH_GT,
      sym__decimal2,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [53] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_unit,
    ACTIONS(21), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(60), 1,
      sym_unit,
    ACTIONS(23), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_unit,
    ACTIONS(23), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym_unit,
    ACTIONS(21), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(67), 1,
      sym_unit,
    ACTIONS(25), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym_unit,
    ACTIONS(25), 30,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKum_RBRACK,
      anon_sym_LBRACKmm_RBRACK,
      anon_sym_LBRACKcm_RBRACK,
      anon_sym_LBRACKm_RBRACK,
      anon_sym_LBRACKfs_RBRACK,
      anon_sym_LBRACKps_RBRACK,
      anon_sym_LBRACKns_RBRACK,
      anon_sym_LBRACKus_RBRACK,
      anon_sym_LBRACKs_RBRACK,
      anon_sym_LBRACK_SLASHm3_RBRACK,
      anon_sym_LBRACK_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [287] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_define_key,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__decimal2,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 2,
      sym__integer,
      sym__decimal1,
    STATE(59), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(91), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(71), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(39), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [345] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_define_key,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_PERCENT,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(54), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(53), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(61), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [403] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_define_key,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__decimal2,
    ACTIONS(92), 1,
      anon_sym_DASH,
    ACTIONS(95), 1,
      anon_sym_PERCENT,
    ACTIONS(83), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(89), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [458] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [512] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [566] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [620] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [674] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [725] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(15), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [776] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(14), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [827] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_define_key,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym__decimal2,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 2,
      sym__integer,
      sym__decimal1,
    STATE(12), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(24), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(29), 4,
      sym_string_literal,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [878] = 10,
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
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(185), 1,
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
  [921] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_POUNDinclude,
    ACTIONS(133), 1,
      anon_sym_POUNDdefine,
    ACTIONS(136), 1,
      anon_sym_new,
    ACTIONS(139), 1,
      anon_sym_generate,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(185), 1,
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
  [964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(147), 10,
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
  [989] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_POUNDinclude,
    ACTIONS(151), 1,
      anon_sym_POUNDdefine,
    ACTIONS(153), 1,
      anon_sym_new,
    ACTIONS(155), 1,
      anon_sym_get,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(195), 1,
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
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(161), 10,
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
  [1053] = 3,
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
  [1078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_POUNDinclude,
    ACTIONS(151), 1,
      anon_sym_POUNDdefine,
    ACTIONS(153), 1,
      anon_sym_new,
    ACTIONS(155), 1,
      anon_sym_get,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(195), 1,
      sym_identifier_sequence,
    STATE(34), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1117] = 3,
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
  [1142] = 3,
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
  [1167] = 3,
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
  [1192] = 3,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(19), 10,
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
  [1242] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_POUNDinclude,
    ACTIONS(151), 1,
      anon_sym_POUNDdefine,
    ACTIONS(153), 1,
      anon_sym_new,
    ACTIONS(155), 1,
      anon_sym_get,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(195), 1,
      sym_identifier_sequence,
    STATE(34), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1281] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_POUNDinclude,
    ACTIONS(151), 1,
      anon_sym_POUNDdefine,
    ACTIONS(153), 1,
      anon_sym_new,
    ACTIONS(155), 1,
      anon_sym_get,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(195), 1,
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
  [1320] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_POUNDinclude,
    ACTIONS(192), 1,
      anon_sym_POUNDdefine,
    ACTIONS(195), 1,
      anon_sym_new,
    ACTIONS(198), 1,
      anon_sym_get,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(195), 1,
      sym_identifier_sequence,
    STATE(34), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 7,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__decimal2,
      anon_sym_PERCENT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(208), 10,
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
  [1384] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__decimal2,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_PERCENT,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(95), 1,
      sym_define_value,
    ACTIONS(35), 2,
      sym__integer,
      sym__decimal1,
    STATE(102), 3,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(39), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1420] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_PERCENT,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(93), 1,
      sym_define_value,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
    STATE(73), 3,
      sym_decimal,
      sym_boolean,
      sym_dimension,
    ACTIONS(61), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1456] = 8,
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
    STATE(149), 1,
      sym_string_literal,
    STATE(167), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym__pterm_token1,
    ACTIONS(226), 1,
      aux_sym__nterm_token1,
    ACTIONS(222), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(40), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1502] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym__pterm_token1,
    ACTIONS(226), 1,
      aux_sym__nterm_token1,
    ACTIONS(228), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(41), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym__pterm_token1,
    ACTIONS(235), 1,
      aux_sym__nterm_token1,
    ACTIONS(230), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(41), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    STATE(160), 1,
      sym_string_literal,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    STATE(158), 1,
      sym_string_literal,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1633] = 3,
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
  [1647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(242), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_reaction,
    ACTIONS(246), 1,
      anon_sym_collision,
    ACTIONS(248), 1,
      anon_sym_excitation,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(38), 1,
      sym_identifier_sequence,
    STATE(105), 1,
      aux_sym_identifier_sequence_repeat1,
  [1683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(254), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(256), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1713] = 3,
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
  [1727] = 3,
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
  [1741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(266), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(270), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(104), 1,
      sym_string_literal,
    STATE(59), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(208), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(147), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(161), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1831] = 3,
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
  [1845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(77), 1,
      sym_string_literal,
    STATE(59), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(278), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(161), 1,
      sym_string_literal,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1899] = 3,
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
  [1913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(288), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1927] = 3,
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
  [1941] = 3,
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
  [1955] = 3,
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
  [1969] = 3,
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
  [1983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(290), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1999] = 3,
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
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(297), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2041] = 3,
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
  [2055] = 3,
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
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(309), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(313), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2097] = 3,
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
  [2111] = 3,
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
  [2125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(168), 1,
      sym_string_literal,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2145] = 3,
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
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(165), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(109), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
    ACTIONS(325), 2,
      sym_define_key,
      sym_identifier,
  [2191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(323), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(242), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2219] = 3,
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
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(317), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2247] = 3,
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
  [2261] = 3,
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
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(278), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(266), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2303] = 3,
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
  [2317] = 3,
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
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(254), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(341), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2359] = 3,
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
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(349), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(353), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(357), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(361), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2429] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(55), 1,
      sym_string_literal,
    STATE(44), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2449] = 3,
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
  [2463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_for,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(290), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(270), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_for,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(256), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(376), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(380), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(384), 1,
      sym_define_key,
    STATE(107), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_rate,
    ACTIONS(388), 1,
      anon_sym_janev_rate,
    STATE(165), 1,
      sym_rate,
    STATE(184), 2,
      sym_arrhenius,
      sym_janev,
  [2600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_rate,
    ACTIONS(394), 1,
      anon_sym_janev_rate,
    STATE(100), 1,
      sym_rate,
    STATE(88), 2,
      sym_arrhenius,
      sym_janev,
  [2634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__decimal2,
    STATE(203), 1,
      sym_decimal,
    ACTIONS(398), 2,
      sym__integer,
      sym__decimal1,
  [2665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(133), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(122), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(119), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(120), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(121), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(123), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(125), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(127), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(98), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(130), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__decimal2,
    STATE(216), 1,
      sym_decimal,
    ACTIONS(398), 2,
      sym__integer,
      sym__decimal1,
  [2819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(134), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(4), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(5), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(116), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(117), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(131), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(115), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(140), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(139), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(126), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(154), 1,
      sym_sub_formula,
    STATE(170), 1,
      sym_chems,
    ACTIONS(402), 2,
      sym_define_key,
      sym_identifier,
  [2973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(8), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(143), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(142), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(6), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(74), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(75), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(164), 1,
      sym_sub_formula,
    STATE(170), 1,
      sym_chems,
    ACTIONS(402), 2,
      sym_define_key,
      sym_identifier,
  [3071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(136), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(7), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__decimal2,
    STATE(3), 1,
      sym_decimal,
    ACTIONS(57), 2,
      sym__integer,
      sym__decimal1,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_COLON,
    STATE(153), 1,
      aux_sym_full_formula_repeat1,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_for,
    STATE(64), 1,
      sym_block,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(43), 1,
      sym_identifier_sequence,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(42), 1,
      sym_identifier_sequence,
    STATE(51), 1,
      aux_sym_identifier_sequence_repeat1,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_chems,
    ACTIONS(402), 2,
      sym_define_key,
      sym_identifier,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(153), 1,
      aux_sym_full_formula_repeat1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      aux_sym_full_formula_repeat1,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_coulomb,
    ACTIONS(421), 1,
      anon_sym_cross,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
  [3256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_full_formula,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(92), 1,
      sym_range,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [3318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_DASH_GT,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_EQ,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LT_DASH_GT,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_EQ,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_EQ,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_EQ,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_define_key,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_PERCENT,
  [3538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_define_key,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_level,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_identifier,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
  [3580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_identifier,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [3594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_section,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [3608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [3615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_PERCENT,
  [3622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_EQ,
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_EQ,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_PERCENT,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_identifier,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__integer,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_EQ,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 248,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 403,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 566,
  [SMALL_STATE(15)] = 620,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 725,
  [SMALL_STATE(18)] = 776,
  [SMALL_STATE(19)] = 827,
  [SMALL_STATE(20)] = 878,
  [SMALL_STATE(21)] = 921,
  [SMALL_STATE(22)] = 964,
  [SMALL_STATE(23)] = 989,
  [SMALL_STATE(24)] = 1028,
  [SMALL_STATE(25)] = 1053,
  [SMALL_STATE(26)] = 1078,
  [SMALL_STATE(27)] = 1117,
  [SMALL_STATE(28)] = 1142,
  [SMALL_STATE(29)] = 1167,
  [SMALL_STATE(30)] = 1192,
  [SMALL_STATE(31)] = 1217,
  [SMALL_STATE(32)] = 1242,
  [SMALL_STATE(33)] = 1281,
  [SMALL_STATE(34)] = 1320,
  [SMALL_STATE(35)] = 1359,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1420,
  [SMALL_STATE(38)] = 1456,
  [SMALL_STATE(39)] = 1482,
  [SMALL_STATE(40)] = 1502,
  [SMALL_STATE(41)] = 1522,
  [SMALL_STATE(42)] = 1542,
  [SMALL_STATE(43)] = 1565,
  [SMALL_STATE(44)] = 1588,
  [SMALL_STATE(45)] = 1603,
  [SMALL_STATE(46)] = 1618,
  [SMALL_STATE(47)] = 1633,
  [SMALL_STATE(48)] = 1647,
  [SMALL_STATE(49)] = 1661,
  [SMALL_STATE(50)] = 1683,
  [SMALL_STATE(51)] = 1697,
  [SMALL_STATE(52)] = 1713,
  [SMALL_STATE(53)] = 1727,
  [SMALL_STATE(54)] = 1741,
  [SMALL_STATE(55)] = 1755,
  [SMALL_STATE(56)] = 1769,
  [SMALL_STATE(57)] = 1789,
  [SMALL_STATE(58)] = 1803,
  [SMALL_STATE(59)] = 1817,
  [SMALL_STATE(60)] = 1831,
  [SMALL_STATE(61)] = 1845,
  [SMALL_STATE(62)] = 1865,
  [SMALL_STATE(63)] = 1879,
  [SMALL_STATE(64)] = 1899,
  [SMALL_STATE(65)] = 1913,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1941,
  [SMALL_STATE(68)] = 1955,
  [SMALL_STATE(69)] = 1969,
  [SMALL_STATE(70)] = 1983,
  [SMALL_STATE(71)] = 1999,
  [SMALL_STATE(72)] = 2013,
  [SMALL_STATE(73)] = 2027,
  [SMALL_STATE(74)] = 2041,
  [SMALL_STATE(75)] = 2055,
  [SMALL_STATE(76)] = 2069,
  [SMALL_STATE(77)] = 2083,
  [SMALL_STATE(78)] = 2097,
  [SMALL_STATE(79)] = 2111,
  [SMALL_STATE(80)] = 2125,
  [SMALL_STATE(81)] = 2145,
  [SMALL_STATE(82)] = 2159,
  [SMALL_STATE(83)] = 2173,
  [SMALL_STATE(84)] = 2191,
  [SMALL_STATE(85)] = 2205,
  [SMALL_STATE(86)] = 2219,
  [SMALL_STATE(87)] = 2233,
  [SMALL_STATE(88)] = 2247,
  [SMALL_STATE(89)] = 2261,
  [SMALL_STATE(90)] = 2275,
  [SMALL_STATE(91)] = 2289,
  [SMALL_STATE(92)] = 2303,
  [SMALL_STATE(93)] = 2317,
  [SMALL_STATE(94)] = 2331,
  [SMALL_STATE(95)] = 2345,
  [SMALL_STATE(96)] = 2359,
  [SMALL_STATE(97)] = 2373,
  [SMALL_STATE(98)] = 2387,
  [SMALL_STATE(99)] = 2401,
  [SMALL_STATE(100)] = 2415,
  [SMALL_STATE(101)] = 2429,
  [SMALL_STATE(102)] = 2449,
  [SMALL_STATE(103)] = 2463,
  [SMALL_STATE(104)] = 2481,
  [SMALL_STATE(105)] = 2495,
  [SMALL_STATE(106)] = 2513,
  [SMALL_STATE(107)] = 2527,
  [SMALL_STATE(108)] = 2538,
  [SMALL_STATE(109)] = 2555,
  [SMALL_STATE(110)] = 2566,
  [SMALL_STATE(111)] = 2583,
  [SMALL_STATE(112)] = 2600,
  [SMALL_STATE(113)] = 2617,
  [SMALL_STATE(114)] = 2634,
  [SMALL_STATE(115)] = 2651,
  [SMALL_STATE(116)] = 2665,
  [SMALL_STATE(117)] = 2679,
  [SMALL_STATE(118)] = 2693,
  [SMALL_STATE(119)] = 2707,
  [SMALL_STATE(120)] = 2721,
  [SMALL_STATE(121)] = 2735,
  [SMALL_STATE(122)] = 2749,
  [SMALL_STATE(123)] = 2763,
  [SMALL_STATE(124)] = 2777,
  [SMALL_STATE(125)] = 2791,
  [SMALL_STATE(126)] = 2805,
  [SMALL_STATE(127)] = 2819,
  [SMALL_STATE(128)] = 2833,
  [SMALL_STATE(129)] = 2847,
  [SMALL_STATE(130)] = 2861,
  [SMALL_STATE(131)] = 2875,
  [SMALL_STATE(132)] = 2889,
  [SMALL_STATE(133)] = 2903,
  [SMALL_STATE(134)] = 2917,
  [SMALL_STATE(135)] = 2931,
  [SMALL_STATE(136)] = 2945,
  [SMALL_STATE(137)] = 2959,
  [SMALL_STATE(138)] = 2973,
  [SMALL_STATE(139)] = 2987,
  [SMALL_STATE(140)] = 3001,
  [SMALL_STATE(141)] = 3015,
  [SMALL_STATE(142)] = 3029,
  [SMALL_STATE(143)] = 3043,
  [SMALL_STATE(144)] = 3057,
  [SMALL_STATE(145)] = 3071,
  [SMALL_STATE(146)] = 3085,
  [SMALL_STATE(147)] = 3099,
  [SMALL_STATE(148)] = 3113,
  [SMALL_STATE(149)] = 3126,
  [SMALL_STATE(150)] = 3139,
  [SMALL_STATE(151)] = 3152,
  [SMALL_STATE(152)] = 3165,
  [SMALL_STATE(153)] = 3176,
  [SMALL_STATE(154)] = 3189,
  [SMALL_STATE(155)] = 3202,
  [SMALL_STATE(156)] = 3210,
  [SMALL_STATE(157)] = 3218,
  [SMALL_STATE(158)] = 3228,
  [SMALL_STATE(159)] = 3238,
  [SMALL_STATE(160)] = 3246,
  [SMALL_STATE(161)] = 3256,
  [SMALL_STATE(162)] = 3266,
  [SMALL_STATE(163)] = 3274,
  [SMALL_STATE(164)] = 3284,
  [SMALL_STATE(165)] = 3292,
  [SMALL_STATE(166)] = 3302,
  [SMALL_STATE(167)] = 3310,
  [SMALL_STATE(168)] = 3318,
  [SMALL_STATE(169)] = 3328,
  [SMALL_STATE(170)] = 3335,
  [SMALL_STATE(171)] = 3342,
  [SMALL_STATE(172)] = 3349,
  [SMALL_STATE(173)] = 3356,
  [SMALL_STATE(174)] = 3363,
  [SMALL_STATE(175)] = 3370,
  [SMALL_STATE(176)] = 3377,
  [SMALL_STATE(177)] = 3384,
  [SMALL_STATE(178)] = 3391,
  [SMALL_STATE(179)] = 3398,
  [SMALL_STATE(180)] = 3405,
  [SMALL_STATE(181)] = 3412,
  [SMALL_STATE(182)] = 3419,
  [SMALL_STATE(183)] = 3426,
  [SMALL_STATE(184)] = 3433,
  [SMALL_STATE(185)] = 3440,
  [SMALL_STATE(186)] = 3447,
  [SMALL_STATE(187)] = 3454,
  [SMALL_STATE(188)] = 3461,
  [SMALL_STATE(189)] = 3468,
  [SMALL_STATE(190)] = 3475,
  [SMALL_STATE(191)] = 3482,
  [SMALL_STATE(192)] = 3489,
  [SMALL_STATE(193)] = 3496,
  [SMALL_STATE(194)] = 3503,
  [SMALL_STATE(195)] = 3510,
  [SMALL_STATE(196)] = 3517,
  [SMALL_STATE(197)] = 3524,
  [SMALL_STATE(198)] = 3531,
  [SMALL_STATE(199)] = 3538,
  [SMALL_STATE(200)] = 3545,
  [SMALL_STATE(201)] = 3552,
  [SMALL_STATE(202)] = 3559,
  [SMALL_STATE(203)] = 3566,
  [SMALL_STATE(204)] = 3573,
  [SMALL_STATE(205)] = 3580,
  [SMALL_STATE(206)] = 3587,
  [SMALL_STATE(207)] = 3594,
  [SMALL_STATE(208)] = 3601,
  [SMALL_STATE(209)] = 3608,
  [SMALL_STATE(210)] = 3615,
  [SMALL_STATE(211)] = 3622,
  [SMALL_STATE(212)] = 3629,
  [SMALL_STATE(213)] = 3636,
  [SMALL_STATE(214)] = 3643,
  [SMALL_STATE(215)] = 3650,
  [SMALL_STATE(216)] = 3657,
  [SMALL_STATE(217)] = 3664,
  [SMALL_STATE(218)] = 3671,
  [SMALL_STATE(219)] = 3678,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(29),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(29),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(204),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(205),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(31),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(30),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(210),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(147),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(101),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(200),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(49),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(150),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(51),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(194),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(83),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(110),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_sequence, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(70),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(103),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_sequence, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(144),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
