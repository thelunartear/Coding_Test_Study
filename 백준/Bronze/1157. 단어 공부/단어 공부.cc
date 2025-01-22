#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int alp[26]={0,};
    int max=-1;
    char ans='?';

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-'a'+'A';
        alp[s[i]-'A']++;
    }

    for(int i=0;i<26;i++)
    {
        if(alp[i]>max)
        {
            max=alp[i];
            ans=i+'A';
        }
        else if(alp[i]==max)
            ans='?';
    }
    cout<<ans;
}