#include <iostream>
#include <queue>
using namespace std;

int ans=0;
int n, m;
int virus[101][101];
bool isVisit[101]={0};
queue<int> q;

void Bfs(int s)
{
    q.push(s);
    isVisit[s]=true;

    while(!q.empty())
    {
        s=q.front();
        q.pop();

         for(int i=1;i<=n;i++)
        {
            if(virus[s][i]==1 && !isVisit[i])
            {
                isVisit[i]=true;
                q.push(i);
                ans++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        virus[x][y]=1;
        virus[y][x]=1;
    }
    Bfs(1);
    cout<<ans;
}