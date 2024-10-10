#include <iostream>
using namespace std;

int bill[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, ans=0;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }

    for(int i=n-1;i>=0;i--)
    {

        if(k>=bill[i])
        {
            ans+=k/bill[i];
            k%=bill[i];            
        }
    }
    cout<<ans;
}