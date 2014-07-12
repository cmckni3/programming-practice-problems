#include <iostream>
#include <iomanip>

#define N 40
#define DEGREES_PER_TICK 360/40

using namespace std;

int distance(int a, int b, int n)
{
  return ((b - a) < 0) ? (b - a + n) : (b - a);
}

int main(int argc, char **argv)
{
  int start = 0,
      t1 = 0,
      t2 = 0,
      t3 = 0,
      ticks = 0;

  cin >> start >> t1 >> t2 >> t3;
  while (true)
  {
    if (start == 0 && t1 == 0 && t2 == 0 && t3 == 0) break;
    ticks = (3*N) + distance(t1, start, N)  + distance(t1, t2, N) + distance(t3, t2, N);

    cout << (ticks * DEGREES_PER_TICK) << endl;
    cin >> start >> t1 >> t2 >> t3;
  }
  return 0;
}
