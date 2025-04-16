#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    char c;
    cin>>n>>c;

    set<string> s;
    while(n--)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    if(c=='Y')
        cout<<s.size();
    else if(c=='F')
        cout<<s.size()/2;
    else
        cout<<s.size()/3;
}