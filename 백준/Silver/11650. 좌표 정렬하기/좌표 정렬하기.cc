#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> x, pair<int, int> y)
{
    if(x.first == y.first)
        return x.second < y.second;
    else
        return x.first < y.first;
}

vector<pair<int, int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end(), comp);

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<' '<<v[i].second<<"\n";
    }
}