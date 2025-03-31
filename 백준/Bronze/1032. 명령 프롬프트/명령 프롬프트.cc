#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i=0;i<v[0].length();i++)
    {
        char c=v[0][i];
        for(int j=0;j<n;j++)
        {
            if(c!=v[j][i])
            {
                c='?';
                break;
            }
        }
        cout<<c;
    }
}