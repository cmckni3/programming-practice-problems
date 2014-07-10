#include <iostream>
#include <iomanip>

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
    // Use a modified version of the power sum formula since we are using clock arithmetic
    // This gives us the total ticks moved using every starting position from 0 to n-1
    ticks = (((n-1)*n)/2);
    // Add up how far we move from the starting tick and the ticks moved based on the t1, t2, and t3 values
    ticks = ticks + (n * ((3*n) + distance(t1, t2, n) + distance(t3, t2, n)));

    cout << std::fixed << setprecision(3) << (ticks / (double)n) << endl;
    cin >> n >> t1 >> t2 >> t3;
  }
  return 0;
}
