#include <iostream>
#include <string.h>
#include <fstream>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

using namespace std;

int main()
{
  ifstream file("8.in");
  long int max = 0;
  while (!file.eof())
  {
    long int temp;
    char c;
    c = file.get();
    temp = c - '0';
    for (int i = 0; i < 4; i++)
    {
      c = file.get();
      temp *= c - '0';
    }
    if (temp > max)
      max = temp;
    for (int i = 0; i < 4; i++)
      file.unget();
  }
  cout << max << endl;
  file.close();
  return 0;
}
