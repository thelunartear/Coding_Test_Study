#include <bits/stdc++.h>
using namespace std;

vector<int> p(10001,-1);
int find(int x)
{
    if(p[x]<0) return x;
    return p[x]=find(p[x]);
}

bool uni(int u, int v)
{
    u=find(u);
    v=find(v);
    if(u==v)    return false;
    if(p[u]>p[v])   swap(u,v);
    p[u]+=p[v];
    p[v]=u;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v,e;
    cin>>v>>e;

    vector<tuple<int,int,int>> edg;
    for(int i=0;i<e;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edg.push_back({c,a,b});
    }

    sort(edg.begin(),edg.end());

    int mst=0;
    for(auto[w,u,v]:edg)
    {
        if(uni(u,v))    mst+=w;
    }
    cout<<mst;
}