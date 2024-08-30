#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	string num;
	int ans = 0;
	bool isSub = false;
	cin >> str;

	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == '-' || str[i] == '+' || i == str.size())
		{
			if (isSub)
			{
				ans -= stoi(num);
			}
			else
			{
				ans += stoi(num);
			}
			num = "";
			if (str[i] == '-')
				isSub = true;
		}
		else
			num += str[i];
	}
	cout << ans;
}