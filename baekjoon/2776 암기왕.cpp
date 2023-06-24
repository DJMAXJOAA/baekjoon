#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool search(vector<int> arr, int search);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m;
	int searc;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector<int> note1(n);
		for (int i = 0; i < n; i++)
		{
			cin >> note1[i];
		}
		sort(note1.begin(), note1.end());

		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> searc;
			/*if (search(note1, searc) == true)*/
			if(binary_search(note1.begin(), note1.end(), searc))
				cout << "1\n";
			else
				cout << "0\n";
		}
	}
	return 0;
}

bool search(vector<int> arr, int search)
{
	int front = 0;
	int back = arr.size();
	int mid;
	while (front<back)
	{
		mid = (front + back) / 2;
		if (arr[mid] == search)
		{
			return true;
		}
		else if (arr[mid] > search)
		{
			back = mid - 1;
		}
		else if (arr[mid] < search)
		{
			front = mid + 1;
		}
	}
	return false;
}