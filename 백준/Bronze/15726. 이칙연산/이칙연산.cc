#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c,x,y;
    cin>>a>>b>>c;

    x=(double)(a*b)/c;
    y=((double)a/b)*c;
    if (x>y)
        cout<<x;
    else
        cout<<y;
}