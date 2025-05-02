#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lit[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>lit[i];

    int st=0, en=n-1;
    ll sum1=2e9+1;
    int ans1=0,ans2=n-1;
    while(st<en)
    {
        ll sum2=lit[st]+lit[en];
        if(abs(sum2)<sum1)
        {
            sum1=llabs(sum2);
            ans1=st;
            ans2=en;
        }

        if(sum2<0)
            st++;
        else
            en--;
    }
    cout<<lit[ans1]<<' '<<lit[ans2];
}