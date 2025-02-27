#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c;
    cin>>a>>b;
    cin>>c;

    if(a+b<2*c)
        cout<<a+b;
    else
        cout<<a+b-2*c;
}