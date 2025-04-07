#include <bits/stdc++.h>
using namespace std;

int a[51][51];
bool isLand[51][51];

int dx[]={-1,0,1,0,-1,1,-1,1};
int dy[]={0,-1,0,1,-1,1,1,-1};

void bfs(int y,int x,int h,int w)
{
    queue<pair<int,int>> q;
    q.push({y,x});
    isLand[y][x]=1;

    while(!q.empty())
    {
        int cy=q.front().first;
        int cx=q.front().second;
        q.pop();
        for(int d=0;d<8;d++)
        {
            int ny=cy+dy[d];
            int nx=cx+dx[d];
            if(nx>=0&&nx<w&&ny>=0&&ny<h&&!isLand[ny][nx]&&a[ny][nx]==1)
            {
                isLand[ny][nx]=1;
                q.push({ny,nx});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        int w,h;
        cin>>w>>h;
        if(w==0&&h==0)  break;

        memset(a,0,sizeof(a));
        memset(isLand,0,sizeof(isLand));

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=0;

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(!isLand[i][j]&&a[i][j]==1)
                {
                    bfs(i,j,h,w);
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}