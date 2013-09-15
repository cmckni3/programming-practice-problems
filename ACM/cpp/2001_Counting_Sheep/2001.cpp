/*
Chris McKnight
ACM: Counting Sheep
11/12/2011
*/

#include <iostream>
#include <string>

const char word[6] = { "sheep" };

using namespace std;

int main(int argc, char** argv)
{
  int cases,
  count;

  count = 0;
  cin >> cases;
  while (count < cases)
  {
    int words,
    sheep;
    string temp;
    cin >> words;
    sheep = 0;
    for (int i = 0; i < words; i++)
    {
      cin >> temp;
      if (temp == word)
        sheep++;
    }
    count++;
    cout << "Case " << count << ": This list contains " << sheep << " sheep." << endl;
    if (count != cases)
      cout << endl;
  }
  return 0;
}
