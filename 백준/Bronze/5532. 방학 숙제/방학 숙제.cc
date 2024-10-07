#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l,a,b,c,d;
    cin>>l>>a>>b>>c>>d;

    int x = (a + c - 1) / c; // 올림 처리
    int y = (b + d - 1) / d; // 올림 처리

    int m = max(x,y);
    cout<<l-m;

    return 0;
}