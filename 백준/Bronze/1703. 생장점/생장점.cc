#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    while(true)
    {
        cin>>a;
        if(a==0)
            break;

        int ans=1;
        int arr[41];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<2*a;i++)
        {
           cin>>arr[i];
        }
        for(int i=0;i<a;i++)
        {
            int sf=arr[i*2];
            int cut=arr[i*2+1];
            ans=ans*sf-cut;
        }
        cout<<ans<<"\n";    
    }
}