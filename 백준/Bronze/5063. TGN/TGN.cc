#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int r,e,c;
        cin>>r>>e>>c;
        if((e-r)>c)
            cout<<"advertise"<<"\n";
        else if((e-r)==c)
            cout<<"does not matter"<<"\n";
        else
            cout<<"do not advertise"<<"\n";
    }
}