#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> parent(n+1,-1);

    queue<int> q;
    q.push(1);
    parent[1]=0;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        for(int i:adj[current])
        {
            if(parent[i]==-1)
            {
                parent[i]=current;
                q.push(i);
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        cout<<parent[i]<<"\n";
    }
}