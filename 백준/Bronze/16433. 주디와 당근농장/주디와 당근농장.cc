#include <iostream>
using namespace std;

char arr[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,r,c;
    cin>>n>>r>>c;

    r--;
    c--;

    arr[r][c]='v';

    int p=(r+c)%2;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==p)
            {
                arr[i][j]='v';
            }
            else
            {
                arr[i][j]='.';
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j];
        cout<<"\n";
    }
}