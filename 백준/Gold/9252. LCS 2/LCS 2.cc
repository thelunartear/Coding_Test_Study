#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    int n=a.size(), m=b.size();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i][j]});
        }
    }

    string lcs;
    int x=n,y=m;
    while(x>0&&y>0)
    {
        if(a[x-1]==b[y-1])
        {
            lcs+=a[x-1];
            x--;
            y--;
        }
        else if(dp[x-1][y]>dp[x][y-1])
        {
            x--;
        }
        else
        {
            y--;
        }
    }
    reverse(lcs.begin(),lcs.end());

    cout<<dp[n][m]<<"\n";
    if(dp[n][m]=!0)
        cout<<lcs;
}