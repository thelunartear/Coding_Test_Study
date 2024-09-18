#include <iostream>
using namespace std;

long long dp[1001];

void square(int n)
{
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    if(n>2)
    {
        for(int i=3;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%10007;
        }
    }
    cout<<dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    square(n);
}