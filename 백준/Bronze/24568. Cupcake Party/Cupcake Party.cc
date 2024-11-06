#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r,s;
    cin>>r>>s;

    int ans=(r*8+s*3)-28;
    cout<<ans;
}