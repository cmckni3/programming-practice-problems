// Project Euler problem 35
// Find the number of circular primes below 1 million

// TODO: remove non-circular rotations
// ie 197's permuatations should only be
// 197, 719, and 971 - DONE

// Make searching faster, ie build one million one element array for numbers
// 0 - 1E6 containing 0 (not prime) or 1 (prime) - DONE


#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define DEBUG if(false)
#define DEBUG2 if(false)
#define DEBUG3 if(false) // print out permutations or not

const long int SIZE = 1E6;

using namespace std;

int numbers[SIZE];
vector<int> primes;
int pr[SIZE] = {0};

bool find(int n)
{
  bool found = false;
  /*
  vector<int>::iterator it = primes.begin();
  vector<int>::iterator end = primes.end();

  while (it != end)
  {
  if (*it == n) return true;
  ++it;
  }
  */
  if (numbers[n]) return true;

  return found;
}

// Finds circular permutations
bool permute(string n, int onum)
{
  bool allp = true;

  int d = n.length();
  int count = 0;

  DEBUG3 cout << "d = " << d << endl;

  if (!find(onum)) allp = false;

  DEBUG3 cout << "onum = " << onum << endl;

  while (count < (d-1))
  {
    for (int i = 1; i < d; i++)
    {
      char temp = n[(i-1)%d];
      n[(i-1)%d] = n[i%d];
      n[i%d] = temp;
    }

    int num = 0;
    for (int i = 0; i < d; i++)
    {
      DEBUG3 cout << n[i] << endl;
      num = num*10 + (n[i] - '0');
    }

    DEBUG3 cout << "num = " << num << endl;

    if (!find(num)) allp = false;
    count++;
  }

  return allp;
}

/*
// Finds permutations of number entered
// Note: the arrays vals and orig should be sorted to generate all permutations
bool permute(string n)
{
  bool allp = true;
  int d = n.length();

  DEBUG2 cout << d << endl;

  int nfac = 1;
  for (int i = d; i > 0; i--)
    nfac *= i;

  DEBUG cout << "number of permutations = " << nfac << endl;

  int vals[d], orig[d];

  for (int i = 0; i < d; i++)
    vals[i] = n[i] - '0';

  orig = vals;

  do
  {
    int num = 0;
    for (int i = 0; i < d; i++)
    {
      num = num*10 + vals[i];
    }

    if (!find(num))	allp = false;
    DEBUG3 cout << num << endl;
  } while (next_permutation(vals, vals+d));
  return allp;
}*/

int main()
{
  for(int x = 0; x < SIZE; x++)
  {
    numbers[x] = x;
  }
  numbers[1] = 0;
  for(long int x = 2; x < SIZE; x++)
  {
    for(long int y = x; x*y < SIZE && x*y >= 0; y++)
    {
      numbers[(long long)x*y] = 0;
    }
  }

  for(int x = 0; x < SIZE; x++)
  {
    if(numbers[x] != 0)
    {
      primes.push_back(numbers[x]);
    }
  }

  vector<int>::iterator it = primes.begin();
  vector<int>::iterator end = primes.end();
  //cout << "int primes [" << primes.size() << "] = { ";
  int circ = 0;
  while(it != end)
  {
    DEBUG3 cout << "permuting " << *it << endl;
    //cout << *it << ", ";
    stringstream s;
    s << *it;

    if (permute(s.str(), *it)) circ++;
    ++it;
  }

  cout << "Total circular primes under one million: " << circ << endl;
  //cout << "};" << endl;
  return 0;
}
