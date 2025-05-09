#include <bits/stdc++.h>
using namespace std;

int a[2001];
bool dp[2001][2001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>a[i];
        
    for(int i=1;i<=n;i++)
        dp[i][i]=1;
        
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i+1])
            dp[i][i+1]=1;
    }
    
    for(int l=3;l<=n;l++)
    {
        for(int i=1;i<=n-l+1;i++)
        {
            int j=i+l-1;
            if(a[i]==a[j]&&dp[i+1][j-1])
                dp[i][j]=1;
        }
    }
        
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int s,e;
        cin>>s>>e;
        cout<<dp[s][e]<<"\n";
    }
}