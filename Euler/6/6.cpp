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
  int sum = (n*(n+1))/2;
  int sum2 = (n*(n+1)*((2*n)+1)/6);
  sum = sum*sum;
  cout << "sum(1, 100)^2 - sum(1^2, 100^2) = " << (sum - sum2) << endl;
  return 0;
}
