/*
Chris McKnight
UVA 11824: A Minimum Land Price
11/9/11
Time: ~20 minutes
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define DEBUG if(false)
#define PRICE 5E6

using namespace std;

bool mysort (int i,int j) { return (i>j); }

int main(int argc, char* argv[])
{
	int cases,
		land,
		count = 0;
	
	cin >> cases;
	while (count < cases)
	{
		vector<int> lands;
		int sum = 0;
		bool large = false;
		cin >> land;
		while (land != 0)
		{
			lands.push_back(land);
			DEBUG cout << land << endl;
			cin >> land;
		}
		sort(lands.begin(), lands.end(), mysort);
		
		vector<int>::iterator it;
		
		int i = 1;
		for (it = lands.begin(); it != lands.end(); it++)
		{
			int temp = 1;
			for (int j = 0; j < i; j++)
				temp *= *it;
			//sum += 2*(pow((double)*it, i));
			sum += 2*temp;
			if (sum < 0)
				large = true;
			i++;
		}
		
		if (sum > PRICE || large)
			cout << "Too expensive" << endl;
		else
			cout << sum << endl;
		
		count++;
	}
	return 0;
}