// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/pgR.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dmvnrm_arma_mc
arma::vec dmvnrm_arma_mc(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd, int const cores);
RcppExport SEXP _pgR_dmvnrm_arma_mc(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    Rcpp::traits::input_parameter< int const >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_mc(x, mean, sigma, logd, cores));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pgdraw
NumericVector rcpp_pgdraw(NumericVector b, NumericVector c, int cores);
RcppExport SEXP _pgR_rcpp_pgdraw(SEXP bSEXP, SEXP cSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pgdraw(b, c, cores));
    return rcpp_result_gen;
END_RCPP
}
// rmvn_arma
arma::vec rmvn_arma(arma::mat& A, arma::vec& b);
static SEXP _pgR_rmvn_arma_try(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvn_arma(A, b));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _pgR_rmvn_arma(SEXP ASEXP, SEXP bSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_pgR_rmvn_arma_try(ASEXP, bSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rmvn_arma_scalar
double rmvn_arma_scalar(const double& a, const double& b);
static SEXP _pgR_rmvn_arma_scalar_try(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvn_arma_scalar(a, b));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _pgR_rmvn_arma_scalar(SEXP aSEXP, SEXP bSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_pgR_rmvn_arma_scalar_try(aSEXP, bSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _pgR_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::vec(*rmvn_arma)(arma::mat&,arma::vec&)");
        signatures.insert("double(*rmvn_arma_scalar)(const double&,const double&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _pgR_RcppExport_registerCCallable() { 
    R_RegisterCCallable("pgR", "_pgR_rmvn_arma", (DL_FUNC)_pgR_rmvn_arma_try);
    R_RegisterCCallable("pgR", "_pgR_rmvn_arma_scalar", (DL_FUNC)_pgR_rmvn_arma_scalar_try);
    R_RegisterCCallable("pgR", "_pgR_RcppExport_validate", (DL_FUNC)_pgR_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_pgR_dmvnrm_arma_mc", (DL_FUNC) &_pgR_dmvnrm_arma_mc, 5},
    {"_pgR_rcpp_pgdraw", (DL_FUNC) &_pgR_rcpp_pgdraw, 3},
    {"_pgR_rmvn_arma", (DL_FUNC) &_pgR_rmvn_arma, 2},
    {"_pgR_rmvn_arma_scalar", (DL_FUNC) &_pgR_rmvn_arma_scalar, 2},
    {"_pgR_RcppExport_registerCCallable", (DL_FUNC) &_pgR_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_pgR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
