#include <iostream>
#include <queue>
using namespace std;

int l;
int chess[301][301];
bool visited[301][301];
int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {2,1,-1,-2,-2,-1,1,2};

void dfs(int startX, int startY, int targetX, int targetY)
{
    queue<pair<int, int>> q;
    q.push({startX,startY});
    visited[startX][startY]=true;
    chess[targetX][targetY]=0;

    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        if(x==targetX && y==targetY)
        {
            cout<<chess[x][y]<<"\n";
        }

        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(nx>=0 && ny>=0 && nx<l && ny<l && !visited[nx][ny])
            {
                visited[nx][ny]=true;
                chess[nx][ny]=chess[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
}

void reset()
{
    for(int i=0; i<l; i++) 
    {
        for(int j=0; j<l; j++) 
        {
            visited[i][j]=false;
            chess[i][j]=0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; // 테스트 케이스 개수
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        int startX, startY, targetX, targetY;
        cin>>startX>>startY;
        cin>>targetX>>targetY;
        reset();
        dfs(startX, startY, targetX, targetY);
    }
}