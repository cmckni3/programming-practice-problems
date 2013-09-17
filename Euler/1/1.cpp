// Originally solved: 2004
// Refactored 09/17/2013

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)
#define MAX 1000

#define DEBUG if (FALSE)

using namespace std;

// Check if number is multiple of 3 or 5
bool isMultiple(int num)
{
  bool ismultiple = true;
  if (((num%3) != 0) && ((num%5) != 0))
  {
    ismultiple = false;
  }
  return ismultiple;
}

int main(int argc, char *argv[])
{
  int sum = 0;
  for (int index = 1; index < MAX; index++)
  {
    if (isMultiple(index))
      sum = sum + index;
  }
  cout << "Sum of natural numbers below 1000 that are multiples of 3 or 5: " << sum << endl;
  return 0;
}
