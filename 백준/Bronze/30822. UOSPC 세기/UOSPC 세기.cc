#include <bits/stdc++.h>
using namespace std;

int a[26]={0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin, s);

    for(char c:s)
    {
        if(c>='a'&&c<='z')
            a[c-'a']++;
    }

    int ans=min({a['u'-'a'],a['o'-'a'],a['s'-'a'],a['p'-'a'],a['c'-'a']});
    cout<<ans;
}