#include <iostream>
using namespace std;

long long fpow(long long c,long long n, long long mod)
{
    if(n==1)
        return c%mod;
    else
    {
        long long x = fpow(c, n/2, mod);
        x = (x*x)%mod;

        if(n%2!=0)
        {
            x=(x*c)%mod;
        }
        return x;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c;
    cin>>a>>b>>c;

    cout<<fpow(a,b,c);
}