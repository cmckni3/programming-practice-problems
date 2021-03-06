// Project Euler Problem 9
// Find a*b*c where a^2 + b^2 = c^2 and a + b + c = 1000

// Note: To make this more efficient pythagorean triples can be generated
// by using the formulas a = 2*mn, b = m^2 - n^2, c = m^2 + n^2
// where m and n are coprime

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 1000

#define DEBUG if (FALSE)

using namespace std;

int main()
{
  int i = 1, j = 2, k = 3;
  int a, b, c;
  for (i = 1; i < j; i++)
  {
    a = i * i;
    for (j = 2; j < k; j++)
    {
      b = j * j;
      for (k = 3; k < MAX; k++)
      {
        c = k * k;
        if ((i + j + k) == MAX)
        {
          if ((a + b) == c)
          {
            cout << i << "^2 + ";
            cout << j << "^2 = " << k << "^2" << endl;
            cout << "abc = " << (i*j*k) << endl;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
