#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int ans=0;

    while(b>a)
    {
        if(b%2==0)
        {
            b/=2;
        }
        else if(b%10==1)
        {
            b/=10;
        }
        else
        {
            cout<<-1;
            return 0;
        }
        ans++;
    }
    if(b==a)
        cout<<ans+1;
    else
        cout<<-1;
}