#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n = 1;
	char str[1000005];
	char* pstr = str;

	cin.getline(str, 1000005);

	if (*pstr == ' ' && *(pstr + 1) != ' ')
	{
		n--;
	}

	while (*pstr)
	{
		if (*pstr == ' ' && *(pstr + 1) != ' ')
		{
			if (*(pstr + 1) != '\0')
			{
				n++;
			}
		}
		pstr++;
	}

	cout << n;

	return 0;
}