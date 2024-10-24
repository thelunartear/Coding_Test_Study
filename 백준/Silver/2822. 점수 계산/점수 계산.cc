#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

bool compare(pair<int, int>x, pair<int, int> y)
{
    return x.first>y.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<8;i++)
    {
        int s;
        cin>>s;
        v.push_back({s,i+1});
    }

    sort(v.begin(), v.end(), compare);

    int sum=0;
    vector<int> indices;

    for(int i=0;i<5;i++)
    {
        sum+=v[i].first;
        indices.push_back(v[i].second);
    }

    sort(indices.begin(), indices.end());

    cout<<sum<<"\n";

    for(int i=0;i<5;i++)
    {
        cout<<indices[i]<<' ';
    }
}