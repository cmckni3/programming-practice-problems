/*
Chris McKnight
UVA 11878 Homework Checker
2011-09-23
Homework 3
*/

#define DEBUG if(false)
#define DEBUG2 if (false)

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  int correct = 0;
  char ch;
  cin.get(ch);
  while (!cin.eof())
  {
    int i = 0;
    int j = 0;
    int ans = 0;
    char op;
    while (ch != '+' && ch != '-')
    {
      i = i*10 + (ch - '0');
      cin.get(ch);
    }

    op = ch;
    cin.get(ch);
    while (ch != '=')
    {
      j = j*10 + (ch - '0');
      cin.get(ch);
    }

    cin.get(ch);
    if (ch != '?')
    {
      while (ch != '\n')
      {
        ans = ans*10 + (ch - '0');
        cin.get(ch);
      }
    }
    else
    {
      while (ch != '\n')
        cin.get(ch);
    }
    DEBUG cout << "i = " << i << endl;
    DEBUG cout << "j = " << j << endl;
    DEBUG cout << "ans = " << ans << endl;
    if (op == '+')
    {
      if ((i+j) == ans)
        correct++;
    }
    else
    {
      if ((i-j) == ans)
        correct++;
    }

    cin.get(ch);
  }
  cout << correct << endl;
  return 0;
}
