#include <iostream>
using namespace std;

int dp[17]={0,};
int t[16]={0,};
int p[16]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>t[i]>>p[i];
    }

    for(int i=n;i>=1;i--)
    {
        dp[i]=dp[i+1];
        
        if(i+t[i]-1<=n)
        {
            dp[i]=max(dp[i],p[i]+dp[i+t[i]]);
        }
    }

    cout<<dp[1];
}