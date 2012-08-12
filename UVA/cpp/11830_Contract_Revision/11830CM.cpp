/*
Chris McKnight
UVA 11830 Contract Revision
9/7/11
Homework 2
*/

#define DEBUG if(false)

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	char d,
		 n;
	bool nonzero = false;
	cin >> d;
	DEBUG cout << "d = " << d << endl;
	while (d != '0' && n != '0')
	{
		vector<char> val;
		cin.get(n);
		DEBUG cout << "n = " << n << endl;
		cin.get(n);
		DEBUG cout << "n = " << n << endl;
		while (n != '\n')
		{
			if (n != '0' && n != d)
				nonzero = true;
			if (n != d && nonzero)
			{
				DEBUG cout << "pushing " << n << endl;
				val.push_back(n);
			}
			cin.get(n);
		}
		if (!val.size()) cout << "0";
		for (int i = 0; i < val.size(); i++)
			cout << val[i];
		cout << endl;
		cin >> d;
	}
	return 0;
}