#include <iostream>
using namespace std;

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

        int s[2][100001]={};

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s[i][j];
            }
        }

        int dp[2][100001]={0};
        dp[0][0]=s[0][0];
        dp[1][0]=s[1][0];

        dp[0][1]=s[1][0]+s[0][1];
        dp[1][1]=s[0][0]+s[1][1];

        for(int i=2;i<n;i++)
        {
            dp[0][i]=max(dp[1][i-1],dp[1][i-2])+s[0][i];
            dp[1][i]=max(dp[0][i-1],dp[0][i-2])+s[1][i];
        }
        cout<<max(dp[0][n-1],dp[1][n-1])<<"\n";
    }
}