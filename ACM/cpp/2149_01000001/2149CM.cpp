/*
Chris McKnight
ACM 2149: 01000001
*/

#include <iostream>

#define DEBUG if(false)
#define DEBUG2 if(true)
const int MAX_LENGTH = 83;

using namespace std;

int main(int argc, char* argv[])
{
	int cases,
	    count = 0;
	char ch = '0';
	cin >> cases;
	DEBUG cout << cases << endl;
	while (count < cases)
	{
		int ACount = 0,
		    BCount = 0;
		while (ch != ' ' && ACount < 8)
		{
			cin >> ch;
			DEBUG2 cout << ch;
ACount++;
		}
		DEBUG2 cout << endl;
		DEBUG cout << count << endl;	
		count++;
	}	
	return 0;
}
