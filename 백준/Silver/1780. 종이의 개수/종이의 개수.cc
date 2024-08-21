#include <iostream>
using namespace std;

int paper[2200][2200];
int ans1 = 0, ans0 = 0, ans_1 = 0;

bool isSame(int x, int y, int n)
{
	int num = paper[x][y];

	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (num != paper[i][j])
				return false;
		}
	}
	return true;
}

void Div(int x, int y, int n)
{
	if (isSame(x, y, n))
	{
		if (paper[x][y] == -1)
			ans_1++;
		else if (paper[x][y] == 0)
			ans0++;
		else if (paper[x][y] == 1)
			ans1++;
	}
	else
	{
		int vol = n / 3;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				Div(vol * i + x, vol * j + y, vol);
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> paper[i][j];
		}
	}

	Div(0, 0, n);

	cout << ans_1 << "\n" << ans0 << "\n" << ans1;
}