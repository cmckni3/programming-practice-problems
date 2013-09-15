/*
Chris McKnight
UVA 10038: Jolly Jumpers
7/31/2010
Determine whether input is a jolly jumper meaning it has
all differences from 1 to n-1
If it has all the differences print "Jolly"
Otherwise, print "Not Jolly"
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

#define DEBUG if (false)
#define DEBUG2 if (false)
#define MAXN 3000
#define JOLLY 1
int n = 0;
int jolly[MAXN];
int diff[MAXN];
int found[MAXN];

using namespace std;

string messages[2] = {"Jolly", "Not jolly"};

void init()
{
  n = 0;
  for (int i = 0; i < MAXN; i++)
  {
    jolly[i] = 0;
    diff[i] = 0;
    found[i] = 0;
  }
}

void dump()
{
  for (int i = 0; i < n; i++)
    cout << "jolly[" << i << "] = " << jolly[i] << endl;
}

int getInput()
{
  int dataReadFlag = false;

  // get number of number, n
  // cin.eof() reads until a blank line is found
  cin >> n;
  if (!cin.eof())
  {
    // read n numbers into array
    for (int i = 0; i < n; i++)
    {
      cin >> jolly[i];
    }
    dataReadFlag = true;
  }
  else
    dataReadFlag = false;

  DEBUG cout << "dataReadFlag = " << dataReadFlag << endl;

  return (dataReadFlag);
}

int isJolly()
{
  int jollyFlag = true;
  for (int i = 1; i < n; i++)
  {
    found[diff[i]] = 1;
    DEBUG2 cout << "found[" << diff[i] << "] = " << found[diff[i]] << endl;
  }

  for (int i = 1; i < n; i++)
  {
    if (!found[i])
    {
      jollyFlag = false;
    }
    DEBUG cout << "found[" << i << "] = " << found[i] << endl;
  }

  return jollyFlag;
}

void process()
{
  // Calculate differences
  for (int i = 1; i < n; i++)
  {
    diff[i] = abs(jolly[i] - jolly[i-1]);
    DEBUG cout << "diff[" << i << "] = " << diff[i] << endl;
  }

  if (isJolly() || n == 1)
  {
    cout << ::messages[0] << endl;
  }
  else
  {
    cout << ::messages[1] << endl;
  }
}

int main (int argc, char * const argv[])
{
  int moreToDo;

  init();
  moreToDo = getInput();
  while (moreToDo)
  { /* while */
    DEBUG dump();
    process();
    init();
    moreToDo = getInput();
  } /* while */

  return 0;
}
