#include <iostream>
using namespace std;

int arr[101]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;

        for(int j=x-1;j<y;j++)
        {
            arr[j]=z;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}