#include <iostream>
using namespace std;

int n;
int grid[15]={0,};

bool isPromising(int row)
{
    for(int i=0;i<row;i++)
    {
        if(grid[i]==grid[row] || abs(grid[i]-grid[row])==row-i)
        {
            return false;
        }
    }
    return true;
}

void NQueen(int row, int& cnt)
{
    if(row==n)
    {
        cnt++;
        return;
    }

    for(int col=0;col<n;col++)
    {
        grid[row]=col;
        if(isPromising(row))
        {
            NQueen(row+1, cnt);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    int cnt=0;
    NQueen(0,cnt);
    cout<<cnt;
}