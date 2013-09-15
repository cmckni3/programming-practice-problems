/*
Chris McKnight
UVA 10018: Reverse and Add
9/22/2010
Add the reverse of the input to itself until it forms
a palindrome, 1000 iterations have been reached, or signed MAX_INT reached
*/

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

using namespace std;

int iter;
long int num;

void init()
{ /* FUNCTION init */
} /* FUNCTION init */

void dump()
{ /* FUNCTION dump */
} /* FUNCTION dump */

void getInput()
{ /* FUNCTION getInput */
  cin >> num;
} /* FUNCTION getInput */

long int invert(long int n)
{
  long int temp = 0;
  while (0 < n)
  {
    temp = temp*10 + n % 10;
    n = n/10;
  }
  return temp;
}

void process()
{ /* FUNCTION process */
  long int temp;
  iter = 0;
  if (num < 10)
  {
    iter++;
    num += num;
  }
  else if (num <= 4294967295 && num >= 10)
  {
    temp = invert(num);
    while (temp != num && iter < 1000)
    {
      iter++;
      num += temp;
      temp = invert(num);
    }
  }
  cout << iter << " " << num << endl;
} /* FUNCTION process */

int main ()
{ /* main */
  int count,
  i;

  init();
  cin >> count;
  for (i = 0; i < count; i++)
  { /* while */
    getInput();
    process();
  } /* while */

  return 0;
} /* main */
