#include <bits/stdc++.h>
using namespace std;

char rgb1[101][101];
char rgb2[101][101];

int n;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
bool isVisit[101][101];

void bfs(int x, int y, char rgb[101][101])
{
    queue<pair<int,int>> q;
    isVisit[x][y]=1;
    q.push({x,y});
    char color=rgb[x][y];

    while(!q.empty())
    {
        int cx=q.front().first;
        int cy=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&!isVisit[nx][ny]&&rgb[nx][ny]==color)
            {
                isVisit[nx][ny]=1;
                q.push({nx,ny});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>rgb1[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(rgb1[i][j]=='R') rgb2[i][j]='R';
            else if(rgb1[i][j]=='G')    rgb2[i][j]='R';
            else rgb2[i][j]=rgb1[i][j];
        }
    }

    int ans1=0,ans2=0;

    memset(isVisit,0,sizeof(isVisit));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!isVisit[i][j])
            {
                bfs(i,j,rgb1);
                ans1++;
            }
        }
    }

    memset(isVisit,0,sizeof(isVisit));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!isVisit[i][j])
            {
                bfs(i,j,rgb2);
                ans2++;
            }
        }
    }

    cout<<ans1<<' '<<ans2;
}