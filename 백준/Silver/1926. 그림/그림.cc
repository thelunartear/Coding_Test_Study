#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n,m;
int board[501][501];
bool visited[501][501]; 
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>board[i][j];
        }
    }

    int ans = 0; // 그림의 개수
    int mx = 0; // 가장 넓은 그림의 넓이

    queue<pair<int,int>> q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==0 || visited[i][j])
                continue;
            ans++;
            visited[i][j]=1;
            q.push({i,j});
            int area=0;
            while(!q.empty())
            {
                area++;
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int dir=0;dir<4;dir++)
                {
                    int nx=x+dx[dir];
                    int ny=y+dy[dir];
                    if(nx<0 || nx>=n || ny<0 || ny>=m)
                        continue;
                    if(visited[nx][ny] || board[nx][ny] != 1)
                        continue;
                    visited[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
            mx = max(mx,area);
        }
    } 
    cout<<ans<<"\n"<<mx;
}