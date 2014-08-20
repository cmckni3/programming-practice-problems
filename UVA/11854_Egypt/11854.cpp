/*
Chris McKnight
UVA 11854: Egypt
2011-11-09
*/

#include <iostream>

#define DEBUG if(false)
const char results[2][6] = {"right", "wrong"};

using namespace std;

int main(int argc, char* argv[])
{
  int a,
  b,
  c;

  cin >> a >> b >> c;
  while (a && b && c)
  {
    DEBUG cout << "a = " << a << " b = " << b << " c = " << c << endl;
    if ( ( (a*a) + (b*b) == (c*c) ) || ( (a*a) + (c*c) == (b*b) ) || ( (c*c) + (b*b) == (a*a) ) )
      cout << results[0] << endl;
    else
      cout << results[1] << endl;

    cin >> a >> b >> c;
  }
  return 0;
}
