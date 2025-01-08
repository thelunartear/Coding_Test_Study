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
    dp[4]=0;

    for(int i=5;i<=n;i++)
    {
        if(dp[i-1]==1||dp[i-3]==1||dp[i-4]==1)
            dp[i]=0;
        else
            dp[i]=1;
    }

    if(dp[n]%2==0)
        cout<<"SK";
    else
        cout<<"CY";
}