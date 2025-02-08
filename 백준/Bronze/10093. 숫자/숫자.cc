#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b;
    cin>>a>>b;

    if (a > b) swap(a, b); 

    if(a==b||a+1==b)
        cout<<"0\n";
    else
    {
        cout<<b-a-1<<"\n";
        for(long long i=a+1;i<b;i++)
            cout<<i<<' ';
    }
}