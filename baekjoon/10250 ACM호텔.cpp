#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct Allot
{
	int h;
	int w;
	int n;
};

int main()
{
	int t;
	
	int room_number = 0;

	cin >> t;

	vector<Allot> allot(t);

	for (int i = 0; i < t; i++)
	{
		cin >> allot[i].h >> allot[i].w >> allot[i].n;
	}

	for (int x = 0; x < t; x++)
	{
		int temp = allot[x].n;
		for (int i = 1; i <= allot[x].w; i++)
		{
			for (int j = 1; j <= allot[x].h; j++)
			{
				temp--;
				room_number = j * 100 + i;
				if (temp == 0)
				{
					cout << room_number << endl;
					break;
				}
				
			}
			if (temp == 0)
			{
				break;
			}
		}
	}

	return 0;
}