#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int b, ans=0;
    cin>>n>>b;

    for(int i=0;i<n.length();i++)
    {
        if(n[i]>=0 && n[i]<='9')
        {
            ans=ans*b+(n[i]-'0');
        }
        else
        {
            ans=ans*b+(n[i]-'A'+10);
        }
    }
    cout<<ans;
}