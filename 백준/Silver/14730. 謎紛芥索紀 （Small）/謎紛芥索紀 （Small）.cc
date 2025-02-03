#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int ans=0;
    while(t--)
    {
        int a,x;
        cin>>a>>x;
        ans+=a*x;
    }
    cout<<ans;
}