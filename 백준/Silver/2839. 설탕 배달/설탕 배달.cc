#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;
    
    while(n>=0)
    {
        if(n%5==0)
        {
            ans+=(n/5);
            cout<<ans;
            return 0;
        }
        else
        {
            n-=3;
            ans++;
        }
    }
    cout<<-1;
}