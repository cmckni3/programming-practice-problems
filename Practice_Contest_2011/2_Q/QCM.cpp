/*
Chris McKnight
Programming Contest Practice Problem 2: Q
10/15/11
*/

#include <iostream>
#include <string>
#include <vector>

#define DEBUG if(false)
#define DEBUG2 if(false)

using namespace std;

int main()
{
	int cases,
	    count = 0;
	cin >> cases;
	while (count < cases)
	{
		int items,
		    ops,
		    a,
		    b;
		string temp;
		vector<string> l;
		cin >> items >> ops;
		vector<string> s(items);
		for (int i = 0; i < items; i++)
		{
			cin >> temp;
			l.push_back(temp);
			s[i] = "0";
			DEBUG2 cout << l[i] << endl;
		}
		
		for (int i = 0; i < ops; i++)
		{
			cin >> a >> b;
			DEBUG cout << "from " << a << "(" << l[a-1] <<")";
			DEBUG cout << " to " << b << endl;
			string temp = l[a-1];
			DEBUG2 cout << "replacing " << temp << " at " << (b-1) << endl;
			//s.insert(s.begin()+b, temp);
			s[b-1] = temp;
			DEBUG cout << "setting " << l[a-1] << " to 0" << endl;
			l[a-1] = "0";
		}
		
		for (int i = 0; i < items; i++)
		{
			if (s[i] == "0")
			{
				DEBUG cout << i << " is 0" << endl;
				bool found = false;
				int j = 0;
				while (!found && j < items)
				{
					if (l[j] != "0")
					{
						s[i] = l[j];
						l[j] = "0";
						found = true;
					}
					j++;
				}
			}
		}
		
		DEBUG cout << "print out l" << endl;
		for (int i = 0; i < items; i++)
			DEBUG cout << l[i] << " ";
		DEBUG cout << endl;
		
		for (int i = 0; i < items; i++)
			cout << s[i] << " ";
		cout << endl;
		count++;
	}
	return 0;
}
