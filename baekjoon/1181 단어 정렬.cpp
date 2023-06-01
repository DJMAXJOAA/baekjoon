#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	for (int i = 0; i < 2; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
		cout << v[i] << endl;
	}


	return 0;
}