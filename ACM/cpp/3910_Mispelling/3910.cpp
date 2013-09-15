/*
Chris McKnight
ACM: Mispelling
11/12/2011
*/

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 80;

int main(int argc, char** argv)
{
  int cases,
  count;

  cin >> cases;
  count = 0;
  while (count < cases)
  {
    int n;		// letter in string to remove
    string temp;
    char buffer[SIZE];
    cin >> n >> temp;
    string a = temp.substr(0, n-1);
    string b = temp.substr(n, temp.length()-1);
    count++;
    cout << count << " " << a << b << endl;
  }
  return 0;
}
