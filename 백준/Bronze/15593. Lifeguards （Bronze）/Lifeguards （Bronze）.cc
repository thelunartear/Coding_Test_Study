#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    int max_time=0;

    for(int i=0;i<n;i++)
    {
        vector<int> timeline(1001,0);

        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            for(int k=v[j].first;k<v[j].second;k++)
            {
                timeline[k]=1;
            }
        }

        int covered_time=0;
        for(int k=0;k<=1000;k++)
        {
            if(timeline[k]==1)
                covered_time++;
        }
        max_time=max(covered_time, max_time);
    }
    cout<<max_time;
}