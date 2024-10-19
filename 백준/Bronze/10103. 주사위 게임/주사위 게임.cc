#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int p1=100, p2=100;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if(a==b)
            continue;
        else if(a>b)
            p2-=a;
        else
            p1-=b;
    }
    cout<<p1<<"\n"<<p2;
}