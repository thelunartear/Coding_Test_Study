#include <iostream>
#include <queue>
using namespace std;

int n,m,x,y;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int arr[1001][1001];
bool isVisit[1001][1001];
int ans[1001][1001];

void bfs(int x,int y)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    isVisit[x][y]=true;
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

            if(nx>=0&&nx<n&&ny>=0&&ny<m)
            {
                if(arr[nx][ny]==1 && !isVisit[nx][ny])
                {
                    isVisit[nx][ny]=true;
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
            cin>>arr[i][j];
            if(arr[i][j]==2)
            {
                x=i;
                y=j;
            }
            if(arr[i][j]==0)
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
            if(ans[i][j]==0 && arr[i][j]==1)
                cout<<-1<<' ';
            else
                cout<<ans[i][j]<<' ';
        }
        cout<<"\n";
    }
}