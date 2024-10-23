#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<tuple<int, int, string>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        string s;
        cin >> a >> s;
        v.push_back({a, i, s});
    }

    sort(v.begin(), v.end());

    for(int i=0;i<n;i++)
    {
        cout<<get<0>(v[i])<<' '<<get<2>(v[i])<<"\n";
    }
    return 0;
}
