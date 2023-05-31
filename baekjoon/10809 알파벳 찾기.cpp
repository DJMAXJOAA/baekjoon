#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char alphabet[26];
	int alphabet_count[26];
	char str[105];
	char* pstr = str;

	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 97 + i;
		alphabet_count[i] = { -1 };
	}

	cin >> str;

	int count = 0;
	while (*pstr)
	{
		for (int i = 0; i < 26; i++)
		{
			if (*pstr == alphabet[i] && alphabet_count[i] < 0)
			{
				alphabet_count[i] = count;
				break;
			}
		}
		pstr++;
		count++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphabet_count[i] << " ";
	}
	

	return 0;
}