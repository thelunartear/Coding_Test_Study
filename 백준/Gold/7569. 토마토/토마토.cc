#include <iostream>
#include <queue>
using namespace std;

int n,m,h;
int box[101][101][101];

int dx[]={0,1,0,-1,0,0};
int dy[]={1,0,-1,0,0,0};
int dz[]={0,0,0,0,1,-1};

queue<pair<pair<int, int>, int>> q;

void bfs()
{
    while(!q.empty())
    {
        int x=q.front().first.first;
        int y=q.front().first.second;
        int z=q.front().second;
        q.pop();

        for(int i=0;i<6;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            int nz=z+dz[i];

            if(nx>=0&&ny>=0&&nz>=0&&nx<n&&ny<m&&nz<h)
            {
                if(box[nx][ny][nz]==0)
                {
                    box[nx][ny][nz]=box[x][y][z]+1;
                    q.push({{nx,ny},nz});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>m>>n>>h;

    for(int k=0;k<h;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>box[i][j][k];
                if(box[i][j][k]==1)
                {
                    q.push({{i,j},k});
                }
            }
        }
    }

    bfs();

    int result=0;
    for(int k=0;k<h;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(box[i][j][k]==0)
                {
                    cout<<-1<<"\n";
                    return 0;
                }
                result=max(result, box[i][j][k]);
            }
        }
    }
    cout<<result-1<<"\n";
}