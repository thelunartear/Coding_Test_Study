#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v1;
vector<int> v2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);
    }

    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()),v1.end());

    for(int i=0;i<n;i++)
    {
        int idx=lower_bound(v1.begin(),v1.end(), v2[i])-v1.begin();
        cout<<idx<<" ";
    }
}