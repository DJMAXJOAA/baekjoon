#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int total = a * b * c;
	int judge = 0;
	int arr[10] = { 0 };

	while (total / 10)
	{
		judge = total % 10;
		arr[judge]++;
		total /= 10;
	}
	judge = total % 10;
	arr[judge]++;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}