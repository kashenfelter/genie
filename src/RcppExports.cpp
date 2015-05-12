// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// queue_as_list
List queue_as_list(SEXP queue);
RcppExport SEXP DataStructures_queue_as_list(SEXP queueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        List __result = queue_as_list(queue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// queue_create
SEXP queue_create();
RcppExport SEXP DataStructures_queue_create() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        SEXP __result = queue_create();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// queue_empty
bool queue_empty(SEXP queue);
RcppExport SEXP DataStructures_queue_empty(SEXP queueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        bool __result = queue_empty(queue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// queue_push
void queue_push(SEXP queue, SEXP obj);
RcppExport SEXP DataStructures_queue_push(SEXP queueSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP );
        queue_push(queue, obj);
    }
    return R_NilValue;
END_RCPP
}
// queue_pop
SEXP queue_pop(SEXP queue);
RcppExport SEXP DataStructures_queue_pop(SEXP queueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        SEXP __result = queue_pop(queue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack_as_list
List stack_as_list(SEXP stack);
RcppExport SEXP DataStructures_stack_as_list(SEXP stackSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP );
        List __result = stack_as_list(stack);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack_create
SEXP stack_create();
RcppExport SEXP DataStructures_stack_create() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        SEXP __result = stack_create();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack_empty
bool stack_empty(SEXP stack);
RcppExport SEXP DataStructures_stack_empty(SEXP stackSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP );
        bool __result = stack_empty(stack);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack_push
void stack_push(SEXP stack, SEXP obj);
RcppExport SEXP DataStructures_stack_push(SEXP stackSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP );
        Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP );
        stack_push(stack, obj);
    }
    return R_NilValue;
END_RCPP
}
// stack_pop
SEXP stack_pop(SEXP stack);
RcppExport SEXP DataStructures_stack_pop(SEXP stackSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type stack(stackSEXP );
        SEXP __result = stack_pop(stack);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_as_list
List vector_as_list(SEXP vec);
RcppExport SEXP DataStructures_vector_as_list(SEXP vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        List __result = vector_as_list(vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_create
SEXP vector_create(int n = 0);
RcppExport SEXP DataStructures_vector_create(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        SEXP __result = vector_create(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_empty
bool vector_empty(SEXP vec);
RcppExport SEXP DataStructures_vector_empty(SEXP vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        bool __result = vector_empty(vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_size
int vector_size(SEXP vec);
RcppExport SEXP DataStructures_vector_size(SEXP vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        int __result = vector_size(vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_front
RObject& vector_front(SEXP vec);
RcppExport SEXP DataStructures_vector_front(SEXP vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        RObject& __result = vector_front(vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_back
RObject& vector_back(SEXP vec);
RcppExport SEXP DataStructures_vector_back(SEXP vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        RObject& __result = vector_back(vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_push_back
void vector_push_back(SEXP vec, RObject obj);
RcppExport SEXP DataStructures_vector_push_back(SEXP vecSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        Rcpp::traits::input_parameter< RObject >::type obj(objSEXP );
        vector_push_back(vec, obj);
    }
    return R_NilValue;
END_RCPP
}
// vector_pop_back
void vector_pop_back(SEXP vec);
RcppExport SEXP DataStructures_vector_pop_back(SEXP vecSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        vector_pop_back(vec);
    }
    return R_NilValue;
END_RCPP
}
// vector_at
RObject& vector_at(SEXP vec, int i);
RcppExport SEXP DataStructures_vector_at(SEXP vecSEXP, SEXP iSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        Rcpp::traits::input_parameter< int >::type i(iSEXP );
        RObject& __result = vector_at(vec, i);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vector_set_at
void vector_set_at(SEXP vec, int i, RObject obj);
RcppExport SEXP DataStructures_vector_set_at(SEXP vecSEXP, SEXP iSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type vec(vecSEXP );
        Rcpp::traits::input_parameter< int >::type i(iSEXP );
        Rcpp::traits::input_parameter< RObject >::type obj(objSEXP );
        vector_set_at(vec, i, obj);
    }
    return R_NilValue;
END_RCPP
}
// vptree_create
SEXP vptree_create(Function distance, bool isSimilarity = false, int m = 2, int minm = 4, int maxLeafPointsCount = 25, int vantageCandidatesCount = 5, int testPointsCount = 15);
RcppExport SEXP DataStructures_vptree_create(SEXP distanceSEXP, SEXP isSimilaritySEXP, SEXP mSEXP, SEXP minmSEXP, SEXP maxLeafPointsCountSEXP, SEXP vantageCandidatesCountSEXP, SEXP testPointsCountSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP );
        Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP );
        Rcpp::traits::input_parameter< int >::type m(mSEXP );
        Rcpp::traits::input_parameter< int >::type minm(minmSEXP );
        Rcpp::traits::input_parameter< int >::type maxLeafPointsCount(maxLeafPointsCountSEXP );
        Rcpp::traits::input_parameter< int >::type vantageCandidatesCount(vantageCandidatesCountSEXP );
        Rcpp::traits::input_parameter< int >::type testPointsCount(testPointsCountSEXP );
        SEXP __result = vptree_create(distance, isSimilarity, m, minm, maxLeafPointsCount, vantageCandidatesCount, testPointsCount);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vptree_insert
void vptree_insert(SEXP tree, RObject obj);
RcppExport SEXP DataStructures_vptree_insert(SEXP treeSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP );
        Rcpp::traits::input_parameter< RObject >::type obj(objSEXP );
        vptree_insert(tree, obj);
    }
    return R_NilValue;
END_RCPP
}
// vptree_set_distancefunction
void vptree_set_distancefunction(SEXP tree, Function distance, bool isSimilarity = false);
RcppExport SEXP DataStructures_vptree_set_distancefunction(SEXP treeSEXP, SEXP distanceSEXP, SEXP isSimilaritySEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP );
        Rcpp::traits::input_parameter< Function >::type distance(distanceSEXP );
        Rcpp::traits::input_parameter< bool >::type isSimilarity(isSimilaritySEXP );
        vptree_set_distancefunction(tree, distance, isSimilarity);
    }
    return R_NilValue;
END_RCPP
}
// vptree_build
void vptree_build(SEXP tree, List listobj);
RcppExport SEXP DataStructures_vptree_build(SEXP treeSEXP, SEXP listobjSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP );
        Rcpp::traits::input_parameter< List >::type listobj(listobjSEXP );
        vptree_build(tree, listobj);
    }
    return R_NilValue;
END_RCPP
}
// vptree_searchKNN
List vptree_searchKNN(SEXP tree, RObject p, int k);
RcppExport SEXP DataStructures_vptree_searchKNN(SEXP treeSEXP, SEXP pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP );
        Rcpp::traits::input_parameter< RObject >::type p(pSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        List __result = vptree_searchKNN(tree, p, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vptree_searchRadius
List vptree_searchRadius(SEXP tree, RObject p, double tau);
RcppExport SEXP DataStructures_vptree_searchRadius(SEXP treeSEXP, SEXP pSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type tree(treeSEXP );
        Rcpp::traits::input_parameter< RObject >::type p(pSEXP );
        Rcpp::traits::input_parameter< double >::type tau(tauSEXP );
        List __result = vptree_searchRadius(tree, p, tau);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
