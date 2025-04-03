#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    v1.push_back(d);
    v2.push_back(e);
    v2.push_back(f);

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    cout<<v1[1]+v1[2]+v1[3]+v2[1];
}