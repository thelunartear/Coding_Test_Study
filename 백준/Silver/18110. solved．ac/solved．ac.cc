#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[300001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double avg=0;

    cin>>n;
    if(n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int e=round(n*0.15);
        for(int i=e;i<n-e;i++)
            avg+=arr[i];
        cout<<round(avg/(n-(round(n*0.15)*2)));
    }
    else
        cout<<0;
}