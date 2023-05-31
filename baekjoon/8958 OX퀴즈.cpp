#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int num_repeat;
	cin >> num_repeat;

	for (int i = 0; i < num_repeat; i++)
	{
		int score = 0;
		int add_score = 0;

		char str[85];
		char* pstr = str;
		cin >> str;
		while (*pstr)
		{
			if (*pstr == 'O')
			{
				add_score += 1;
				score += add_score;
			}
			else
			{
				add_score = 0;
			}
			pstr++;
		}
		cout << score << endl;
	}

	return 0;
}