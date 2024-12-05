#include <iostream>
using namespace std;

int arr[9][9];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            int a;
            cin>>a;
            arr[i][j]=a;
        }
    }

    int ans=arr[0][0], x=0, y=0;

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(ans<arr[i][j])
            {
                ans=arr[i][j];
                x=i;
                y=j;
            }
        }
    }

    cout<<arr[x][y]<<"\n"<<x+1<<" "<<y+1;
}