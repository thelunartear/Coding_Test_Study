#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    if(a<2)
        cout<<"Before";
    else if(a==2)
    {
        if(b<18)
            cout<<"Before";
        else if(b==18)
            cout<<"Special";
        else
            cout<<"After";
    }
    else if(a>2)
    {
        cout<<"After";
    }
}