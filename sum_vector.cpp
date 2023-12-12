#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector problem_setup, N=%lld \n", N);

   int64_t i;
   for(i=0;i<N;i++){
      A[i] = i;
   }
      
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector perform_sum, N=%lld \n", N);
   int64_t i, accum=0;
   for(i=0; i<N;i++){
      accum+= A[i];
   }
   
   return accum;
}

