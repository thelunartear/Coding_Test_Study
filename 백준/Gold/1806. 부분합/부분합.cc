#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

typedef long long ll;
vector<ll> v;
ll n,s;

int solution(ll s, const vector<ll>& nums)
{
    int start=0,end=0,sum=0,min_len=INT_MAX;

    while(end<n)
    {
        sum+=v[end];
        end++;

        while(sum>=s)
        {
            min_len=min(min_len, end-start);
            sum-=v[start];
            start++;
        }
    }

    return min_len == INT_MAX? 0:min_len;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>s;

    v.resize(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans = solution(s, v);

    cout<<ans;
}