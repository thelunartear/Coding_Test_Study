#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int> sub;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i:v)
    {
        auto it=lower_bound(sub.begin(),sub.end(), i);
        if(it==sub.end())
        {
            sub.push_back(i);
        }
        else
        {
            *it=i;
        }
    }

    cout<<sub.size();
}