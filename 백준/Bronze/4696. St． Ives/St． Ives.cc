#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float n;

    while(cin>>n && n!=0)
    {
        if(n!=0)
        {
            float ans = 1+n+n*n+n*n*n+n*n*n*n;
            cout<<fixed;
            cout.precision(2);
            cout<<ans<<"\n";
        }
        else
            break;
    }
}