#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD=1000000007;
int dp[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1];
        if(i>=m)
            dp[i]=(dp[i-1]+dp[i-m])%MOD;
    }
    cout<<dp[n];
}