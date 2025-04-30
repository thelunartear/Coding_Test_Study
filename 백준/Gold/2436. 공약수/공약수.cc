#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    return b?gcd(b,a%b):a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b;
    cin>>a>>b;

    ll c=b/a;
    ll sum=1e9;
    ll x=0,y=0;

    for(int i=1;i<=sqrt(c);i++)
    {
        if(c%i==0)
        {
            int j=c/i;
            if(gcd(i,j)==1)
            {
                if(i+j<sum)
                {
                    sum=i+j;
                    x=i*a;
                    y=j*a;
                }
            }
        }
    }
    cout<<x<<' '<<y;
}