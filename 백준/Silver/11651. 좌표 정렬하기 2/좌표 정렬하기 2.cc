#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

bool Comp(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.second == b.second)
        return a.first<b.first;
    return a.second<b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), Comp);

    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}