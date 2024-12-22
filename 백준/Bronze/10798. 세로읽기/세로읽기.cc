#include <iostream>
using namespace std;

string str[5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<5;i++)
    {
        cin>>str[i];
    }

    int maxLen=0;
    for(int i=0;i<5;i++)
    {
        if(str[i].length()>maxLen)
        {
            maxLen=str[i].length();
        }
    }

    for(int i=0;i<maxLen;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i<str[j].length())
                cout<<str[j][i];
        }
    }
}