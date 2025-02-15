#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;

    int ans=0;
    cout<<min(a,n)+min(b,n)+min(c,n);
}