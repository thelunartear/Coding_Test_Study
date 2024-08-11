#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (vec[i] == 0)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (vec[j] != 0)
				{
					vec[j] = 0;
					break;
				}		
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		ans += vec[i];
	}

	cout << ans;
}