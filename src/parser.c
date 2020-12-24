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
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  sym_identifier = 23,
  anon_sym_SQUOTE = 24,
  anon_sym_DQUOTE = 25,
  sym_decimal = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_yes = 29,
  anon_sym_no = 30,
  anon_sym_on = 31,
  anon_sym_off = 32,
  anon_sym_LBRACKdeg_RBRACK = 33,
  anon_sym_LBRACKrad_RBRACK = 34,
  anon_sym_LBRACKmrad_RBRACK = 35,
  anon_sym_LBRACKurad_RBRACK = 36,
  anon_sym_LBRACKcm2_RBRACK = 37,
  anon_sym_LBRACKm2_RBRACK = 38,
  anon_sym_LBRACKcm2_SLASHs_RBRACK = 39,
  anon_sym_LBRACKm2_SLASHs_RBRACK = 40,
  anon_sym_LBRACKum_RBRACK = 41,
  anon_sym_LBRACKmm_RBRACK = 42,
  anon_sym_LBRACKcm_RBRACK = 43,
  anon_sym_LBRACKm_RBRACK = 44,
  anon_sym_LBRACKfs_RBRACK = 45,
  anon_sym_LBRACKps_RBRACK = 46,
  anon_sym_LBRACKns_RBRACK = 47,
  anon_sym_LBRACKus_RBRACK = 48,
  anon_sym_LBRACKs_RBRACK = 49,
  anon_sym_LBRACK_SLASHm3_RBRACK = 50,
  anon_sym_LBRACK_SLASHcm3_RBRACK = 51,
  anon_sym_LBRACKJ_SLASHm3_RBRACK = 52,
  anon_sym_LBRACKJ_SLASHcm3_RBRACK = 53,
  anon_sym_LBRACKeV_RBRACK = 54,
  anon_sym_LBRACKK_RBRACK = 55,
  anon_sym_LBRACKV_RBRACK = 56,
  anon_sym_LBRACKwebers_SLASHm_RBRACK = 57,
  anon_sym_LBRACKG_STARcm_RBRACK = 58,
  anon_sym_LBRACKV_SLASHm_RBRACK = 59,
  anon_sym_LBRACKV_SLASHcm_RBRACK = 60,
  anon_sym_LBRACKT_RBRACK = 61,
  anon_sym_LBRACKG_RBRACK = 62,
  sym_define_value = 63,
  anon_sym_LBRACE = 64,
  anon_sym_RBRACE = 65,
  anon_sym_LPAREN = 66,
  anon_sym_RPAREN = 67,
  sym_comment = 68,
  aux_sym__pterm_token1 = 69,
  aux_sym__nterm_token1 = 70,
  anon_sym_COLON = 71,
  anon_sym_rate = 72,
  anon_sym_janev_rate = 73,
  sym_input_file = 74,
  sym__top = 75,
  sym__nested = 76,
  sym_include = 77,
  sym_define = 78,
  sym_ifxdef = 79,
  sym__directive = 80,
  sym__nested_directive = 81,
  sym_assignment = 82,
  sym__statement = 83,
  sym__nested_statement = 84,
  sym_new = 85,
  sym_associative_new = 86,
  sym_generate = 87,
  sym_reaction = 88,
  sym_collision = 89,
  sym_excitation = 90,
  sym_get = 91,
  sym_else_block = 92,
  sym_identifier_sequence = 93,
  sym__string_literal_single = 94,
  sym__string_literal_double = 95,
  sym_string_literal = 96,
  sym_boolean = 97,
  sym_unit = 98,
  sym_dimension = 99,
  sym_value = 100,
  sym_block = 101,
  sym_tuple = 102,
  sym_list = 103,
  sym__pterm = 104,
  sym__nterm = 105,
  sym_chems = 106,
  sym_sub_formula = 107,
  sym_full_formula = 108,
  sym_arrhenius = 109,
  sym_janev = 110,
  sym_rate = 111,
  sym_range = 112,
  aux_sym_input_file_repeat1 = 113,
  aux_sym_identifier_sequence_repeat1 = 114,
  aux_sym_block_repeat1 = 115,
  aux_sym_tuple_repeat1 = 116,
  aux_sym_chems_repeat1 = 117,
  aux_sym_full_formula_repeat1 = 118,
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
  [sym_define_value] = "define_value",
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
  [sym_identifier_sequence] = "identifier_sequence",
  [sym__string_literal_single] = "_string_literal_single",
  [sym__string_literal_double] = "_string_literal_double",
  [sym_string_literal] = "string_literal",
  [sym_boolean] = "boolean",
  [sym_unit] = "unit",
  [sym_dimension] = "dimension",
  [sym_value] = "value",
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
  [sym_define_value] = sym_define_value,
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
  [sym_identifier_sequence] = sym_identifier_sequence,
  [sym__string_literal_single] = sym__string_literal_single,
  [sym__string_literal_double] = sym__string_literal_double,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean] = sym_boolean,
  [sym_unit] = sym_unit,
  [sym_dimension] = sym_dimension,
  [sym_value] = sym_value,
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
  [sym_define_value] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(3)
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '{') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(4)
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '}') ADVANCE(331);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(5)
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(255);
      if (lookahead == '{') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '}') ADVANCE(331);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(7)
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '>') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(335);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ']') ADVANCE(321);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'J') ADVANCE(23);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ']') ADVANCE(315);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ']') ADVANCE(296);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ']') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ']') ADVANCE(302);
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
      if (lookahead == '>') ADVANCE(209);
      END_STATE();
    case 31:
      if (lookahead == 'V') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ']') ADVANCE(314);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(320);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(308);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(313);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(304);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(301);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(306);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(305);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(307);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(318);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(293);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(310);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(317);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(311);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(319);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(299);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == ']') ADVANCE(295);
      END_STATE();
    case 53:
      if (lookahead == ']') ADVANCE(312);
      END_STATE();
    case 54:
      if (lookahead == ']') ADVANCE(298);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(316);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(290);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 180:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 181:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 183:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 184:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(184)
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(236);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 187:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 188:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(336);
      END_STATE();
    case 189:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 190:
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(221);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(191)
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '{') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_generate);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_generate);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_reaction);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_reaction);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_collision);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_collision);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_coulomb);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_cross);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_excitation);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_excitation);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_define_key);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_define_ref);
      if (!sym_define_key_character_set_1(lookahead)) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKdeg_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKrad_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACKmrad_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACKurad_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_RBRACK);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACKcm2_SLASHs_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACKm2_SLASHs_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACKum_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACKmm_RBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACKcm_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACKm_RBRACK);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACKfs_RBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACKps_RBRACK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACKns_RBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACKus_RBRACK);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LBRACKs_RBRACK);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHm3_RBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASHcm3_RBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHm3_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LBRACKJ_SLASHcm3_RBRACK);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LBRACKeV_RBRACK);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACKK_RBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LBRACKV_RBRACK);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACKwebers_SLASHm_RBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACKG_STARcm_RBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHm_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACKV_SLASHcm_RBRACK);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACKT_RBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACKG_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(325);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(328);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(335);
      if (lookahead == '\\') ADVANCE(188);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__pterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__nterm_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_janev_rate);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 191},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 191},
  [7] = {.lex_state = 191},
  [8] = {.lex_state = 191},
  [9] = {.lex_state = 191},
  [10] = {.lex_state = 191},
  [11] = {.lex_state = 191},
  [12] = {.lex_state = 191},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 191},
  [37] = {.lex_state = 191},
  [38] = {.lex_state = 191},
  [39] = {.lex_state = 191},
  [40] = {.lex_state = 191},
  [41] = {.lex_state = 191},
  [42] = {.lex_state = 191},
  [43] = {.lex_state = 191},
  [44] = {.lex_state = 191},
  [45] = {.lex_state = 191},
  [46] = {.lex_state = 191},
  [47] = {.lex_state = 191},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 191},
  [50] = {.lex_state = 191},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 191},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 191},
  [56] = {.lex_state = 191},
  [57] = {.lex_state = 191},
  [58] = {.lex_state = 191},
  [59] = {.lex_state = 191},
  [60] = {.lex_state = 191},
  [61] = {.lex_state = 191},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 191},
  [64] = {.lex_state = 191},
  [65] = {.lex_state = 191},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 191},
  [68] = {.lex_state = 191},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 184},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 328},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 191},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 328},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 191},
  [195] = {.lex_state = 191},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 191},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
    [sym_input_file] = STATE(199),
    [sym__top] = STATE(10),
    [sym_include] = STATE(10),
    [sym_define] = STATE(10),
    [sym_ifxdef] = STATE(10),
    [sym__directive] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym__statement] = STATE(10),
    [sym_new] = STATE(10),
    [sym_associative_new] = STATE(10),
    [sym_generate] = STATE(10),
    [sym_reaction] = STATE(10),
    [sym_collision] = STATE(10),
    [sym_excitation] = STATE(10),
    [sym_identifier_sequence] = STATE(187),
    [aux_sym_input_file_repeat1] = STATE(10),
    [aux_sym_identifier_sequence_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_POUNDifdef] = ACTIONS(11),
    [anon_sym_POUNDifndef] = ACTIONS(11),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_generate] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(31), 1,
      sym_unit,
    ACTIONS(19), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(21), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
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
  [56] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(65), 1,
      sym_unit,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(19), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
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
  [109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym_unit,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(19), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
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
  [160] = 13,
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
    ACTIONS(29), 1,
      anon_sym_POUNDendif,
    ACTIONS(31), 1,
      anon_sym_POUNDelse,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(173), 1,
      sym_else_block,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(6), 14,
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
  [214] = 13,
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
    ACTIONS(31), 1,
      anon_sym_POUNDelse,
    ACTIONS(33), 1,
      anon_sym_POUNDendif,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(168), 1,
      sym_else_block,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 14,
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
  [268] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_POUNDinclude,
    ACTIONS(40), 1,
      anon_sym_POUNDdefine,
    ACTIONS(46), 1,
      anon_sym_new,
    ACTIONS(49), 1,
      anon_sym_generate,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(43), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
    STATE(7), 14,
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
  [318] = 13,
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
    ACTIONS(31), 1,
      anon_sym_POUNDelse,
    ACTIONS(55), 1,
      anon_sym_POUNDendif,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(181), 1,
      sym_else_block,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 14,
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
  [372] = 13,
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
    ACTIONS(31), 1,
      anon_sym_POUNDelse,
    ACTIONS(57), 1,
      anon_sym_POUNDendif,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(184), 1,
      sym_else_block,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 14,
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
  [426] = 11,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 14,
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
  [474] = 11,
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
    ACTIONS(61), 1,
      anon_sym_POUNDendif,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 14,
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
  [522] = 11,
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
    ACTIONS(63), 1,
      anon_sym_POUNDendif,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(187), 1,
      sym_identifier_sequence,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(11), 14,
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
  [570] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_define_ref,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_decimal,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(92), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(79), 3,
      sym_value,
      sym_tuple,
      sym_list,
    STATE(84), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(75), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [617] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_define_ref,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_decimal,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(47), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    STATE(49), 3,
      sym_value,
      sym_tuple,
      sym_list,
    ACTIONS(91), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [664] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_POUNDinclude,
    ACTIONS(99), 1,
      anon_sym_POUNDdefine,
    ACTIONS(103), 1,
      anon_sym_new,
    ACTIONS(105), 1,
      anon_sym_get,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    ACTIONS(101), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(19), 10,
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
  [708] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_POUNDinclude,
    ACTIONS(99), 1,
      anon_sym_POUNDdefine,
    ACTIONS(103), 1,
      anon_sym_new,
    ACTIONS(105), 1,
      anon_sym_get,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    ACTIONS(101), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
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
  [752] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_POUNDinclude,
    ACTIONS(99), 1,
      anon_sym_POUNDdefine,
    ACTIONS(103), 1,
      anon_sym_new,
    ACTIONS(105), 1,
      anon_sym_get,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    ACTIONS(101), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(16), 10,
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
  [796] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_define_ref,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_decimal,
    ACTIONS(131), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(128), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [840] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_POUNDinclude,
    ACTIONS(99), 1,
      anon_sym_POUNDdefine,
    ACTIONS(103), 1,
      anon_sym_new,
    ACTIONS(105), 1,
      anon_sym_get,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    ACTIONS(101), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
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
  [884] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_POUNDinclude,
    ACTIONS(138), 1,
      anon_sym_POUNDdefine,
    ACTIONS(144), 1,
      anon_sym_new,
    ACTIONS(147), 1,
      anon_sym_get,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
    STATE(196), 1,
      sym_identifier_sequence,
    ACTIONS(141), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
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
  [928] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [971] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1014] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1057] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1100] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    STATE(22), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1140] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    STATE(23), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1180] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    STATE(21), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1220] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_define_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_decimal,
    STATE(24), 2,
      sym_value,
      aux_sym_tuple_repeat1,
    STATE(30), 2,
      sym__string_literal_single,
      sym__string_literal_double,
    STATE(33), 3,
      sym_string_literal,
      sym_boolean,
      sym_dimension,
    ACTIONS(165), 6,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      sym_define_ref,
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
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(181), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(185), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(189), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(21), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(193), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      sym_define_ref,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(197), 8,
      sym_identifier,
      sym_decimal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_on,
      anon_sym_off,
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_LBRACE,
  [1426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_LBRACE,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
      anon_sym_LBRACE,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(19), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(251), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_new,
      anon_sym_generate,
      sym_identifier,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_POUNDelse,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(183), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2020] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_for,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    STATE(113), 1,
      sym_string_literal,
    STATE(120), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(235), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(187), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(199), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(255), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(263), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(275), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(299), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(203), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(231), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(311), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(259), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(191), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(271), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(19), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(195), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(223), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(175), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym__pterm_token1,
    ACTIONS(319), 1,
      aux_sym__nterm_token1,
    ACTIONS(315), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(89), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [2338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym__pterm_token1,
    ACTIONS(319), 1,
      aux_sym__nterm_token1,
    ACTIONS(321), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(90), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [2358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym__pterm_token1,
    ACTIONS(328), 1,
      aux_sym__nterm_token1,
    ACTIONS(323), 3,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(90), 3,
      sym__pterm,
      sym__nterm,
      aux_sym_chems_repeat1,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(283), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_new,
      anon_sym_get,
      sym_identifier,
    ACTIONS(179), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_RBRACE,
  [2410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    STATE(135), 1,
      sym_string_literal,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    STATE(122), 1,
      sym_string_literal,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_reaction,
    ACTIONS(335), 1,
      anon_sym_collision,
    ACTIONS(337), 1,
      anon_sym_excitation,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(70), 1,
      sym_identifier_sequence,
    STATE(102), 1,
      aux_sym_identifier_sequence_repeat1,
  [2478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(78), 1,
      sym_string_literal,
    STATE(92), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      sym_identifier,
    STATE(40), 1,
      sym_string_literal,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(127), 1,
      sym_string_literal,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(347), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(80), 1,
      sym_string_literal,
    STATE(92), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_for,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(358), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_for,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(347), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_identifier_sequence_repeat1,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(124), 1,
      sym_string_literal,
    STATE(36), 2,
      sym__string_literal_single,
      sym__string_literal_double,
  [2646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_rate,
    ACTIONS(371), 1,
      anon_sym_janev_rate,
    STATE(126), 1,
      sym_rate,
    STATE(161), 2,
      sym_arrhenius,
      sym_janev,
  [2663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_rate,
    ACTIONS(375), 1,
      anon_sym_janev_rate,
    STATE(42), 1,
      sym_rate,
    STATE(61), 2,
      sym_arrhenius,
      sym_janev,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      aux_sym__pterm_token1,
      aux_sym__nterm_token1,
      anon_sym_COLON,
  [2702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_sub_formula,
    STATE(164), 1,
      sym_chems,
    ACTIONS(381), 2,
      sym_define_key,
      sym_identifier,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym_sub_formula,
    STATE(164), 1,
      sym_chems,
    ACTIONS(381), 2,
      sym_define_key,
      sym_identifier,
  [2730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(111), 1,
      aux_sym_full_formula_repeat1,
  [2743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_COLON,
    STATE(111), 1,
      aux_sym_full_formula_repeat1,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_for,
    STATE(62), 1,
      sym_block,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(132), 1,
      sym_chems,
    ACTIONS(381), 2,
      sym_define_key,
      sym_identifier,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_decimal,
    ACTIONS(394), 2,
      sym_define_key,
      sym_identifier,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(93), 1,
      sym_identifier_sequence,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_full_formula_repeat1,
  [2817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(94), 1,
      sym_identifier_sequence,
    STATE(99), 1,
      aux_sym_identifier_sequence_repeat1,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_full_formula,
  [2856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
  [2866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_decimal,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(54), 1,
      sym_range,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_define_key,
      sym_decimal,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_rate,
      anon_sym_janev_rate,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_decimal,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_for,
      anon_sym_LBRACE,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_coulomb,
    ACTIONS(424), 1,
      anon_sym_cross,
  [2974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_decimal,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT_DASH_GT,
  [3001] = 2,
    ACTIONS(432), 1,
      sym_define_value,
    ACTIONS(434), 1,
      sym_comment,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_decimal,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_EQ,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_decimal,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_decimal,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_EQ,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_define_key,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_level,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_decimal,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_section,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_decimal,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_decimal,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_decimal,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_decimal,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_decimal,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_decimal,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_EQ,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DASH_GT,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_decimal,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_DASH_GT,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_decimal,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_POUNDendif,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [3239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_decimal,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_POUNDendif,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_decimal,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_EQ,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_EQ,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_POUNDendif,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
  [3316] = 2,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_define_value,
  [3323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_POUNDendif,
  [3330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ,
  [3351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_decimal,
  [3358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_decimal,
  [3365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
  [3379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_define_key,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_define_key,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_EQ,
  [3414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_identifier,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym_define_key,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_decimal,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_decimal,
  [3456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_identifier,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_identifier,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_decimal,
  [3491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_decimal,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_EQ,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_decimal,
  [3512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_decimal,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_decimal,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_decimal,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_decimal,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_decimal,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 268,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 372,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 474,
  [SMALL_STATE(12)] = 522,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 617,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 708,
  [SMALL_STATE(17)] = 752,
  [SMALL_STATE(18)] = 796,
  [SMALL_STATE(19)] = 840,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 928,
  [SMALL_STATE(22)] = 971,
  [SMALL_STATE(23)] = 1014,
  [SMALL_STATE(24)] = 1057,
  [SMALL_STATE(25)] = 1100,
  [SMALL_STATE(26)] = 1140,
  [SMALL_STATE(27)] = 1180,
  [SMALL_STATE(28)] = 1220,
  [SMALL_STATE(29)] = 1260,
  [SMALL_STATE(30)] = 1281,
  [SMALL_STATE(31)] = 1302,
  [SMALL_STATE(32)] = 1323,
  [SMALL_STATE(33)] = 1344,
  [SMALL_STATE(34)] = 1365,
  [SMALL_STATE(35)] = 1386,
  [SMALL_STATE(36)] = 1407,
  [SMALL_STATE(37)] = 1426,
  [SMALL_STATE(38)] = 1445,
  [SMALL_STATE(39)] = 1464,
  [SMALL_STATE(40)] = 1482,
  [SMALL_STATE(41)] = 1500,
  [SMALL_STATE(42)] = 1518,
  [SMALL_STATE(43)] = 1536,
  [SMALL_STATE(44)] = 1554,
  [SMALL_STATE(45)] = 1572,
  [SMALL_STATE(46)] = 1590,
  [SMALL_STATE(47)] = 1608,
  [SMALL_STATE(48)] = 1626,
  [SMALL_STATE(49)] = 1644,
  [SMALL_STATE(50)] = 1662,
  [SMALL_STATE(51)] = 1680,
  [SMALL_STATE(52)] = 1698,
  [SMALL_STATE(53)] = 1716,
  [SMALL_STATE(54)] = 1734,
  [SMALL_STATE(55)] = 1752,
  [SMALL_STATE(56)] = 1770,
  [SMALL_STATE(57)] = 1788,
  [SMALL_STATE(58)] = 1806,
  [SMALL_STATE(59)] = 1824,
  [SMALL_STATE(60)] = 1842,
  [SMALL_STATE(61)] = 1860,
  [SMALL_STATE(62)] = 1878,
  [SMALL_STATE(63)] = 1896,
  [SMALL_STATE(64)] = 1914,
  [SMALL_STATE(65)] = 1932,
  [SMALL_STATE(66)] = 1950,
  [SMALL_STATE(67)] = 1968,
  [SMALL_STATE(68)] = 1986,
  [SMALL_STATE(69)] = 2004,
  [SMALL_STATE(70)] = 2020,
  [SMALL_STATE(71)] = 2046,
  [SMALL_STATE(72)] = 2062,
  [SMALL_STATE(73)] = 2078,
  [SMALL_STATE(74)] = 2094,
  [SMALL_STATE(75)] = 2110,
  [SMALL_STATE(76)] = 2126,
  [SMALL_STATE(77)] = 2142,
  [SMALL_STATE(78)] = 2158,
  [SMALL_STATE(79)] = 2174,
  [SMALL_STATE(80)] = 2190,
  [SMALL_STATE(81)] = 2206,
  [SMALL_STATE(82)] = 2222,
  [SMALL_STATE(83)] = 2238,
  [SMALL_STATE(84)] = 2254,
  [SMALL_STATE(85)] = 2270,
  [SMALL_STATE(86)] = 2286,
  [SMALL_STATE(87)] = 2302,
  [SMALL_STATE(88)] = 2318,
  [SMALL_STATE(89)] = 2338,
  [SMALL_STATE(90)] = 2358,
  [SMALL_STATE(91)] = 2378,
  [SMALL_STATE(92)] = 2394,
  [SMALL_STATE(93)] = 2410,
  [SMALL_STATE(94)] = 2433,
  [SMALL_STATE(95)] = 2456,
  [SMALL_STATE(96)] = 2478,
  [SMALL_STATE(97)] = 2498,
  [SMALL_STATE(98)] = 2518,
  [SMALL_STATE(99)] = 2538,
  [SMALL_STATE(100)] = 2554,
  [SMALL_STATE(101)] = 2574,
  [SMALL_STATE(102)] = 2592,
  [SMALL_STATE(103)] = 2610,
  [SMALL_STATE(104)] = 2626,
  [SMALL_STATE(105)] = 2646,
  [SMALL_STATE(106)] = 2663,
  [SMALL_STATE(107)] = 2680,
  [SMALL_STATE(108)] = 2691,
  [SMALL_STATE(109)] = 2702,
  [SMALL_STATE(110)] = 2716,
  [SMALL_STATE(111)] = 2730,
  [SMALL_STATE(112)] = 2743,
  [SMALL_STATE(113)] = 2756,
  [SMALL_STATE(114)] = 2769,
  [SMALL_STATE(115)] = 2780,
  [SMALL_STATE(116)] = 2791,
  [SMALL_STATE(117)] = 2804,
  [SMALL_STATE(118)] = 2817,
  [SMALL_STATE(119)] = 2830,
  [SMALL_STATE(120)] = 2838,
  [SMALL_STATE(121)] = 2846,
  [SMALL_STATE(122)] = 2856,
  [SMALL_STATE(123)] = 2866,
  [SMALL_STATE(124)] = 2876,
  [SMALL_STATE(125)] = 2886,
  [SMALL_STATE(126)] = 2894,
  [SMALL_STATE(127)] = 2904,
  [SMALL_STATE(128)] = 2914,
  [SMALL_STATE(129)] = 2922,
  [SMALL_STATE(130)] = 2930,
  [SMALL_STATE(131)] = 2938,
  [SMALL_STATE(132)] = 2948,
  [SMALL_STATE(133)] = 2956,
  [SMALL_STATE(134)] = 2964,
  [SMALL_STATE(135)] = 2974,
  [SMALL_STATE(136)] = 2984,
  [SMALL_STATE(137)] = 2994,
  [SMALL_STATE(138)] = 3001,
  [SMALL_STATE(139)] = 3008,
  [SMALL_STATE(140)] = 3015,
  [SMALL_STATE(141)] = 3022,
  [SMALL_STATE(142)] = 3029,
  [SMALL_STATE(143)] = 3036,
  [SMALL_STATE(144)] = 3043,
  [SMALL_STATE(145)] = 3050,
  [SMALL_STATE(146)] = 3057,
  [SMALL_STATE(147)] = 3064,
  [SMALL_STATE(148)] = 3071,
  [SMALL_STATE(149)] = 3078,
  [SMALL_STATE(150)] = 3085,
  [SMALL_STATE(151)] = 3092,
  [SMALL_STATE(152)] = 3099,
  [SMALL_STATE(153)] = 3106,
  [SMALL_STATE(154)] = 3113,
  [SMALL_STATE(155)] = 3120,
  [SMALL_STATE(156)] = 3127,
  [SMALL_STATE(157)] = 3134,
  [SMALL_STATE(158)] = 3141,
  [SMALL_STATE(159)] = 3148,
  [SMALL_STATE(160)] = 3155,
  [SMALL_STATE(161)] = 3162,
  [SMALL_STATE(162)] = 3169,
  [SMALL_STATE(163)] = 3176,
  [SMALL_STATE(164)] = 3183,
  [SMALL_STATE(165)] = 3190,
  [SMALL_STATE(166)] = 3197,
  [SMALL_STATE(167)] = 3204,
  [SMALL_STATE(168)] = 3211,
  [SMALL_STATE(169)] = 3218,
  [SMALL_STATE(170)] = 3225,
  [SMALL_STATE(171)] = 3232,
  [SMALL_STATE(172)] = 3239,
  [SMALL_STATE(173)] = 3246,
  [SMALL_STATE(174)] = 3253,
  [SMALL_STATE(175)] = 3260,
  [SMALL_STATE(176)] = 3267,
  [SMALL_STATE(177)] = 3274,
  [SMALL_STATE(178)] = 3281,
  [SMALL_STATE(179)] = 3288,
  [SMALL_STATE(180)] = 3295,
  [SMALL_STATE(181)] = 3302,
  [SMALL_STATE(182)] = 3309,
  [SMALL_STATE(183)] = 3316,
  [SMALL_STATE(184)] = 3323,
  [SMALL_STATE(185)] = 3330,
  [SMALL_STATE(186)] = 3337,
  [SMALL_STATE(187)] = 3344,
  [SMALL_STATE(188)] = 3351,
  [SMALL_STATE(189)] = 3358,
  [SMALL_STATE(190)] = 3365,
  [SMALL_STATE(191)] = 3372,
  [SMALL_STATE(192)] = 3379,
  [SMALL_STATE(193)] = 3386,
  [SMALL_STATE(194)] = 3393,
  [SMALL_STATE(195)] = 3400,
  [SMALL_STATE(196)] = 3407,
  [SMALL_STATE(197)] = 3414,
  [SMALL_STATE(198)] = 3421,
  [SMALL_STATE(199)] = 3428,
  [SMALL_STATE(200)] = 3435,
  [SMALL_STATE(201)] = 3442,
  [SMALL_STATE(202)] = 3449,
  [SMALL_STATE(203)] = 3456,
  [SMALL_STATE(204)] = 3463,
  [SMALL_STATE(205)] = 3470,
  [SMALL_STATE(206)] = 3477,
  [SMALL_STATE(207)] = 3484,
  [SMALL_STATE(208)] = 3491,
  [SMALL_STATE(209)] = 3498,
  [SMALL_STATE(210)] = 3505,
  [SMALL_STATE(211)] = 3512,
  [SMALL_STATE(212)] = 3519,
  [SMALL_STATE(213)] = 3526,
  [SMALL_STATE(214)] = 3533,
  [SMALL_STATE(215)] = 3540,
  [SMALL_STATE(216)] = 3547,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(97),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(146),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(200),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(95),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(118),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_file_repeat1, 2), SHIFT_REPEAT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(203),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(204),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(194),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(195),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_single, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_single, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_double, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_double, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_excitation, 10),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_excitation, 10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 10),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 10),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collision, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collision, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reaction, 6),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reaction, 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_new, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_associative_new, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rate, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rate, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrhenius, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrhenius, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_janev, 11),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_janev, 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifxdef, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifxdef, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chems, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(115),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chems_repeat1, 2), SHIFT_REPEAT(128),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_sequence, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(101),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_sequence, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_sequence_repeat1, 2), SHIFT_REPEAT(103),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nterm, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pterm, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_formula_repeat1, 2), SHIFT_REPEAT(110),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_formula, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_formula, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [544] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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
