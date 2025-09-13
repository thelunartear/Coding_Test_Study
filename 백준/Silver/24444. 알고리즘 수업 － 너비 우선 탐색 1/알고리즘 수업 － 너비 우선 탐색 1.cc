#include <bits/stdc++.h>
using namespace std;

int n,m,r;
vector<vector<int>> g(100001);
int isVisit[100001]={0,};
queue<int> q;
vector<int> vec(100001);

void bfs(int r)
{
    int cnt=0;
    isVisit[r]=1;
    q.push(r);
    vec[r]=++cnt;
    for(int i=1;i<=n;i++)
    {
        sort(g[i].begin(), g[i].end());
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:g[u])
        {
            if(isVisit[v]==0)
            {
                isVisit[v]=1;
                q.push(v);
                vec[v]=++cnt;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m>>r;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(r);

    for(int i=1;i<=n;i++)
    {
        cout<<vec[i]<<"\n";
    }
}