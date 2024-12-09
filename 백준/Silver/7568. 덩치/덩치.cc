#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;

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
    vector<int> rank(n,1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)    continue;
            if(v[j].first>v[i].first && v[j].second>v[i].second)
                rank[i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<rank[i]<<" ";
    }
}