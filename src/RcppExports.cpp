// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// work_test_norm_c
Rcpp::List work_test_norm_c(const double overall_sig_level, const double work_beta, const double cond_alpha, const double cost_type_1_err, const double cost_type_2_err, const double prev_cost, const double min_effect_size, const double effect_size, const int basic_schedule_num, const int basic_schedule_power, Rcpp::NumericVector basic_schedule, Rcpp::NumericVector prior_dist, const double prev_time, const double time, const double next_time, const double stat, const bool input_check, const bool out_process, const int simpson_div, const double tol_boundary, const double tol_cost);
RcppExport SEXP _adpss_work_test_norm_c(SEXP overall_sig_levelSEXP, SEXP work_betaSEXP, SEXP cond_alphaSEXP, SEXP cost_type_1_errSEXP, SEXP cost_type_2_errSEXP, SEXP prev_costSEXP, SEXP min_effect_sizeSEXP, SEXP effect_sizeSEXP, SEXP basic_schedule_numSEXP, SEXP basic_schedule_powerSEXP, SEXP basic_scheduleSEXP, SEXP prior_distSEXP, SEXP prev_timeSEXP, SEXP timeSEXP, SEXP next_timeSEXP, SEXP statSEXP, SEXP input_checkSEXP, SEXP out_processSEXP, SEXP simpson_divSEXP, SEXP tol_boundarySEXP, SEXP tol_costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type overall_sig_level(overall_sig_levelSEXP);
    Rcpp::traits::input_parameter< const double >::type work_beta(work_betaSEXP);
    Rcpp::traits::input_parameter< const double >::type cond_alpha(cond_alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type cost_type_1_err(cost_type_1_errSEXP);
    Rcpp::traits::input_parameter< const double >::type cost_type_2_err(cost_type_2_errSEXP);
    Rcpp::traits::input_parameter< const double >::type prev_cost(prev_costSEXP);
    Rcpp::traits::input_parameter< const double >::type min_effect_size(min_effect_sizeSEXP);
    Rcpp::traits::input_parameter< const double >::type effect_size(effect_sizeSEXP);
    Rcpp::traits::input_parameter< const int >::type basic_schedule_num(basic_schedule_numSEXP);
    Rcpp::traits::input_parameter< const int >::type basic_schedule_power(basic_schedule_powerSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type basic_schedule(basic_scheduleSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type prior_dist(prior_distSEXP);
    Rcpp::traits::input_parameter< const double >::type prev_time(prev_timeSEXP);
    Rcpp::traits::input_parameter< const double >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const double >::type next_time(next_timeSEXP);
    Rcpp::traits::input_parameter< const double >::type stat(statSEXP);
    Rcpp::traits::input_parameter< const bool >::type input_check(input_checkSEXP);
    Rcpp::traits::input_parameter< const bool >::type out_process(out_processSEXP);
    Rcpp::traits::input_parameter< const int >::type simpson_div(simpson_divSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_boundary(tol_boundarySEXP);
    Rcpp::traits::input_parameter< const double >::type tol_cost(tol_costSEXP);
    rcpp_result_gen = Rcpp::wrap(work_test_norm_c(overall_sig_level, work_beta, cond_alpha, cost_type_1_err, cost_type_2_err, prev_cost, min_effect_size, effect_size, basic_schedule_num, basic_schedule_power, basic_schedule, prior_dist, prev_time, time, next_time, stat, input_check, out_process, simpson_div, tol_boundary, tol_cost));
    return rcpp_result_gen;
END_RCPP
}
// sample_size_norm_c
double sample_size_norm_c(Rcpp::List initial_test, const bool sample_size, const double effect_size, const double time, const double target_power, const double final_time, const double tol_sample_size, const bool input_check);
RcppExport SEXP _adpss_sample_size_norm_c(SEXP initial_testSEXP, SEXP sample_sizeSEXP, SEXP effect_sizeSEXP, SEXP timeSEXP, SEXP target_powerSEXP, SEXP final_timeSEXP, SEXP tol_sample_sizeSEXP, SEXP input_checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type initial_test(initial_testSEXP);
    Rcpp::traits::input_parameter< const bool >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const double >::type effect_size(effect_sizeSEXP);
    Rcpp::traits::input_parameter< const double >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const double >::type target_power(target_powerSEXP);
    Rcpp::traits::input_parameter< const double >::type final_time(final_timeSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_sample_size(tol_sample_sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type input_check(input_checkSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_size_norm_c(initial_test, sample_size, effect_size, time, target_power, final_time, tol_sample_size, input_check));
    return rcpp_result_gen;
END_RCPP
}
// exact_est_norm_c
Rcpp::List exact_est_norm_c(Rcpp::List initial_test, Rcpp::NumericVector times, Rcpp::NumericVector stats, Rcpp::NumericVector costs, const bool final_analysis, const bool estimate, const double ci_coef, const double tol_est, const bool input_check);
RcppExport SEXP _adpss_exact_est_norm_c(SEXP initial_testSEXP, SEXP timesSEXP, SEXP statsSEXP, SEXP costsSEXP, SEXP final_analysisSEXP, SEXP estimateSEXP, SEXP ci_coefSEXP, SEXP tol_estSEXP, SEXP input_checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type initial_test(initial_testSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< const bool >::type final_analysis(final_analysisSEXP);
    Rcpp::traits::input_parameter< const bool >::type estimate(estimateSEXP);
    Rcpp::traits::input_parameter< const double >::type ci_coef(ci_coefSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_est(tol_estSEXP);
    Rcpp::traits::input_parameter< const bool >::type input_check(input_checkSEXP);
    rcpp_result_gen = Rcpp::wrap(exact_est_norm_c(initial_test, times, stats, costs, final_analysis, estimate, ci_coef, tol_est, input_check));
    return rcpp_result_gen;
END_RCPP
}
// exp_sample_size_norm_c
double exp_sample_size_norm_c(Rcpp::List initial_test, const double effect_size, const double time, const double final_time, const bool input_check);
RcppExport SEXP _adpss_exp_sample_size_norm_c(SEXP initial_testSEXP, SEXP effect_sizeSEXP, SEXP timeSEXP, SEXP final_timeSEXP, SEXP input_checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type initial_test(initial_testSEXP);
    Rcpp::traits::input_parameter< const double >::type effect_size(effect_sizeSEXP);
    Rcpp::traits::input_parameter< const double >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const double >::type final_time(final_timeSEXP);
    Rcpp::traits::input_parameter< const bool >::type input_check(input_checkSEXP);
    rcpp_result_gen = Rcpp::wrap(exp_sample_size_norm_c(initial_test, effect_size, time, final_time, input_check));
    return rcpp_result_gen;
END_RCPP
}
