#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int ans=0;
    int l=0;
    int r=1;
    int min_diff=INT_MAX;

    while(r<n)
    {
        int diff=v[r]-v[l];

        if(diff>=m)
        {
            min_diff=min(diff, min_diff);
            l++;
            if(l==r)    r++;
        }
        else
        {
            r++;
        }
    }
    cout<<min_diff;
}