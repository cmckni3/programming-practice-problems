/*
Chris McKnight
UVA 11839 Optical Reader
9/7/11
Homework 2
*/

#define DEBUG if(false)
#define DEBUG2 if (false)
const int BLACK = 127;
const int SHADED = 1;
const char choices[5] = {'A', 'B', 'C', 'D', 'E'};

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  int n, // number of questions
  value; // value of gray level

  cin >> n;
  while (n > 0)
  {
    int count = 0;
    while (count < n)
    {
      int answer[2] = {0};
      int answers[5] = {0};
      int shaded = -1;
      for (int i = 0; i < 5; i++)
      {
        cin >> value;
        DEBUG cout << value << " ";
        if (value <= 255 && value >= 0)
        {
          int temp = (value <= BLACK);
          answer[temp]++;
          answers[i] = temp;
          if (temp && shaded == -1) shaded = i;
        }
      }
      DEBUG cout << endl;
      DEBUG2 cout << answer[!SHADED] << " " << answer[SHADED] << endl;
      if (answer[SHADED] > 1 || shaded == -1) cout << "*" << endl;
      else cout << choices[shaded] << endl;
      count++;
    }
    cin >> n;
  }
  return 0;
}