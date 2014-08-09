#include <iostream>
#include <iomanip>

using namespace std;

void PrintLine();

void Sort(int arry[], int n);

int main (int argc, char * const argv[])
{
    int nclubs,
    nholes,
    par,
    yards,
    count,
    count2;
  count = 0;

  cin >> nclubs;
  int clubs[nclubs];
  while (count < nclubs)
  {
    cin >> yards;
    clubs[count] = yards;
    count++;
  }

  cin >> nholes;

  int pars[nholes],
    totals[nholes],
    strokes[nholes],
    totalscore[nholes],
    total;

  for (int index = 0; index < nholes; index++)
  {
    pars[index] = 0;
    totals[index] = 0;
    strokes[index] = 0;
    totalscore[index] = 0;
  }
  count = 0;
  count2 = 0;
  total = 0;
  while (count < nholes)
  {
    cin >> yards;
    cin >> par;
    while (yards > 0)
    {
      if (count2 > nclubs - 1)
        count2 = 0;
      if (yards/clubs[count2] >= 1)
      {
        yards = yards - clubs[count2];
        strokes[count]++;
        totals[count]++;
        total++;
      }
      count2++;
    }
    totals[count] = total;
    pars[count] = strokes[count] - par;
    if (count > 0)
      totalscore[count-1] = pars[count-1] + pars[count];
    else
      totalscore[count] = pars[count];
    count++;
  }

  PrintLine();
  cout << "Hole" << setw(12) << "Strokes" << setw(10) << "Par" << setw(12);
  cout << "Score" << setw(18) << "Total Strokes" << endl;
  PrintLine();

  for (int index = 0; index < nholes; index++)
  {
    cout << (index+1) << setw(12) << strokes[index] << setw(12) << pars[index];
    cout << setw(12) << totalscore[index] << setw(12) << totals[index] << endl;
  }


    return 0;
}

void PrintLine()
{
  cout << "------------------------------------------------------------------" << endl;
}

void Sort(int arry[], int n)
{
}
