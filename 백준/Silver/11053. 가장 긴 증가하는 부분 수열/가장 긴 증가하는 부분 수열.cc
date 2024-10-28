#include <iostream>
using namespace std;

int a[1001];
int b[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    
    int ans=0;

    for(int i=0;i<t;i++)
    {
        b[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                b[i]=max(b[j]+1, b[i]);
            }
        }
        ans=max(ans, b[i]);
    }
    cout<<ans;
}