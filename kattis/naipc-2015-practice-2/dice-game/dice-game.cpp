#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
  long int a = 0,
           b = 0,
           c = 0,
           d = 0;
  while (cin >> a >> b >> c >> d)
  {
    int gunnar_sum = a + b + c + d;
    cin >> a >> b >> c >> d;
    int emma_sum = a + b + c + d;
    if (gunnar_sum > emma_sum)
      cout << "Gunnar" << endl;
    else if (gunnar_sum < emma_sum)
      cout << "Emma" << endl;
    else if (gunnar_sum == emma_sum)
      cout << "Tie" << endl;
  }
  return 0;
}
