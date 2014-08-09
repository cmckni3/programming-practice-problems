/*
Chris McKnight
ACM 4197: Combination Lock
2014-06-19
*/

#include <iostream>

using namespace std;

int distance(int a, int b, int n)
{
  return ((b - a) < 0) ? (b - a + n) : (b - a);
}

int main(int argc, char **argv)
{
  int n = 0,
      t1 = 0,
      t2 = 0,
      t3 = 0,
      ticks = 0;

  cin >> n >> t1 >> t2 >> t3;
  while (true)
  {
    if (n == 0 && t1 == 0 && t2 == 0 && t3 == 0) break;
    ticks = (3*n) + (n - 1) + distance(t1, t2, n) + distance(t3, t2, n);

    cout << ticks << endl;
    cin >> n >> t1 >> t2 >> t3;
  }
  return 0;
}
