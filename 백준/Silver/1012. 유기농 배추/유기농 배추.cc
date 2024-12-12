#include <iostream>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

int arr[51][51];
bool isVisit[51][51];

int n,m,k;

void dfs(int x, int y)
{
    isVisit[x][y]=true;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx<0||ny<0||nx>=n||ny>=m||isVisit[nx][ny]==true||arr[nx][ny]==0)
            continue;
        dfs(nx,ny);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;

         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = 0;
                isVisit[i][j] = false;
            }
        }
        
        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            arr[x][y]=1;
        }

        int buer=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1 && !isVisit[i][j])
                {
                    dfs(i,j);
                    buer++;
                }
            }
        }
        cout<<buer<<"\n";
    }
}