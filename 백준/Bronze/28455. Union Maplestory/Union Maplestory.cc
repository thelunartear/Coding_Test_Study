#include <iostream>
#include <algorithm>
using namespace std;

int arr[101]={0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int sum_lv=0,p=0,limit=min(n,42);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n, greater<int>());

    for(int i=0;i<limit;i++)
    {
        int lv=arr[i];
        sum_lv+=lv;

        if(lv>=250) p+=5;
        else if(lv>=200)    p+=4;
        else if(lv>=140)    p+=3;
        else if(lv>=100)    p+=2;
        else if(lv>=60)     p+=1;
    }
    cout<<sum_lv<<' '<<p;
}