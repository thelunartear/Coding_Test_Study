#include <iostream>
#include <algorithm>
using namespace std;

int a[500001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}