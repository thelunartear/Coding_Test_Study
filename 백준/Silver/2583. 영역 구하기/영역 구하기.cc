#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int m, n, k;
int paper[100][100];
bool isVisit[100][100];
vector<int> areas;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void bfs(int x, int y) 
{
	int area = 0;
	queue<pair<int, int>> q;
	q.push({ x, y });
	isVisit[y][x] = true;

	while (!q.empty()) 
	{
		int x_ = q.front().first;
		int y_ = q.front().second;
		q.pop();
		area++;

		for (int i = 0; i < 4; i++) 
		{
			int nx = x_ + dx[i];
			int ny = y_ + dy[i];

			if (nx >= 0 && ny >= 0 && nx < n && ny < m && !isVisit[ny][nx] && paper[ny][nx] == 0) 
			{
				isVisit[ny][nx] = true;
				q.push({ nx, ny });
			}
		}
	}
	areas.push_back(area);
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> m >> n >> k;

	for (int i = 0; i < k; i++) 
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int y = y1; y < y2; y++) 
		{
			for (int x = x1; x < x2; x++) 
			{
				paper[y][x] = 1;
			}
		}
	}

	for (int y = 0; y < m; y++) 
	{
		for (int x = 0; x < n; x++) 
		{
			if (!isVisit[y][x] && paper[y][x] == 0) 
			{
				bfs(x, y);
			}
		}
	}

	sort(areas.begin(), areas.end());

	cout << areas.size() << "\n";
	for (int area : areas) 
	{
		cout << area << ' ';
	}
	cout << "\n";
}