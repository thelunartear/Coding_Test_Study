#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int dp[20];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[n];
}