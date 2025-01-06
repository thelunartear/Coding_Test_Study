#include <iostream>
using namespace std;

int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    dp[1]=0;
    dp[2]=1;
    dp[3]=0;

    for(int i=4;i<=n;i++)
    {
        if(dp[i-1]==0 || dp[i-3]==0)
            dp[i]=1;
        else
            dp[i]=0;
    }

    if(dp[n]==0)
        cout<<"CY";
    else
        cout<<"SK";
}