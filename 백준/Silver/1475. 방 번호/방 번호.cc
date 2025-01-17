#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, arr[10]={0,}, ans=0;
    cin>>n;

    while(n>0)
    {
        arr[n%10]++;
        n/=10;
    }
    
    arr[6]+=arr[9];
    arr[6]=arr[6]/2+arr[6]%2;
    for(int i=0;i<9;i++)
    {
        if(ans<arr[i])
            ans=arr[i];
    }
    cout<<ans;
}