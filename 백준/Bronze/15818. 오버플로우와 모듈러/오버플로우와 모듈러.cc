#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> nums;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,ans=1;
    cin>>n>>m;
    nums.resize(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];

    for(int i=0;i<n;i++)
    {
        ans*=(nums[i]%m);
        ans%=m;
    }
    cout<<ans;
}