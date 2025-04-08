#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int cnt=0, piece=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            if(i+1<s.length()&&s[i+1]==')')
            {
                piece+=cnt;
                i++;
            }
            else
            {
                cnt++;
            }
        }
        else
        {
            cnt--;
            piece++;
        }
    }
    cout<<piece;
}