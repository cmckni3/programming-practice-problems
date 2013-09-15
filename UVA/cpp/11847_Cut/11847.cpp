/*
Chris McKnight
UVA 11847: Cut the Silver Bar
11/9/11
*/

#include <iostream>
#include <cmath>

#define DEBUG if(false)

using namespace std;

int main(int argc, char* argv[])
{
  int n;
  cin >> n;
  while (n != 0)
  {
    DEBUG cout << n << " = ";

    // uses change of base formula
    cout << (int)(log(n)/log(2)) << endl;

    // uses builtin math function
    //cout << (int)(log2(n)) << endl;
    cin >> n;
  }
  return 0;
}