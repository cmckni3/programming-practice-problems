// Project Euler Problem 10
// Find the sum of prime numbers under 2 million

#include <iostream>
#include <vector>

using namespace std;

const long int SIZE = 2000000;

int numbers[SIZE];
vector<int> primes;

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
   long int sum = 0;
   while(it != end)
   {
	   sum += *it;
	   ++it;
   }
	cout << "The sum of the primes under 2 million: " << sum << endl;
}
