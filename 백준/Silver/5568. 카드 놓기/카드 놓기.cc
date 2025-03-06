#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> v;
    set<string> s;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    do
    {
        string ans;
        for(int i=0;i<k;i++)
            ans+=to_string(v[i]);
        s.insert(ans);
    } while (next_permutation(v.begin(), v.end()));
    
    cout<<s.size();
}