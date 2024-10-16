#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> graph[1001];
bool check[1001];

void DFS(int t)
{
    stack<int> s;
    s.push(t);
    check[t]=true;

    while(!s.empty())
    {
        int node=s.top();
        s.pop();

        for(int i:graph[node])
        {
            if(!check[i])
            {
                s.push(i);
                check[i]=true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    int comp=0;

    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            DFS(i);
            comp++;
        }
    }

    cout<<comp;
}