#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;

    cin>>a>>b>>c>>d;
    int arr[]={a,b,c,d};

    sort(arr,arr+4);

    int x=arr[0]+arr[3];
    int y=arr[1]+arr[2];

    cout<<abs(x-y);
}