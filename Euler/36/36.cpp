// Project Euler Problem 36
// Find how many numbers below 1 million are palindromes in both binary and decimal

// Note: the function reverse could be a single function that takes a base (radix)
// as an extra parameter

#include <iostream>

using namespace std;

const int MAX = 1E6;

bool reverse(long int);
bool binrev(long int);

bool reverse(long int n)
{
	long int forward = n;
	long int temp = 0;
	while (0 < n)
	{
		temp = temp*10 + n % 10;
		n = n/10;
	}
	return (temp == forward);
}

bool binrev(long int n)
{
	long int forward = n;
	long int temp = 0;
	while (0 < n)
	{
		temp = temp*2 + n % 2;
		n = n/2;
	}
	return (temp == forward);
}

int main()
{
	//int num = 585;
	//long int num = 719848917;
	//cout << binrev(num) << endl;
	long int sum = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (reverse(i) && binrev(i))
			sum += i;
	}
	cout << "The sum is: " << sum << endl;
	return 0;
}
