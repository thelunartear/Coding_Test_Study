#include <bits/stdc++.h>
using namespace std;

vector<int> a[32001];
int b[32001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        b[y]++;
    }
    queue<int> q;

    for(int i=1;i<=n;i++)
    {
        if(b[i]==0)
            q.push(i);
    }

    while(!q.empty())
    {
        int c=q.front();
        q.pop();
        cout<<c<<' ';

        for(int n:a[c])
        {
            b[n]--;
            if(b[n]==0)
                q.push(n);
        }
    }
}