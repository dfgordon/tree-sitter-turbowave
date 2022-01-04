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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_POUNDdefine = 2,
  anon_sym_POUNDifdef = 3,
  anon_sym_POUNDifndef = 4,
  anon_sym_POUNDendif = 5,
  anon_sym_EQ = 6,
  anon_sym_new = 7,
  anon_sym_for = 8,
  anon_sym_generate = 9,
  anon_sym_reaction = 10,
  anon_sym_collision = 11,
  anon_sym_LT_DASH_GT = 12,
  anon_sym_coulomb = 13,
  anon_sym_cross = 14,
  anon_sym_section = 15,
  anon_sym_excitation = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_level = 18,
  anon_sym_get = 19,
  anon_sym_POUNDelse = 20,
  sym_define_key = 21,
  sym_define_ref = 22,
  sym_decimal = 23,
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
  anon_sym_LBRACKum_RBRACK = 34,
  anon_sym_LBRACKmm_RBRACK = 35,
  anon_sym_LBRACKcm_RBRACK = 36,
  anon_sym_LBRACKm_RBRACK = 37,
  anon_sym_LBRACKfs_RBRACK = 38,
  anon_sym_LBRACKps_RBRACK = 39,
  anon_sym_LBRACKns_RBRACK = 40,
  anon_sym_LBRACKus_RBRACK = 41,
  anon_sym_LBRACKs_RBRACK = 42,
  anon_sym_LBRACK_SLASHm3_RBRACK = 43,
  anon_sym_LBRACK_SLASHcm3_RBRACK = 44,
  anon_sym_LBRACKkg_SLASHm3_RBRACK = 45,
  anon_sym_LBRACKg_SLASHcm3_RBRACK = 46,
  anon_sym_LBRACKJ_SLASHm3_RBRACK = 47,
  anon_sym_LBRACKJ_SLASHcm3_RBRACK = 48,
  anon_sym_LBRACKeV_RBRACK = 49,
  anon_sym_LBRACKK_RBRACK = 50,
  anon_sym_LBRACKPa_RBRACK = 51,
  anon_sym_LBRACKdynes_SLASHcm2_RBRACK = 52,
  anon_sym_LBRACKbar_RBRACK = 53,
  anon_sym_LBRACKergs_SLASHg_RBRACK = 54,
  anon_sym_LBRACKJ_SLASHkg_RBRACK = 55,
  anon_sym_LBRACKcm2_RBRACK = 56,
  anon_sym_LBRACKm2_RBRACK = 57,
  anon_sym_LBRACKcm2_SLASHs_RBRACK = 58,
  anon_sym_LBRACKm2_SLASHs_RBRACK = 59,
  anon_sym_LBRACKV_RBRACK = 60,
  anon_sym_LBRACKwebers_SLASHm_RBRACK = 61,
  anon_sym_LBRACKG_STARcm_RBRACK = 62,
  anon_sym_LBRACKV_SLASHm_RBRACK = 63,
  anon_sym_LBRACKV_SLASHcm_RBRACK = 64,
  anon_sym_LBRACKT_RBRACK = 65,
  anon_sym_LBRACKG_RBRACK = 66,
  sym_identifier = 67,
  anon_sym_1d = 68,
  anon_sym_2d = 69,
  anon_sym_3d = 70,
  anon_sym_SQUOTE = 71,
  anon_sym_DQUOTE = 72,
  anon_sym_LBRACE = 73,
  anon_sym_RBRACE = 74,
  anon_sym_LPAREN = 75,
  anon_sym_RPAREN = 76,
  aux_sym__define_value_token1 = 77,
  sym_comment = 78,
  aux_sym__pterm_token1 = 79,
  aux_sym__nterm_token1 = 80,
  anon_sym_COLON = 81,
  anon_sym_rate = 82,
  anon_sym_janev_rate = 83,
  sym_input_file = 84,
  sym__top = 85,
  sym__nested = 86,
  sym_include = 87,
  sym_define = 88,
  sym_ifxdef = 89,
  sym__directive = 90,
  sym__nested_directive = 91,
  sym_assignment = 92,
  sym__statement = 93,
  sym__nested_statement = 94,
  sym_new = 95,
  sym_associative_new = 96,
  sym_generate = 97,
  sym_reaction = 98,
  sym_collision = 99,
  sym_excitation = 100,
  sym_get = 101,
  sym_else_block = 102,
  sym_boolean = 103,
  sym_unit = 104,
  sym_dimension = 105,
  sym_special_keys = 106,
  sym_obj_key = 107,
  sym__string_literal_single = 108,
  sym__string_literal_double = 109,
  sym_string_literal = 110,
  sym__value = 111,
  sym_block = 112,
  sym_tuple = 113,
  sym_list = 114,
  sym__define_value = 115,
  sym__pterm = 116,
  sym__nterm = 117,
  sym_chems = 118,
  sym_sub_formula = 119,
  sym_full_formula = 120,
  sym_arrhenius = 121,
  sym_janev = 122,
  sym_rate = 123,
  sym_range = 124,
  aux_sym_input_file_repeat1 = 125,
  aux_sym_obj_key_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  aux_sym_tuple_repeat1 = 128,
  aux_sym__define_value_repeat1 = 129,
  aux_sym_chems_repeat1 = 130,
  aux_sym_full_formula_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDdefine] = "#define",
  [anon_sym_POUNDifdef] = "#ifdef",
  [anon_sym_POUNDifndef] = "#ifndef",
  [anon_sym_POUNDendif] = "#endif",
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
  [anon_sym_POUNDelse] = "#else",
  [sym_define_key] = "define_key",
  [sym_define_ref] = "define_ref",
  [sym_decimal] = "decimal",
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
  [anon_sym_LBRACKkg_SLASHm3_RBRACK] = "[kg/m3]",
  [anon_sym_LBRACKg_SLASHcm3_RBRACK] = "[g/cm3]",
  [anon_sym_LBRACKJ_SLASHm3_RBRACK] = "[J/m3]",
  [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = "[J/cm3]",
  [anon_sym_LBRACKeV_RBRACK] = "[eV]",
  [anon_sym_LBRACKK_RBRACK] = "[K]",
  [anon_sym_LBRACKPa_RBRACK] = "[Pa]",
  [anon_sym_LBRACKdynes_SLASHcm2_RBRACK] = "[dynes/cm2]",
  [anon_sym_LBRACKbar_RBRACK] = "[bar]",
  [anon_sym_LBRACKergs_SLASHg_RBRACK] = "[ergs/g]",
  [anon_sym_LBRACKJ_SLASHkg_RBRACK] = "[J/kg]",
  [anon_sym_LBRACKcm2_RBRACK] = "[cm2]",
  [anon_sym_LBRACKm2_RBRACK] = "[m2]",
  [anon_sym_LBRACKcm2_SLASHs_RBRACK] = "[cm2/s]",
  [anon_sym_LBRACKm2_SLASHs_RBRACK] = "[m2/s]",
  [anon_sym_LBRACKV_RBRACK] = "[V]",
  [anon_sym_LBRACKwebers_SLASHm_RBRACK] = "[webers/m]",
  [anon_sym_LBRACKG_STARcm_RBRACK] = "[G*cm]",
  [anon_sym_LBRACKV_SLASHm_RBRACK] = "[V/m]",
  [anon_sym_LBRACKV_SLASHcm_RBRACK] = "[V/cm]",
  [anon_sym_LBRACKT_RBRACK] = "[T]",
  [anon_sym_LBRACKG_RBRACK] = "[G]",
  [sym_identifier] = "identifier",
  [anon_sym_1d] = "1d",
  [anon_sym_2d] = "2d",
  [anon_sym_3d] = "3d",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__define_value_token1] = "_define_value_token1",
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
  [sym_ifxdef] = "ifxdef",
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
  [sym_else_block] = "else_block",
  [sym_boolean] = "boolean",
  [sym_unit] = "unit",
  [sym_dimension] = "dimension",
  [sym_special_keys] = "special_keys",
  [sym_obj_key] = "obj_key",
  [sym__string_literal_single] = "_string_literal_single",
  [sym__string_literal_double] = "_string_literal_double",
  [sym_string_literal] = "string_literal",
  [sym__value] = "_value",
  [sym_block] = "block",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__define_value] = "_define_value",
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
  [aux_sym_obj_key_repeat1] = "obj_key_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym__define_value_repeat1] = "_define_value_repeat1",
  [aux_sym_chems_repeat1] = "chems_repeat1",
  [aux_sym_full_formula_repeat1] = "full_formula_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [anon_sym_POUNDifdef] = anon_sym_POUNDifdef,
  [anon_sym_POUNDifndef] = anon_sym_POUNDifndef,
  [anon_sym_POUNDendif] = anon_sym_POUNDendif,
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
  [anon_sym_POUNDelse] = anon_sym_POUNDelse,
  [sym_define_key] = sym_define_key,
  [sym_define_ref] = sym_define_ref,
  [sym_decimal] = sym_decimal,
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
  [anon_sym_LBRACKkg_SLASHm3_RBRACK] = anon_sym_LBRACKkg_SLASHm3_RBRACK,
  [anon_sym_LBRACKg_SLASHcm3_RBRACK] = anon_sym_LBRACKg_SLASHcm3_RBRACK,
  [anon_sym_LBRACKJ_SLASHm3_RBRACK] = anon_sym_LBRACKJ_SLASHm3_RBRACK,
  [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = anon_sym_LBRACKJ_SLASHcm3_RBRACK,
  [anon_sym_LBRACKeV_RBRACK] = anon_sym_LBRACKeV_RBRACK,
  [anon_sym_LBRACKK_RBRACK] = anon_sym_LBRACKK_RBRACK,
  [anon_sym_LBRACKPa_RBRACK] = anon_sym_LBRACKPa_RBRACK,
  [anon_sym_LBRACKdynes_SLASHcm2_RBRACK] = anon_sym_LBRACKdynes_SLASHcm2_RBRACK,
  [anon_sym_LBRACKbar_RBRACK] = anon_sym_LBRACKbar_RBRACK,
  [anon_sym_LBRACKergs_SLASHg_RBRACK] = anon_sym_LBRACKergs_SLASHg_RBRACK,
  [anon_sym_LBRACKJ_SLASHkg_RBRACK] = anon_sym_LBRACKJ_SLASHkg_RBRACK,
  [anon_sym_LBRACKcm2_RBRACK] = anon_sym_LBRACKcm2_RBRACK,
  [anon_sym_LBRACKm2_RBRACK] = anon_sym_LBRACKm2_RBRACK,
  [anon_sym_LBRACKcm2_SLASHs_RBRACK] = anon_sym_LBRACKcm2_SLASHs_RBRACK,
  [anon_sym_LBRACKm2_SLASHs_RBRACK] = anon_sym_LBRACKm2_SLASHs_RBRACK,
  [anon_sym_LBRACKV_RBRACK] = anon_sym_LBRACKV_RBRACK,
  [anon_sym_LBRACKwebers_SLASHm_RBRACK] = anon_sym_LBRACKwebers_SLASHm_RBRACK,
  [anon_sym_LBRACKG_STARcm_RBRACK] = anon_sym_LBRACKG_STARcm_RBRACK,
  [anon_sym_LBRACKV_SLASHm_RBRACK] = anon_sym_LBRACKV_SLASHm_RBRACK,
  [anon_sym_LBRACKV_SLASHcm_RBRACK] = anon_sym_LBRACKV_SLASHcm_RBRACK,
  [anon_sym_LBRACKT_RBRACK] = anon_sym_LBRACKT_RBRACK,
  [anon_sym_LBRACKG_RBRACK] = anon_sym_LBRACKG_RBRACK,
  [sym_identifier] = sym_identifier,
  [anon_sym_1d] = anon_sym_1d,
  [anon_sym_2d] = anon_sym_2d,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__define_value_token1] = aux_sym__define_value_token1,
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
  [sym_ifxdef] = sym_ifxdef,
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
  [sym_else_block] = sym_else_block,
  [sym_boolean] = sym_boolean,
  [sym_unit] = sym_unit,
  [sym_dimension] = sym_dimension,
  [sym_special_keys] = sym_special_keys,
  [sym_obj_key] = sym_obj_key,
  [sym__string_literal_single] = sym__string_literal_single,
  [sym__string_literal_double] = sym__string_literal_double,
  [sym_string_literal] = sym_string_literal,
  [sym__value] = sym__value,
  [sym_block] = sym_block,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym__define_value] = sym__define_value,
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
  [aux_sym_obj_key_repeat1] = aux_sym_obj_key_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym__define_value_repeat1] = aux_sym__define_value_repeat1,
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
  [anon_sym_POUNDifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDendif] = {
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
  [anon_sym_POUNDelse] = {
    .visible = true,
    .named = false,
  },
  [sym_define_key] = {
    .visible = true,
    .named = true,
  },
  [sym_define_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
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
  [anon_sym_LBRACKkg_SLASHm3_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKg_SLASHcm3_RBRACK] = {
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
  [anon_sym_LBRACKPa_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdynes_SLASHcm2_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKbar_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKergs_SLASHg_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKJ_SLASHkg_RBRACK] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [aux_sym__define_value_token1] = {
    .visible = false,
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
  [sym_ifxdef] = {
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
  [sym_else_block] = {
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
  [sym_special_keys] = {
    .visible = true,
    .named = true,
  },
  [sym_obj_key] = {
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
  [sym__value] = {
    .visible = false,
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
  [sym__define_value] = {
    .visible = false,
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
  [aux_sym_obj_key_repeat1] = {
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
  [aux_sym__define_value_repeat1] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_define_key_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= ')' || (c < '{'
      ? (c < '='
        ? c == ','
        : c <= '=')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '{') ADVANCE(368);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '{') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(2)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '{') ADVANCE(368);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') SKIP(2)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == 'j') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '{') ADVANCE(368);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '}') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == '{') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '{') ADVANCE(368);
      if (lookahead == '}') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(7)
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '2') ADVANCE(258);
      if (lookahead == '3') ADVANCE(259);
      if (lookahead == '=') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '}') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(8)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == '{') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(9)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '}') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(10)
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '>') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '.') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(374);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(373);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == ']') ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(18);
      if (lookahead == 'J') ADVANCE(22);
      if (lookahead == 'K') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'g') ADVANCE(24);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ']') ADVANCE(305);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(144);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ']') ADVANCE(302);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(29);
      if (lookahead == ']') ADVANCE(281);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '3') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == '3') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == '3') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == '3') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == '3') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(244);
      END_STATE();
    case 41:
      if (lookahead == 'V') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(310);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(287);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(283);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(285);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(284);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(286);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(308);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(276);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(307);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(277);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(293);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(303);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(306);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'k') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 218:
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 219:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(220)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 223:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(255);
      END_STATE();
    case 224:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(374);
      if (lookahead == '\r') ADVANCE(375);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(226)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '{') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_define_key);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_define_ref);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_decimal);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
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
      ACCEPT_TOKEN(anon_sym_LBRACKum_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACKmm_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKcm_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACKm_RBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACKfs_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACKps_RBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACKns_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACKus_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACKs_RBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHm3_RBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHcm3_RBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKkg_SLASHm3_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACKg_SLASHcm3_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHm3_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHcm3_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACKeV_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACKK_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACKPa_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKdynes_SLASHcm2_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACKbar_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACKergs_SLASHg_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHkg_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_SLASHs_RBRACK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_SLASHs_RBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACKV_RBRACK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACKwebers_SLASHm_RBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACKG_STARcm_RBRACK);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHm_RBRACK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHcm_RBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACKT_RBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACKG_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(316);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_1d);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_2d);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__define_value_token1);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(225);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 226},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 226},
  [13] = {.lex_state = 226},
  [14] = {.lex_state = 226},
  [15] = {.lex_state = 226},
  [16] = {.lex_state = 226},
  [17] = {.lex_state = 226},
  [18] = {.lex_state = 226},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 226},
  [77] = {.lex_state = 226},
  [78] = {.lex_state = 226},
  [79] = {.lex_state = 226},
  [80] = {.lex_state = 226},
  [81] = {.lex_state = 226},
  [82] = {.lex_state = 226},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 226},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 226},
  [88] = {.lex_state = 226},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 226},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 226},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 226},
  [95] = {.lex_state = 226},
  [96] = {.lex_state = 226},
  [97] = {.lex_state = 226},
  [98] = {.lex_state = 226},
  [99] = {.lex_state = 226},
  [100] = {.lex_state = 226},
  [101] = {.lex_state = 226},
  [102] = {.lex_state = 226},
  [103] = {.lex_state = 226},
  [104] = {.lex_state = 226},
  [105] = {.lex_state = 226},
  [106] = {.lex_state = 226},
  [107] = {.lex_state = 226},
  [108] = {.lex_state = 226},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 226},
  [111] = {.lex_state = 226},
  [112] = {.lex_state = 226},
  [113] = {.lex_state = 226},
  [114] = {.lex_state = 226},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 220},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 220},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 226},
  [247] = {.lex_state = 226},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 226},
  [257] = {.lex_state = 226},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 6},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_POUNDifdef] = ACTIONS(1),
    [anon_sym_POUNDifndef] = ACTIONS(1),
    [anon_sym_POUNDendif] = ACTIONS(1),
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
    [anon_sym_POUNDelse] = ACTIONS(1),
    [sym_define_key] = ACTIONS(1),
    [sym_define_ref] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
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
    [anon_sym_LBRACKkg_SLASHm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKg_SLASHcm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKJ_SLASHm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKJ_SLASHcm3_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKeV_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKPa_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdynes_SLASHcm2_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKbar_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKergs_SLASHg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKJ_SLASHkg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKcm2_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKm2_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKcm2_SLASHs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKm2_SLASHs_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwebers_SLASHm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKG_STARcm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_SLASHm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKV_SLASHcm_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKG_RBRACK] = ACTIONS(1),
    [anon_sym_1d] = ACTIONS(1),
    [anon_sym_2d] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym__pterm_token1] = ACTIONS(1),
    [aux_sym__nterm_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_rate] = ACTIONS(1),
    [anon_sym_janev_rate] = ACTIONS(1),
  },
  [1] = {
    [sym_input_file] = STATE(223),
    [sym__top] = STATE(19),
    [sym_include] = STATE(19),
    [sym_define] = STATE(19),
    [sym_ifxdef] = STATE(19),
    [sym__directive] = STATE(19),
    [sym_assignment] = STATE(19),
    [sym__statement] = STATE(19),
    [sym_new] = STATE(19),
    [sym_associative_new] = STATE(19),
    [sym_generate] = STATE(19),
    [sym_reaction] = STATE(19),
    [sym_collision] = STATE(19),
    [sym_excitation] = STATE(19),
    [sym_special_keys] = STATE(135),
    [sym_obj_key] = STATE(221),
    [aux_sym_input_file_repeat1] = STATE(19),
    [aux_sym_obj_key_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_POUNDifdef] = ACTIONS(11),
    [anon_sym_POUNDifndef] = ACTIONS(11),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_generate] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_1d] = ACTIONS(19),
    [anon_sym_2d] = ACTIONS(19),
    [anon_sym_3d] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(25), 1,
      aux_sym__define_value_token1,
    ACTIONS(27), 1,
      sym_comment,
    STATE(59), 1,
      sym_unit,
    ACTIONS(21), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(23), 37,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
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
      anon_sym_LBRACKkg_SLASHm3_RBRACK,
      anon_sym_LBRACKg_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKPa_RBRACK,
      anon_sym_LBRACKdynes_SLASHcm2_RBRACK,
      anon_sym_LBRACKbar_RBRACK,
      anon_sym_LBRACKergs_SLASHg_RBRACK,
      anon_sym_LBRACKJ_SLASHkg_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [69] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 1,
      sym_unit,
    ACTIONS(25), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(21), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
    ACTIONS(29), 37,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
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
      anon_sym_LBRACKkg_SLASHm3_RBRACK,
      anon_sym_LBRACKg_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKPa_RBRACK,
      anon_sym_LBRACKdynes_SLASHcm2_RBRACK,
      anon_sym_LBRACKbar_RBRACK,
      anon_sym_LBRACKergs_SLASHg_RBRACK,
      anon_sym_LBRACKJ_SLASHkg_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(103), 1,
      sym_unit,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(25), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(31), 37,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
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
      anon_sym_LBRACKkg_SLASHm3_RBRACK,
      anon_sym_LBRACKg_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKPa_RBRACK,
      anon_sym_LBRACKdynes_SLASHcm2_RBRACK,
      anon_sym_LBRACKbar_RBRACK,
      anon_sym_LBRACKergs_SLASHg_RBRACK,
      anon_sym_LBRACKJ_SLASHkg_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(126), 1,
      sym_unit,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(25), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
    ACTIONS(33), 37,
      anon_sym_LBRACKdeg_RBRACK,
      anon_sym_LBRACKrad_RBRACK,
      anon_sym_LBRACKmrad_RBRACK,
      anon_sym_LBRACKurad_RBRACK,
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
      anon_sym_LBRACKkg_SLASHm3_RBRACK,
      anon_sym_LBRACKg_SLASHcm3_RBRACK,
      anon_sym_LBRACKJ_SLASHm3_RBRACK,
      anon_sym_LBRACKJ_SLASHcm3_RBRACK,
      anon_sym_LBRACKeV_RBRACK,
      anon_sym_LBRACKK_RBRACK,
      anon_sym_LBRACKPa_RBRACK,
      anon_sym_LBRACKdynes_SLASHcm2_RBRACK,
      anon_sym_LBRACKbar_RBRACK,
      anon_sym_LBRACKergs_SLASHg_RBRACK,
      anon_sym_LBRACKJ_SLASHkg_RBRACK,
      anon_sym_LBRACKcm2_RBRACK,
      anon_sym_LBRACKm2_RBRACK,
      anon_sym_LBRACKcm2_SLASHs_RBRACK,
      anon_sym_LBRACKm2_SLASHs_RBRACK,
      anon_sym_LBRACKV_RBRACK,
      anon_sym_LBRACKwebers_SLASHm_RBRACK,
      anon_sym_LBRACKG_STARcm_RBRACK,
      anon_sym_LBRACKV_SLASHm_RBRACK,
      anon_sym_LBRACKV_SLASHcm_RBRACK,
      anon_sym_LBRACKT_RBRACK,
      anon_sym_LBRACKG_RBRACK,
  [256] = 18,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(37), 1,
      anon_sym_generate,
    ACTIONS(39), 1,
      sym_define_ref,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym__define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(118), 1,
      sym__define_value,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(47), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(10), 17,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym__define_value_repeat1,
  [336] = 18,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(37), 1,
      anon_sym_generate,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_define_ref,
    ACTIONS(61), 1,
      aux_sym__define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(87), 1,
      sym__define_value,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(47), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(8), 17,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym__define_value_repeat1,
  [416] = 17,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(37), 1,
      anon_sym_generate,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_define_ref,
    ACTIONS(65), 1,
      aux_sym__define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(47), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(9), 17,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym__define_value_repeat1,
  [493] = 17,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_new,
    ACTIONS(70), 1,
      anon_sym_generate,
    ACTIONS(73), 1,
      sym_define_ref,
    ACTIONS(76), 1,
      sym_decimal,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      aux_sym__define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(85), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(79), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(9), 17,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym__define_value_repeat1,
  [570] = 17,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_new,
    ACTIONS(37), 1,
      anon_sym_generate,
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_define_ref,
    ACTIONS(102), 1,
      aux_sym__define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(47), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(9), 17,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym__define_value_repeat1,
  [647] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(114), 1,
      sym_define_ref,
    ACTIONS(116), 1,
      sym_decimal,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(63), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(21), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [728] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_POUNDendif,
    ACTIONS(130), 1,
      anon_sym_POUNDelse,
    STATE(221), 1,
      sym_obj_key,
    STATE(267), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(13), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [788] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_POUNDinclude,
    ACTIONS(137), 1,
      anon_sym_POUNDdefine,
    ACTIONS(143), 1,
      anon_sym_new,
    ACTIONS(146), 1,
      anon_sym_generate,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(221), 1,
      sym_obj_key,
    ACTIONS(140), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
    ACTIONS(152), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(13), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [844] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_POUNDelse,
    ACTIONS(155), 1,
      anon_sym_POUNDendif,
    STATE(221), 1,
      sym_obj_key,
    STATE(230), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(13), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [904] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_POUNDelse,
    ACTIONS(157), 1,
      anon_sym_POUNDendif,
    STATE(221), 1,
      sym_obj_key,
    STATE(222), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(14), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [964] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_POUNDelse,
    ACTIONS(159), 1,
      anon_sym_POUNDendif,
    STATE(221), 1,
      sym_obj_key,
    STATE(278), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(12), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [1024] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_POUNDendif,
    STATE(221), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(18), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [1078] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_POUNDendif,
    STATE(221), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(13), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [1132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_new,
    ACTIONS(15), 1,
      anon_sym_generate,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(13), 14,
      sym__top,
      sym_include,
      sym_define,
      sym_ifxdef,
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
  [1186] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(21), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1236] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(25), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1286] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(24), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1336] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(25), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(25), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1436] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_POUNDinclude,
    ACTIONS(178), 1,
      anon_sym_POUNDdefine,
    ACTIONS(184), 1,
      anon_sym_new,
    ACTIONS(187), 1,
      anon_sym_get,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(181), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(193), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(25), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1486] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      anon_sym_get,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_obj_key,
    ACTIONS(108), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(23), 10,
      sym__nested,
      sym_include,
      sym_define,
      sym_ifxdef,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1536] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym__define_value_token1,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(200), 19,
      anon_sym_EQ,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1568] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      aux_sym__define_value_token1,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(209), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(204), 15,
      anon_sym_EQ,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1604] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_define_ref,
    ACTIONS(216), 1,
      sym_decimal,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(218), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(101), 6,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_tuple,
      sym_list,
  [1649] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_define_ref,
    ACTIONS(232), 1,
      sym_decimal,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(116), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(234), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(129), 6,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_tuple,
      sym_list,
  [1694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_define_ref,
    ACTIONS(248), 1,
      sym_decimal,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(68), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(61), 6,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      sym_tuple,
      sym_list,
  [1739] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_define_ref,
    ACTIONS(263), 1,
      sym_decimal,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(266), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1781] = 4,
    ACTIONS(25), 1,
      aux_sym__define_value_token1,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(21), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1811] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__define_value_token1,
    ACTIONS(282), 19,
      anon_sym_EQ,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1839] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      aux_sym__define_value_token1,
    ACTIONS(288), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1869] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__define_value_token1,
    ACTIONS(292), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1896] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__define_value_token1,
    ACTIONS(296), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1923] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym__define_value_token1,
    ACTIONS(300), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1950] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__define_value_token1,
    ACTIONS(304), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [1977] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym__define_value_token1,
    ACTIONS(308), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2004] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym__define_value_token1,
    ACTIONS(312), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2031] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__define_value_token1,
    ACTIONS(316), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2058] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym__define_value_token1,
    ACTIONS(320), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2085] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym__define_value_token1,
    ACTIONS(324), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2112] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym__define_value_token1,
    ACTIONS(328), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2139] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym__define_value_token1,
    ACTIONS(332), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2166] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__define_value_token1,
    ACTIONS(336), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2193] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym__define_value_token1,
    ACTIONS(340), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2220] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__define_value_token1,
    ACTIONS(344), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2247] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__define_value_token1,
    ACTIONS(348), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2274] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym__define_value_token1,
    ACTIONS(352), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2301] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym__define_value_token1,
    ACTIONS(356), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2328] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym__define_value_token1,
    ACTIONS(360), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2355] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2396] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2437] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym__define_value_token1,
    ACTIONS(374), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2464] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2505] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym__define_value_token1,
    ACTIONS(380), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2532] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym__define_value_token1,
    ACTIONS(384), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2559] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__define_value_token1,
    ACTIONS(388), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2586] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__define_value_token1,
    ACTIONS(392), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2613] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym__define_value_token1,
    ACTIONS(396), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2640] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2681] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2722] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__define_value_token1,
    ACTIONS(404), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2749] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_define_ref,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(32), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2790] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym__define_value_token1,
    ACTIONS(410), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2817] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym__define_value_token1,
    ACTIONS(414), 18,
      anon_sym_new,
      anon_sym_generate,
      sym_define_ref,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [2844] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(418), 1,
      sym_define_ref,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(54), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2882] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_define_ref,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(63), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2920] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(424), 1,
      sym_define_ref,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(57), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2958] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(428), 1,
      sym_define_ref,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(55), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2996] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(432), 1,
      sym_define_ref,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(64), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [3034] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_decimal,
    ACTIONS(436), 1,
      sym_define_ref,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(86), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(66), 5,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
      sym__value,
      aux_sym_tuple_repeat1,
    ACTIONS(118), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [3072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(440), 4,
      anon_sym_EQ,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(21), 8,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(416), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_LBRACE,
  [3120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(390), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_LBRACE,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(294), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_LBRACE,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(346), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(338), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(362), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(298), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(388), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(292), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(442), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(414), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(446), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(450), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(384), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(306), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(380), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(358), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(312), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(302), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(376), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(406), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(322), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(412), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(326), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(394), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(398), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(386), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(382), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(354), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(458), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(350), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(334), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(462), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(310), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(330), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(342), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [3920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(390), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(416), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [3958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(466), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [3977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(446), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(314), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(454), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(462), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(318), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(412), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(382), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(326), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(386), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(362), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(398), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(394), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(376), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(450), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(294), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(458), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(442), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(137), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(202), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_reaction,
    ACTIONS(474), 1,
      anon_sym_collision,
    ACTIONS(476), 1,
      anon_sym_excitation,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(146), 1,
      sym_obj_key,
    STATE(138), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(480), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(137), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(485), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(212), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_for,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(140), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(202), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(480), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4396] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(490), 1,
      anon_sym_reaction,
    ACTIONS(492), 1,
      anon_sym_collision,
    ACTIONS(494), 1,
      anon_sym_excitation,
    STATE(142), 1,
      sym_obj_key,
    STATE(138), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(480), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_for,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(140), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(212), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(499), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 8,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4462] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_for,
    ACTIONS(504), 1,
      anon_sym_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    STATE(170), 1,
      sym_string_literal,
    STATE(182), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym__pterm_token1,
    ACTIONS(514), 1,
      aux_sym__nterm_token1,
    ACTIONS(510), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(145), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_for,
      sym_identifier,
    ACTIONS(284), 6,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym__pterm_token1,
    ACTIONS(521), 1,
      aux_sym__nterm_token1,
    ACTIONS(516), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(145), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4544] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      anon_sym_for,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_block,
    STATE(175), 1,
      sym_string_literal,
    STATE(182), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym__pterm_token1,
    ACTIONS(514), 1,
      aux_sym__nterm_token1,
    ACTIONS(528), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(143), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4590] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    STATE(185), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(153), 1,
      sym_obj_key,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
    STATE(189), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(150), 1,
      sym_obj_key,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(148), 1,
      sym_obj_key,
    STATE(135), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_block,
    STATE(184), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 1,
      sym_identifier,
    STATE(117), 1,
      sym_string_literal,
    STATE(116), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym_identifier,
    STATE(193), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(111), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(196), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(192), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(121), 1,
      sym_string_literal,
    STATE(116), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(177), 1,
      sym_string_literal,
    STATE(76), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_rate,
    ACTIONS(550), 1,
      anon_sym_janev_rate,
    STATE(80), 1,
      sym_rate,
    STATE(97), 2,
      sym_arrhenius,
      sym_janev,
  [4873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_rate,
    ACTIONS(554), 1,
      anon_sym_janev_rate,
    STATE(47), 1,
      sym_rate,
    STATE(43), 2,
      sym_arrhenius,
      sym_janev,
  [4890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_rate,
    ACTIONS(558), 1,
      anon_sym_janev_rate,
    STATE(190), 1,
      sym_rate,
    STATE(203), 2,
      sym_arrhenius,
      sym_janev,
  [4907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_rate,
    ACTIONS(558), 1,
      anon_sym_janev_rate,
    STATE(194), 1,
      sym_rate,
    STATE(203), 2,
      sym_arrhenius,
      sym_janev,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym_sub_formula,
    STATE(264), 1,
      sym_chems,
    ACTIONS(564), 2,
      sym_define_key,
      sym_identifier,
  [4960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      sym_sub_formula,
    STATE(264), 1,
      sym_chems,
    ACTIONS(564), 2,
      sym_define_key,
      sym_identifier,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      sym_chems,
    ACTIONS(564), 2,
      sym_define_key,
      sym_identifier,
  [4985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_for,
    STATE(53), 1,
      sym_block,
  [4998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(171), 1,
      aux_sym_full_formula_repeat1,
  [5011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(174), 1,
      aux_sym_full_formula_repeat1,
  [5024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 3,
      sym_define_key,
      sym_decimal,
      sym_identifier,
  [5033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_full_formula_repeat1,
  [5046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      anon_sym_for,
    STATE(81), 1,
      sym_block,
  [5059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_decimal,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      sym_define_key,
      sym_decimal,
  [5087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_decimal,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [5105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_decimal,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [5115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_full_formula,
  [5133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
  [5143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [5161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(105), 1,
      sym_range,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_coulomb,
    ACTIONS(607), 1,
      anon_sym_cross,
  [5207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_block,
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [5227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_identifier,
    STATE(51), 1,
      sym_range,
  [5237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_decimal,
    ACTIONS(613), 1,
      anon_sym_COLON,
  [5247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [5257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_coulomb,
    ACTIONS(617), 1,
      anon_sym_cross,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_full_formula,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_decimal,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_decimal,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [5297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_identifier,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_EQ,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_EQ,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_EQ,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_decimal,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_decimal,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_decimal,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_decimal,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_decimal,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_decimal,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_EQ,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_POUNDendif,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_decimal,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_decimal,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_EQ,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COLON,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_POUNDendif,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_decimal,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_decimal,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_section,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_decimal,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_decimal,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_decimal,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_level,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_decimal,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_decimal,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_decimal,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SQUOTE,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_DQUOTE,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_define_key,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_define_key,
  [5628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_decimal,
  [5635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [5642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_decimal,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_decimal,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_DQUOTE,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
  [5684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_define_key,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_define_key,
  [5698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_identifier,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_EQ,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_EQ,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_identifier,
  [5733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [5740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_DASH_GT,
  [5747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_DASH_GT,
  [5754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LT_DASH_GT,
  [5761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_POUNDendif,
  [5768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_decimal,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
  [5789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ,
  [5803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_decimal,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_decimal,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_identifier,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_identifier,
  [5831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_POUNDendif,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_decimal,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_decimal,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_identifier,
  [5866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
  [5873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym_identifier,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LT_DASH_GT,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_decimal,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
  [5915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_section,
  [5922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_EQ,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_decimal,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_decimal,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_decimal,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_EQ,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_EQ,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_level,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_decimal,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_EQ,
  [5992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_decimal,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_EQ,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_identifier,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_decimal,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_decimal,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_DASH_GT,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_decimal,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_decimal,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_identifier,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_decimal,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_decimal,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_EQ,
  [6076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_decimal,
  [6083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym_decimal,
  [6090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_decimal,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym_decimal,
  [6104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_EQ,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 336,
  [SMALL_STATE(8)] = 416,
  [SMALL_STATE(9)] = 493,
  [SMALL_STATE(10)] = 570,
  [SMALL_STATE(11)] = 647,
  [SMALL_STATE(12)] = 728,
  [SMALL_STATE(13)] = 788,
  [SMALL_STATE(14)] = 844,
  [SMALL_STATE(15)] = 904,
  [SMALL_STATE(16)] = 964,
  [SMALL_STATE(17)] = 1024,
  [SMALL_STATE(18)] = 1078,
  [SMALL_STATE(19)] = 1132,
  [SMALL_STATE(20)] = 1186,
  [SMALL_STATE(21)] = 1236,
  [SMALL_STATE(22)] = 1286,
  [SMALL_STATE(23)] = 1336,
  [SMALL_STATE(24)] = 1386,
  [SMALL_STATE(25)] = 1436,
  [SMALL_STATE(26)] = 1486,
  [SMALL_STATE(27)] = 1536,
  [SMALL_STATE(28)] = 1568,
  [SMALL_STATE(29)] = 1604,
  [SMALL_STATE(30)] = 1649,
  [SMALL_STATE(31)] = 1694,
  [SMALL_STATE(32)] = 1739,
  [SMALL_STATE(33)] = 1781,
  [SMALL_STATE(34)] = 1811,
  [SMALL_STATE(35)] = 1839,
  [SMALL_STATE(36)] = 1869,
  [SMALL_STATE(37)] = 1896,
  [SMALL_STATE(38)] = 1923,
  [SMALL_STATE(39)] = 1950,
  [SMALL_STATE(40)] = 1977,
  [SMALL_STATE(41)] = 2004,
  [SMALL_STATE(42)] = 2031,
  [SMALL_STATE(43)] = 2058,
  [SMALL_STATE(44)] = 2085,
  [SMALL_STATE(45)] = 2112,
  [SMALL_STATE(46)] = 2139,
  [SMALL_STATE(47)] = 2166,
  [SMALL_STATE(48)] = 2193,
  [SMALL_STATE(49)] = 2220,
  [SMALL_STATE(50)] = 2247,
  [SMALL_STATE(51)] = 2274,
  [SMALL_STATE(52)] = 2301,
  [SMALL_STATE(53)] = 2328,
  [SMALL_STATE(54)] = 2355,
  [SMALL_STATE(55)] = 2396,
  [SMALL_STATE(56)] = 2437,
  [SMALL_STATE(57)] = 2464,
  [SMALL_STATE(58)] = 2505,
  [SMALL_STATE(59)] = 2532,
  [SMALL_STATE(60)] = 2559,
  [SMALL_STATE(61)] = 2586,
  [SMALL_STATE(62)] = 2613,
  [SMALL_STATE(63)] = 2640,
  [SMALL_STATE(64)] = 2681,
  [SMALL_STATE(65)] = 2722,
  [SMALL_STATE(66)] = 2749,
  [SMALL_STATE(67)] = 2790,
  [SMALL_STATE(68)] = 2817,
  [SMALL_STATE(69)] = 2844,
  [SMALL_STATE(70)] = 2882,
  [SMALL_STATE(71)] = 2920,
  [SMALL_STATE(72)] = 2958,
  [SMALL_STATE(73)] = 2996,
  [SMALL_STATE(74)] = 3034,
  [SMALL_STATE(75)] = 3072,
  [SMALL_STATE(76)] = 3098,
  [SMALL_STATE(77)] = 3120,
  [SMALL_STATE(78)] = 3142,
  [SMALL_STATE(79)] = 3164,
  [SMALL_STATE(80)] = 3185,
  [SMALL_STATE(81)] = 3206,
  [SMALL_STATE(82)] = 3227,
  [SMALL_STATE(83)] = 3248,
  [SMALL_STATE(84)] = 3269,
  [SMALL_STATE(85)] = 3290,
  [SMALL_STATE(86)] = 3311,
  [SMALL_STATE(87)] = 3332,
  [SMALL_STATE(88)] = 3353,
  [SMALL_STATE(89)] = 3374,
  [SMALL_STATE(90)] = 3395,
  [SMALL_STATE(91)] = 3416,
  [SMALL_STATE(92)] = 3437,
  [SMALL_STATE(93)] = 3458,
  [SMALL_STATE(94)] = 3479,
  [SMALL_STATE(95)] = 3500,
  [SMALL_STATE(96)] = 3521,
  [SMALL_STATE(97)] = 3542,
  [SMALL_STATE(98)] = 3563,
  [SMALL_STATE(99)] = 3584,
  [SMALL_STATE(100)] = 3605,
  [SMALL_STATE(101)] = 3626,
  [SMALL_STATE(102)] = 3647,
  [SMALL_STATE(103)] = 3668,
  [SMALL_STATE(104)] = 3689,
  [SMALL_STATE(105)] = 3710,
  [SMALL_STATE(106)] = 3731,
  [SMALL_STATE(107)] = 3752,
  [SMALL_STATE(108)] = 3773,
  [SMALL_STATE(109)] = 3794,
  [SMALL_STATE(110)] = 3815,
  [SMALL_STATE(111)] = 3836,
  [SMALL_STATE(112)] = 3857,
  [SMALL_STATE(113)] = 3878,
  [SMALL_STATE(114)] = 3899,
  [SMALL_STATE(115)] = 3920,
  [SMALL_STATE(116)] = 3939,
  [SMALL_STATE(117)] = 3958,
  [SMALL_STATE(118)] = 3977,
  [SMALL_STATE(119)] = 3996,
  [SMALL_STATE(120)] = 4015,
  [SMALL_STATE(121)] = 4034,
  [SMALL_STATE(122)] = 4053,
  [SMALL_STATE(123)] = 4072,
  [SMALL_STATE(124)] = 4091,
  [SMALL_STATE(125)] = 4110,
  [SMALL_STATE(126)] = 4129,
  [SMALL_STATE(127)] = 4148,
  [SMALL_STATE(128)] = 4167,
  [SMALL_STATE(129)] = 4186,
  [SMALL_STATE(130)] = 4205,
  [SMALL_STATE(131)] = 4224,
  [SMALL_STATE(132)] = 4243,
  [SMALL_STATE(133)] = 4262,
  [SMALL_STATE(134)] = 4281,
  [SMALL_STATE(135)] = 4300,
  [SMALL_STATE(136)] = 4322,
  [SMALL_STATE(137)] = 4350,
  [SMALL_STATE(138)] = 4372,
  [SMALL_STATE(139)] = 4396,
  [SMALL_STATE(140)] = 4424,
  [SMALL_STATE(141)] = 4448,
  [SMALL_STATE(142)] = 4462,
  [SMALL_STATE(143)] = 4488,
  [SMALL_STATE(144)] = 4508,
  [SMALL_STATE(145)] = 4524,
  [SMALL_STATE(146)] = 4544,
  [SMALL_STATE(147)] = 4570,
  [SMALL_STATE(148)] = 4590,
  [SMALL_STATE(149)] = 4613,
  [SMALL_STATE(150)] = 4632,
  [SMALL_STATE(151)] = 4655,
  [SMALL_STATE(152)] = 4674,
  [SMALL_STATE(153)] = 4693,
  [SMALL_STATE(154)] = 4716,
  [SMALL_STATE(155)] = 4736,
  [SMALL_STATE(156)] = 4756,
  [SMALL_STATE(157)] = 4776,
  [SMALL_STATE(158)] = 4796,
  [SMALL_STATE(159)] = 4816,
  [SMALL_STATE(160)] = 4836,
  [SMALL_STATE(161)] = 4856,
  [SMALL_STATE(162)] = 4873,
  [SMALL_STATE(163)] = 4890,
  [SMALL_STATE(164)] = 4907,
  [SMALL_STATE(165)] = 4924,
  [SMALL_STATE(166)] = 4935,
  [SMALL_STATE(167)] = 4946,
  [SMALL_STATE(168)] = 4960,
  [SMALL_STATE(169)] = 4974,
  [SMALL_STATE(170)] = 4985,
  [SMALL_STATE(171)] = 4998,
  [SMALL_STATE(172)] = 5011,
  [SMALL_STATE(173)] = 5024,
  [SMALL_STATE(174)] = 5033,
  [SMALL_STATE(175)] = 5046,
  [SMALL_STATE(176)] = 5059,
  [SMALL_STATE(177)] = 5069,
  [SMALL_STATE(178)] = 5079,
  [SMALL_STATE(179)] = 5087,
  [SMALL_STATE(180)] = 5095,
  [SMALL_STATE(181)] = 5105,
  [SMALL_STATE(182)] = 5115,
  [SMALL_STATE(183)] = 5123,
  [SMALL_STATE(184)] = 5133,
  [SMALL_STATE(185)] = 5143,
  [SMALL_STATE(186)] = 5153,
  [SMALL_STATE(187)] = 5161,
  [SMALL_STATE(188)] = 5169,
  [SMALL_STATE(189)] = 5177,
  [SMALL_STATE(190)] = 5187,
  [SMALL_STATE(191)] = 5197,
  [SMALL_STATE(192)] = 5207,
  [SMALL_STATE(193)] = 5217,
  [SMALL_STATE(194)] = 5227,
  [SMALL_STATE(195)] = 5237,
  [SMALL_STATE(196)] = 5247,
  [SMALL_STATE(197)] = 5257,
  [SMALL_STATE(198)] = 5267,
  [SMALL_STATE(199)] = 5277,
  [SMALL_STATE(200)] = 5287,
  [SMALL_STATE(201)] = 5297,
  [SMALL_STATE(202)] = 5305,
  [SMALL_STATE(203)] = 5313,
  [SMALL_STATE(204)] = 5320,
  [SMALL_STATE(205)] = 5327,
  [SMALL_STATE(206)] = 5334,
  [SMALL_STATE(207)] = 5341,
  [SMALL_STATE(208)] = 5348,
  [SMALL_STATE(209)] = 5355,
  [SMALL_STATE(210)] = 5362,
  [SMALL_STATE(211)] = 5369,
  [SMALL_STATE(212)] = 5376,
  [SMALL_STATE(213)] = 5383,
  [SMALL_STATE(214)] = 5390,
  [SMALL_STATE(215)] = 5397,
  [SMALL_STATE(216)] = 5404,
  [SMALL_STATE(217)] = 5411,
  [SMALL_STATE(218)] = 5418,
  [SMALL_STATE(219)] = 5425,
  [SMALL_STATE(220)] = 5432,
  [SMALL_STATE(221)] = 5439,
  [SMALL_STATE(222)] = 5446,
  [SMALL_STATE(223)] = 5453,
  [SMALL_STATE(224)] = 5460,
  [SMALL_STATE(225)] = 5467,
  [SMALL_STATE(226)] = 5474,
  [SMALL_STATE(227)] = 5481,
  [SMALL_STATE(228)] = 5488,
  [SMALL_STATE(229)] = 5495,
  [SMALL_STATE(230)] = 5502,
  [SMALL_STATE(231)] = 5509,
  [SMALL_STATE(232)] = 5516,
  [SMALL_STATE(233)] = 5523,
  [SMALL_STATE(234)] = 5530,
  [SMALL_STATE(235)] = 5537,
  [SMALL_STATE(236)] = 5544,
  [SMALL_STATE(237)] = 5551,
  [SMALL_STATE(238)] = 5558,
  [SMALL_STATE(239)] = 5565,
  [SMALL_STATE(240)] = 5572,
  [SMALL_STATE(241)] = 5579,
  [SMALL_STATE(242)] = 5586,
  [SMALL_STATE(243)] = 5593,
  [SMALL_STATE(244)] = 5600,
  [SMALL_STATE(245)] = 5607,
  [SMALL_STATE(246)] = 5614,
  [SMALL_STATE(247)] = 5621,
  [SMALL_STATE(248)] = 5628,
  [SMALL_STATE(249)] = 5635,
  [SMALL_STATE(250)] = 5642,
  [SMALL_STATE(251)] = 5649,
  [SMALL_STATE(252)] = 5656,
  [SMALL_STATE(253)] = 5663,
  [SMALL_STATE(254)] = 5670,
  [SMALL_STATE(255)] = 5677,
  [SMALL_STATE(256)] = 5684,
  [SMALL_STATE(257)] = 5691,
  [SMALL_STATE(258)] = 5698,
  [SMALL_STATE(259)] = 5705,
  [SMALL_STATE(260)] = 5712,
  [SMALL_STATE(261)] = 5719,
  [SMALL_STATE(262)] = 5726,
  [SMALL_STATE(263)] = 5733,
  [SMALL_STATE(264)] = 5740,
  [SMALL_STATE(265)] = 5747,
  [SMALL_STATE(266)] = 5754,
  [SMALL_STATE(267)] = 5761,
  [SMALL_STATE(268)] = 5768,
  [SMALL_STATE(269)] = 5775,
  [SMALL_STATE(270)] = 5782,
  [SMALL_STATE(271)] = 5789,
  [SMALL_STATE(272)] = 5796,
  [SMALL_STATE(273)] = 5803,
  [SMALL_STATE(274)] = 5810,
  [SMALL_STATE(275)] = 5817,
  [SMALL_STATE(276)] = 5824,
  [SMALL_STATE(277)] = 5831,
  [SMALL_STATE(278)] = 5838,
  [SMALL_STATE(279)] = 5845,
  [SMALL_STATE(280)] = 5852,
  [SMALL_STATE(281)] = 5859,
  [SMALL_STATE(282)] = 5866,
  [SMALL_STATE(283)] = 5873,
  [SMALL_STATE(284)] = 5880,
  [SMALL_STATE(285)] = 5887,
  [SMALL_STATE(286)] = 5894,
  [SMALL_STATE(287)] = 5901,
  [SMALL_STATE(288)] = 5908,
  [SMALL_STATE(289)] = 5915,
  [SMALL_STATE(290)] = 5922,
  [SMALL_STATE(291)] = 5929,
  [SMALL_STATE(292)] = 5936,
  [SMALL_STATE(293)] = 5943,
  [SMALL_STATE(294)] = 5950,
  [SMALL_STATE(295)] = 5957,
  [SMALL_STATE(296)] = 5964,
  [SMALL_STATE(297)] = 5971,
  [SMALL_STATE(298)] = 5978,
  [SMALL_STATE(299)] = 5985,
  [SMALL_STATE(300)] = 5992,
  [SMALL_STATE(301)] = 5999,
  [SMALL_STATE(302)] = 6006,
  [SMALL_STATE(303)] = 6013,
  [SMALL_STATE(304)] = 6020,
  [SMALL_STATE(305)] = 6027,
  [SMALL_STATE(306)] = 6034,
  [SMALL_STATE(307)] = 6041,
  [SMALL_STATE(308)] = 6048,
  [SMALL_STATE(309)] = 6055,
  [SMALL_STATE(310)] = 6062,
  [SMALL_STATE(311)] = 6069,
  [SMALL_STATE(312)] = 6076,
  [SMALL_STATE(313)] = 6083,
  [SMALL_STATE(314)] = 6090,
  [SMALL_STATE(315)] = 6097,
  [SMALL_STATE(316)] = 6104,
  [SMALL_STATE(317)] = 6111,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(139),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(152),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(41),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(33),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(34),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(261),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(262),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 2), SHIFT_REPEAT(73),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__define_value_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(156),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(247),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(246),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(136),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(151),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(135),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(141),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(256),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(257),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(154),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(141),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obj_key, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obj_key, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(28),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(34),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(32),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(3),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(93),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(32),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(281),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(282),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keys, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keys, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__define_value_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__define_value_repeat1, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_value, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__define_value, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(137),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(141),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(140),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(144),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(173),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(178),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(168),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [663] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turbowave(void) {
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
