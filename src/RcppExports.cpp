// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mtree_create
SEXP mtree_create(Function distance, bool isSimilarity);
RcppExport SEXP DataStructures_mtree_create(SEXP distanceSEXP, SEXP isSimilaritySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP);
    __result = Rcpp::wrap(mtree_create(distance, isSimilarity));
    return __result;
END_RCPP
}
// mtree_insert
void mtree_insert(SEXP tree, RObject obj);
RcppExport SEXP DataStructures_mtree_insert(SEXP treeSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    mtree_insert(tree, obj);
    return R_NilValue;
END_RCPP
}
// mtree_build
void mtree_build(SEXP tree, List listobj);
RcppExport SEXP DataStructures_mtree_build(SEXP treeSEXP, SEXP listobjSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< List >::type listobj(listobjSEXP);
    mtree_build(tree, listobj);
    return R_NilValue;
END_RCPP
}
// mtree_searchKNN
List mtree_searchKNN(SEXP tree, RObject p, int k, bool findItself);
RcppExport SEXP DataStructures_mtree_searchKNN(SEXP treeSEXP, SEXP pSEXP, SEXP kSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(mtree_searchKNN(tree, p, k, findItself));
    return __result;
END_RCPP
}
// mtree_searchRadius
List mtree_searchRadius(SEXP tree, RObject p, double tau, bool findItself);
RcppExport SEXP DataStructures_mtree_searchRadius(SEXP treeSEXP, SEXP pSEXP, SEXP tauSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(mtree_searchRadius(tree, p, tau, findItself));
    return __result;
END_RCPP
}
// mvptree_create
SEXP mvptree_create(Function distance, bool isSimilarity, int mvp_branchfactor, int mvp_pathlength, int mvp_leafcap);
RcppExport SEXP DataStructures_mvptree_create(SEXP distanceSEXP, SEXP isSimilaritySEXP, SEXP mvp_branchfactorSEXP, SEXP mvp_pathlengthSEXP, SEXP mvp_leafcapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP);
    Rcpp::traits::input_parameter< int >::type mvp_branchfactor(mvp_branchfactorSEXP);
    Rcpp::traits::input_parameter< int >::type mvp_pathlength(mvp_pathlengthSEXP);
    Rcpp::traits::input_parameter< int >::type mvp_leafcap(mvp_leafcapSEXP);
    __result = Rcpp::wrap(mvptree_create(distance, isSimilarity, mvp_branchfactor, mvp_pathlength, mvp_leafcap));
    return __result;
END_RCPP
}
// mvptree_insert
void mvptree_insert(SEXP tree, RObject obj);
RcppExport SEXP DataStructures_mvptree_insert(SEXP treeSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    mvptree_insert(tree, obj);
    return R_NilValue;
END_RCPP
}
// mvptree_build
void mvptree_build(SEXP tree, List listobj);
RcppExport SEXP DataStructures_mvptree_build(SEXP treeSEXP, SEXP listobjSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< List >::type listobj(listobjSEXP);
    mvptree_build(tree, listobj);
    return R_NilValue;
END_RCPP
}
// mvptree_searchKNN
List mvptree_searchKNN(SEXP tree, RObject p, int k, bool findItself);
RcppExport SEXP DataStructures_mvptree_searchKNN(SEXP treeSEXP, SEXP pSEXP, SEXP kSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(mvptree_searchKNN(tree, p, k, findItself));
    return __result;
END_RCPP
}
// mvptree_searchRadius
List mvptree_searchRadius(SEXP tree, RObject p, double tau, bool findItself);
RcppExport SEXP DataStructures_mvptree_searchRadius(SEXP treeSEXP, SEXP pSEXP, SEXP tauSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(mvptree_searchRadius(tree, p, tau, findItself));
    return __result;
END_RCPP
}
// queue_as_list
List queue_as_list(SEXP queue);
RcppExport SEXP DataStructures_queue_as_list(SEXP queueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP);
    __result = Rcpp::wrap(queue_as_list(queue));
    return __result;
END_RCPP
}
// queue_create
SEXP queue_create();
RcppExport SEXP DataStructures_queue_create() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(queue_create());
    return __result;
END_RCPP
}
// queue_empty
bool queue_empty(SEXP queue);
RcppExport SEXP DataStructures_queue_empty(SEXP queueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP);
    __result = Rcpp::wrap(queue_empty(queue));
    return __result;
END_RCPP
}
// queue_push
void queue_push(SEXP queue, SEXP obj);
RcppExport SEXP DataStructures_queue_push(SEXP queueSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP);
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    queue_push(queue, obj);
    return R_NilValue;
END_RCPP
}
// queue_pop
SEXP queue_pop(SEXP queue);
RcppExport SEXP DataStructures_queue_pop(SEXP queueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP);
    __result = Rcpp::wrap(queue_pop(queue));
    return __result;
END_RCPP
}
// stack_create
SEXP stack_create();
RcppExport SEXP DataStructures_stack_create() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(stack_create());
    return __result;
END_RCPP
}
// stack_as_list
List stack_as_list(SEXP stack);
RcppExport SEXP DataStructures_stack_as_list(SEXP stackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP);
    __result = Rcpp::wrap(stack_as_list(stack));
    return __result;
END_RCPP
}
// stack_empty
bool stack_empty(SEXP stack);
RcppExport SEXP DataStructures_stack_empty(SEXP stackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP);
    __result = Rcpp::wrap(stack_empty(stack));
    return __result;
END_RCPP
}
// stack_push
void stack_push(SEXP stack, SEXP obj);
RcppExport SEXP DataStructures_stack_push(SEXP stackSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP);
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    stack_push(stack, obj);
    return R_NilValue;
END_RCPP
}
// stack_pop
SEXP stack_pop(SEXP stack);
RcppExport SEXP DataStructures_stack_pop(SEXP stackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP);
    __result = Rcpp::wrap(stack_pop(stack));
    return __result;
END_RCPP
}
// vector_as_list
List vector_as_list(SEXP vec);
RcppExport SEXP DataStructures_vector_as_list(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    __result = Rcpp::wrap(vector_as_list(vec));
    return __result;
END_RCPP
}
// vector_create
SEXP vector_create(int n);
RcppExport SEXP DataStructures_vector_create(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(vector_create(n));
    return __result;
END_RCPP
}
// vector_empty
bool vector_empty(SEXP vec);
RcppExport SEXP DataStructures_vector_empty(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    __result = Rcpp::wrap(vector_empty(vec));
    return __result;
END_RCPP
}
// vector_size
int vector_size(SEXP vec);
RcppExport SEXP DataStructures_vector_size(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    __result = Rcpp::wrap(vector_size(vec));
    return __result;
END_RCPP
}
// vector_front
RObject& vector_front(SEXP vec);
RcppExport SEXP DataStructures_vector_front(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    __result = Rcpp::wrap(vector_front(vec));
    return __result;
END_RCPP
}
// vector_back
RObject& vector_back(SEXP vec);
RcppExport SEXP DataStructures_vector_back(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    __result = Rcpp::wrap(vector_back(vec));
    return __result;
END_RCPP
}
// vector_push_back
void vector_push_back(SEXP vec, RObject obj);
RcppExport SEXP DataStructures_vector_push_back(SEXP vecSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    vector_push_back(vec, obj);
    return R_NilValue;
END_RCPP
}
// vector_pop_back
void vector_pop_back(SEXP vec);
RcppExport SEXP DataStructures_vector_pop_back(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    vector_pop_back(vec);
    return R_NilValue;
END_RCPP
}
// vector_at
RObject& vector_at(SEXP vec, int i);
RcppExport SEXP DataStructures_vector_at(SEXP vecSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    __result = Rcpp::wrap(vector_at(vec, i));
    return __result;
END_RCPP
}
// vector_set_at
void vector_set_at(SEXP vec, int i, RObject obj);
RcppExport SEXP DataStructures_vector_set_at(SEXP vecSEXP, SEXP iSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    vector_set_at(vec, i, obj);
    return R_NilValue;
END_RCPP
}
// hclust2
SEXP hclust2(RObject objects, RObject distance);
RcppExport SEXP DataStructures_hclust2(SEXP objectsSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type objects(objectsSEXP);
    Rcpp::traits::input_parameter< RObject >::type distance(distanceSEXP);
    __result = Rcpp::wrap(hclust2(objects, distance));
    return __result;
END_RCPP
}
// hierarchical
IntegerMatrix hierarchical(Function distance, List listobj, bool isSimilarity, int m, int minm, int maxLeafPointsCount, int vantageCandidatesCount, int testPointsCount);
RcppExport SEXP DataStructures_hierarchical(SEXP distanceSEXP, SEXP listobjSEXP, SEXP isSimilaritySEXP, SEXP mSEXP, SEXP minmSEXP, SEXP maxLeafPointsCountSEXP, SEXP vantageCandidatesCountSEXP, SEXP testPointsCountSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< List >::type listobj(listobjSEXP);
    Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type minm(minmSEXP);
    Rcpp::traits::input_parameter< int >::type maxLeafPointsCount(maxLeafPointsCountSEXP);
    Rcpp::traits::input_parameter< int >::type vantageCandidatesCount(vantageCandidatesCountSEXP);
    Rcpp::traits::input_parameter< int >::type testPointsCount(testPointsCountSEXP);
    __result = Rcpp::wrap(hierarchical(distance, listobj, isSimilarity, m, minm, maxLeafPointsCount, vantageCandidatesCount, testPointsCount));
    return __result;
END_RCPP
}
// vptree_create
SEXP vptree_create(Function distance, bool isSimilarity, int m, int minm, int maxLeafPointsCount, int vantageCandidatesCount, int testPointsCount);
RcppExport SEXP DataStructures_vptree_create(SEXP distanceSEXP, SEXP isSimilaritySEXP, SEXP mSEXP, SEXP minmSEXP, SEXP maxLeafPointsCountSEXP, SEXP vantageCandidatesCountSEXP, SEXP testPointsCountSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type minm(minmSEXP);
    Rcpp::traits::input_parameter< int >::type maxLeafPointsCount(maxLeafPointsCountSEXP);
    Rcpp::traits::input_parameter< int >::type vantageCandidatesCount(vantageCandidatesCountSEXP);
    Rcpp::traits::input_parameter< int >::type testPointsCount(testPointsCountSEXP);
    __result = Rcpp::wrap(vptree_create(distance, isSimilarity, m, minm, maxLeafPointsCount, vantageCandidatesCount, testPointsCount));
    return __result;
END_RCPP
}
// vptree_insert
void vptree_insert(SEXP tree, RObject obj);
RcppExport SEXP DataStructures_vptree_insert(SEXP treeSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type obj(objSEXP);
    vptree_insert(tree, obj);
    return R_NilValue;
END_RCPP
}
// vptree_set_distancefunction
void vptree_set_distancefunction(SEXP tree, Function distance, bool isSimilarity);
RcppExport SEXP DataStructures_vptree_set_distancefunction(SEXP treeSEXP, SEXP distanceSEXP, SEXP isSimilaritySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP);
    vptree_set_distancefunction(tree, distance, isSimilarity);
    return R_NilValue;
END_RCPP
}
// vptree_build
void vptree_build(SEXP tree, List listobj);
RcppExport SEXP DataStructures_vptree_build(SEXP treeSEXP, SEXP listobjSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< List >::type listobj(listobjSEXP);
    vptree_build(tree, listobj);
    return R_NilValue;
END_RCPP
}
// vptree_searchKNN
List vptree_searchKNN(SEXP tree, RObject p, int k, bool findItself);
RcppExport SEXP DataStructures_vptree_searchKNN(SEXP treeSEXP, SEXP pSEXP, SEXP kSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchKNN(tree, p, k, findItself));
    return __result;
END_RCPP
}
// vptree_searchKNNKnown
List vptree_searchKNNKnown(SEXP tree, RObject p, int k, bool findItself);
RcppExport SEXP DataStructures_vptree_searchKNNKnown(SEXP treeSEXP, SEXP pSEXP, SEXP kSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchKNNKnown(tree, p, k, findItself));
    return __result;
END_RCPP
}
// vptree_searchKNNKnownIndex
List vptree_searchKNNKnownIndex(SEXP tree, int index, int k, bool findItself);
RcppExport SEXP DataStructures_vptree_searchKNNKnownIndex(SEXP treeSEXP, SEXP indexSEXP, SEXP kSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchKNNKnownIndex(tree, index, k, findItself));
    return __result;
END_RCPP
}
// vptree_searchRadius
List vptree_searchRadius(SEXP tree, RObject p, double tau, bool findItself);
RcppExport SEXP DataStructures_vptree_searchRadius(SEXP treeSEXP, SEXP pSEXP, SEXP tauSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchRadius(tree, p, tau, findItself));
    return __result;
END_RCPP
}
// vptree_searchRadiusKnown
List vptree_searchRadiusKnown(SEXP tree, RObject p, double tau, bool findItself);
RcppExport SEXP DataStructures_vptree_searchRadiusKnown(SEXP treeSEXP, SEXP pSEXP, SEXP tauSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< RObject >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchRadiusKnown(tree, p, tau, findItself));
    return __result;
END_RCPP
}
// vptree_searchRadiusKnownIndex
List vptree_searchRadiusKnownIndex(SEXP tree, int index, double tau, bool findItself);
RcppExport SEXP DataStructures_vptree_searchRadiusKnownIndex(SEXP treeSEXP, SEXP indexSEXP, SEXP tauSEXP, SEXP findItselfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type findItself(findItselfSEXP);
    __result = Rcpp::wrap(vptree_searchRadiusKnownIndex(tree, index, tau, findItself));
    return __result;
END_RCPP
}
// vptree_getItems
List vptree_getItems(SEXP vptree);
RcppExport SEXP DataStructures_vptree_getItems(SEXP vptreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    __result = Rcpp::wrap(vptree_getItems(vptree));
    return __result;
END_RCPP
}
// vptree_getFunction
Function vptree_getFunction(SEXP vptree);
RcppExport SEXP DataStructures_vptree_getFunction(SEXP vptreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    __result = Rcpp::wrap(vptree_getFunction(vptree));
    return __result;
END_RCPP
}
// vptree_serialize
void vptree_serialize(SEXP vptree, std::string filename);
RcppExport SEXP DataStructures_vptree_serialize(SEXP vptreeSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    vptree_serialize(vptree, filename);
    return R_NilValue;
END_RCPP
}
// vptree_read
SEXP vptree_read(std::string filename);
RcppExport SEXP DataStructures_vptree_read(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    __result = Rcpp::wrap(vptree_read(filename));
    return __result;
END_RCPP
}
// vptree_setItems
void vptree_setItems(SEXP vptree, List items);
RcppExport SEXP DataStructures_vptree_setItems(SEXP vptreeSEXP, SEXP itemsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    Rcpp::traits::input_parameter< List >::type items(itemsSEXP);
    vptree_setItems(vptree, items);
    return R_NilValue;
END_RCPP
}
// vptree_setMetricFunction
void vptree_setMetricFunction(SEXP vptree, Function f);
RcppExport SEXP DataStructures_vptree_setMetricFunction(SEXP vptreeSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    vptree_setMetricFunction(vptree, f);
    return R_NilValue;
END_RCPP
}
// vptree_treeSize
size_t vptree_treeSize(SEXP vptree);
RcppExport SEXP DataStructures_vptree_treeSize(SEXP vptreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    __result = Rcpp::wrap(vptree_treeSize(vptree));
    return __result;
END_RCPP
}
// vptree_treeHeight
int vptree_treeHeight(SEXP vptree);
RcppExport SEXP DataStructures_vptree_treeHeight(SEXP vptreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    __result = Rcpp::wrap(vptree_treeHeight(vptree));
    return __result;
END_RCPP
}
// vptree_printCounters
void vptree_printCounters(SEXP vptree);
RcppExport SEXP DataStructures_vptree_printCounters(SEXP vptreeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type vptree(vptreeSEXP);
    vptree_printCounters(vptree);
    return R_NilValue;
END_RCPP
}
