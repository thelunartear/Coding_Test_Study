#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;
    set<string> s;

    while(n--)
    {
        string str;
        cin>>str;
        if(str=="ENTER")
        {
            ans+=s.size();
            s.clear();
            continue;
        }
        s.insert(str);
    }
    ans+=s.size();
    cout<<ans;
}