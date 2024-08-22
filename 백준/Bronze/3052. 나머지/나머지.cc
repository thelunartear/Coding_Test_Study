#include <iostream>
using namespace std;

int main()
{
	int ans = 0;
	int arr[42] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		a %= 42;
		arr[a]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] >= 1)
			ans++;
	}
	cout << ans;
}