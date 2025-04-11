#include <bits/stdc++.h>
using namespace std;

map<int,int> x,y;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        x[a]++;
        y[b]++;
    }

    for(auto a:x)
    {
        if(a.second>=2)
            ans++;
    }
    for(auto b:y)
    {
        if(b.second>=2)
            ans++;
    }
    cout<<ans;
}