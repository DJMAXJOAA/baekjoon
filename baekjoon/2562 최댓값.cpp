#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int arr[10];
	int max = 0;
	int n = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			n = i + 1;
		}
	}
	cout << max << endl;
	cout << n;

	return 0;
}