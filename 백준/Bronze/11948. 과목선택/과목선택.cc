#include <bits/stdc++.h>
using namespace std;

int a[4];
int b[2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<2;i++)
    {
        cin>>b[i];
    }

    sort(a,a+4);
    sort(b,b+2);

    cout<<a[1]+a[2]+a[3]+b[1];
}