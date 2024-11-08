#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    string ans;

    while(n!=0)
    {
        ans+=to_string(n%9);
        n/=9;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}