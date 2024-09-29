#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s[9];
	int sum = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> s[i];
		sum += s[i];
	}

	sort(s, s + 9);

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - (s[i] + s[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j)
					cout << s[k] << endl;
				}
				return 0;
			}
		}
	}
}