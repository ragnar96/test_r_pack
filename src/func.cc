// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::plugins(cpp11)]]
#include <RcppArmadillo.h>
#include <vector>
#include "./test_h.h"

using namespace Rcpp;
using namespace std;
// using namespace arma;

// [[Rcpp::export]]
RObject func(){
  arma::cube A(3,4,5,arma::fill::randu);
  std::cout<<CONDIT<<std::endl;
  std::cout<<"work complete"<<std::endl;
  return wrap(A);
}

