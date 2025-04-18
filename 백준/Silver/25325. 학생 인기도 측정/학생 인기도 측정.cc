#include <bits/stdc++.h>
using namespace std;

map<string,int> p;
vector<string> v;

bool comp(const pair<string,int>& a, const pair<string,int>& b)
{
    if(a.second!=b.second)  return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        p[s]=0;
    }
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string vote;
        while(ss>>vote)
        {
            p[vote]++;
        }
    }

    vector<pair<string,int>> pp(p.begin(), p.end());

    sort(pp.begin(), pp.end(),comp);

    for(auto& [s,n]:pp)
    {
        cout<<s<<' '<<n<<"\n";
    }
}