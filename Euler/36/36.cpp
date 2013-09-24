// Project Euler Problem 36
// Find how many numbers below 1 million are palindromes in both binary and decimal

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 1E6

#define DEBUG if (FALSE)

using namespace std;

bool num_reverse(long int n, int b)
{
  long int forward = n;
  long int temp = 0;
  while (0 < n)
  {
    temp = temp*b + n % b;
    n = n/b;
  }
  return (temp == forward);
}

int main()
{
  long int sum = 0;
  for (int i = 0; i < MAX; i++)
  {
    if (num_reverse(i, 10) && num_reverse(i, 2))
      sum += i;
  }
  cout << "The sum is: " << sum << endl;
  return 0;
}
