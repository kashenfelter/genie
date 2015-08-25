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

#ifndef __HCLUST2_RESULT_H
#define __HCLUST2_RESULT_H

#include "defs.h"
#include "disjoint_sets.h"
#include "hclust2_merge.h"
#include "hclust2_common.h"
#include "hclust2_distance.h"
#include <Rcpp.h>


namespace DataStructures
{

struct HClustResult
{
   size_t i;
   size_t n;

   Rcpp::NumericMatrix links;
   Rcpp::NumericMatrix merge;
   Rcpp::NumericVector height;
   Rcpp::NumericVector order;
   // call is set by R
   // method is set by R
   Rcpp::CharacterVector labels;
   Rcpp::String dist_method;

   HClustResult(size_t n, Distance* dist);

   void link(size_t i1, size_t i2, double d12);

   Rcpp::List toR(
         const DataStructures::HClustStats& hclustStats,
         const DataStructures::HClustOptions& hclustOptions,
         const DataStructures::DistanceStats& distStats
   );

}; // struct HClustResult



} // namespace DataStructures

#endif