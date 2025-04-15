#include <bits/stdc++.h>
using namespace std;

int w[10001];
int d[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>w[i];

    if(n==1)
    {
        cout<<w[0];
        return 0;
    }

    if(n==2)
    {
        cout<<w[0]+w[1];
        return 0;
    }
    
    d[0]=w[0];
    d[1]=w[0]+w[1];
    d[2]=max({d[1],d[0]+w[2],w[1]+w[2]});

    for(int i=3;i<n;i++)
    {
        d[i]=max({d[i-1],d[i-2]+w[i],d[i-3]+w[i-1]+w[i]});
    }

    cout<<d[n-1];
}