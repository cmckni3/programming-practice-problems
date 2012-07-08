/*
Chris McKnight
UVA 11850: Alaska
11/9/11
Time: 16 minutes
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define DEBUG if(false)
#define DEBUG2 if(false)

using namespace std;

const char results[2][11] = { "IMPOSSIBLE", "POSSIBLE" };
const int DIST = 200;
const int minAtEnd = 1322;

bool descending (int i,int j) { return (i>j); }

int main(int argc, char* argv[])
{
	int numStations,
		location;
	
	cin >> numStations;
	while (numStations != 0)
	{
		vector<int> stationsAsc;
		for (int i = 0; i < numStations; i++)
		{
			cin >> location;
			DEBUG2 cout << "location " << i << " = " << location << endl;
			stationsAsc.push_back(location);
		}
		
		// sort fueling stations in ascending order
		sort(stationsAsc.begin(), stationsAsc.end());
		
		bool startOutOfFuel = false,
			 endOutOfFuel = false;
		// check to see if car runs out of fuel on return trip
		if (stationsAsc[stationsAsc.size()-1] < minAtEnd)
			endOutOfFuel = true;
		else
		{
			// check that distance between consecutive fueling stations is greater than 200
			for (int i = 1; i < stationsAsc.size(); i++)
			{
				int current = stationsAsc[i] - stationsAsc[i-1];
				DEBUG cout << "current = " << current << endl;
				if (current > DIST)
				{
					startOutOfFuel = true;
					break;
				}
			}
		}
		
		if (startOutOfFuel || endOutOfFuel)
			cout << results[0] << endl;
		else
			cout << results[1] << endl;
		cin >> numStations;
	}
	return 0;
}