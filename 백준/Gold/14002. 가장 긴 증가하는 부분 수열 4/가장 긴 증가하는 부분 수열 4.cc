#include <bits/stdc++.h>
using namespace std;

int a[1001];
int b[1001];
int c[1001];
vector<int> d;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans=0;
    int idx=0;

    for(int i=0;i<n;i++)
    {
        b[i]=1;
        c[i]=-1;

        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i]&&b[j]+1>b[i])
            {
                b[i]=b[j]+1;
                c[i]=j;
            }
        }
        if(b[i]>ans)
        {
            ans=b[i];
            idx=i;
        }
    }
    cout<<ans<<"\n";

    if(ans!=0)
    {
        while(idx!=-1)
        {
            d.push_back(a[idx]);
            idx=c[idx];
        }
        reverse(d.begin(),d.end());
        for(int i:d)
            cout<<i<<' ';
    }
}