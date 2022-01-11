// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_is_valid_lipid_name
bool rcpp_is_valid_lipid_name(std::string lipid_name);
RcppExport SEXP _rgoslin_rcpp_is_valid_lipid_name(SEXP lipid_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type lipid_name(lipid_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_is_valid_lipid_name(lipid_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_lipid_name_with_grammar
SEXP rcpp_parse_lipid_name_with_grammar(std::string lipid_name, std::string target_grammar);
RcppExport SEXP _rgoslin_rcpp_parse_lipid_name_with_grammar(SEXP lipid_nameSEXP, SEXP target_grammarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type lipid_name(lipid_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type target_grammar(target_grammarSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_lipid_name_with_grammar(lipid_name, target_grammar));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_list_available_grammars
SEXP rcpp_list_available_grammars();
RcppExport SEXP _rgoslin_rcpp_list_available_grammars() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_list_available_grammars());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_lipid_name
SEXP rcpp_parse_lipid_name(std::string lipid_name);
RcppExport SEXP _rgoslin_rcpp_parse_lipid_name(SEXP lipid_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type lipid_name(lipid_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_lipid_name(lipid_name));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rgoslin_rcpp_is_valid_lipid_name", (DL_FUNC) &_rgoslin_rcpp_is_valid_lipid_name, 1},
    {"_rgoslin_rcpp_parse_lipid_name_with_grammar", (DL_FUNC) &_rgoslin_rcpp_parse_lipid_name_with_grammar, 2},
    {"_rgoslin_rcpp_list_available_grammars", (DL_FUNC) &_rgoslin_rcpp_list_available_grammars, 0},
    {"_rgoslin_rcpp_parse_lipid_name", (DL_FUNC) &_rgoslin_rcpp_parse_lipid_name, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rgoslin(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}