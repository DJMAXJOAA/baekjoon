#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	string str1 = "WBWBWBWB";
	string str2 = "BWBWBWBW";
	vector<vector<char>> v(n, vector<char>(m));
	vector<vector<char>> chess1(8, vector<char>(8));
	vector<vector<char>> chess2(8, vector<char>(8));

	for (int i = 0; i < 8; i += 2)
	{
		for (int j = 0; j < 8; j++)
		{
			chess1[i][j] = str1[j];
			chess1[i + 1][j] = str2[j];
			chess2[i][j] = str2[j];
			chess2[i + 1][j] = str1[j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < m; j++)
		{
			v[i][j] = temp[j];
		}
	}
	int min = 100;

	for (int a = 0; a < n - 7; a++)
	{
		for (int b = 0; b < m - 7; b++)
		{
			int count1 = 0;
			int count2 = 0;
			for (int y = 0; y < 8; y++)
			{
				for (int x = 0; x < 8; x++)
				{
					if (chess1[y][x] != v[y + a][x + b])
					{
						count1++;
					}
					if (chess2[y][x] != v[y + a][x + b])
					{
						count2++;
					}
				}
			}
			if (count1 < min) min = count1;
			if (count2 < min) min = count2;
		}
	}

	cout << min << endl;

	return 0;
}