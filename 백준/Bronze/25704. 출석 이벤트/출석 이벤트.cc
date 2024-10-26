#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,p;
    cin>>n>>p;

    int ans=p;

    if(n>=5)    ans=min(ans,p-500);
    if(n>=10)   ans=min(ans,p/10*9);
    if(n>=15)   ans=min(ans,p-2000);
    if(n>=20)   ans=min(ans,p/4*3);

    cout<<max(ans,0);
}