#include <iostream>
#include <queue>
using namespace std;

int n,m,x,y;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int grid[1001][1001]={0,};
bool isVisited[1001][1001];
int ans[1001][1001]={0,};

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x,y});
    isVisited[x][y]=true;
    ans[x][y]=0;

    while(!q.empty())
    {
        int cx=q.front().first;
        int cy=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx=cx+dx[i];
            int ny=cy+dy[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m)
            {
                if(grid[nx][ny]==1 && !isVisited[nx][ny])
                {
                    isVisited[nx][ny]=true;
                    ans[nx][ny]=ans[cx][cy]+1;
                    q.push({nx,ny});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]==2)
            {
                x=i;
                y=j;
            }
            if(grid[i][j]==0)
            {
                ans[i][j]=0;
            }
        }
    }

    bfs(x,y);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ans[i][j]==0 && grid[i][j]==1)
            {
                cout<<-1<<" ";
            }
            else
            {
                cout<<ans[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}