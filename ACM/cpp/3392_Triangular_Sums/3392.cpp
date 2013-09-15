/*
Chris McKnight
ACM: Triangular Sums
11/12/2011
*/

#include <iostream>

using namespace std;

int triangNum(int k)
{
  if (k == 1)
    return 1;
  else
  {
    return k+triangNum(k-1);
  }
}

int main(int argc, char** argv)
{
  int cases,
  count,
  n,
  sum;

  cin >> cases;
  count = 0;
  while (count < cases)
  {
    cin >> n;
    sum = 0;
    for (int k = 1; k <= n; k++)
    {
      sum += k*triangNum(k+1);
    }
    count++;
    cout << count << " " << n << " " << sum << endl;
  }
  return 0;
}
