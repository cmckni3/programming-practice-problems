/*
Chris McKnight
UVA 11687: Digits
2014-08-08
*/

#include <iostream>
#include <string>

using namespace std;

int main ()
{ /* main */
  string number;
  getline(std::cin, number);
  while (number.compare("END") != 0)
  { /* while */
    int index = 1;
    if (number.compare("1") == 0)
      index = 1;
    else if (number.length() == 1)
      index = 2;
    else if (number.length() > 1 && number.length() <= 9)
      index = 3;
    else
      index = 4;
    cout << index << endl;
    getline(std::cin, number);
  } /* while */

  return 0;
} /* main */
