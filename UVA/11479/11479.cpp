#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  long int cases,
      a,
      b,
      c;
  cin >> cases;
  for (int i = 0; i < cases; i++)
  {
    cin >> a >> b >> c;
    string triangle_type;
    if( (a+b) <= c || (b+c) <= a || (c+a) <= b || a <= 0 || b <= 0 || c <= 0)
      triangle_type = "Invalid";
    else if (a == b && b == c)
      triangle_type = "Equilateral";
    else if ( (a == b && b != c) || (a == c && c != b) || (b == c && c != a) )
      triangle_type = "Isosceles";
    else
      triangle_type = "Scalene"; 
    cout << "Case " << (i+1) << ": " << triangle_type <<  endl;
  }
  return 0;
}
