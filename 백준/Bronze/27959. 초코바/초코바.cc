#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    if(n*100>=m)
        cout<<"Yes";
    else
        cout<<"No";
}