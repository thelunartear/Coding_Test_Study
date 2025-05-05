#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cin.ignore();

    const int c='a';

    for(int i=1;i<=n;i++)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);

        vector<int> al(26,0);

        for(char s:a)
        {
            int x=s-c;
            al[x]++;
        }

        for(char t:b)
        {
            int y=t-c;
            al[y]--;
        }
        int ans=0;
        for(int k:al)
        {
            if(k!=0)
                ans+=abs(k);
        }
        cout<<"Case #"<<i<<": "<<ans<<"\n";
    }
}