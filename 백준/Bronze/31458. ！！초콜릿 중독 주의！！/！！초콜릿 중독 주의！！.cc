#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    string s;
    cin>>t;
    
    while(t--) 
    {
        cin>>s;
        ll cnt=0, idx=-1;
        char n;
        bool isBM=false;

        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='!')
                cnt++;
            else if(isdigit(s[i]))
            {
                n=s[i];
                idx=i;
                if(i+1<s.size()&&s[i+1]=='!')
                    isBM=true;
                break;
            }
        }
        if(isBM)
        {
            cout<<(cnt%2==0?1:0)<<"\n";
        }
        else
        {
            if(n=='1')
                cout<<(cnt%2==0?1:0)<<"\n";
            else
                cout<<(cnt%2==0?0:1)<<"\n";
        }
    }
}