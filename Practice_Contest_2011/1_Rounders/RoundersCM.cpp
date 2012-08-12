/*
Chris McKnight
Practice Contest Problem 1: Rounders
10/21/11
*/

#include <iostream>

#define DEBUG if(true)
#define DEBUG2 if(false)

using namespace std;

int main(int argc, char* argv[])
{
	int cases,
		count = 0;
	
	cin >> cases;
	cin.ignore(1);			// ignore newline
	while (count < cases)
	{
		char round[10],
			 ch;
		int i = 0;			// count of characters on line
		cin.get(ch);
		while (ch != '\n')
		{
			DEBUG2 cout << ch;
			round[i] = ch;
			cin.get(ch);
			i++;
		}
		DEBUG2 cout << endl;
		
		if (i < 2)
			cout << round[0] << endl;
		else
		{
			for (int j = i; j > 1; j--)
			{
				if ((round[j-1] - '0') >= 5)
				{
					round[j-1] = '0';
					round[j-2]++;
				}
				else
					round[j-1] = '0';
			}
			
			for (int j = 0; j < i; j++)
			{
				if (j == 0 && round[j] == ':')
					cout << "10";
				if (round[j] != ':')
					cout << round[j];
			}
			cout << endl;
		}
		count++;
	}
	return 0;
}