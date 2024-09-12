#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
int num[9];
bool isVisit[9];

void func(int k)
{
    if(k==m)
    {
        for(int i=0;i<m;i++)
        {
            cout<<num[arr[i]]<<' ';
        }
        cout<<"\n";
    }
    int idx=0;
    if(k!=0)
    {
        idx=arr[k-1]+1;
    }
    for(int i=idx;i<n;i++)
    {
        if(!isVisit[i])
        {
            if(num[i]==num[i-1] && !isVisit[i-1])
                continue;
            else
            {
                isVisit[i]=1;
                arr[k]=i;
                func(k+1);
                isVisit[i]=0;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num, num+n);
    func(0);
}