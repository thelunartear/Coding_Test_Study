#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> p;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        p.push_back({x,y});
    }

    sort(p.begin(), p.end(), [](pair<int, int>& a, pair<int, int>& b) {return a.first<b.first;});
    int mx=p[n/2].first;
    sort(p.begin(), p.end(), [](pair<int, int>& a, pair<int, int>& b) {return a.second<b.second;});
    int my=p[n/2].second;

    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(p[i].first-mx)+abs(p[i].second-my);
    }
    cout<<ans;
}