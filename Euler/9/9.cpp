// Project Euler Problem 9
// Find a*b*c where a^2 + b^2 = c^2 and a + b + c = 1000

// Note: To make this more efficient pythagorean triples can be generated
// by using the formulas a = 2*m, b = m^2 - 1, c = m^2 + 1
// where m is some integer

#include <iostream>

using namespace std;

const int MAX = 1000;

int main()
{
  int i=1, j=2, k=3;
  int a, b, c;
  for (i = 1; i < j; i++)
  {
    a = i * i;
    for (j = 2; j < k; j++)
    {
      b = j * j;
      for (k = 3; k < 1000; k++)
      {
        c = k * k;
        if ((i + j + k) == 1000)
        {
          //cout << "sum = 1000" << endl;
          c = k * k;
          if ((a + b) == c)
          {
            cout << i << "^2 + ";
            cout << j << "^2 = " << k;
            cout << endl;
            cout << "abc = " << (i*j*k) << endl;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
