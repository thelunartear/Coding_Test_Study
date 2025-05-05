#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0,x=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='C')
            ans++;
        else
            x++;
    }
    if(ans%(x+1)!=0)    cout<<ans/(x+1)+1;
    else    cout<<ans/(x+1);
}