#include <iostream>
using namespace std;

int arr[50];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                     if((arr[i]-arr[j])%arr[k]!=0)
                    {
                        cout<<"no"<<"\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"yes"<<"\n";
}