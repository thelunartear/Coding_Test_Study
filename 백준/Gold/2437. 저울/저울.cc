#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    ll m=1;
    for(ll w:v)
    {
        if(w>m)
        {
            cout<<m;
            return 0;
        }
        m+=w;
    }
    cout<<m;
}