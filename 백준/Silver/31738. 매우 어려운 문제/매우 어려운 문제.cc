#include <iostream>
using namespace std;

long long solution(long long n, long long m)
{
    if(n>m)
        return 0;
    else
    {
        long long res=1;
        for(long long i=2;i<=n;i++)
            res=(res*i)%m;
        return res;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin>>n>>m;

    cout<<solution(n,m);
}