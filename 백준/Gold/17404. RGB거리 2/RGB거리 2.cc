#include <bits/stdc++.h>
using namespace std;

int rgb[1001][3];
int dp[1001][3];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>rgb[i][0]>>rgb[i][1]>>rgb[i][2];
    }

    int ans=INT_MAX;

    for(int r=0;r<3;r++)
    {
        for(int i=0;i<3;i++)
        {
            if(i==r)
                dp[0][i]=rgb[0][i];
            else
                dp[0][i]=1e9;
        }

        for(int i=1;i<n;i++)
        {
            dp[i][0]=rgb[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=rgb[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=rgb[i][2]+min(dp[i-1][0],dp[i-1][1]);
        }

        for(int l=0;l<3;l++)
        {
            if(l!=r)
            {
                ans=min(ans,dp[n-1][l]);
            }
        }
    }
    cout<<ans;
}