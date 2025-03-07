// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// filterTimeBlockPulses
IntegerVector filterTimeBlockPulses(DataFrame pulsedt);
RcppExport SEXP _lidR_filterTimeBlockPulses(SEXP pulsedtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pulsedt(pulsedtSEXP);
    rcpp_result_gen = Rcpp::wrap(filterTimeBlockPulses(pulsedt));
    return rcpp_result_gen;
END_RCPP
}
// cmpCPA
DataFrame cmpCPA(DataFrame pulsedt);
RcppExport SEXP _lidR_cmpCPA(SEXP pulsedtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pulsedt(pulsedtSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpCPA(pulsedt));
    return rcpp_result_gen;
END_RCPP
}
// C_chm_prep
Rcpp::NumericVector C_chm_prep(std::vector<float> data, int snlin, int sncol, int lap_size, float thr_cav, float thr_spk, int med_size, int dil_radius, float nodata);
RcppExport SEXP _lidR_C_chm_prep(SEXP dataSEXP, SEXP snlinSEXP, SEXP sncolSEXP, SEXP lap_sizeSEXP, SEXP thr_cavSEXP, SEXP thr_spkSEXP, SEXP med_sizeSEXP, SEXP dil_radiusSEXP, SEXP nodataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<float> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type snlin(snlinSEXP);
    Rcpp::traits::input_parameter< int >::type sncol(sncolSEXP);
    Rcpp::traits::input_parameter< int >::type lap_size(lap_sizeSEXP);
    Rcpp::traits::input_parameter< float >::type thr_cav(thr_cavSEXP);
    Rcpp::traits::input_parameter< float >::type thr_spk(thr_spkSEXP);
    Rcpp::traits::input_parameter< int >::type med_size(med_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type dil_radius(dil_radiusSEXP);
    Rcpp::traits::input_parameter< float >::type nodata(nodataSEXP);
    rcpp_result_gen = Rcpp::wrap(C_chm_prep(data, snlin, sncol, lap_size, thr_cav, thr_spk, med_size, dil_radius, nodata));
    return rcpp_result_gen;
END_RCPP
}
// C_dalponte2016
IntegerMatrix C_dalponte2016(NumericMatrix Image, IntegerMatrix Seeds, double th_seed, double th_crown, double th_tree, double DIST);
RcppExport SEXP _lidR_C_dalponte2016(SEXP ImageSEXP, SEXP SeedsSEXP, SEXP th_seedSEXP, SEXP th_crownSEXP, SEXP th_treeSEXP, SEXP DISTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Image(ImageSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Seeds(SeedsSEXP);
    Rcpp::traits::input_parameter< double >::type th_seed(th_seedSEXP);
    Rcpp::traits::input_parameter< double >::type th_crown(th_crownSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type DIST(DISTSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dalponte2016(Image, Seeds, th_seed, th_crown, th_tree, DIST));
    return rcpp_result_gen;
END_RCPP
}
// C_delaunay
IntegerMatrix C_delaunay(DataFrame P, NumericVector scales, NumericVector offsets, double trim);
RcppExport SEXP _lidR_C_delaunay(SEXP PSEXP, SEXP scalesSEXP, SEXP offsetsSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(C_delaunay(P, scales, offsets, trim));
    return rcpp_result_gen;
END_RCPP
}
// C_interpolate_delaunay
NumericVector C_interpolate_delaunay(DataFrame P, DataFrame L, NumericVector scales, NumericVector offsets, double trim, double min_normal_z, int ncpu);
RcppExport SEXP _lidR_C_interpolate_delaunay(SEXP PSEXP, SEXP LSEXP, SEXP scalesSEXP, SEXP offsetsSEXP, SEXP trimSEXP, SEXP min_normal_zSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< DataFrame >::type P(PSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type trim(trimSEXP);
    Rcpp::traits::input_parameter< double >::type min_normal_z(min_normal_zSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_interpolate_delaunay(P, L, scales, offsets, trim, min_normal_z, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_tinfo
NumericMatrix C_tinfo(IntegerMatrix D, NumericMatrix P);
RcppExport SEXP _lidR_C_tinfo(SEXP DSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tinfo(D, P));
    return rcpp_result_gen;
END_RCPP
}
// C_tsearch
IntegerVector C_tsearch(IntegerMatrix D, NumericMatrix P, NumericMatrix X, int ncpu);
RcppExport SEXP _lidR_C_tsearch(SEXP DSEXP, SEXP PSEXP, SEXP XSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tsearch(D, P, X, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_lmf
LogicalVector C_lmf(S4 las, NumericVector ws, double min_height, bool circular, int ncpu);
RcppExport SEXP _lidR_C_lmf(SEXP lasSEXP, SEXP wsSEXP, SEXP min_heightSEXP, SEXP circularSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type min_height(min_heightSEXP);
    Rcpp::traits::input_parameter< bool >::type circular(circularSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lmf(las, ws, min_height, circular, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_smooth
NumericVector C_smooth(S4 las, double size, int method, int shape, double sigma, int ncpu);
RcppExport SEXP _lidR_C_smooth(SEXP lasSEXP, SEXP sizeSEXP, SEXP methodSEXP, SEXP shapeSEXP, SEXP sigmaSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_smooth(las, size, method, shape, sigma, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_highest
LogicalVector C_highest(S4 las, List layout);
RcppExport SEXP _lidR_C_highest(SEXP lasSEXP, SEXP layoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< List >::type layout(layoutSEXP);
    rcpp_result_gen = Rcpp::wrap(C_highest(las, layout));
    return rcpp_result_gen;
END_RCPP
}
// C_lowest
LogicalVector C_lowest(S4 las, List layout);
RcppExport SEXP _lidR_C_lowest(SEXP lasSEXP, SEXP layoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< List >::type layout(layoutSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lowest(las, layout));
    return rcpp_result_gen;
END_RCPP
}
// C_most_nadir
LogicalVector C_most_nadir(S4 las, List layout);
RcppExport SEXP _lidR_C_most_nadir(SEXP lasSEXP, SEXP layoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< List >::type layout(layoutSEXP);
    rcpp_result_gen = Rcpp::wrap(C_most_nadir(las, layout));
    return rcpp_result_gen;
END_RCPP
}
// C_in_polygon
SEXP C_in_polygon(S4 las, Rcpp::List polygons, bool by_poly);
RcppExport SEXP _lidR_C_in_polygon(SEXP lasSEXP, SEXP polygonsSEXP, SEXP by_polySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type polygons(polygonsSEXP);
    Rcpp::traits::input_parameter< bool >::type by_poly(by_polySEXP);
    rcpp_result_gen = Rcpp::wrap(C_in_polygon(las, polygons, by_poly));
    return rcpp_result_gen;
END_RCPP
}
// C_lasdetectshape
LogicalVector C_lasdetectshape(S4 las, int method, NumericVector th, int k, LogicalVector filter, int ncpu);
RcppExport SEXP _lidR_C_lasdetectshape(SEXP lasSEXP, SEXP methodSEXP, SEXP thSEXP, SEXP kSEXP, SEXP filterSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type th(thSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lasdetectshape(las, method, th, k, filter, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_Wing2015
IntegerVector C_Wing2015(S4 las, NumericVector neigh_radii, double low_int_thrsh, double uppr_int_thrsh, int pt_den_req, NumericMatrix BBPRthrsh_mat, int ncpu);
RcppExport SEXP _lidR_C_Wing2015(SEXP lasSEXP, SEXP neigh_radiiSEXP, SEXP low_int_thrshSEXP, SEXP uppr_int_thrshSEXP, SEXP pt_den_reqSEXP, SEXP BBPRthrsh_matSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type neigh_radii(neigh_radiiSEXP);
    Rcpp::traits::input_parameter< double >::type low_int_thrsh(low_int_thrshSEXP);
    Rcpp::traits::input_parameter< double >::type uppr_int_thrsh(uppr_int_thrshSEXP);
    Rcpp::traits::input_parameter< int >::type pt_den_req(pt_den_reqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BBPRthrsh_mat(BBPRthrsh_matSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Wing2015(las, neigh_radii, low_int_thrsh, uppr_int_thrsh, pt_den_req, BBPRthrsh_mat, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_li2012
IntegerVector C_li2012(S4 las, double dt1, double dt2, double Zu, double R, double th_tree, double radius);
RcppExport SEXP _lidR_C_li2012(SEXP lasSEXP, SEXP dt1SEXP, SEXP dt2SEXP, SEXP ZuSEXP, SEXP RSEXP, SEXP th_treeSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type dt1(dt1SEXP);
    Rcpp::traits::input_parameter< double >::type dt2(dt2SEXP);
    Rcpp::traits::input_parameter< double >::type Zu(ZuSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(C_li2012(las, dt1, dt2, Zu, R, th_tree, radius));
    return rcpp_result_gen;
END_RCPP
}
// C_pmf
LogicalVector C_pmf(S4 las, NumericVector ws, NumericVector th, LogicalVector filter);
RcppExport SEXP _lidR_C_pmf(SEXP lasSEXP, SEXP wsSEXP, SEXP thSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type th(thSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_pmf(las, ws, th, filter));
    return rcpp_result_gen;
END_RCPP
}
// C_rasterize
NumericVector C_rasterize(S4 las, List layout, double subcircle, int method);
RcppExport SEXP _lidR_C_rasterize(SEXP lasSEXP, SEXP layoutSEXP, SEXP subcircleSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< List >::type layout(layoutSEXP);
    Rcpp::traits::input_parameter< double >::type subcircle(subcircleSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rasterize(las, layout, subcircle, method));
    return rcpp_result_gen;
END_RCPP
}
// C_knnidw
NumericVector C_knnidw(S4 las, NumericVector x, NumericVector y, int k, double p, double rmax, int ncpu);
RcppExport SEXP _lidR_C_knnidw(SEXP lasSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP pSEXP, SEXP rmaxSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type rmax(rmaxSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knnidw(las, x, y, k, p, rmax, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_point_metrics
List C_point_metrics(S4 las, unsigned int k, double r, int nalloc, SEXP call, SEXP env, LogicalVector filter);
RcppExport SEXP _lidR_C_point_metrics(SEXP lasSEXP, SEXP kSEXP, SEXP rSEXP, SEXP nallocSEXP, SEXP callSEXP, SEXP envSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type nalloc(nallocSEXP);
    Rcpp::traits::input_parameter< SEXP >::type call(callSEXP);
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_point_metrics(las, k, r, nalloc, call, env, filter));
    return rcpp_result_gen;
END_RCPP
}
// is_disable_point_metrics
bool is_disable_point_metrics();
RcppExport SEXP _lidR_is_disable_point_metrics() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(is_disable_point_metrics());
    return rcpp_result_gen;
END_RCPP
}
// C_knn_distance
NumericVector C_knn_distance(S4 las, unsigned int k, int cpu);
RcppExport SEXP _lidR_C_knn_distance(SEXP lasSEXP, SEXP kSEXP, SEXP cpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type cpu(cpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn_distance(las, k, cpu));
    return rcpp_result_gen;
END_RCPP
}
// C_lasrangecorrection
IntegerVector C_lasrangecorrection(S4 las, DataFrame flightlines, double Rs, double f);
RcppExport SEXP _lidR_C_lasrangecorrection(SEXP lasSEXP, SEXP flightlinesSEXP, SEXP RsSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type flightlines(flightlinesSEXP);
    Rcpp::traits::input_parameter< double >::type Rs(RsSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lasrangecorrection(las, flightlines, Rs, f));
    return rcpp_result_gen;
END_RCPP
}
// C_lasrange
NumericVector C_lasrange(S4 las, DataFrame flightlines);
RcppExport SEXP _lidR_C_lasrange(SEXP lasSEXP, SEXP flightlinesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type flightlines(flightlinesSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lasrange(las, flightlines));
    return rcpp_result_gen;
END_RCPP
}
// C_local_maximum
LogicalVector C_local_maximum(S4 las, NumericVector ws, LogicalVector filter, int ncpu);
RcppExport SEXP _lidR_C_local_maximum(SEXP lasSEXP, SEXP wsSEXP, SEXP filterSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_local_maximum(las, ws, filter, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_isolated_voxel
LogicalVector C_isolated_voxel(S4 las, double res, int isolated);
RcppExport SEXP _lidR_C_isolated_voxel(SEXP lasSEXP, SEXP resSEXP, SEXP isolatedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    Rcpp::traits::input_parameter< int >::type isolated(isolatedSEXP);
    rcpp_result_gen = Rcpp::wrap(C_isolated_voxel(las, res, isolated));
    return rcpp_result_gen;
END_RCPP
}
// C_check_gpstime
int C_check_gpstime(NumericVector t, IntegerVector rn);
RcppExport SEXP _lidR_C_check_gpstime(SEXP tSEXP, SEXP rnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rn(rnSEXP);
    rcpp_result_gen = Rcpp::wrap(C_check_gpstime(t, rn));
    return rcpp_result_gen;
END_RCPP
}
// C_eigen_metrics
DataFrame C_eigen_metrics(S4 las, int k, double r, bool coeffs, LogicalVector filter, int ncpu);
RcppExport SEXP _lidR_C_eigen_metrics(SEXP lasSEXP, SEXP kSEXP, SEXP rSEXP, SEXP coeffsSEXP, SEXP filterSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_eigen_metrics(las, k, r, coeffs, filter, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_connected_component
IntegerVector C_connected_component(S4 las, double res);
RcppExport SEXP _lidR_C_connected_component(SEXP lasSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(C_connected_component(las, res));
    return rcpp_result_gen;
END_RCPP
}
// C_voxel_id
IntegerVector C_voxel_id(S4 las, double res);
RcppExport SEXP _lidR_C_voxel_id(SEXP lasSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(C_voxel_id(las, res));
    return rcpp_result_gen;
END_RCPP
}
// fast_table
IntegerVector fast_table(IntegerVector x, int size);
RcppExport SEXP _lidR_fast_table(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_table(x, size));
    return rcpp_result_gen;
END_RCPP
}
// fast_countequal
int fast_countequal(IntegerVector x, int t);
RcppExport SEXP _lidR_fast_countequal(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countequal(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countbelow
int fast_countbelow(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countbelow(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countbelow(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_quantization
void fast_quantization(NumericVector x, double scale, double offset);
RcppExport SEXP _lidR_fast_quantization(SEXP xSEXP, SEXP scaleSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    fast_quantization(x, scale, offset);
    return R_NilValue;
END_RCPP
}
// fast_countunquantized
int fast_countunquantized(NumericVector x, double scale, double offset);
RcppExport SEXP _lidR_fast_countunquantized(SEXP xSEXP, SEXP scaleSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countunquantized(x, scale, offset));
    return rcpp_result_gen;
END_RCPP
}
// fast_countover
int fast_countover(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countover(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countover(x, t));
    return rcpp_result_gen;
END_RCPP
}
// roundc
NumericVector roundc(NumericVector x, int digit);
RcppExport SEXP _lidR_roundc(SEXP xSEXP, SEXP digitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type digit(digitSEXP);
    rcpp_result_gen = Rcpp::wrap(roundc(x, digit));
    return rcpp_result_gen;
END_RCPP
}
// bitmerge
NumericVector bitmerge(IntegerVector u, IntegerVector v);
RcppExport SEXP _lidR_bitmerge(SEXP uSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type u(uSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(bitmerge(u, v));
    return rcpp_result_gen;
END_RCPP
}
// fast_eigen_values
SEXP fast_eigen_values(arma::mat A);
RcppExport SEXP _lidR_fast_eigen_values(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(fast_eigen_values(A));
    return rcpp_result_gen;
END_RCPP
}
// C_knn
Rcpp::List C_knn(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, int k, int ncpu);
RcppExport SEXP _lidR_C_knn(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn(X, Y, x, y, k, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_circle_lookup
IntegerVector C_circle_lookup(S4 las, double x, double y, double r);
RcppExport SEXP _lidR_C_circle_lookup(SEXP lasSEXP, SEXP xSEXP, SEXP ySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(C_circle_lookup(las, x, y, r));
    return rcpp_result_gen;
END_RCPP
}
// C_orectangle_lookup
IntegerVector C_orectangle_lookup(S4 las, double x, double y, double w, double h, double angle);
RcppExport SEXP _lidR_C_orectangle_lookup(SEXP lasSEXP, SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP hSEXP, SEXP angleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    rcpp_result_gen = Rcpp::wrap(C_orectangle_lookup(las, x, y, w, h, angle));
    return rcpp_result_gen;
END_RCPP
}
// C_knn2d_lookup
IntegerVector C_knn2d_lookup(S4 las, double x, double y, int k);
RcppExport SEXP _lidR_C_knn2d_lookup(SEXP lasSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn2d_lookup(las, x, y, k));
    return rcpp_result_gen;
END_RCPP
}
// C_knn3d_lookup
IntegerVector C_knn3d_lookup(S4 las, double x, double y, double z, int k);
RcppExport SEXP _lidR_C_knn3d_lookup(SEXP lasSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn3d_lookup(las, x, y, z, k));
    return rcpp_result_gen;
END_RCPP
}
// is_altrep
bool is_altrep(SEXP x);
RcppExport SEXP _lidR_is_altrep(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_altrep(x));
    return rcpp_result_gen;
END_RCPP
}
// is_materialized
bool is_materialized(SEXP x);
RcppExport SEXP _lidR_is_materialized(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_materialized(x));
    return rcpp_result_gen;
END_RCPP
}
// altrep_full_class
SEXP altrep_full_class(SEXP x);
RcppExport SEXP _lidR_altrep_full_class(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(altrep_full_class(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_concaveman
DataFrame cpp_concaveman(NumericVector x, NumericVector y, double concavity, double lengthThreshold, IntegerVector chull);
RcppExport SEXP _lidR_cpp_concaveman(SEXP xSEXP, SEXP ySEXP, SEXP concavitySEXP, SEXP lengthThresholdSEXP, SEXP chullSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type concavity(concavitySEXP);
    Rcpp::traits::input_parameter< double >::type lengthThreshold(lengthThresholdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type chull(chullSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_concaveman(x, y, concavity, lengthThreshold, chull));
    return rcpp_result_gen;
END_RCPP
}
// cpp_knn
List cpp_knn(S4 data, int k, int ncpu);
RcppExport SEXP _lidR_cpp_knn(SEXP dataSEXP, SEXP kSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_knn(data, k, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// cpp_knnx
List cpp_knnx(S4 data, S4 query, int k, int ncpu);
RcppExport SEXP _lidR_cpp_knnx(SEXP dataSEXP, SEXP querySEXP, SEXP kSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type data(dataSEXP);
    Rcpp::traits::input_parameter< S4 >::type query(querySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_knnx(data, query, k, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// R_omp_get_max_threads
int R_omp_get_max_threads();
RcppExport SEXP _lidR_R_omp_get_max_threads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(R_omp_get_max_threads());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidR_filterTimeBlockPulses", (DL_FUNC) &_lidR_filterTimeBlockPulses, 1},
    {"_lidR_cmpCPA", (DL_FUNC) &_lidR_cmpCPA, 1},
    {"_lidR_C_chm_prep", (DL_FUNC) &_lidR_C_chm_prep, 9},
    {"_lidR_C_dalponte2016", (DL_FUNC) &_lidR_C_dalponte2016, 6},
    {"_lidR_C_delaunay", (DL_FUNC) &_lidR_C_delaunay, 4},
    {"_lidR_C_interpolate_delaunay", (DL_FUNC) &_lidR_C_interpolate_delaunay, 7},
    {"_lidR_C_tinfo", (DL_FUNC) &_lidR_C_tinfo, 2},
    {"_lidR_C_tsearch", (DL_FUNC) &_lidR_C_tsearch, 4},
    {"_lidR_C_lmf", (DL_FUNC) &_lidR_C_lmf, 5},
    {"_lidR_C_smooth", (DL_FUNC) &_lidR_C_smooth, 6},
    {"_lidR_C_highest", (DL_FUNC) &_lidR_C_highest, 2},
    {"_lidR_C_lowest", (DL_FUNC) &_lidR_C_lowest, 2},
    {"_lidR_C_most_nadir", (DL_FUNC) &_lidR_C_most_nadir, 2},
    {"_lidR_C_in_polygon", (DL_FUNC) &_lidR_C_in_polygon, 3},
    {"_lidR_C_lasdetectshape", (DL_FUNC) &_lidR_C_lasdetectshape, 6},
    {"_lidR_C_Wing2015", (DL_FUNC) &_lidR_C_Wing2015, 7},
    {"_lidR_C_li2012", (DL_FUNC) &_lidR_C_li2012, 7},
    {"_lidR_C_pmf", (DL_FUNC) &_lidR_C_pmf, 4},
    {"_lidR_C_rasterize", (DL_FUNC) &_lidR_C_rasterize, 4},
    {"_lidR_C_knnidw", (DL_FUNC) &_lidR_C_knnidw, 7},
    {"_lidR_C_point_metrics", (DL_FUNC) &_lidR_C_point_metrics, 7},
    {"_lidR_is_disable_point_metrics", (DL_FUNC) &_lidR_is_disable_point_metrics, 0},
    {"_lidR_C_knn_distance", (DL_FUNC) &_lidR_C_knn_distance, 3},
    {"_lidR_C_lasrangecorrection", (DL_FUNC) &_lidR_C_lasrangecorrection, 4},
    {"_lidR_C_lasrange", (DL_FUNC) &_lidR_C_lasrange, 2},
    {"_lidR_C_local_maximum", (DL_FUNC) &_lidR_C_local_maximum, 4},
    {"_lidR_C_isolated_voxel", (DL_FUNC) &_lidR_C_isolated_voxel, 3},
    {"_lidR_C_check_gpstime", (DL_FUNC) &_lidR_C_check_gpstime, 2},
    {"_lidR_C_eigen_metrics", (DL_FUNC) &_lidR_C_eigen_metrics, 6},
    {"_lidR_C_connected_component", (DL_FUNC) &_lidR_C_connected_component, 2},
    {"_lidR_C_voxel_id", (DL_FUNC) &_lidR_C_voxel_id, 2},
    {"_lidR_fast_table", (DL_FUNC) &_lidR_fast_table, 2},
    {"_lidR_fast_countequal", (DL_FUNC) &_lidR_fast_countequal, 2},
    {"_lidR_fast_countbelow", (DL_FUNC) &_lidR_fast_countbelow, 2},
    {"_lidR_fast_quantization", (DL_FUNC) &_lidR_fast_quantization, 3},
    {"_lidR_fast_countunquantized", (DL_FUNC) &_lidR_fast_countunquantized, 3},
    {"_lidR_fast_countover", (DL_FUNC) &_lidR_fast_countover, 2},
    {"_lidR_roundc", (DL_FUNC) &_lidR_roundc, 2},
    {"_lidR_bitmerge", (DL_FUNC) &_lidR_bitmerge, 2},
    {"_lidR_fast_eigen_values", (DL_FUNC) &_lidR_fast_eigen_values, 1},
    {"_lidR_C_knn", (DL_FUNC) &_lidR_C_knn, 6},
    {"_lidR_C_circle_lookup", (DL_FUNC) &_lidR_C_circle_lookup, 4},
    {"_lidR_C_orectangle_lookup", (DL_FUNC) &_lidR_C_orectangle_lookup, 6},
    {"_lidR_C_knn2d_lookup", (DL_FUNC) &_lidR_C_knn2d_lookup, 4},
    {"_lidR_C_knn3d_lookup", (DL_FUNC) &_lidR_C_knn3d_lookup, 5},
    {"_lidR_is_altrep", (DL_FUNC) &_lidR_is_altrep, 1},
    {"_lidR_is_materialized", (DL_FUNC) &_lidR_is_materialized, 1},
    {"_lidR_altrep_full_class", (DL_FUNC) &_lidR_altrep_full_class, 1},
    {"_lidR_cpp_concaveman", (DL_FUNC) &_lidR_cpp_concaveman, 5},
    {"_lidR_cpp_knn", (DL_FUNC) &_lidR_cpp_knn, 3},
    {"_lidR_cpp_knnx", (DL_FUNC) &_lidR_cpp_knnx, 4},
    {"_lidR_R_omp_get_max_threads", (DL_FUNC) &_lidR_R_omp_get_max_threads, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
