/* ************************************************************************* *
 *   This file is part of the `DataStructures` package.                      *
 *                                                                           *
 *   Copyright 2015 Maciej Bartoszuk, Anna Cena, Marek Gagolewski,           *
 *                                                                           *
 *   'DataStructures' is free software: you can redistribute it and/or       *
 *   modify it under the terms of the GNU Lesser General Public License      *
 *   as published by the Free Software Foundation, either version 3          *
 *   of the License, or (at your option) any later version.                  *
 *                                                                           *
 *   'DataStructures' is distributed in the hope that it will be useful,     *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the            *
 *   GNU Lesser General Public License for more details.                     *
 *                                                                           *
 *   You should have received a copy of the GNU Lesser General Public        *
 *   License along with 'DataStructures'.                                    *
 *   If not, see <http://www.gnu.org/licenses/>.                             *
 * ************************************************************************* */

#ifndef __HCLUST2_NNBASED_SINGLE_APPROX_H
#define __HCLUST2_NNBASED_SINGLE_APPROX_H

// ************************************************************************

#include <Rcpp.h>
#include <R.h>
#include <Rmath.h>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics.hpp>
#include <deque>

#include "hclust2_common.h"
#include "disjoint_sets.h"
#include "hclust2_result.h"
#include "hclust2_vptree_single_approx.h"

using namespace std;
using namespace Rcpp;

namespace DataStructures
{

class HClustNNbasedSingleApprox
{
protected:

   HClustOptions opts;
   size_t n;
   Distance* distance;
   std::vector<size_t> indices;

   std::vector<size_t> neighborsCount;
   std::vector<double> minRadiuses;
   std::vector<bool> shouldFind;
   std::vector< deque<HeapNeighborItem> > nearestNeighbors;

   HClustStats stats;

   DisjointSets ds;
   bool prefetch;

   HClustVpTreeSingleApprox vptree;

   HeapNeighborItem getNearestNeighbor(size_t index, double distMax=INFINITY);

   void computePrefetch(HclustPriorityQueue& pq);
   void computeMerge(HclustPriorityQueue& pq, HClustResult& res);


public:

   HClustNNbasedSingleApprox(Distance* dist, RObject control);
   ~HClustNNbasedSingleApprox();

   void print() { vptree.print(); }

   HClustResult compute();

   inline const HClustStats& getStats()     { return stats; }
   inline const HClustOptions& getOptions() { return opts; }

}; // class

} // namespace DataStructures


#endif