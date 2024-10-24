#include <iostream>
using namespace std;

bool isPrime[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin>>m>>n;

    fill_n(isPrime,1000001, true);

    isPrime[0]=false;
    isPrime[1]=false;

    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    for(int i=m;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<"\n";
        }
    }
}