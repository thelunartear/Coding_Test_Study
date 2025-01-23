#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int arr[101][101];
bool isVisit[101][101]={0,};

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void bfs(int x, int y, int l)
{
    queue<pair<int,int>> q;
    isVisit[x][y]=true;
    q.push({x,y});

    while(!q.empty())
    {
        pair<int,int> a=q.front();
        q.pop();

        for(int d=0;d<4;d++)
        {
            int nx=a.first+dx[d];
            int ny=a.second+dy[d];
            if(nx>=0&&ny>=0&&nx<n&&ny<n&&!isVisit[nx][ny]&&arr[nx][ny]>l)
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
    int ml=-1;
    int mCnt=-1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            ml=max(arr[i][j],ml);
        }
    }

    for(int l=0;l<=ml;l++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                isVisit[i][j]=0;
            }
        }

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]>l && isVisit[i][j]==0)
                {
                    bfs(i,j,l);
                    cnt++;
                }
            }
        }
        mCnt=max(cnt,mCnt);
    }
    cout<<mCnt;
}