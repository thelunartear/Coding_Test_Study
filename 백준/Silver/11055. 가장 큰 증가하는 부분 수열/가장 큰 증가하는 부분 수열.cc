#include <iostream>
using namespace std;

int a[1001];
int b[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=a[i];
        for(int j=0;j<i;j++)
        {
            if(b[i]>b[j])
                b[i]=max(b[i],a[i]+b[j]);
        }
    }

    int ans=b[0];
    for(int i=1;i<n;i++)
        ans=max(b[i],ans);

    cout<<ans;
}