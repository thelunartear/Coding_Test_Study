#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;

    if(b+c<a+d)
        cout<<b+c;
    else
        cout<<a+d;
}