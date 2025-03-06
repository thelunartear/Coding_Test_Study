#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    while(next_permutation(v.begin(), v.end()))
    {
        int sum=0;
        for(int i=0;i<v.size()-1;i++)
            sum+=abs(v[i]-v[i+1]);
        ans=max(ans,sum);
    }
    cout<<ans;
}