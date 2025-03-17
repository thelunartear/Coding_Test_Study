#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
            cout<<" ";
        cout<<"*";

        if(i>0)
        {
            for(int j=0;j<2*i-1;j++)
                cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
}