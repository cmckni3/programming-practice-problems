/*
Chris McKnight
ACM: Head or Tail
2011-11-12
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  int cases;

  cin >> cases;
  while (cases != 0)
  {
    int count,
    mary = 0,
    john = 0;
    count = 0;
    while (count < cases)
    {
      int temp;
      cin >> temp;
      if (!temp)
        mary++;
      else john++;
      count++;
    }
    cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    cin >> cases;
  }
  return 0;
}
