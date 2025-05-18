#include <bits/stdc++.h>
using namespace std;

int e[1001][6];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>e[i][j];
        }
    }
    int ans=0, maxCnt=-1;

    for(int i=0;i<n;i++)
    {   
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)    continue;
            for(int k=0;k<5;k++)
            {
                if(e[i][k]==e[j][k])
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>maxCnt)
        {
            maxCnt=cnt;
            ans=i;
        }
    }
    cout<<ans+1;
}