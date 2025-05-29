#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,string> c;
        while(n--)
        {
            string a,b;
            cin>>a>>b;
            c.insert(make_pair(a,b));
        }

        unordered_map<string,int> cnt;
        for(auto& [x,y]:c)
        {
            cnt[y]++;
        }
        int ans=1;
        for(auto& [x,y]:cnt)
        {
            ans*=(y+1);
        }
        ans-=1;

        cout<<ans<<"\n";
    }
}