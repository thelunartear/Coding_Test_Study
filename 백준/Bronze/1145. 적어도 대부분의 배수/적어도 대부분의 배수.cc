#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}

	int m = *min_element(n, n + 5);
	

	while (cnt < 3) {
		m++;
		cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (m % n[i] == 0)
				cnt++;
		}
	}
	cout << m << endl;
}