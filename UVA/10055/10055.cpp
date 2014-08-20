#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
  long int a = 0,
           b = 0;
  while (cin >> a >> b)
  {
    cout << abs(b - a) << endl;
  }
  return 0;
}
