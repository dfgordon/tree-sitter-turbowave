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
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
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
  sym_decimal = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_yes = 24,
  anon_sym_no = 25,
  anon_sym_on = 26,
  anon_sym_off = 27,
  anon_sym_LBRACKdeg_RBRACK = 28,
  anon_sym_LBRACKrad_RBRACK = 29,
  anon_sym_LBRACKmrad_RBRACK = 30,
  anon_sym_LBRACKurad_RBRACK = 31,
  anon_sym_LBRACKcm2_RBRACK = 32,
  anon_sym_LBRACKm2_RBRACK = 33,
  anon_sym_LBRACKcm2_SLASHs_RBRACK = 34,
  anon_sym_LBRACKm2_SLASHs_RBRACK = 35,
  anon_sym_LBRACKum_RBRACK = 36,
  anon_sym_LBRACKmm_RBRACK = 37,
  anon_sym_LBRACKcm_RBRACK = 38,
  anon_sym_LBRACKm_RBRACK = 39,
  anon_sym_LBRACKfs_RBRACK = 40,
  anon_sym_LBRACKps_RBRACK = 41,
  anon_sym_LBRACKns_RBRACK = 42,
  anon_sym_LBRACKus_RBRACK = 43,
  anon_sym_LBRACKs_RBRACK = 44,
  anon_sym_LBRACK_SLASHm3_RBRACK = 45,
  anon_sym_LBRACK_SLASHcm3_RBRACK = 46,
  anon_sym_LBRACKJ_SLASHm3_RBRACK = 47,
  anon_sym_LBRACKJ_SLASHcm3_RBRACK = 48,
  anon_sym_LBRACKeV_RBRACK = 49,
  anon_sym_LBRACKK_RBRACK = 50,
  anon_sym_LBRACKV_RBRACK = 51,
  anon_sym_LBRACKwebers_SLASHm_RBRACK = 52,
  anon_sym_LBRACKG_STARcm_RBRACK = 53,
  anon_sym_LBRACKV_SLASHm_RBRACK = 54,
  anon_sym_LBRACKV_SLASHcm_RBRACK = 55,
  anon_sym_LBRACKT_RBRACK = 56,
  anon_sym_LBRACKG_RBRACK = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_LPAREN = 60,
  anon_sym_RPAREN = 61,
  sym_comment = 62,
  aux_sym__pterm_token1 = 63,
  aux_sym__nterm_token1 = 64,
  anon_sym_COLON = 65,
  anon_sym_rate = 66,
  anon_sym_janev_rate = 67,
  sym_input_file = 68,
  sym__top = 69,
  sym__nested = 70,
  sym_include = 71,
  sym_define = 72,
  sym__directive = 73,
  sym__nested_directive = 74,
  sym_assignment = 75,
  sym__statement = 76,
  sym__nested_statement = 77,
  sym_new = 78,
  sym_associative_new = 79,
  sym_generate = 80,
  sym_reaction = 81,
  sym_collision = 82,
  sym_excitation = 83,
  sym_get = 84,
  sym_identifier_sequence = 85,
  sym__string_literal_single = 86,
  sym__string_literal_double = 87,
  sym_string_literal = 88,
  sym_boolean = 89,
  sym_unit = 90,
  sym_dimension = 91,
  sym_value = 92,
  sym_define_value = 93,
  sym_block = 94,
  sym_tuple = 95,
  sym_list = 96,
  sym__pterm = 97,
  sym__nterm = 98,
  sym_chems = 99,
  sym_sub_formula = 100,
  sym_full_formula = 101,
  sym_arrhenius = 102,
  sym_janev = 103,
  sym_rate = 104,
  sym_range = 105,
  aux_sym_input_file_repeat1 = 106,
  aux_sym_identifier_sequence_repeat1 = 107,
  aux_sym_block_repeat1 = 108,
  aux_sym_tuple_repeat1 = 109,
  aux_sym_chems_repeat1 = 110,
  aux_sym_full_formula_repeat1 = 111,
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
      if (eof) ADVANCE(176);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(303);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'y') ADVANCE(211);
      if (lookahead == '{') ADVANCE(301);
      if (lookahead == '}') ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '{') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == '{') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '}') ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(306);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '>') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'G') ADVANCE(10);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'K') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ']') ADVANCE(276);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == ']') ADVANCE(281);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 29:
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(293);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(287);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(283);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(280);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(285);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(284);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(279);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(286);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(271);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(272);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(289);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(290);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(273);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(274);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(277);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 165:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 166:
      if (lookahead == 'w') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 168:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 169:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(169)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(215);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 172:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 174:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(306);
      if (lookahead == '\r') ADVANCE(307);
      END_STATE();
    case 175:
      if (eof) ADVANCE(176);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(175)
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '{') ADVANCE(301);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_define_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACKdeg_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACKrad_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACKmrad_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACKurad_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_SLASHs_RBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_SLASHs_RBRACK);
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
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHm3_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHcm3_RBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKeV_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKK_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACKV_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACKwebers_SLASHm_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACKG_STARcm_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHm_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHcm_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACKT_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACKG_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(174);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 175},
  [5] = {.lex_state = 175},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 175},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 175},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 175},
  [41] = {.lex_state = 175},
  [42] = {.lex_state = 175},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 175},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 175},
  [47] = {.lex_state = 175},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 175},
  [50] = {.lex_state = 175},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 169},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 175},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 175},
  [58] = {.lex_state = 175},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 175},
  [67] = {.lex_state = 175},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 175},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 175},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 175},
  [77] = {.lex_state = 175},
  [78] = {.lex_state = 175},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 175},
  [81] = {.lex_state = 175},
  [82] = {.lex_state = 175},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 175},
  [85] = {.lex_state = 175},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 175},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 175},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 175},
  [94] = {.lex_state = 175},
  [95] = {.lex_state = 175},
  [96] = {.lex_state = 175},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 175},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
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
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
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
    [sym_input_file] = STATE(186),
    [sym__top] = STATE(7),
    [sym_include] = STATE(7),
    [sym_define] = STATE(7),
    [sym__directive] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_new] = STATE(7),
    [sym_associative_new] = STATE(7),
    [sym_generate] = STATE(7),
    [sym_reaction] = STATE(7),
    [sym_collision] = STATE(7),
    [sym_excitation] = STATE(7),
    [sym_identifier_sequence] = STATE(185),
    [aux_sym_input_file_repeat1] = STATE(7),
    [aux_sym_identifier_sequence_repeat1] = STATE(97),
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
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_unit,
    ACTIONS(17), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(19), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
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
  [56] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_unit,
    ACTIONS(23), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(25), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(27), 30,
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
  [105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_unit,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(25), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
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
  [154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_unit,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(19), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
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
  [203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_unit,
    ACTIONS(17), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(19), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(27), 30,
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
  [252] = 10,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(185), 1,
      sym_identifier_sequence,
    STATE(10), 13,
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
  [295] = 12,
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
    ACTIONS(41), 1,
      sym_decimal,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(71), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(62), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    STATE(90), 3,
      sym_value,
      sym_tuple,
      sym_list,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [342] = 12,
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
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(47), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    STATE(48), 3,
      sym_value,
      sym_tuple,
      sym_list,
    ACTIONS(59), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [389] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_POUNDinclude,
    ACTIONS(70), 1,
      anon_sym_POUNDdefine,
    ACTIONS(73), 1,
      anon_sym_new,
    ACTIONS(76), 1,
      anon_sym_generate,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(185), 1,
      sym_identifier_sequence,
    STATE(10), 13,
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
  [432] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_define_key,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_decimal,
    ACTIONS(100), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(97), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [476] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [519] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [648] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    STATE(12), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    STATE(13), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [728] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    STATE(15), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [768] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_define_key,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_decimal,
    STATE(14), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(28), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(25), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(112), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [808] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_POUNDinclude,
    ACTIONS(124), 1,
      anon_sym_POUNDdefine,
    ACTIONS(126), 1,
      anon_sym_new,
    ACTIONS(128), 1,
      anon_sym_get,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(24), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [847] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_POUNDinclude,
    ACTIONS(124), 1,
      anon_sym_POUNDdefine,
    ACTIONS(126), 1,
      anon_sym_new,
    ACTIONS(128), 1,
      anon_sym_get,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
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
  [886] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_POUNDinclude,
    ACTIONS(124), 1,
      anon_sym_POUNDdefine,
    ACTIONS(126), 1,
      anon_sym_new,
    ACTIONS(128), 1,
      anon_sym_get,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(23), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [925] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_POUNDinclude,
    ACTIONS(124), 1,
      anon_sym_POUNDdefine,
    ACTIONS(126), 1,
      anon_sym_new,
    ACTIONS(128), 1,
      anon_sym_get,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(24), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [964] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_POUNDinclude,
    ACTIONS(141), 1,
      anon_sym_POUNDdefine,
    ACTIONS(144), 1,
      anon_sym_new,
    ACTIONS(147), 1,
      anon_sym_get,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(182), 1,
      sym_identifier_sequence,
    STATE(24), 9,
      sym__nested,
      sym_include,
      sym_define,
      sym__nested_directive,
      sym_assignment,
      sym__nested_statement,
      sym_new,
      sym_get,
      aux_sym_block_repeat1,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(19), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(157), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(161), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(165), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(169), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(173), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      sym_define_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(177), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_decimal,
    STATE(51), 1,
      sym_define_value,
    STATE(53), 2,
      sym_boolean,
      sym_dimension,
    ACTIONS(43), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_decimal,
    STATE(77), 1,
      sym_define_value,
    STATE(87), 2,
      sym_boolean,
      sym_dimension,
    ACTIONS(59), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__pterm_token1,
    ACTIONS(191), 1,
      aux_sym__nterm_token1,
    ACTIONS(187), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(37), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__pterm_token1,
    ACTIONS(191), 1,
      aux_sym__nterm_token1,
    ACTIONS(193), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(34), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_for,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_block,
    STATE(110), 1,
      sym_string_literal,
    STATE(114), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__pterm_token1,
    ACTIONS(208), 1,
      aux_sym__nterm_token1,
    ACTIONS(203), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(37), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [1286] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    STATE(129), 1,
      sym_string_literal,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1309] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    STATE(118), 1,
      sym_string_literal,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1347] = 3,
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
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_LBRACE,
  [1377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(121), 1,
      sym_string_literal,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(217), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(157), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(221), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(19), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(225), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(157), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(161), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(229), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_reaction,
    ACTIONS(233), 1,
      anon_sym_collision,
    ACTIONS(235), 1,
      anon_sym_excitation,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(36), 1,
      sym_identifier_sequence,
    STATE(79), 1,
      aux_sym_identifier_sequence_repeat1,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(25), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(72), 1,
      sym_string_literal,
    STATE(71), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(243), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(247), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(251), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(255), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(96), 1,
      sym_string_literal,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_for,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(264), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1659] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(119), 1,
      sym_string_literal,
    STATE(41), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [1679] = 3,
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
  [1693] = 3,
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
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(169), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1721] = 3,
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
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(274), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1749] = 3,
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
  [1763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(217), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(282), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(286), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1805] = 3,
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
  [1819] = 3,
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
  [1833] = 3,
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
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(177), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(294), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(282), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(229), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(247), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_for,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(300), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(304), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(169), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(308), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(251), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(312), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(316), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(243), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(25), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(173), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
    ACTIONS(320), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_RBRACE,
    ACTIONS(225), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
  [2089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(63), 1,
      sym_string_literal,
    STATE(71), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(264), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2125] = 3,
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
  [2139] = 3,
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
  [2153] = 3,
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
  [2167] = 3,
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
  [2181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(300), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2197] = 3,
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
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_rate,
    ACTIONS(349), 1,
      anon_sym_janev_rate,
    STATE(84), 1,
      sym_rate,
    STATE(80), 2,
      sym_arrhenius,
      sym_janev,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_rate,
    ACTIONS(355), 1,
      anon_sym_janev_rate,
    STATE(120), 1,
      sym_rate,
    STATE(155), 2,
      sym_arrhenius,
      sym_janev,
  [2267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_sub_formula,
    STATE(158), 1,
      sym_chems,
    ACTIONS(357), 2,
      sym_define_key,
      sym_identifier,
  [2281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(109), 1,
      sym_sub_formula,
    STATE(158), 1,
      sym_chems,
    ACTIONS(357), 2,
      sym_define_key,
      sym_identifier,
  [2295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      anon_sym_COLON,
    STATE(105), 1,
      aux_sym_full_formula_repeat1,
  [2308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(105), 1,
      aux_sym_full_formula_repeat1,
  [2321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_chems,
    ACTIONS(357), 2,
      sym_define_key,
      sym_identifier,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_decimal,
    ACTIONS(368), 2,
      sym_define_key,
      sym_identifier,
  [2343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_full_formula_repeat1,
  [2356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_for,
    STATE(57), 1,
      sym_block,
  [2369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(38), 1,
      sym_identifier_sequence,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
  [2382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(39), 1,
      sym_identifier_sequence,
    STATE(97), 1,
      aux_sym_identifier_sequence_repeat1,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_decimal,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_full_formula,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_block,
  [2459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(89), 1,
      sym_range,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
  [2479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      sym_define_key,
      sym_decimal,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_decimal,
    ACTIONS(392), 1,
      anon_sym_COLON,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_coulomb,
    ACTIONS(400), 1,
      anon_sym_cross,
  [2523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
  [2549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_decimal,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [2559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_EQ,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [2580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_decimal,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_decimal,
  [2594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [2601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_EQ,
  [2608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_decimal,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_define_key,
  [2629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_level,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_decimal,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_decimal,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_decimal,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_decimal,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_decimal,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_section,
  [2692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_decimal,
  [2699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_decimal,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ,
  [2741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_decimal,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DASH_GT,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_decimal,
  [2762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DASH_GT,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LT_DASH_GT,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_decimal,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_decimal,
  [2804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SQUOTE,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_EQ,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_EQ,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_decimal,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_decimal,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_define_key,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_identifier,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_decimal,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_decimal,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_identifier,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_decimal,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_decimal,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_EQ,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_decimal,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_decimal,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_decimal,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_decimal,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_decimal,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_decimal,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 105,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 342,
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 519,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 648,
  [SMALL_STATE(17)] = 688,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 768,
  [SMALL_STATE(20)] = 808,
  [SMALL_STATE(21)] = 847,
  [SMALL_STATE(22)] = 886,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 964,
  [SMALL_STATE(25)] = 1003,
  [SMALL_STATE(26)] = 1024,
  [SMALL_STATE(27)] = 1045,
  [SMALL_STATE(28)] = 1066,
  [SMALL_STATE(29)] = 1087,
  [SMALL_STATE(30)] = 1108,
  [SMALL_STATE(31)] = 1129,
  [SMALL_STATE(32)] = 1150,
  [SMALL_STATE(33)] = 1175,
  [SMALL_STATE(34)] = 1200,
  [SMALL_STATE(35)] = 1220,
  [SMALL_STATE(36)] = 1240,
  [SMALL_STATE(37)] = 1266,
  [SMALL_STATE(38)] = 1286,
  [SMALL_STATE(39)] = 1309,
  [SMALL_STATE(40)] = 1332,
  [SMALL_STATE(41)] = 1347,
  [SMALL_STATE(42)] = 1362,
  [SMALL_STATE(43)] = 1377,
  [SMALL_STATE(44)] = 1397,
  [SMALL_STATE(45)] = 1411,
  [SMALL_STATE(46)] = 1425,
  [SMALL_STATE(47)] = 1439,
  [SMALL_STATE(48)] = 1453,
  [SMALL_STATE(49)] = 1467,
  [SMALL_STATE(50)] = 1481,
  [SMALL_STATE(51)] = 1495,
  [SMALL_STATE(52)] = 1509,
  [SMALL_STATE(53)] = 1531,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1565,
  [SMALL_STATE(56)] = 1579,
  [SMALL_STATE(57)] = 1593,
  [SMALL_STATE(58)] = 1607,
  [SMALL_STATE(59)] = 1621,
  [SMALL_STATE(60)] = 1641,
  [SMALL_STATE(61)] = 1659,
  [SMALL_STATE(62)] = 1679,
  [SMALL_STATE(63)] = 1693,
  [SMALL_STATE(64)] = 1707,
  [SMALL_STATE(65)] = 1721,
  [SMALL_STATE(66)] = 1735,
  [SMALL_STATE(67)] = 1749,
  [SMALL_STATE(68)] = 1763,
  [SMALL_STATE(69)] = 1777,
  [SMALL_STATE(70)] = 1791,
  [SMALL_STATE(71)] = 1805,
  [SMALL_STATE(72)] = 1819,
  [SMALL_STATE(73)] = 1833,
  [SMALL_STATE(74)] = 1847,
  [SMALL_STATE(75)] = 1861,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1889,
  [SMALL_STATE(78)] = 1903,
  [SMALL_STATE(79)] = 1917,
  [SMALL_STATE(80)] = 1935,
  [SMALL_STATE(81)] = 1949,
  [SMALL_STATE(82)] = 1963,
  [SMALL_STATE(83)] = 1977,
  [SMALL_STATE(84)] = 1991,
  [SMALL_STATE(85)] = 2005,
  [SMALL_STATE(86)] = 2019,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2047,
  [SMALL_STATE(89)] = 2061,
  [SMALL_STATE(90)] = 2075,
  [SMALL_STATE(91)] = 2089,
  [SMALL_STATE(92)] = 2109,
  [SMALL_STATE(93)] = 2125,
  [SMALL_STATE(94)] = 2139,
  [SMALL_STATE(95)] = 2153,
  [SMALL_STATE(96)] = 2167,
  [SMALL_STATE(97)] = 2181,
  [SMALL_STATE(98)] = 2197,
  [SMALL_STATE(99)] = 2211,
  [SMALL_STATE(100)] = 2222,
  [SMALL_STATE(101)] = 2239,
  [SMALL_STATE(102)] = 2250,
  [SMALL_STATE(103)] = 2267,
  [SMALL_STATE(104)] = 2281,
  [SMALL_STATE(105)] = 2295,
  [SMALL_STATE(106)] = 2308,
  [SMALL_STATE(107)] = 2321,
  [SMALL_STATE(108)] = 2332,
  [SMALL_STATE(109)] = 2343,
  [SMALL_STATE(110)] = 2356,
  [SMALL_STATE(111)] = 2369,
  [SMALL_STATE(112)] = 2382,
  [SMALL_STATE(113)] = 2395,
  [SMALL_STATE(114)] = 2403,
  [SMALL_STATE(115)] = 2411,
  [SMALL_STATE(116)] = 2421,
  [SMALL_STATE(117)] = 2431,
  [SMALL_STATE(118)] = 2439,
  [SMALL_STATE(119)] = 2449,
  [SMALL_STATE(120)] = 2459,
  [SMALL_STATE(121)] = 2469,
  [SMALL_STATE(122)] = 2479,
  [SMALL_STATE(123)] = 2487,
  [SMALL_STATE(124)] = 2497,
  [SMALL_STATE(125)] = 2505,
  [SMALL_STATE(126)] = 2513,
  [SMALL_STATE(127)] = 2523,
  [SMALL_STATE(128)] = 2531,
  [SMALL_STATE(129)] = 2539,
  [SMALL_STATE(130)] = 2549,
  [SMALL_STATE(131)] = 2559,
  [SMALL_STATE(132)] = 2566,
  [SMALL_STATE(133)] = 2573,
  [SMALL_STATE(134)] = 2580,
  [SMALL_STATE(135)] = 2587,
  [SMALL_STATE(136)] = 2594,
  [SMALL_STATE(137)] = 2601,
  [SMALL_STATE(138)] = 2608,
  [SMALL_STATE(139)] = 2615,
  [SMALL_STATE(140)] = 2622,
  [SMALL_STATE(141)] = 2629,
  [SMALL_STATE(142)] = 2636,
  [SMALL_STATE(143)] = 2643,
  [SMALL_STATE(144)] = 2650,
  [SMALL_STATE(145)] = 2657,
  [SMALL_STATE(146)] = 2664,
  [SMALL_STATE(147)] = 2671,
  [SMALL_STATE(148)] = 2678,
  [SMALL_STATE(149)] = 2685,
  [SMALL_STATE(150)] = 2692,
  [SMALL_STATE(151)] = 2699,
  [SMALL_STATE(152)] = 2706,
  [SMALL_STATE(153)] = 2713,
  [SMALL_STATE(154)] = 2720,
  [SMALL_STATE(155)] = 2727,
  [SMALL_STATE(156)] = 2734,
  [SMALL_STATE(157)] = 2741,
  [SMALL_STATE(158)] = 2748,
  [SMALL_STATE(159)] = 2755,
  [SMALL_STATE(160)] = 2762,
  [SMALL_STATE(161)] = 2769,
  [SMALL_STATE(162)] = 2776,
  [SMALL_STATE(163)] = 2783,
  [SMALL_STATE(164)] = 2790,
  [SMALL_STATE(165)] = 2797,
  [SMALL_STATE(166)] = 2804,
  [SMALL_STATE(167)] = 2811,
  [SMALL_STATE(168)] = 2818,
  [SMALL_STATE(169)] = 2825,
  [SMALL_STATE(170)] = 2832,
  [SMALL_STATE(171)] = 2839,
  [SMALL_STATE(172)] = 2846,
  [SMALL_STATE(173)] = 2853,
  [SMALL_STATE(174)] = 2860,
  [SMALL_STATE(175)] = 2867,
  [SMALL_STATE(176)] = 2874,
  [SMALL_STATE(177)] = 2881,
  [SMALL_STATE(178)] = 2888,
  [SMALL_STATE(179)] = 2895,
  [SMALL_STATE(180)] = 2902,
  [SMALL_STATE(181)] = 2909,
  [SMALL_STATE(182)] = 2916,
  [SMALL_STATE(183)] = 2923,
  [SMALL_STATE(184)] = 2930,
  [SMALL_STATE(185)] = 2937,
  [SMALL_STATE(186)] = 2944,
  [SMALL_STATE(187)] = 2951,
  [SMALL_STATE(188)] = 2958,
  [SMALL_STATE(189)] = 2965,
  [SMALL_STATE(190)] = 2972,
  [SMALL_STATE(191)] = 2979,
  [SMALL_STATE(192)] = 2986,
  [SMALL_STATE(193)] = 2993,
  [SMALL_STATE(194)] = 3000,
  [SMALL_STATE(195)] = 3007,
  [SMALL_STATE(196)] = 3014,
  [SMALL_STATE(197)] = 3021,
  [SMALL_STATE(198)] = 3028,
  [SMALL_STATE(199)] = 3035,
  [SMALL_STATE(200)] = 3042,
  [SMALL_STATE(201)] = 3049,
  [SMALL_STATE(202)] = 3056,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_value, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_value, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(140),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(52),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(112),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(97),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(25),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(25),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(189),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(190),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(181),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(108),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(122),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(60),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_sequence, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_sequence, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(92),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(103),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [508] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
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
