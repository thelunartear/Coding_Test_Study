#include <iostream>
using namespace std;

int dp[1000001]={};

int solution(int n)
{
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;

    if(n<=2)
        return dp[n];
    
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%15746;
    }
    return dp[n]%15746;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<solution(n);
}