#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin>>k;

    while(k--)
    {
        int p,m;
        cin>>p>>m;
        int cnt=0;
        int arr[501]={0};
        for(int i=0;i<p;i++)
        {
            int seat;
            cin>>seat;

            if(arr[seat]==1)    cnt++;
            else    arr[seat]=1;
        }
        cout<<cnt<<"\n";
    }
}