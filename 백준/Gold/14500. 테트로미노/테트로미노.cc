#include <iostream>
using namespace std;

int n,m,ans=0;
int arr[501][501];
bool isVisit[501][501];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void dfs(int x,int y,int depth,int sum)
{
    if(depth==4)
    {
        ans=max(ans,sum);
        return;
    }

    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx<0||ny<0||nx>=n||ny>=m)    continue;
        if(isVisit[nx][ny])     continue;

        isVisit[nx][ny]=true;
        dfs(nx,ny,depth+1,sum+arr[nx][ny]);
        isVisit[nx][ny]=false;
    }
}

void exceptshape(int x,int y)
{
    //ㅗ
    if(x-1>=0 && x+1<n && y+1<m && y-1>=0)
    {
        int sum=arr[x][y]+arr[x-1][y]+arr[x][y-1]+arr[x][y+1];
        ans=max(ans,sum);
    }
    //ㅜ
    if(x+1<n && y+1<m && y-1>=0)
    {
        int sum=arr[x][y]+arr[x+1][y]+arr[x][y-1]+arr[x][y+1];
        ans=max(ans,sum);
    }
    //ㅏ
    if(x-1>=0 && x+1<n && y+1<m)
    {
        int sum=arr[x][y]+arr[x-1][y]+arr[x+1][y]+arr[x][y+1];
        ans=max(ans,sum);
    }
    //ㅓ
    if(x-1>=0 && x+1<n && y-1>=0)
    {
        int sum=arr[x][y]+arr[x-1][y]+arr[x+1][y]+arr[x][y-1];
        ans=max(ans,sum);
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
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            isVisit[i][j]=true;
            dfs(i,j,1,arr[i][j]);
            isVisit[i][j]=false;
            exceptshape(i,j);
        }
    }

    cout<<ans;
}