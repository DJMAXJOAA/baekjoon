#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	int min = 10000;

	cin >> n >> m;

	

	vector<vector<char>> v(n, vector<char>(m));
	

	for (int i = 0; i < n; i++)
	{
		char temp;
		for (int j = 0; j < m; j++)
		{
			cin >> temp;
			v[i][j] = temp;
		}
	}

	vector<vector<char>> temp(v);

	for (int a = 0; a < n-8; a++)
	{
		for (int b = 0; b < m-8; b++)
		{
			int count = 0;
			vector<vector<char>> v(temp);
			for (int c = 0; c < 8; c++)
			{
				for (int d = 0; d < 8; d++)
				{
					if (v[a + c][b + d] == 'B')
					{
						if (v[a + c + 1][b + d] == 'B')
						{
							v[a + c + 1][b + d] = 'W';
							count++;
						}
					}
				}
			}
			if (count < min) min = count;
		}
	}

	cout << min;


	return 0;
}