#include <iostream>
using namespace std;

int n, r, c;
int ans = 0;

void Z(int x, int y, int z)
{
	if (x == r && y == c)
	{
		cout << ans;
		return;
	}
	else if (r < x + z && c < y + z && r >= x && c >= y)
	{
		Z(x, y, z / 2);
		Z(x, y + z / 2, z / 2);
		Z(x + z / 2, y, z / 2);
		Z(x + z / 2, y + z / 2, z / 2);
	}
	else
	{
		ans += z * z;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> r >> c;
	Z(0, 0, 1 << n);
}