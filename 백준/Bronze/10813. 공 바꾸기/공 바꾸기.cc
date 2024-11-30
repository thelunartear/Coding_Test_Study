#include <iostream>
using namespace std;

int arr[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        int tmp=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=tmp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}