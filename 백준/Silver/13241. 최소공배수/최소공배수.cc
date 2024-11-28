#include <iostream>
using namespace std;

long long GCD(long long a, long long b)
{
    return b ? GCD(b, a % b) : a;
}

long long LCM(long long a, long long b)
{
    return (a*b)/GCD(a,b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    cin>>a>>b;
    cout<<LCM(a,b);
}