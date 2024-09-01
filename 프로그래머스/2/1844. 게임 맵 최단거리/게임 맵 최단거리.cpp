#include <vector>
#include <queue>
using namespace std;

int n, m;
int miro[100][100];
bool visited[100][100];
queue<pair<int, int>> q;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int solution(vector<vector<int> > maps)
{
    n = maps.size();
    m = maps[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            miro[i][j] = maps[i][j];
            visited[i][j] = false;
        }
    }

    q.push({0, 0});
    visited[0][0] = true;
    miro[0][0] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m && miro[nx][ny] == 1 && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                miro[nx][ny] = miro[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    if (miro[n-1][m-1] == 1)
        return -1;
    else
        return miro[n-1][m-1];
}
