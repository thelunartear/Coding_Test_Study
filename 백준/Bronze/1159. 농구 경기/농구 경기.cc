#include <bits/stdc++.h>
using namespace std;

int cnt[26]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        char f=s[0];
        cnt[f-'a']++;
    }

    bool isFind=0;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>=5)
        {
            cout<<(char)('a'+i);
            isFind=1;
        }
    }

    if(!isFind)
        cout<<"PREDAJA";
}