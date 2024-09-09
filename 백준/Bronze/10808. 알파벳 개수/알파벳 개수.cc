#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();

    int alp[26]={0};

    for(int i=0;i<len;i++)
    {
        alp[s[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        cout<<alp[i]<<' ';
    }
}