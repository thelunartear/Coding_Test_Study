#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;

    n=1000-n;

    int coins[]={500,100,50,10,5,1};

    for(int c:coins)
    {
        ans+=n/c;
        n%=c;
    }

    cout<<ans;
}