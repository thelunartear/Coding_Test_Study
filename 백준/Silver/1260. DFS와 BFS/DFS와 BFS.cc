#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int g[1001][1001];
bool visited[1001];
queue<int> q;

void dfs(int v)
{
	visited[v] = true;
	cout << v << ' ';

	for (int i = 1; i <= n; i++)
	{
		if (g[v][i] == 1 && visited[i] == 0)
		{
			dfs(i);
		}
	}
}

void bfs(int v)
{
	q.push(v);
	visited[v] = true;
	cout << v << ' ';

	while (!q.empty())
	{
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++)
		{
			if (g[v][i] == 1 && visited[i] == 0)
			{
				q.push(i);
				visited[i] = true;
				cout << i << ' ';
			}
		}
	}
}

void reset()
{
	for (int i = 1; i <= n; i++)
	{
		visited[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		g[a][b] = 1;
		g[b][a] = 1;
	}

	reset();
	dfs(v);

	cout << "\n";

	reset();
	bfs(v);
}