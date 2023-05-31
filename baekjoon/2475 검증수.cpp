#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int total = 0;
	int count;
	for (int i = 0; i < 5; i++)
	{
		cin >> count;
		total += count * count;
	}
	cout << total % 10;

	return 0;
}