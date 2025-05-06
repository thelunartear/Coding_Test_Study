#include <bits/stdc++.h>
using namespace std;

int a[200001];
int b[200001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    sort(a,a+n);

    for(int i=0;i<m;i++)
    {
        int st=0;
        int en=n-1;
        bool check=false;
        int mid,ans;
        while(st<=en)
        {
            mid=(st+en)/2;
            if(a[mid]<b[i])
            {
                st=mid+1;
            }
            else
            {
                ans=mid;
                en=mid-1;
            }
            if(a[mid]==b[i])
            {
                check=true;
            }
        }
        if(check)
            cout<<ans<<"\n";
        else
            cout<<-1<<"\n";
    }
}