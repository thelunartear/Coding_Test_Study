#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(1)
    {
        cin>>n;
        if(n!=0)
        {
            string str = to_string(n);
            string rstr = str;
            reverse(rstr.begin(), rstr.end());

            if(str==rstr)
                cout<<"yes"<<"\n";
            else
                cout<<"no"<<"\n";
        }
        else
            break;
            
    }
}