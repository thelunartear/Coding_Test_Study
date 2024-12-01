#include <iostream>
#include <algorithm>
using namespace std;

int arr[101]={0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        reverse(arr+a, arr+b+1);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}