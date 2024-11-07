#include <iostream>
#include <climits>
using namespace std;

char ch[51][51];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }

    int repaints=INT_MAX;

    for(int i=0;i<=n-8;i++)
    {
        for(int j=0;j<=m-8;j++)
        {
            int w_start=0, b_start=0;

            for(int k=0;k<8;k++)
            {
                for(int l=0;l<8;l++)
                {
                    if((k+l)%2==0)
                    {
                        if(ch[i+k][j+l]!='W')
                        {
                            w_start+=1;
                        }
                        if(ch[i+k][j+l]!='B')
                        {
                            b_start+=1;
                        }
                    }
                    else
                    {
                        if(ch[i+k][j+l]!='B')
                        {
                            w_start+=1;
                        }
                        if(ch[i+k][j+l]!='W')
                        {
                            b_start+=1;
                        }
                    }
                }
            }
            int cur_min_re=min(w_start, b_start);
            repaints=min(cur_min_re, repaints);
        }
    }
    cout<<repaints;
}