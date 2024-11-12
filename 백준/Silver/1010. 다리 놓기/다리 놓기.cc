#include <iostream>
using namespace std;

int dp[30][30];

int Combi(int n, int r)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            if(j==0||j==i)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];    
            }
        }
    }
    return dp[n][r];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<Combi(y,x)<<"\n";
    }
}