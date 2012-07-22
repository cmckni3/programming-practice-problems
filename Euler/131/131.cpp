/*
Project Euler Problem 131
There are some prime values, p, for which
there exists a positive integer, n, such that the expression n^3 + n^2*p
is a perfect cube.

For example, when p = 19, 8^3 + 8^2*19 = 12^3.

What is perhaps most surprising is that for each prime with
this property the value of n is unique, and there are only
four such primes below one-hundred.

How many primes below one million have this remarkable property?

*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int MAX = 1E6;

int numbers[MAX];
vector<int> primes;
vector<int> cubes;
vector<int> pcubes;
int dcubes[MAX] = {0};

void init()
{
	for(int x = 0; x < MAX; x++) {
      numbers[x] = x;
   }
   numbers[1] = 0;
   for(long int x = 2; x < MAX; x++) {
      for(long int y = x; x*y < MAX && x*y >= 0; y++) {
         numbers[(long long)x*y] = 0;
      }
   }
   for(int x = 0; x < MAX; x++) {
      if(numbers[x] != 0) {
         primes.push_back(numbers[x]);
      }
   }

	for(int x = 1; x < MAX; x++)
	{
		cubes.push_back(x*x*x);
	}

	for(int a = 1; a < sqrt(MAX); a++)
	{
		for(int b = 1; b < sqrt(MAX); b++)
		{
			long int p = (b - a)*( (b*b) + (a*b) + (a*a) );
			if (p < 1E6 && p > 0)
			{
				dcubes[p] = 1;
			}
		}
	}
}

int main()
{
	init();
	vector<int>::iterator it = primes.begin();
	vector<int>::iterator end = primes.end();

	int count = 0;
	while (it != end)
	{
		if (dcubes[*it])
			count++;
		++it;
	}
	cout << "Number of primes below one million that satisfy n^3 + n^2*p: ";
	cout << count << endl;
	return 0;
}
