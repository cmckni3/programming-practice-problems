// Project Euler problem 5
// Finds smallest number divisible by 1 - 20

#include <iostream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

using namespace std;

const int NUMS[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
const int START = 2520;

int main()
{
  for (int i = 2520; ; i+=2520)
  {
    int count = 0;
    for (int j = 0; j < 10; j++)
    {
      if (i % NUMS[j] == 0)
        count++;
    }
    if (count == 10)
    {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
