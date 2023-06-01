#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int x = 6;
	int y = 2;
	int w = 10;
	int h = 3;
	int min = 10000;

	cin >> x >> y >> w >> h;

	v.push_back(abs(x - w));
	v.push_back(abs(y - h));
	v.push_back(abs(x));
	v.push_back(abs(y));

	for (auto go : v)
	{
		if (go < min) min = go;
	}
	cout << min;

	return 0;
}