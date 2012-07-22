// Project euler problem 3
// Find largest prime factor of a number

#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

const long int SIZE = 600851475143;

int largestPrimeFactor(long number) {
        int i, j = 2;

        for (i = j; i <= number; i++) {
            if (number % i == 0) {
                number /= i;
                j = i;
                i--;
            }
        }

        return i;
    }

int main()
{
	int large = largestPrimeFactor(SIZE);
	// cout << largestPrimeFactor(13195) << endl;
	cout << large << endl;
	return 0;
}
