#include <bits/stdc++.h>
using namespace std;

int a[21];
int dp[21][10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            dp[i][0]=1;
        }
        int m;
        cin>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=0;

                if(i-1>=0)
                {
                    dp[i][j]+=dp[i-1][j];
                }
                if(j-a[i]>=0)
                {
                    dp[i][j]+=dp[i][j-a[i]];
                }
            }
        }
        cout<<dp[n-1][m]<<"\n";
    }
}