

#include <iostream>
#include <string.h>
#include <fstream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)
#define MAX 1000
#define SIZE 1004

using namespace std;

int main()
{
  long int max = 0;
  int count = 0;
  int digits[SIZE] = { 0 };
  while (count < MAX)
  {
    char c;
    c = cin.get();
    if (c != '\n')
    {
      digits[count] = c - '0';
      count++;
    }
  }
  for (int i = 0; i < MAX; i++)
  {
    long int temp = digits[i] * digits[i+1] * digits[i+2] * digits[i+3] * digits[i+4];
    if (temp > max)
      max = temp;
  }
  cout << max << endl;
  return 0;
}
