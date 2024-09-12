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
            cout<<arr[i]<<' ';
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        if(!isVisit[i])
        {
            if(i>0 && num[i] == num[i-1] && !isVisit[i-1])
                continue;
            else
            {
                isVisit[i]=1;
                arr[k]=num[i];
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