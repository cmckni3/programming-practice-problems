// Project Euler Problem 36
// Find how many numbers below 1 million are palindromes in both binary and decimal

// Note: the function reverse could be a single function that takes a base (radix)
// as an extra parameter

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 1E6

#define DEBUG if (FALSE)

using namespace std;

bool reverse(long int n)
{
  long int forward = n;
  long int temp = 0;
  while (0 < n)
  {
    temp = temp*10 + n % 10;
    n = n/10;
  }
  return (temp == forward);
}

bool binrev(long int n)
{
  long int forward = n;
  long int temp = 0;
  while (0 < n)
  {
    temp = temp*2 + n % 2;
    n = n/2;
  }
  return (temp == forward);
}

int main()
{
  long int sum = 0;
  for (int i = 0; i < MAX; i++)
  {
    if (reverse(i) && binrev(i))
      sum += i;
  }
  cout << "The sum is: " << sum << endl;
  return 0;
}
