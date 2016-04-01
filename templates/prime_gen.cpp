#include <iostream>
#include <vector>

const long int SIZE = 1000000;

int numbers[SIZE];
std::vector<int> primes;

int main(void) {
   for(int x = 0; x < SIZE; x++) {
      numbers[x] = x;
   }
   numbers[1] = 0;
   for(long int x = 2; x < SIZE; x++) {
      for(long int y = x; x*y < SIZE && x*y >= 0; y++) {
         numbers[(long long)x*y] = 0;
      }
   }
   for(int x = 0; x < SIZE; x++) {
      if(numbers[x] != 0) {
         primes.push_back(numbers[x]);
      }
   }
   std::vector<int>::iterator it = primes.begin();
   std::vector<int>::iterator end = primes.end();
   std::cerr << "int primes [" << primes.size() << "] = { ";
   while(it != end) {
      std::cerr << *it << ", ";
      ++it;
   }
}
