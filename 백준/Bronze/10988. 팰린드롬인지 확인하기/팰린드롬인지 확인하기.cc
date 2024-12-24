#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1;
    cin>>str1;

    string str2=str1;
    reverse(str2.begin(), str2.end());

    if(str1==str2)
        cout<<1;
    else
        cout<<0;
}