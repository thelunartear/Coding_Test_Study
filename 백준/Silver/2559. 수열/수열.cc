#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[100000];
	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	int idx = 0;
	int max_val = -10000004;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		idx++;
		if (idx == k) {
			max_val = max(max_val, sum);
			sum -= arr[i - k + 1];
			idx--;
		}
	}
	cout << max_val << endl;
}