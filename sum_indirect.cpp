#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

void setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);

   int64_t i;

   srand48(1023);

   for (i = 0; i < N; i++)  // Declare i before using it
   {
      A[i] = lrand48() % N;
   }
}

int64_t sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   int64_t i, indx, accum = 0;

   indx = lrand48() % N;

   for (i = 0; i < N; i++)
   {
      indx = A[indx];
      accum += indx;
   }

   return accum;  // Return the accumulated sum
}

