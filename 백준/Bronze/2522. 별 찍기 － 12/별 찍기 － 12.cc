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
        for (int j=0;j<n-i-1;j++) 
            cout << ' ';
    
        for (int j=0;j<=i;j++) 
            cout << '*'; 
    
        cout << "\n";
    }

    for(int i=n;i<2*n-1;i++)
    {
        for(int j=0;j<i-n+1;j++)
            cout<<' ';
        for(int j=0;j<2*n-i-1;j++)
            cout<<'*';
        cout<<"\n";
    }
}