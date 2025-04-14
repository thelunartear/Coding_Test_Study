#include <bits/stdc++.h>
using namespace std;

int a[1000001];

int snack(int mid, int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i]/mid;
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int st=1,en=a[n-1];
    int ans=0;

    while(st<=en)
    {
        int mid=(st+en)/2;
        if(snack(mid,n)>=m)
        {
            ans=mid;
            st=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
    cout<<ans;
}