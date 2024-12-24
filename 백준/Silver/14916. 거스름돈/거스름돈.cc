#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> dp(n+1,-1);

    dp[0]=0;
    dp[2]=1;
    dp[5]=1;
    
    for(int i=1;i<=n;i++)
    {
        if(i>=2&&dp[i-2]!=-1)
            dp[i]=dp[i-2]+1;
        if(i>=5&&dp[i-5]!=-1)
            dp[i]=(dp[i]==-1)?dp[i-5]+1:min(dp[i],dp[i-5]+1);
    }

    cout<<dp[n];
}