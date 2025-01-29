#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,b;
    cin>>n>>b;

    string ans;

    while(n>0)
    {
        int tmp=n%b;
        if(tmp>=0 && tmp<=9)
            ans+=(tmp+'0');
        else
            ans+=(tmp-10+'A');
        n/=b;
    }

    for(int i=ans.length()-1;i>=0;i--)
        cout<<ans[i];
}