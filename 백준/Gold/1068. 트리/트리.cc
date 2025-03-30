#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> tree[51];
int del;
int root;

int sol(int x)
{
    if(x==del)  return 0;
    if(tree[x].empty())    return 1;
    if(tree[x].size()==1 && tree[x][0]==del)    return 1;
    int ret=0;
    for(auto nxt:tree[x])
        ret+=sol(nxt);
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t==-1)
        {
            root=i;
            continue;
        }
        tree[t].push_back(i);
    }
    cin>>del;
    cout<<sol(root)<<"\n";
}