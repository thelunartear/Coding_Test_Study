#include <iostream>
#include <climits>
using namespace std;

int arr[7];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int sum=0;
        int eMin=INT_MAX;
        
        for(int j=0;j<7;j++)
        {
            cin>>arr[j];
            if(arr[j]%2==0)
            {
                sum+=arr[j];
            }

            if(arr[j]%2==0 && eMin>arr[j])
            {
                eMin=arr[j];
            }
        }
        cout<<sum<<' '<<eMin<<"\n";
    }
}