#include <iostream>
#include <queue>
using namespace std;

int n,m;
int miro[101][101];
bool visited[101][101]; 
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        for(int j=0;j<m;j++)
        {
            miro[i][j] = tmp[j]-'0';
        }
        tmp="";
    }
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0]=true;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

             // 방문하지 않은 곳 && 이동 가능한 곳 && 미로 내부일 경우
            if(nx>=0 && ny>=0 && nx<n && ny<m && miro[nx][ny] == 1 && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                miro[nx][ny] = miro[x][y] + 1; // 현재 위치에서 +1
                q.push({nx, ny});
            }
        }
    }

    // 목적지까지의 칸 수 출력
    cout << miro[n-1][m-1] << '\n';
}