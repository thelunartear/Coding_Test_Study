#include <bits/stdc++.h>
using namespace std;

int board[9][9];

bool isValid(int x,int y,int n)
{
    for(int i=0;i<9;i++)
    {
        if(board[x][i]==n)  return false;
    }

    for(int i=0;i<9;i++)
    {
        if(board[i][y]==n)  return false;
    }

    int x1=(x/3)*3;
    int y1=(y/3)*3;

    for(int i=x1;i<x1+3;i++)
    {
        for(int j=y1;j<y1+3;j++)
        {
            if(board[i][j]==n)  return false;
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
            if(board[i][j]==0)
            {
                for(int k=1;k<=9;k++)
                {
                    if(isValid(i,j,k))
                    {
                        board[i][j]=k;
                        if(sdoku())
                            return true;
                        board[i][j]=0;
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
        string s;
        cin>>s;
        for(int j=0;j<9;j++)
        {
            board[i][j]=s[j]-'0';
        }
    }

    sdoku();

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<board[i][j];
        }
        cout<<"\n";
    }
}