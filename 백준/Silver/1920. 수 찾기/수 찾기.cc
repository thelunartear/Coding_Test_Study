#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v1;

bool binary_search(vector<int>& arr, int start, int end, int x)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(arr[mid]==x)
            return true;
        if(arr[mid]<x)
            start=mid+1;
        else
            end=mid-1;
    }
    return false;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());

    cin>>m;
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        if(binary_search(v1,0,n-1,b))
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
}