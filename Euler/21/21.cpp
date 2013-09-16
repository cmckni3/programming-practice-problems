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
