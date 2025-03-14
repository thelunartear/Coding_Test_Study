#include <iostream>
using namespace std;

int arr[1001][1001];
int dp[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0&&j==0)
                dp[i][j]=arr[i][j];
            else if(i==0)
                dp[i][j]=dp[i][j-1]+arr[i][j];
            else if(j==0)
                dp[i][j]=dp[i-1][j]+arr[i][j];
            else
                dp[i][j]=max(max(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+arr[i][j];
        }
    }

    cout<<dp[n-1][m-1];
}