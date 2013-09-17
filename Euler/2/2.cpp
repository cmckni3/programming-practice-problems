// Requirement: Find the sum of the even valued terms of
// fibonacci sequence whose value is less than 4 million

// Originally solved: 2004
// Refactored 09/17/2013

#include <iostream>
#include <stdlib.h>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 4000000

#define DEBUG if (FALSE)

using namespace std;

int Fib(int i)
{
  if (i == 1 || i == 2)
    return 1;
  return Fib(i - 1) + Fib(i - 2);
}

bool IsEven(int number)
{
  if (number % 2 == 0)
    return true;
  return false;
}

int main(int argc, char *argv[])
{
  int count = 0;
  int sum = 0;
  int thenumber;
  for (int n = 3; thenumber < MAX; n++)
  {
    thenumber = Fib(n);
    if (IsEven(thenumber))
      sum = sum + thenumber;
  }
  cout << "Sum is: " << sum << endl;
  return 0;
}
