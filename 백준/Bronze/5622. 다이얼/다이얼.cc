#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    int ans=0;

    for(int i=0;i<str.size();i++)
    {
        char c=str[i];
        if(c=='A'||c=='B'||c=='C')
            ans+=3;
        if(c=='D'||c=='E'||c=='F')
            ans+=4;
        if(c=='G'||c=='H'||c=='I')
            ans+=5;
        if(c=='J'||c=='K'||c=='L')
            ans+=6;
        if(c=='M'||c=='N'||c=='O')
            ans+=7;
        if(c=='P'||c=='Q'||c=='R'||c=='S')
            ans+=8;
        if(c=='T'||c=='U'||c=='V')
            ans+=9;
        if(c=='W'||c=='X'||c=='Y'||c=='Z')
            ans+=10;
    }
    cout<<ans;
}