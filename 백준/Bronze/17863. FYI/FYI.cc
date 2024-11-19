#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n/10000==555)
        cout<<"YES";
    else
        cout<<"NO";
}