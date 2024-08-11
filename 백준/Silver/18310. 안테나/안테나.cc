#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[200001] = { 0 };
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);
	ans = arr[(n - 1) / 2];
	cout << ans << endl;
}