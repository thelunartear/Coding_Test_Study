#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        vector<int> vt;
        for(char c:str)
            vt.push_back(c-'0');
        v.push_back(vt);
    }

    int maxLen=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<min(n-i,m-j);k++)
            {
                if(v[i][j]==v[i+k][j] && v[i][j]==v[i][j+k] && v[i][j]==v[i+k][j+k])
                {
                    if(k+1>maxLen)
                        maxLen=k+1;
                }
            }
        }
    }
    cout<<maxLen*maxLen;
}