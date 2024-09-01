#include <iostream>
#include <string>
using namespace std;

int n;
int quad[64][64];

bool IsSame(int x, int y, int q)
{
	for (int i = x; i < x + q; i++)
	{
		for (int j = y; j < y + q; j++)
		{
			if (quad[x][y] != quad[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

void QuadTree(int x, int y, int q)
{
	if (IsSame(x, y, q))
	{
		cout << quad[x][y];
	}
	else
	{
		cout << '(';
		QuadTree(x, y, q / 2);
		QuadTree(x, y + q / 2, q / 2);
		QuadTree(x + q / 2, y, q / 2);
		QuadTree(x + q / 2, y + q / 2, q / 2);
		cout << ')';
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			quad[i][j] = str[j] - '0';
		}
	}

	QuadTree(0, 0, n);
}