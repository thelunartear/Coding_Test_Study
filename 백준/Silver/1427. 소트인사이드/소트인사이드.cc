#include <iostream>
#include <algorithm>
using namespace std;

bool Comp(char a, char b)
{
    return a>b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin>>n;

    int t=n.size();
    sort(n.begin(), n.end(), Comp);
    cout<<n;
}