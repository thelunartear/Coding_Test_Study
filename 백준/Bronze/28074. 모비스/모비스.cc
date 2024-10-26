#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    int m=0,o=0,b=0,i=0,s=0;

    for(int j=0;j<str.size();j++)
    {
        if(str[j]=='M') m++;
        if(str[j]=='O') o++;
        if(str[j]=='B') b++;
        if(str[j]=='I') i++;
        if(str[j]=='S') s++;
    }

    if(m>=1 && o>=1 && b>=1 && i>=1 && s>=1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}