#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m=1, ans=1;
    cin>>n;
    while(n>m)
    {
        m+=6*ans;
        ans++;
    }
    cout<<ans;
}