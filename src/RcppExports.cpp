// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// chisq_stat
double chisq_stat(NumericMatrix X, NumericVector theta, NumericMatrix Sigma);
RcppExport SEXP _MicrobiomeFRM_chisq_stat(SEXP XSEXP, SEXP thetaSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(chisq_stat(X, theta, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// dist2mat
NumericMatrix dist2mat(NumericVector& x, int bf);
RcppExport SEXP _MicrobiomeFRM_dist2mat(SEXP xSEXP, SEXP bfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type bf(bfSEXP);
    rcpp_result_gen = Rcpp::wrap(dist2mat(x, bf));
    return rcpp_result_gen;
END_RCPP
}
// ugeecov_cate_cont_exp2_new
SEXP ugeecov_cate_cont_exp2_new(NumericMatrix dmatY, DataFrame cat, List cts, double tol, int maxiter);
RcppExport SEXP _MicrobiomeFRM_ugeecov_cate_cont_exp2_new(SEXP dmatYSEXP, SEXP catSEXP, SEXP ctsSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dmatY(dmatYSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type cat(catSEXP);
    Rcpp::traits::input_parameter< List >::type cts(ctsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(ugeecov_cate_cont_exp2_new(dmatY, cat, cts, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// ugeeSym_cont_cate_cov
SEXP ugeeSym_cont_cate_cov(NumericMatrix ymat, NumericMatrix xmat, DataFrame cat, List cts, double tol, int maxiter);
RcppExport SEXP _MicrobiomeFRM_ugeeSym_cont_cate_cov(SEXP ymatSEXP, SEXP xmatSEXP, SEXP catSEXP, SEXP ctsSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ymat(ymatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xmat(xmatSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type cat(catSEXP);
    Rcpp::traits::input_parameter< List >::type cts(ctsSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(ugeeSym_cont_cate_cov(ymat, xmat, cat, cts, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MicrobiomeFRM_chisq_stat", (DL_FUNC) &_MicrobiomeFRM_chisq_stat, 3},
    {"_MicrobiomeFRM_dist2mat", (DL_FUNC) &_MicrobiomeFRM_dist2mat, 2},
    {"_MicrobiomeFRM_ugeecov_cate_cont_exp2_new", (DL_FUNC) &_MicrobiomeFRM_ugeecov_cate_cont_exp2_new, 5},
    {"_MicrobiomeFRM_ugeeSym_cont_cate_cov", (DL_FUNC) &_MicrobiomeFRM_ugeeSym_cont_cate_cov, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_MicrobiomeFRM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
