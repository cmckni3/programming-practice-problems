/*
*  Author: Chris McKnight
*  Date: January 16, 2013
*  Purpose:
*     Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
*     If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.
*
*     For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284.
*     The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
*
*     Evaluate the sum of all the amicable numbers under 10000.
*  Problem: Amicable Numbers
*/

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 10000

#define DEBUG if (FALSE)

long int divisors[MAX+1] = { 0 };

using namespace std;

void dump()
{
  for (int i = 0; i <= MAX; i++)
    cout << i << " " << divisors[i] << endl;
}

void process()
{
  for (int i = 2; i <= MAX; i++)
  {
    int sum = 0;
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
        sum += j;
    }
    divisors[i] = sum;
  }
}

int amicable(long int a, long int b)
{
  if (a > MAX || b > MAX) return 0;
  return (a == divisors[b] && divisors[a] == b && a != b);
}

int main ()
{
  int sum = 0;
  process();
  DEBUG dump();
  for (int i = 0; i <= MAX; i++)
  {
    if (amicable(i, divisors[i]))
      sum += i;
  }
  cout << "The answer is " << sum << endl;

  return 0;
}
