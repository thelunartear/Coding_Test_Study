#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int triangle(vector<vector<int>> t)
{
    int ans=0;

    for(int i=t.size()-1;i>0;i--)
    {
        for(int j=0;j<t[i].size()-1;j++)
        {
            t[i-1][j]+=max(t[i][j], t[i][j+1]);
        }
    }
    ans=t[0][0];
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    
    vector<vector<int>> res(n);

    for(int i=0;i<n;i++)
    {
        res[i].resize(i+1);
        for(int j=0;j<=i;j++)
        {
            cin>>res[i][j];
        }
    }

    cout<<triangle(res);
}