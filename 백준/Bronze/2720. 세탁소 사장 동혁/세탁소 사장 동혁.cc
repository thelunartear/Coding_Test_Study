#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int c;
        cin>>c;

        int q=0, d=0, n=0, p=0;
        q=c/25;
        c%=25;
        d=c/10;
        c%=10;
        n=c/5;
        c%=5;
        p=c/1;

        cout<<q<<' '<<d<<' '<<n<<' '<<p<<"\n";
    }
}