// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tokenize
CharacterVector tokenize(std::string s);
RcppExport SEXP fastread_tokenize(SEXP sSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string s = Rcpp::as<std::string >(sSEXP);
        CharacterVector __result = tokenize(s);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}