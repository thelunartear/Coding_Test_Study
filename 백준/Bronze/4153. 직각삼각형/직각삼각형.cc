#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h,w,l;
    while(1)
    {
        cin>>h>>w>>l;
        if(h==0 && w==0 && l==0)
            break;
        else
        {
            if(h*h+w*w==l*l || h*h+l*l==w*w || w*w+l*l==h*h)
            {
                cout<<"right"<<"\n";
            }
            else
            {
                cout<<"wrong"<<"\n";
            }
        }
    }
}