#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=n-5;i<n;i++)
    {
        cout<<s[i];
    }
}