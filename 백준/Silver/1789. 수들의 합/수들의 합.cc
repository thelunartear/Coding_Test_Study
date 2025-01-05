#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long s,n=0,sum=0;
    cin>>s;
   
    while(sum+(n+1)<=s)
    {
        n++;
        sum+=n;
    }
    cout<<n;
}