#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		int repeat2;
		char str[25] = { 0 };
		char* pstr = str;
		
		cin >> repeat2;
		cin >> str;
		while (*pstr)
		{
			for (int j = 0; j < repeat2; j++)
			{
				cout << *pstr;
			}
			pstr++;
		}
		cout << endl;
	}

	return 0;
}