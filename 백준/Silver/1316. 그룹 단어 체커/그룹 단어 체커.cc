#include <iostream>
using namespace std;

bool groupword(string s)
{
    bool isVisit[26]={false};
    char prev='\0';

    for(char c:s)
    {
        if(prev!=c)
        {
            if(isVisit[c-'a'])  return false;
            isVisit[c-'a']=true;
        }
        prev=c;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(groupword(s))    cnt++;
    }
    cout<<cnt;
}