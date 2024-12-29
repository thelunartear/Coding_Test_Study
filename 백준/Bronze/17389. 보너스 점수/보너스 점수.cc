#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;
    string str;
    cin>>str;

    int b=0;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]=='O')
        {
            ans=ans+i+1;
            ans+=b;
            b++;
        }
        if(str[i]=='X')
            b=0;        
    }
    cout<<ans;
}