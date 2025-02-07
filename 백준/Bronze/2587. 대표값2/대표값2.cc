#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    int mid=0, avg=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        avg+=arr[i];
    }
    
    avg/=5;
    sort(arr,arr+5);
    mid=arr[2];
    cout<<avg<<"\n"<<mid;
}