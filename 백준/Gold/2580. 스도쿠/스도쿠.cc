#include <bits/stdc++.h>
using namespace std;

int a[9][9];

bool isValid(int x,int y,int n)
{
    for(int i=0;i<9;i++)
    {
        if(a[x][i]==n)  return false;
    }

    for(int i=0;i<9;i++)
    {
        if(a[i][y]==n)  return false;
    }

    int x1=(x/3)*3;
    int y1=(y/3)*3;

    for(int i=x1;i<x1+3;i++)
    {
        for(int j=y1;j<y1+3;j++)
        {
            if(a[i][j]==n)  return false;
        }
    }

    return true;
}

bool sdoku()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(a[i][j]==0)
            {
                for(int n=1;n<=9;n++)
                {
                    if(isValid(i,j,n))
                    {
                        a[i][j]=n;
                        if(sdoku())     return true;
                        a[i][j]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>a[i][j];
        }
    }

    sdoku();

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<"\n";
    }
}