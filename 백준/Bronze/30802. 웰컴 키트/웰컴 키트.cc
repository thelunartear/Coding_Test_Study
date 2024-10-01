#include <iostream>
using namespace std;

int tshirt[7];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=1;i<=6;i++)
    {
        cin>>tshirt[i];
    }

    int t, p;
    cin>>t>>p;

    int ans=0;

    for(int i=1;i<=6;i++)
    {
        if(tshirt[i]%t==0)  ans+=(tshirt[i]/t);
        else    ans+=tshirt[i]/t+1;
    }
    cout<<ans<<"\n"<<n/p<<' '<<n%p;
}