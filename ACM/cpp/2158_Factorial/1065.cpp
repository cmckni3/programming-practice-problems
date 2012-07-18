/*
Chris McKnight
ACM: Factorial
11/12/2011
*/

#include <iostream>
#include <math.h>

#define DEBUG if(false)

using namespace std;

int main(int argc, char** argv)
{
	int cases,
	    count;

	cin >> cases;
	count = 0;
	while (count < cases)
	{
		long int n,
		    zeros = 0,
		    fives = 0,
		    twos = 0;
		cin >> n;
		// this is equivalent to the latter in producing the same results and same run time
		/*int i = 5;
		bool stop = false;
		while (!stop)
		{
			int temp = floor(n / i);
			zeros += temp;
			if (temp < 1)
				stop = true;
			i *= 5;
		}*/
		DEBUG cout << "n = " << n << endl;
		for (int i = 5; i <= n; i *= 5)
		{
			zeros += floor(n / i);
		}
		cout << zeros << endl;
		count++;
	}
	return 0;
}
