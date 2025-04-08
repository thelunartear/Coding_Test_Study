#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<"\n";
    }
}