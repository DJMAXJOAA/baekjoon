#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	int judarr[42] = { 0 };
	int judarr2[42] = { 0 };
	for (int i = 0; i < 42; i++)
	{
		judarr[i] = i;
	}

	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] = arr[i] % 42;
		for (int j = 0; j < 42; j++)
		{
			if (arr[i] == judarr[j])
			{
				judarr2[j]++;
				break;
			}
		}
	}

	for (int i = 0; i < 42; i++)
	{
		if (judarr2[i])
		{
			count++;
		}
	}

	cout << count;
	
	return 0;
}