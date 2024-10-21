#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,a,b;
    cin>>x>>y>>a>>b;

    for(int i=0;i<100000;i++)
    {
        if(a>b)
        {
            b+=y;
        }
        else if(a<b)
        {
            a+=x;
        }
        else
        {
            cout<<a;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}