#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,ans=0;
    cin>>n>>k;
    int g[2][7]={0};

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a][b]++;
    }

    for(int i=0;i<=1;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(g[i][j]>0)
                ans+=(g[i][j]+k-1)/k;
        }
    }
    cout<<ans;
}