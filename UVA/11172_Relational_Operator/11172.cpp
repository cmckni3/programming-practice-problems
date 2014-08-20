#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int cases = 0,
              a,
              b;
  cin >> cases;
  for (int i = 0; i < cases; i++)
  {
    cin >> a >> b;
    if (a < b) cout << "<" << endl;
    else if (a > b) cout << ">" << endl;
    else cout << "=" << endl;
  }
  return 0;
}
