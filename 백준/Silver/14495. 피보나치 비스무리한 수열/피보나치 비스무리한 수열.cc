#include <bits/stdc++.h>
using namespace std;

long long d[117];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    d[0]=0;
    d[1]=1;
    d[2]=1;
    d[3]=1;
    for(int i=4;i<=116;i++)
        d[i]=d[i-1]+d[i-3];

    cout<<d[n];
}