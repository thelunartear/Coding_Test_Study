#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
int num[9];
bool isUsed[9];

void func(int k)
{
    if(k==m)
    {
        for(int i=0;i<m;i++)
        {
             cout<<num[arr[i]]<<' ';
        }
        cout<<"\n";
        return;
    }
    int idx=0;
    if(k!=0)
    {
        idx=arr[k-1]+1;
    }
    for(int i=idx;i<n;i++)
    {
        if(!isUsed[i])
        {
            arr[k]=i;
            isUsed[i]=1;
            func(k+1);
            isUsed[i]=0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num, num+n);
    func(0);
}