#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,s;
    cin>>t>>s;

    if(s==1)
        cout<<280;
    else
    {
        if(t>=12 && t<=16)
            cout<<320;
        else
            cout<<280;
    }
}