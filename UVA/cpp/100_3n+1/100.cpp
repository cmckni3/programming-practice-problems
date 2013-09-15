/*
Chris McKnight
UVA 100: 3n+1
9/12/2013
*/

#include <iostream>

#define DEBUG if (false)

#define MININT -999999
#define MAX 1000000

int memo[2*MAX] = { 0 };

using namespace std;

unsigned long int calc(unsigned long int n)
{
  unsigned long int retval = 1;
  if (n != 1)
  {
    retval = (0 == (n % 2)) ? n / 2 : 3 * n + 1;
  }
  return retval;
}

unsigned long int process(unsigned long int n)
{
  int count = 1;
  // keep track of terms that are double counted
  int counted = 0;
  unsigned long int tmp = 0;
  unsigned long int t1 = 0;
  unsigned long int retval = n;
  while (retval != 1 && retval > 0)
  {
    if (MAX > retval)
    {
      if (memo[retval] != 0)
      {
        // use precomputed value and subtract 1 for the current iteration
        count = count + memo[retval] - 1;
      }
      else
      {
        // calculate next term
        tmp = calc(retval);
        // compute cycle length of term
        t1 = process(tmp);
        // add cycle length of term to count
        count = count + t1;
        // subtract off terms that were double counted
        // and save the value
        memo[retval] = count - counted;
      }
      retval = 1;
    }
    else
    {
      // retval is greater than our max value so we can't use a precomputed value
      retval = calc(retval);
      count++;
      counted++;
    }
  }
  return count;
}

int main()
{
  int start = 0,
      stop = 0,
      i = 0,
      j = 0;
  cin >> start >> stop;
  while (!cin.eof())
  {
    i = start;
    j = stop;
    if (stop < start)
    {
      i = stop;
      j = start;
    }
    int max = MININT;
    for (int k = i; k <= j; k++)
    {
      int temp = process(k);
      max = (max < temp) ? temp : max;
    }
    cout << start << " " << stop << " " << max << endl;
    cin >> start >> stop;
  }
  // for (int i = 0; i < MAX; i++)
  //   cout << i << " " << process(i) << endl;
  return 0;
}