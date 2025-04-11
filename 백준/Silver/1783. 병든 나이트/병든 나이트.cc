#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    int ans=0;
    if(n==1)
        ans=1;
    if(n==2)
        ans=min(4,(m+1)/2);
    if(n>=3)
    {
        if(m<7)
            ans=min(4,m);
        else
            ans=m-2;
    }
    cout<<ans;
}