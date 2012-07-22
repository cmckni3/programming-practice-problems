// Project Euler problem 4
// Finds the largest palindrome that is the product of two 3 digit numbers

#include <iostream>

using namespace std;

const int MAX = 999;

int reverse(int n)
{
	int result = 0;
	while (0 < n)
	{
		result = result*10 + n % 10;
		n = n / 10;
	}
	return result;
}

int main()
{
	int max = 0;
	int maxi = 0;
	int maxj = 0;
	for (int i = MAX; i > 99; i--)
	{
		for (int j = MAX; j > 99; j--)
		{
			int temp = i*j;
			int rev = reverse(temp);
			if (temp == rev)
			{
				if (temp > max)
				{
					max = temp;
					maxi = i;
					maxj = j;
				}
			}
		}
	}
	cout << "max is " << maxi << " * " << maxj;
	cout << " = " << max << endl;
	return 0;
}
