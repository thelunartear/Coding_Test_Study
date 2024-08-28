#include <iostream>
#include <queue>
using namespace std;

int n, m;
int box[1001][1001];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

queue<pair<int, int>> q;

void bfs()
{
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && ny >= 0 && nx < n && ny < m)
			{
				if (box[nx][ny] == 0)
				{
					box[nx][ny] = box[x][y] + 1;
					q.push({ nx,ny });
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

	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> box[i][j];
			if (box[i][j] == 1)
			{
				q.push({ i,j }); // 익은 토마토의 위치를 큐에 추가
			}
		}
	}

	bfs();

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j] == 0) // 익지 않은 토마토가 남아 있는 경우
			{
				cout << -1 << "\n";
				return 0;
			}
			result = max(result, box[i][j]);
		}
	}
    // 최소 일수 출력
	cout << result - 1 << "\n";
}