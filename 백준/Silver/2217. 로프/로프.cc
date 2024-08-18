#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main()
{
	int n;
	cin >> n;
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		ans = max(ans, arr[i] * (n - i));
	}
	cout << ans;
}