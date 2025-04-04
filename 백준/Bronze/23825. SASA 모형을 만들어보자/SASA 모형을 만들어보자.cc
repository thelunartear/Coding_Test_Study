#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin>>n>>m;

    n/=2;
    m/=2;

    cout<<min(n,m);
}