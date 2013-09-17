// Requirement: Find the number of triangle words in 42.in using
// t = 1/2(n)(n+1)


#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <climits>

using namespace std;

int Triangle(int n);

int main(int argc, char *argv[])
{
  ifstream input("42.in");
  char alphabetary[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
  'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
  'Z'};
  char words[2000];
  string wordlist[2000];
  int total,
  tri[100],
  index,
  index2,
  index3,
  len[2000],
  count,
  tricount;
  for (index = 0; index < 100; index++)
  {
    tri[index] = Triangle(index+1);
  }

  count = 0;
  tricount = 0;
  while (!input.eof())
  {
    input.getline(words, 1000, ',');
    wordlist[count] = words;
    len[count] = input.gcount();
    count++;
  }

  for (index = 0; index < count; index++)
  {
    total = 0;
    for (index2 = 0; index2 < len[index]; index2++)
    {
      for (index3 = 0; index3 < 27; index3++)
      {
        if (alphabetary[index3] == wordlist[index][index2])
          total = total + (index3);
      }
    }
    for (int index4 = 0; index4 < 100; index4++)
    {
      if (total == tri[index4])
      {
        tricount++;
      }
    }
  }
  cout<<"Total number of words: "<<count<<endl;
  cout<<"Total number of triangle words: "<<tricount<<endl;
  input.close();
  return 0;
}

int Triangle(int n)
{
  int t;
  t = (n*n + n) / 2;
  return t;
}
