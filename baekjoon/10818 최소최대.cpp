#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int number;
	int max = -1000005;
	int min = 1000005;
	cin >> number;

	int* arr = new int[number];

	for (int i = 0; i < number; i++)
	{
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	cout << min << " " << max;

	delete[] arr;
	arr = nullptr;

	return 0;
}