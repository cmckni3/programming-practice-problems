/*
Chris McKnight
UVA 11805: Bafana Bafana
8/31/2011
Homework 1
*/

#define MAXT 1000
#define MAXN 23
#define MAXP 200

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  int t,     // number of test cases
  n,         // number of players
  k,         // player ball starts with
  p,         // number of passes
  count = 0; // loop counter

  cin >> t;
  if (t > MAXT) t = MAXT;
  while (count < t)
  {
    cin >> n >> k >> p;
    if (n >= 2 && n <= MAXN && p >= 1 && p <= MAXP)
    {
      int answer = (k+p) % n;
      if (answer == 0) answer = n;
      cout << "Case " << (count+1) << ": " << answer << endl;
    }
    count++;
  }
  return 0;
}
