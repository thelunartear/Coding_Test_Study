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
            cout<<arr[i]<<' ';
        }
        cout<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!isUsed[i])
        {
            arr[k]=num[i];
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