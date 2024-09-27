#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin>>a>>b;
    string str1=to_string(a);
    string str2=to_string(b);
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    a=stoi(str1);
    b=stoi(str2);

    if(a>b)
        cout<<a;
    else
        cout<<b;
}