#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w,h;
    cin>>w>>h;
    cout<<fixed;
    cout.precision(1);
    cout<<float(w*h)/2;
}