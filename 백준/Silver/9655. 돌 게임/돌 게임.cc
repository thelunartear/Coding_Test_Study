#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n%2==1)
        cout<<"SK";
    else
        cout<<"CY";
}