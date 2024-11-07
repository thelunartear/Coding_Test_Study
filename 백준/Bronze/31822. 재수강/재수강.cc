#include <iostream>
#include <vector>
using namespace std;

vector<string> strs;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        strs.push_back(str);
    }

    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(s.substr(0,5)==strs[i].substr(0,5))
            ans++;
        else
            continue;
    }
    cout<<ans;
}