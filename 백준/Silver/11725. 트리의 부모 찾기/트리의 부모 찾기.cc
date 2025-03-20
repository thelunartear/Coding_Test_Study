#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& v, vector<int>& p)
{
    queue<int> q;
    q.push(start);
    p[start]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int i:v[cur])
        {
            if(p[i]==-1)
            {
                p[i]=cur;
                q.push(i);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<vector<int>> g(n+1);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> p(n+1,-1);
    bfs(1,g,p);
    for(int i=2;i<=n;i++)
        cout<<p[i]<<"\n";
}