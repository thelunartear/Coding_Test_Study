#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		stack<char> s;
		for (int j = 0; j < str.size(); j++)
		{
			if (!s.empty() && s.top() == str[j])
			{
				s.pop();
			}
			else
			{
				s.push(str[j]);
			}
		}
        if (s.empty())
		{
			ans++;
		}
	}
	cout << ans;
}