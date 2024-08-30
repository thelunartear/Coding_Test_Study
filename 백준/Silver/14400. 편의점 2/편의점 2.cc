#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, x[100000], y[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	sort(x, x + n);
	sort(y, y + n);

	int x1 = x[(n - 1) / 2];
	int y1 = y[(n - 1) / 2];

	long sum = 0;

	for (int i = 0; i < n; i++) {
		sum += abs(x1 - x[i]);
		sum += abs(y1 - y[i]);
	}
	cout << sum << endl;
}