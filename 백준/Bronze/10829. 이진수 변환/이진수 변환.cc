#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    string str;

    while(n!=0)
    {
        if(n%2==0)
        {
            str+=0+'0';
            n/=2;
        }
        else
        {
            str+=1+'0';
            n/=2;
        }
    }

    reverse(str.begin(), str.end());
    cout<<str;
}