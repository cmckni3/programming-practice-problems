// Find the sum of the digits of 100!

#include <iostream>
#include <list>

using namespace std;

// precomputed value
const string factorialDigits = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";

int main(int argc, char *argv[])
{
  int total = 0;
  for (int i = 0; i < factorialDigits.size(); i++)
    total += factorialDigits[i] - '0';
  cout << "The total of the digits in 100! is " << total << endl;
  return 0;
}