#include <bits/stdc++.h>
using namespace std;

char c[3100][6200];

void draw(int y,int x,int n)
{
    if(n==3)
    {
        c[y][x]='*';
        c[y+1][x-1]='*';
        c[y+1][x+1]='*';
        for(int i=-2;i<=2;i++)
            c[y+2][x+i]='*';
        return;
    }
    int h=n/2;
    draw(y,x,h);
    draw(y+h,x-h,h);
    draw(y+h,x+h,h);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            c[i][j]=' ';
        }
    }

    draw(0,n-1,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            cout<<c[i][j];
        }
        cout<<"\n";
    }
}