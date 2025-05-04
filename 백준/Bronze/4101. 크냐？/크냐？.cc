#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    while(1)
    {
        cin>>x>>y;
        if(x==0&&y==0)
            break;
        if(x>y)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}