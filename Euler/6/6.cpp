// Originally solved: 2004
// Refactored 09/17/2013
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define n 100

#define DEBUG if (FALSE)

using namespace std;

int main(int argc, char *argv[])
{
  int sum = 0;
  int sum2 = 0;
  // for (int index = 1; index <= 100; index++)
  // {
  //   sum += index;
  // }
  // for (int index = 1; index <= 100; index++)
  // {
  //   sum2 += index*index;
  // }
  // Let's use a power sum instead for the first one
  sum = (n*(n+1))/2;
  sum = sum*sum;
  // Let's use another power sum
  sum2 = (n*(n+1)*((2*n)+1)/6);
  cout << "sum(1, 100)^2 - sum(1^2, 100^2) = " << (sum - sum2) << endl;
  return 0;
}
