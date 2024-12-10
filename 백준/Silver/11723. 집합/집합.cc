#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin>>m;

    int s=0;
    while(m--)
    {
        string str;
        cin>>str;
        int x;
        if(str=="add")
        {
            cin>>x;
            s|=(1<<(x-1));
        }
        else if(str=="remove")
        {
            cin>>x;
            s&=~(1<<(x-1));
        }
        else if(str=="check")
        {
            cin>>x;
            if(s&(1<<(x-1)))    cout<<1<<"\n";
            else    cout<<0<<"\n";
        }
        else if(str=="toggle")
        {
            cin>>x;
            s^=(1<<(x-1));
        }
        else if(str=="all")
        {
            s=(1<<20)-1;
        }
        else if(str=="empty")
        {
            s=0;
        }
    }
}