#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> vp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;

    int w, v;
    for(int i=0;i<n;i++)
    {
        cin>>w>>v;
        vp.push_back({w,v});
    }

    vector<vector<int>> dp(n+1, vector<int>(k+1,0));

    for(int i=1;i<=n;i++)
    {
        int iw=vp[i-1].first;
        int iv=vp[i-1].second;
        for(int w=0;w<=k;w++)
        {
            if(iw<=w)
            {
                dp[i][w]=max(dp[i-1][w], dp[i-1][w-iw]+iv);
            }
            else
            {
                dp[i][w]=dp[i-1][w];
            }
        }
    }

    cout<<dp[n][k];
}