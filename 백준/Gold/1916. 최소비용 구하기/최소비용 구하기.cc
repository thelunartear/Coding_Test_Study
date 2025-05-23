#include <bits/stdc++.h>
using namespace std;

const int INF=1e9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<pair<int,int>>> graph(n+1);

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
    }

    int st,ed;
    cin>>st>>ed;

    vector<int> dist(n+1,INF);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;

    dist[st]=0;
    pq.push({0,st});

    while(!pq.empty())
    {
        auto[cost,cur]=pq.top();
        pq.pop();

        if(dist[cur]<cost)  continue;
        for(auto[nxt,wgt]:graph[cur])
        {
            int nxtC=cost+wgt;
            if(nxtC<dist[nxt])
            {
                dist[nxt]=nxtC;
                pq.push({nxtC,nxt});
            }
        }
    }
    cout<<dist[ed];
}