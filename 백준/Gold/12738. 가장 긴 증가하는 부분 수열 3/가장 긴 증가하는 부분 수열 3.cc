#include <bits/stdc++.h>
using namespace std;

int a[1000001]; 
vector<int> d;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        auto it=lower_bound(d.begin(),d.end(),a[i]);
        if(it==d.end())
        {
            d.push_back(a[i]);
        }
        else
        {
            *it=a[i];
        }
    } 
    cout<<d.size();
}