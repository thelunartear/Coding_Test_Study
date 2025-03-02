#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c;
    cin>>a>>b;

    c=max(a,b);
    if(c==a)
    {
        a=b;
        b=c;
    }
    cout<<(b-a+1)*(b+a)/2;
}