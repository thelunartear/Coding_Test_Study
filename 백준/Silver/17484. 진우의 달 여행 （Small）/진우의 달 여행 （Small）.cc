#include <bits/stdc++.h>
using namespace std;

int a[6][6];
int dp[6][6][3];
int dy[]={-1,0,1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    for(int j=0;j<m;j++)
        for(int k=0;k<3;k++)
            dp[0][j][k]=a[0][j];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<3;k++)
            {
                int p=INT_MAX;
                for(int d=0;d<3;d++)
                {
                    if(d!=k)
                    {
                        int py=j+dy[d];
                        if(py>=0&&py<m)
                            p=min(p,dp[i-1][py][d]);
                    }
                }
                dp[i][j][k]=a[i][j]+p;
            }
        }
    }

    int ans=INT_MAX;
    for(int j=0;j<m;j++)
        for(int k=0;k<3;k++)
            ans=min(ans,dp[n-1][j][k]);

    cout<<ans;
}