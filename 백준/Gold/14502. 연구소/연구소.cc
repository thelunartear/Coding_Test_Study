#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
int lab[8][8];
int temp[8][8];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };
int cnt = 0;
int ans;

void bfs()
{
	int virus[8][8];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			virus[i][j] = temp[i][j];
		}
	}

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (virus[i][j] == 2)
			{
				q.push({ i,j });
			}
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (virus[nx][ny] == 0)
				{
					virus[nx][ny] = 2;
					q.push({ nx,ny });
				}
			}
		}
	}

	int emp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (virus[i][j] == 0)
				emp++;
		}
	}
	ans = max(ans, emp);
}


void wall(int cnt)
{
	if (cnt == 3)
	{
		bfs();
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (temp[i][j] == 0)
				{
					temp[i][j] = 1;
					wall(cnt + 1);
					temp[i][j] = 0;
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> lab[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (lab[i][j] == 0)
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						temp[i][j] = lab[i][j];
					}
				}
				temp[i][j] = 1;
				wall(1);
				temp[i][j] = 0;
			}
		}
	}


	cout << ans;
}