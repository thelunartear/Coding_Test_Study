#include <iostream>
using namespace std;

int a[51],ans=0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    if(n==0)
    {
        cout<<0;
        return 0;
    }

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=n-1;i>=0;i--)
    {
        int sum;
        sum+=a[i];
        if(sum>m)
        {
            ans++;
            sum=a[i];
        }
    }
    cout<<ans;
}