#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n, score;
	cin >> n;

	int max = 0;
	int total = 0;

	for (int i = 0; i < n; ++i) {
		cin >> score;
		total += score;
		if (score > max) {
			max = score;
		}
	}

	printf("%f\n", 100.0 * total / n / max);

	return 0;
}