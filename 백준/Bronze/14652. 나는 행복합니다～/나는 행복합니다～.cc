#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    
    int x=k/m;
    int y=k%m;

    cout<<x<<' '<<y;
}