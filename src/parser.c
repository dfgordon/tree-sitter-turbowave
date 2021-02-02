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
#define STATE_COUNT 324
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

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
  sym_identifier = 60,
  anon_sym_1d = 61,
  anon_sym_2d = 62,
  anon_sym_3d = 63,
  anon_sym_SQUOTE = 64,
  anon_sym_DQUOTE = 65,
  anon_sym_LBRACE = 66,
  anon_sym_RBRACE = 67,
  anon_sym_LPAREN = 68,
  anon_sym_RPAREN = 69,
  aux_sym_define_value_token1 = 70,
  sym_comment = 71,
  aux_sym__pterm_token1 = 72,
  aux_sym__nterm_token1 = 73,
  anon_sym_COLON = 74,
  anon_sym_rate = 75,
  anon_sym_janev_rate = 76,
  sym_input_file = 77,
  sym__top = 78,
  sym__nested = 79,
  sym_include = 80,
  sym_define = 81,
  sym_ifxdef = 82,
  sym__directive = 83,
  sym__nested_directive = 84,
  sym_assignment = 85,
  sym__statement = 86,
  sym__nested_statement = 87,
  sym_new = 88,
  sym_associative_new = 89,
  sym_generate = 90,
  sym_reaction = 91,
  sym_collision = 92,
  sym_excitation = 93,
  sym_get = 94,
  sym_else_block = 95,
  sym_boolean = 96,
  sym_unit = 97,
  sym_dimension = 98,
  sym_special_keys = 99,
  sym_obj_key = 100,
  sym__string_literal_single = 101,
  sym__string_literal_double = 102,
  sym_string_literal = 103,
  sym_value = 104,
  sym_block = 105,
  sym_tuple = 106,
  sym_list = 107,
  sym_define_value = 108,
  sym__pterm = 109,
  sym__nterm = 110,
  sym_chems = 111,
  sym_sub_formula = 112,
  sym_full_formula = 113,
  sym_arrhenius = 114,
  sym_janev = 115,
  sym_rate = 116,
  sym_range = 117,
  aux_sym_input_file_repeat1 = 118,
  aux_sym_obj_key_repeat1 = 119,
  aux_sym_block_repeat1 = 120,
  aux_sym_tuple_repeat1 = 121,
  aux_sym_define_value_repeat1 = 122,
  aux_sym_chems_repeat1 = 123,
  aux_sym_full_formula_repeat1 = 124,
};

static const char *ts_symbol_names[] = {
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
  [aux_sym_define_value_token1] = "define_value_token1",
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
  [sym_value] = "value",
  [sym_block] = "block",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_define_value] = "define_value",
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
  [aux_sym_define_value_repeat1] = "define_value_repeat1",
  [aux_sym_chems_repeat1] = "chems_repeat1",
  [aux_sym_full_formula_repeat1] = "full_formula_repeat1",
};

static TSSymbol ts_symbol_map[] = {
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
  [aux_sym_define_value_token1] = aux_sym_define_value_token1,
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
  [sym_value] = sym_value,
  [sym_block] = sym_block,
  [sym_tuple] = sym_tuple,
  [sym_list] = sym_list,
  [sym_define_value] = sym_define_value,
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
  [aux_sym_define_value_repeat1] = aux_sym_define_value_repeat1,
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
  [aux_sym_define_value_token1] = {
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
  [sym_value] = {
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
  [sym_define_value] = {
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
  [aux_sym_define_value_repeat1] = {
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

static inline bool sym_define_key_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    lookahead == ' ' ||
    lookahead == '(' ||
    lookahead == ')' ||
    lookahead == ',' ||
    lookahead == '=' ||
    lookahead == '{' ||
    lookahead == '}';
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(197);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'j') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '{') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(2)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'j') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') SKIP(2)
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'j') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '}') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '{') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '{') ADVANCE(331);
      if (lookahead == '}') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(7)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '3') ADVANCE(229);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '}') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(8)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == '{') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(9)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '}') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(10)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '>') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(337);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == ']') ADVANCE(274);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(18);
      if (lookahead == 'J') ADVANCE(26);
      if (lookahead == 'K') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'V') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ']') ADVANCE(268);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ']') ADVANCE(250);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ']') ADVANCE(249);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == ']') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == '3') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == '3') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '3') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == '3') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(267);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(273);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(261);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(266);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(257);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(258);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(253);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(260);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(262);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(271);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(245);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(263);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(270);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(264);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(272);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(252);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(247);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(248);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(265);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(251);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(243);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(112);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 188:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 189:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(190)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(337);
      if (lookahead == '\r') ADVANCE(338);
      END_STATE();
    case 194:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 195:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(226);
      END_STATE();
    case 196:
      if (eof) ADVANCE(197);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '$') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(196)
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '{') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_define_key);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_define_ref);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACKdeg_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACKrad_RBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACKmrad_RBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACKurad_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_RBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_SLASHs_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_SLASHs_RBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACKum_RBRACK);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACKmm_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACKcm_RBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACKm_RBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACKfs_RBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACKps_RBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACKns_RBRACK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACKus_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACKs_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHm3_RBRACK);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHcm3_RBRACK);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHm3_RBRACK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHcm3_RBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACKeV_RBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACKK_RBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACKV_RBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACKwebers_SLASHm_RBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACKG_STARcm_RBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHm_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHcm_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACKT_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACKG_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(279);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_1d);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_2d);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_define_value_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(193);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 196},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 196},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 196},
  [13] = {.lex_state = 196},
  [14] = {.lex_state = 196},
  [15] = {.lex_state = 196},
  [16] = {.lex_state = 196},
  [17] = {.lex_state = 196},
  [18] = {.lex_state = 196},
  [19] = {.lex_state = 196},
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
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 6},
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
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 196},
  [78] = {.lex_state = 196},
  [79] = {.lex_state = 196},
  [80] = {.lex_state = 196},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 196},
  [83] = {.lex_state = 196},
  [84] = {.lex_state = 196},
  [85] = {.lex_state = 196},
  [86] = {.lex_state = 196},
  [87] = {.lex_state = 196},
  [88] = {.lex_state = 196},
  [89] = {.lex_state = 196},
  [90] = {.lex_state = 196},
  [91] = {.lex_state = 196},
  [92] = {.lex_state = 196},
  [93] = {.lex_state = 196},
  [94] = {.lex_state = 196},
  [95] = {.lex_state = 196},
  [96] = {.lex_state = 196},
  [97] = {.lex_state = 196},
  [98] = {.lex_state = 196},
  [99] = {.lex_state = 196},
  [100] = {.lex_state = 196},
  [101] = {.lex_state = 196},
  [102] = {.lex_state = 196},
  [103] = {.lex_state = 196},
  [104] = {.lex_state = 196},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 196},
  [107] = {.lex_state = 196},
  [108] = {.lex_state = 196},
  [109] = {.lex_state = 196},
  [110] = {.lex_state = 196},
  [111] = {.lex_state = 196},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 196},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 196},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
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
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 190},
  [144] = {.lex_state = 190},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 196},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 196},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 196},
  [263] = {.lex_state = 196},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 6},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 6},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_input_file] = STATE(236),
    [sym__top] = STATE(18),
    [sym_include] = STATE(18),
    [sym_define] = STATE(18),
    [sym_ifxdef] = STATE(18),
    [sym__directive] = STATE(18),
    [sym_assignment] = STATE(18),
    [sym__statement] = STATE(18),
    [sym_new] = STATE(18),
    [sym_associative_new] = STATE(18),
    [sym_generate] = STATE(18),
    [sym_reaction] = STATE(18),
    [sym_collision] = STATE(18),
    [sym_excitation] = STATE(18),
    [sym_special_keys] = STATE(142),
    [sym_obj_key] = STATE(234),
    [aux_sym_input_file_repeat1] = STATE(18),
    [aux_sym_obj_key_repeat1] = STATE(142),
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

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(25), 1,
      aux_sym_define_value_token1,
    ACTIONS(27), 1,
      sym_comment,
    STATE(61), 1,
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
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(95), 1,
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
    ACTIONS(29), 30,
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
  [118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
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
    ACTIONS(31), 30,
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
  [174] = 19,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_new,
    ACTIONS(35), 1,
      anon_sym_generate,
    ACTIONS(37), 1,
      sym_define_ref,
    ACTIONS(39), 1,
      sym_decimal,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(135), 1,
      sym_define_value,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(45), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(41), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(9), 14,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym_define_value_repeat1,
  [256] = 19,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_new,
    ACTIONS(35), 1,
      anon_sym_generate,
    ACTIONS(37), 1,
      sym_define_ref,
    ACTIONS(39), 1,
      sym_decimal,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(85), 1,
      sym_define_value,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(45), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(41), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(8), 14,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym_define_value_repeat1,
  [338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
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
    ACTIONS(59), 30,
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
  [392] = 18,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_new,
    ACTIONS(35), 1,
      anon_sym_generate,
    ACTIONS(37), 1,
      sym_define_ref,
    ACTIONS(39), 1,
      sym_decimal,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      aux_sym_define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(45), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(41), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(10), 14,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym_define_value_repeat1,
  [471] = 18,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_new,
    ACTIONS(35), 1,
      anon_sym_generate,
    ACTIONS(37), 1,
      sym_define_ref,
    ACTIONS(39), 1,
      sym_decimal,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      aux_sym_define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(45), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(41), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(10), 14,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym_define_value_repeat1,
  [550] = 18,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_new,
    ACTIONS(68), 1,
      anon_sym_generate,
    ACTIONS(71), 1,
      sym_define_ref,
    ACTIONS(74), 1,
      sym_decimal,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      aux_sym_define_value_token1,
    STATE(35), 1,
      sym_obj_key,
    STATE(28), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    ACTIONS(83), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(77), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
    STATE(10), 14,
      sym__directive,
      sym_assignment,
      sym__statement,
      sym_new,
      sym_associative_new,
      sym_generate,
      sym_reaction,
      sym_collision,
      sym_excitation,
      sym_value,
      sym_block,
      sym_tuple,
      sym_list,
      aux_sym_define_value_repeat1,
  [629] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(112), 1,
      sym_decimal,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(65), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
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
  [712] = 14,
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
    ACTIONS(124), 1,
      anon_sym_POUNDendif,
    ACTIONS(126), 1,
      anon_sym_POUNDelse,
    STATE(234), 1,
      sym_obj_key,
    STATE(239), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(15), 14,
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
  [772] = 14,
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
    ACTIONS(126), 1,
      anon_sym_POUNDelse,
    ACTIONS(128), 1,
      anon_sym_POUNDendif,
    STATE(234), 1,
      sym_obj_key,
    STATE(235), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
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
  [832] = 14,
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
    ACTIONS(126), 1,
      anon_sym_POUNDelse,
    ACTIONS(130), 1,
      anon_sym_POUNDendif,
    STATE(234), 1,
      sym_obj_key,
    STATE(283), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(16), 14,
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
  [892] = 12,
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
    STATE(234), 1,
      sym_obj_key,
    ACTIONS(140), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
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
    STATE(15), 14,
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
  [948] = 14,
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
    ACTIONS(126), 1,
      anon_sym_POUNDelse,
    ACTIONS(155), 1,
      anon_sym_POUNDendif,
    STATE(234), 1,
      sym_obj_key,
    STATE(269), 1,
      sym_else_block,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(15), 14,
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
  [1008] = 12,
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
    ACTIONS(157), 1,
      anon_sym_POUNDendif,
    STATE(234), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(15), 14,
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
  [1062] = 12,
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
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(15), 14,
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
  [1116] = 12,
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
    STATE(234), 1,
      sym_obj_key,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(17), 14,
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
  [1170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(26), 10,
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
  [1220] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
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
  [1270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(26), 10,
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
  [1320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(26), 10,
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
  [1370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(22), 10,
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
  [1420] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_POUNDinclude,
    ACTIONS(102), 1,
      anon_sym_POUNDdefine,
    ACTIONS(106), 1,
      anon_sym_new,
    ACTIONS(108), 1,
      anon_sym_get,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(20), 10,
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
  [1470] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_POUNDinclude,
    ACTIONS(176), 1,
      anon_sym_POUNDdefine,
    ACTIONS(182), 1,
      anon_sym_new,
    ACTIONS(185), 1,
      anon_sym_get,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_obj_key,
    ACTIONS(179), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(191), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    STATE(26), 10,
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
  [1520] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      aux_sym_define_value_token1,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(201), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(196), 15,
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
  [1556] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_define_value_token1,
    STATE(27), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(206), 19,
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
  [1588] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_define_ref,
    ACTIONS(212), 1,
      sym_decimal,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(37), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(41), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    STATE(51), 3,
      sym_value,
      sym_tuple,
      sym_list,
    ACTIONS(41), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1635] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_define_ref,
    ACTIONS(224), 1,
      sym_decimal,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(99), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(101), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(226), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1682] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_define_ref,
    ACTIONS(240), 1,
      sym_decimal,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    STATE(137), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(123), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    STATE(134), 3,
      sym_value,
      sym_tuple,
      sym_list,
    ACTIONS(242), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1729] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_define_ref,
    ACTIONS(257), 1,
      sym_decimal,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(260), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1773] = 4,
    ACTIONS(25), 1,
      aux_sym_define_value_token1,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
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
  [1803] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_define_value_token1,
    ACTIONS(276), 19,
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
  [1831] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(284), 1,
      aux_sym_define_value_token1,
    ACTIONS(282), 18,
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
  [1861] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_define_value_token1,
    ACTIONS(286), 18,
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
  [1888] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_define_value_token1,
    ACTIONS(290), 18,
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
  [1915] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_define_value_token1,
    ACTIONS(294), 18,
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
  [1942] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1985] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2028] = 3,
    ACTIONS(25), 1,
      aux_sym_define_value_token1,
    ACTIONS(27), 1,
      sym_comment,
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
  [2055] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_define_value_token1,
    ACTIONS(306), 18,
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
  [2082] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2125] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_define_value_token1,
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
  [2152] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_define_value_token1,
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
  [2179] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_define_value_token1,
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
  [2206] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_define_value_token1,
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
  [2233] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_define_value_token1,
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
  [2260] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_define_value_token1,
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
  [2287] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym_define_value_token1,
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
  [2314] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_define_value_token1,
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
  [2341] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_define_value_token1,
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
  [2368] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym_define_value_token1,
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
  [2395] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_define_value_token1,
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
  [2422] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_define_value_token1,
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
  [2449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2492] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_define_value_token1,
    ACTIONS(362), 18,
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
  [2519] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_define_value_token1,
    ACTIONS(366), 18,
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
  [2546] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_define_value_token1,
    ACTIONS(370), 18,
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
  [2573] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_define_value_token1,
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
  [2600] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_define_value_token1,
    ACTIONS(378), 18,
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
  [2627] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_define_value_token1,
    ACTIONS(382), 18,
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
  [2654] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_define_value_token1,
    ACTIONS(386), 18,
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
  [2681] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_define_value_token1,
    ACTIONS(390), 18,
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
  [2708] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2751] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2794] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_define_value_token1,
    ACTIONS(398), 18,
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
  [2821] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym_define_value_token1,
    ACTIONS(402), 18,
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
  [2848] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_define_value_token1,
    ACTIONS(406), 18,
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
  [2875] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(39), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2915] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(43), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2955] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(65), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [2995] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(66), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [3035] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(56), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [3075] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_define_ref,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_decimal,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(40), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(81), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(105), 3,
      sym_boolean,
      sym_dimension,
      sym_string_literal,
    ACTIONS(114), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 4,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(410), 4,
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
  [3141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(292), 11,
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
  [3163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(338), 11,
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
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(288), 11,
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
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(400), 10,
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
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(290), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
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
  [3270] = 3,
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
  [3291] = 3,
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
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(416), 10,
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
  [3333] = 3,
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
  [3354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(420), 10,
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
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(424), 10,
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
  [3396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(408), 10,
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
  [3417] = 3,
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
  [3438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(368), 10,
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
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(364), 10,
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
  [3480] = 3,
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
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(392), 10,
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
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(380), 10,
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
  [3543] = 3,
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
  [3564] = 3,
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
  [3585] = 3,
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
  [3606] = 3,
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
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(308), 10,
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
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(428), 10,
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
  [3690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(432), 10,
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
  [3711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(372), 10,
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
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3753] = 3,
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
  [3774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(388), 10,
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
  [3795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(436), 10,
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
  [3816] = 3,
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
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(384), 10,
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
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(296), 10,
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
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(306), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3900] = 3,
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
  [3921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(374), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(404), 10,
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
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(378), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(336), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      sym_define_ref,
      sym_decimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(286), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
      sym_identifier,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(338), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(432), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(440), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(308), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4102] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(420), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(436), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(428), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(354), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(368), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(364), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(330), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(392), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(424), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(380), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(342), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
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
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(350), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(292), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
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
  [4406] = 3,
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
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(288), 8,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_RBRACE,
  [4444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_for,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(141), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(204), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(447), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(146), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(208), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4490] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_reaction,
    ACTIONS(454), 1,
      anon_sym_collision,
    ACTIONS(456), 1,
      anon_sym_excitation,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(147), 1,
      sym_obj_key,
    STATE(145), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(460), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_reaction,
    ACTIONS(464), 1,
      anon_sym_collision,
    ACTIONS(466), 1,
      anon_sym_excitation,
    STATE(149), 1,
      sym_obj_key,
    STATE(145), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(460), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4546] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_for,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(141), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(208), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(460), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(146), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(473), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
    ACTIONS(204), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4592] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_for,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    STATE(176), 1,
      sym_string_literal,
    STATE(184), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 8,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      anon_sym_for,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    STATE(180), 1,
      sym_string_literal,
    STATE(184), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_for,
      sym_identifier,
    ACTIONS(278), 6,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [4674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__pterm_token1,
    ACTIONS(492), 1,
      aux_sym__nterm_token1,
    ACTIONS(488), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(152), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__pterm_token1,
    ACTIONS(492), 1,
      aux_sym__nterm_token1,
    ACTIONS(494), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(153), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym__pterm_token1,
    ACTIONS(501), 1,
      aux_sym__nterm_token1,
    ACTIONS(496), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(153), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [4734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(156), 1,
      sym_obj_key,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(157), 1,
      sym_obj_key,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4772] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    STATE(208), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    STATE(200), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_block,
    STATE(192), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(158), 1,
      sym_obj_key,
    STATE(142), 2,
      sym_special_keys,
      aux_sym_obj_key_repeat1,
    ACTIONS(19), 3,
      anon_sym_1d,
      anon_sym_2d,
      anon_sym_3d,
  [4860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(103), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4880] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(207), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      sym_identifier,
    STATE(193), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4920] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(121), 1,
      sym_string_literal,
    STATE(137), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4940] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(120), 1,
      sym_string_literal,
    STATE(137), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(518), 1,
      sym_identifier,
    STATE(183), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [4980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(201), 1,
      sym_string_literal,
    STATE(77), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [5011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_rate,
    ACTIONS(526), 1,
      anon_sym_janev_rate,
    STATE(110), 1,
      sym_rate,
    STATE(89), 2,
      sym_arrhenius,
      sym_janev,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [5039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_rate,
    ACTIONS(532), 1,
      anon_sym_janev_rate,
    STATE(205), 1,
      sym_rate,
    STATE(246), 2,
      sym_arrhenius,
      sym_janev,
  [5056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_rate,
    ACTIONS(532), 1,
      anon_sym_janev_rate,
    STATE(206), 1,
      sym_rate,
    STATE(246), 2,
      sym_arrhenius,
      sym_janev,
  [5073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_rate,
    ACTIONS(536), 1,
      anon_sym_janev_rate,
    STATE(62), 1,
      sym_rate,
    STATE(69), 2,
      sym_arrhenius,
      sym_janev,
  [5090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(203), 1,
      sym_sub_formula,
    STATE(255), 1,
      sym_chems,
    ACTIONS(538), 2,
      sym_define_key,
      sym_identifier,
  [5104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym_sub_formula,
    STATE(255), 1,
      sym_chems,
    ACTIONS(538), 2,
      sym_define_key,
      sym_identifier,
  [5118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym_full_formula_repeat1,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      anon_sym_for,
    STATE(48), 1,
      sym_block,
  [5144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym_full_formula_repeat1,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_full_formula_repeat1,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 3,
      sym_define_key,
      sym_decimal,
      sym_identifier,
  [5179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      anon_sym_for,
    STATE(83), 1,
      sym_block,
  [5192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(204), 1,
      sym_chems,
    ACTIONS(538), 2,
      sym_define_key,
      sym_identifier,
  [5203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_coulomb,
    ACTIONS(559), 1,
      anon_sym_cross,
  [5213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [5247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_decimal,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [5257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_decimal,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_full_formula,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_decimal,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_full_formula,
  [5297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
  [5317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_decimal,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [5327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_decimal,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [5337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_coulomb,
    ACTIONS(585), 1,
      anon_sym_cross,
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      sym_define_key,
      sym_decimal,
  [5363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_decimal,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [5373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
  [5383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
  [5393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [5401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(45), 1,
      sym_range,
  [5427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(106), 1,
      sym_range,
  [5437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [5447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_block,
  [5457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_define_key,
  [5464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_EQ,
  [5471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [5478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_decimal,
  [5485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_decimal,
  [5492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [5499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_decimal,
  [5506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
  [5513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_decimal,
  [5520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_EQ,
  [5527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COLON,
  [5534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_decimal,
  [5541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_decimal,
  [5548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_EQ,
  [5555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
  [5562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_section,
  [5569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_decimal,
  [5576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_decimal,
  [5583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_level,
  [5590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
  [5597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [5604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_decimal,
  [5611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_decimal,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
  [5625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
  [5632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [5639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_POUNDendif,
  [5646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [5653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [5660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [5667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_POUNDendif,
  [5674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_decimal,
  [5688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_decimal,
  [5695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_decimal,
  [5702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [5709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_decimal,
  [5716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
  [5723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [5730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_decimal,
  [5737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_EQ,
  [5744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
  [5751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
  [5758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_define_key,
  [5765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_EQ,
  [5772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [5779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_DASH_GT,
  [5786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_decimal,
  [5793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_decimal,
  [5800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
  [5807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
  [5814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
  [5821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
  [5828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_define_key,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_define_key,
  [5842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_DASH_GT,
  [5849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LT_DASH_GT,
  [5856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_decimal,
  [5863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [5870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_identifier,
  [5877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_POUNDendif,
  [5884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [5891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [5898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
  [5905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_EQ,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
  [5919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_decimal,
  [5926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_decimal,
  [5933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
  [5940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_EQ,
  [5947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_decimal,
  [5954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_decimal,
  [5961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_identifier,
  [5968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_identifier,
  [5975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_POUNDendif,
  [5982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_DQUOTE,
  [5989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_decimal,
  [5996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_decimal,
  [6003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
  [6010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_identifier,
  [6017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
  [6024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
  [6031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_identifier,
  [6038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LT_DASH_GT,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_decimal,
  [6052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
  [6059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_section,
  [6066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_EQ,
  [6073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_decimal,
  [6080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_decimal,
  [6087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_decimal,
  [6094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_EQ,
  [6101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
  [6108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_EQ,
  [6115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_level,
  [6122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_decimal,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_EQ,
  [6136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_decimal,
  [6143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_EQ,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_decimal,
  [6164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_decimal,
  [6171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DASH_GT,
  [6178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_decimal,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_decimal,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [6199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_decimal,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_decimal,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_decimal,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_decimal,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_decimal,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_decimal,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_EQ,
  [6255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 392,
  [SMALL_STATE(9)] = 471,
  [SMALL_STATE(10)] = 550,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 712,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 832,
  [SMALL_STATE(15)] = 892,
  [SMALL_STATE(16)] = 948,
  [SMALL_STATE(17)] = 1008,
  [SMALL_STATE(18)] = 1062,
  [SMALL_STATE(19)] = 1116,
  [SMALL_STATE(20)] = 1170,
  [SMALL_STATE(21)] = 1220,
  [SMALL_STATE(22)] = 1270,
  [SMALL_STATE(23)] = 1320,
  [SMALL_STATE(24)] = 1370,
  [SMALL_STATE(25)] = 1420,
  [SMALL_STATE(26)] = 1470,
  [SMALL_STATE(27)] = 1520,
  [SMALL_STATE(28)] = 1556,
  [SMALL_STATE(29)] = 1588,
  [SMALL_STATE(30)] = 1635,
  [SMALL_STATE(31)] = 1682,
  [SMALL_STATE(32)] = 1729,
  [SMALL_STATE(33)] = 1773,
  [SMALL_STATE(34)] = 1803,
  [SMALL_STATE(35)] = 1831,
  [SMALL_STATE(36)] = 1861,
  [SMALL_STATE(37)] = 1888,
  [SMALL_STATE(38)] = 1915,
  [SMALL_STATE(39)] = 1942,
  [SMALL_STATE(40)] = 1985,
  [SMALL_STATE(41)] = 2028,
  [SMALL_STATE(42)] = 2055,
  [SMALL_STATE(43)] = 2082,
  [SMALL_STATE(44)] = 2125,
  [SMALL_STATE(45)] = 2152,
  [SMALL_STATE(46)] = 2179,
  [SMALL_STATE(47)] = 2206,
  [SMALL_STATE(48)] = 2233,
  [SMALL_STATE(49)] = 2260,
  [SMALL_STATE(50)] = 2287,
  [SMALL_STATE(51)] = 2314,
  [SMALL_STATE(52)] = 2341,
  [SMALL_STATE(53)] = 2368,
  [SMALL_STATE(54)] = 2395,
  [SMALL_STATE(55)] = 2422,
  [SMALL_STATE(56)] = 2449,
  [SMALL_STATE(57)] = 2492,
  [SMALL_STATE(58)] = 2519,
  [SMALL_STATE(59)] = 2546,
  [SMALL_STATE(60)] = 2573,
  [SMALL_STATE(61)] = 2600,
  [SMALL_STATE(62)] = 2627,
  [SMALL_STATE(63)] = 2654,
  [SMALL_STATE(64)] = 2681,
  [SMALL_STATE(65)] = 2708,
  [SMALL_STATE(66)] = 2751,
  [SMALL_STATE(67)] = 2794,
  [SMALL_STATE(68)] = 2821,
  [SMALL_STATE(69)] = 2848,
  [SMALL_STATE(70)] = 2875,
  [SMALL_STATE(71)] = 2915,
  [SMALL_STATE(72)] = 2955,
  [SMALL_STATE(73)] = 2995,
  [SMALL_STATE(74)] = 3035,
  [SMALL_STATE(75)] = 3075,
  [SMALL_STATE(76)] = 3115,
  [SMALL_STATE(77)] = 3141,
  [SMALL_STATE(78)] = 3163,
  [SMALL_STATE(79)] = 3185,
  [SMALL_STATE(80)] = 3207,
  [SMALL_STATE(81)] = 3228,
  [SMALL_STATE(82)] = 3249,
  [SMALL_STATE(83)] = 3270,
  [SMALL_STATE(84)] = 3291,
  [SMALL_STATE(85)] = 3312,
  [SMALL_STATE(86)] = 3333,
  [SMALL_STATE(87)] = 3354,
  [SMALL_STATE(88)] = 3375,
  [SMALL_STATE(89)] = 3396,
  [SMALL_STATE(90)] = 3417,
  [SMALL_STATE(91)] = 3438,
  [SMALL_STATE(92)] = 3459,
  [SMALL_STATE(93)] = 3480,
  [SMALL_STATE(94)] = 3501,
  [SMALL_STATE(95)] = 3522,
  [SMALL_STATE(96)] = 3543,
  [SMALL_STATE(97)] = 3564,
  [SMALL_STATE(98)] = 3585,
  [SMALL_STATE(99)] = 3606,
  [SMALL_STATE(100)] = 3627,
  [SMALL_STATE(101)] = 3648,
  [SMALL_STATE(102)] = 3669,
  [SMALL_STATE(103)] = 3690,
  [SMALL_STATE(104)] = 3711,
  [SMALL_STATE(105)] = 3732,
  [SMALL_STATE(106)] = 3753,
  [SMALL_STATE(107)] = 3774,
  [SMALL_STATE(108)] = 3795,
  [SMALL_STATE(109)] = 3816,
  [SMALL_STATE(110)] = 3837,
  [SMALL_STATE(111)] = 3858,
  [SMALL_STATE(112)] = 3879,
  [SMALL_STATE(113)] = 3900,
  [SMALL_STATE(114)] = 3921,
  [SMALL_STATE(115)] = 3942,
  [SMALL_STATE(116)] = 3963,
  [SMALL_STATE(117)] = 3984,
  [SMALL_STATE(118)] = 4005,
  [SMALL_STATE(119)] = 4026,
  [SMALL_STATE(120)] = 4045,
  [SMALL_STATE(121)] = 4064,
  [SMALL_STATE(122)] = 4083,
  [SMALL_STATE(123)] = 4102,
  [SMALL_STATE(124)] = 4121,
  [SMALL_STATE(125)] = 4140,
  [SMALL_STATE(126)] = 4159,
  [SMALL_STATE(127)] = 4178,
  [SMALL_STATE(128)] = 4197,
  [SMALL_STATE(129)] = 4216,
  [SMALL_STATE(130)] = 4235,
  [SMALL_STATE(131)] = 4254,
  [SMALL_STATE(132)] = 4273,
  [SMALL_STATE(133)] = 4292,
  [SMALL_STATE(134)] = 4311,
  [SMALL_STATE(135)] = 4330,
  [SMALL_STATE(136)] = 4349,
  [SMALL_STATE(137)] = 4368,
  [SMALL_STATE(138)] = 4387,
  [SMALL_STATE(139)] = 4406,
  [SMALL_STATE(140)] = 4425,
  [SMALL_STATE(141)] = 4444,
  [SMALL_STATE(142)] = 4468,
  [SMALL_STATE(143)] = 4490,
  [SMALL_STATE(144)] = 4518,
  [SMALL_STATE(145)] = 4546,
  [SMALL_STATE(146)] = 4570,
  [SMALL_STATE(147)] = 4592,
  [SMALL_STATE(148)] = 4618,
  [SMALL_STATE(149)] = 4632,
  [SMALL_STATE(150)] = 4658,
  [SMALL_STATE(151)] = 4674,
  [SMALL_STATE(152)] = 4694,
  [SMALL_STATE(153)] = 4714,
  [SMALL_STATE(154)] = 4734,
  [SMALL_STATE(155)] = 4753,
  [SMALL_STATE(156)] = 4772,
  [SMALL_STATE(157)] = 4795,
  [SMALL_STATE(158)] = 4818,
  [SMALL_STATE(159)] = 4841,
  [SMALL_STATE(160)] = 4860,
  [SMALL_STATE(161)] = 4880,
  [SMALL_STATE(162)] = 4900,
  [SMALL_STATE(163)] = 4920,
  [SMALL_STATE(164)] = 4940,
  [SMALL_STATE(165)] = 4960,
  [SMALL_STATE(166)] = 4980,
  [SMALL_STATE(167)] = 5000,
  [SMALL_STATE(168)] = 5011,
  [SMALL_STATE(169)] = 5028,
  [SMALL_STATE(170)] = 5039,
  [SMALL_STATE(171)] = 5056,
  [SMALL_STATE(172)] = 5073,
  [SMALL_STATE(173)] = 5090,
  [SMALL_STATE(174)] = 5104,
  [SMALL_STATE(175)] = 5118,
  [SMALL_STATE(176)] = 5131,
  [SMALL_STATE(177)] = 5144,
  [SMALL_STATE(178)] = 5157,
  [SMALL_STATE(179)] = 5170,
  [SMALL_STATE(180)] = 5179,
  [SMALL_STATE(181)] = 5192,
  [SMALL_STATE(182)] = 5203,
  [SMALL_STATE(183)] = 5213,
  [SMALL_STATE(184)] = 5223,
  [SMALL_STATE(185)] = 5231,
  [SMALL_STATE(186)] = 5239,
  [SMALL_STATE(187)] = 5247,
  [SMALL_STATE(188)] = 5257,
  [SMALL_STATE(189)] = 5267,
  [SMALL_STATE(190)] = 5277,
  [SMALL_STATE(191)] = 5287,
  [SMALL_STATE(192)] = 5297,
  [SMALL_STATE(193)] = 5307,
  [SMALL_STATE(194)] = 5317,
  [SMALL_STATE(195)] = 5327,
  [SMALL_STATE(196)] = 5337,
  [SMALL_STATE(197)] = 5347,
  [SMALL_STATE(198)] = 5355,
  [SMALL_STATE(199)] = 5363,
  [SMALL_STATE(200)] = 5373,
  [SMALL_STATE(201)] = 5383,
  [SMALL_STATE(202)] = 5393,
  [SMALL_STATE(203)] = 5401,
  [SMALL_STATE(204)] = 5409,
  [SMALL_STATE(205)] = 5417,
  [SMALL_STATE(206)] = 5427,
  [SMALL_STATE(207)] = 5437,
  [SMALL_STATE(208)] = 5447,
  [SMALL_STATE(209)] = 5457,
  [SMALL_STATE(210)] = 5464,
  [SMALL_STATE(211)] = 5471,
  [SMALL_STATE(212)] = 5478,
  [SMALL_STATE(213)] = 5485,
  [SMALL_STATE(214)] = 5492,
  [SMALL_STATE(215)] = 5499,
  [SMALL_STATE(216)] = 5506,
  [SMALL_STATE(217)] = 5513,
  [SMALL_STATE(218)] = 5520,
  [SMALL_STATE(219)] = 5527,
  [SMALL_STATE(220)] = 5534,
  [SMALL_STATE(221)] = 5541,
  [SMALL_STATE(222)] = 5548,
  [SMALL_STATE(223)] = 5555,
  [SMALL_STATE(224)] = 5562,
  [SMALL_STATE(225)] = 5569,
  [SMALL_STATE(226)] = 5576,
  [SMALL_STATE(227)] = 5583,
  [SMALL_STATE(228)] = 5590,
  [SMALL_STATE(229)] = 5597,
  [SMALL_STATE(230)] = 5604,
  [SMALL_STATE(231)] = 5611,
  [SMALL_STATE(232)] = 5618,
  [SMALL_STATE(233)] = 5625,
  [SMALL_STATE(234)] = 5632,
  [SMALL_STATE(235)] = 5639,
  [SMALL_STATE(236)] = 5646,
  [SMALL_STATE(237)] = 5653,
  [SMALL_STATE(238)] = 5660,
  [SMALL_STATE(239)] = 5667,
  [SMALL_STATE(240)] = 5674,
  [SMALL_STATE(241)] = 5681,
  [SMALL_STATE(242)] = 5688,
  [SMALL_STATE(243)] = 5695,
  [SMALL_STATE(244)] = 5702,
  [SMALL_STATE(245)] = 5709,
  [SMALL_STATE(246)] = 5716,
  [SMALL_STATE(247)] = 5723,
  [SMALL_STATE(248)] = 5730,
  [SMALL_STATE(249)] = 5737,
  [SMALL_STATE(250)] = 5744,
  [SMALL_STATE(251)] = 5751,
  [SMALL_STATE(252)] = 5758,
  [SMALL_STATE(253)] = 5765,
  [SMALL_STATE(254)] = 5772,
  [SMALL_STATE(255)] = 5779,
  [SMALL_STATE(256)] = 5786,
  [SMALL_STATE(257)] = 5793,
  [SMALL_STATE(258)] = 5800,
  [SMALL_STATE(259)] = 5807,
  [SMALL_STATE(260)] = 5814,
  [SMALL_STATE(261)] = 5821,
  [SMALL_STATE(262)] = 5828,
  [SMALL_STATE(263)] = 5835,
  [SMALL_STATE(264)] = 5842,
  [SMALL_STATE(265)] = 5849,
  [SMALL_STATE(266)] = 5856,
  [SMALL_STATE(267)] = 5863,
  [SMALL_STATE(268)] = 5870,
  [SMALL_STATE(269)] = 5877,
  [SMALL_STATE(270)] = 5884,
  [SMALL_STATE(271)] = 5891,
  [SMALL_STATE(272)] = 5898,
  [SMALL_STATE(273)] = 5905,
  [SMALL_STATE(274)] = 5912,
  [SMALL_STATE(275)] = 5919,
  [SMALL_STATE(276)] = 5926,
  [SMALL_STATE(277)] = 5933,
  [SMALL_STATE(278)] = 5940,
  [SMALL_STATE(279)] = 5947,
  [SMALL_STATE(280)] = 5954,
  [SMALL_STATE(281)] = 5961,
  [SMALL_STATE(282)] = 5968,
  [SMALL_STATE(283)] = 5975,
  [SMALL_STATE(284)] = 5982,
  [SMALL_STATE(285)] = 5989,
  [SMALL_STATE(286)] = 5996,
  [SMALL_STATE(287)] = 6003,
  [SMALL_STATE(288)] = 6010,
  [SMALL_STATE(289)] = 6017,
  [SMALL_STATE(290)] = 6024,
  [SMALL_STATE(291)] = 6031,
  [SMALL_STATE(292)] = 6038,
  [SMALL_STATE(293)] = 6045,
  [SMALL_STATE(294)] = 6052,
  [SMALL_STATE(295)] = 6059,
  [SMALL_STATE(296)] = 6066,
  [SMALL_STATE(297)] = 6073,
  [SMALL_STATE(298)] = 6080,
  [SMALL_STATE(299)] = 6087,
  [SMALL_STATE(300)] = 6094,
  [SMALL_STATE(301)] = 6101,
  [SMALL_STATE(302)] = 6108,
  [SMALL_STATE(303)] = 6115,
  [SMALL_STATE(304)] = 6122,
  [SMALL_STATE(305)] = 6129,
  [SMALL_STATE(306)] = 6136,
  [SMALL_STATE(307)] = 6143,
  [SMALL_STATE(308)] = 6150,
  [SMALL_STATE(309)] = 6157,
  [SMALL_STATE(310)] = 6164,
  [SMALL_STATE(311)] = 6171,
  [SMALL_STATE(312)] = 6178,
  [SMALL_STATE(313)] = 6185,
  [SMALL_STATE(314)] = 6192,
  [SMALL_STATE(315)] = 6199,
  [SMALL_STATE(316)] = 6206,
  [SMALL_STATE(317)] = 6213,
  [SMALL_STATE(318)] = 6220,
  [SMALL_STATE(319)] = 6227,
  [SMALL_STATE(320)] = 6234,
  [SMALL_STATE(321)] = 6241,
  [SMALL_STATE(322)] = 6248,
  [SMALL_STATE(323)] = 6255,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(143),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(155),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(41),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(42),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(34),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(267),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(268),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(11),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 2), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_value_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(160),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(209),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(252),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(144),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(159),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(142),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(148),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(164),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(262),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(263),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(154),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(163),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(148),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(27),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(34),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obj_key, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obj_key, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(105),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(4),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(112),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(105),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(287),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(288),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_keys, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_keys, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_value_repeat1, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_value_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(141),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(150),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(146),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obj_key_repeat1, 2), SHIFT_REPEAT(148),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(179),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(198),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(173),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
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
