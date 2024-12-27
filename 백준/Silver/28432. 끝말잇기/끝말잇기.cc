#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    unordered_set<string> prev;
    vector<string> str1(n);
    int t=-1;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s!="?")
        {
            prev.insert(s);
        }
        else
        {
            t=i;
        }
        str1[i]=s;
    }

    int m;
    cin>>m;
    vector<string> str2(m);

    for(int i=0;i<m;i++)
    {
        cin>>str2[i];
    }

    
    for(const string& s:str2)
    {
        if(prev.count(s))
            continue;

        bool valid=true;
        if(t>0&&str1[t-1].back()!=s[0])
            valid=false;
        if(t<n-1&&str1[t+1][0]!=s.back())
            valid=false;

        if(valid)
        {
            cout<<s;
            break;
        }
    }
}