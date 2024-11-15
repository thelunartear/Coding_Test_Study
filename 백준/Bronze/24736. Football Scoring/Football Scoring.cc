#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<2;i++)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        cout<<a*6+b*3+c*2+d*1+e*2<<" ";
    }
}