#include <iostream>
using namespace std;

int n,m;
int arr[10];
bool isUsed[10];

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
    int st=1;
    if(k!=0)
    {
        st=arr[k-1]+1;
    }
    for(int i=st;i<=n;i++)
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    func(0);
}