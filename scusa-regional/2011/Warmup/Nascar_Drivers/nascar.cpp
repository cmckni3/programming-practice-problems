/*



*/

#include <iostream>

using namespace std;

const int MAX = 1024;				// line buffer size

int main (int argc, char * const argv[])
{
	int n, count;
	cin >> n;
	string number;
	char name[MAX + 1];
	count = 0;
	while (count < n)
	{
		cin >> number;
		char space;
		cin.get(space);			// eat the space
		cin.getline(name, MAX, '\n');
		cout << name << " drives car number " << number << endl;
		count++;
	}
    return 0;
}
