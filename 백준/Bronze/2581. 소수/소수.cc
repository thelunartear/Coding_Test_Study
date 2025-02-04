#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if(x<2)
        return false;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin>>m>>n;

    vector<int> primes;
    int sum=0, minPrime=-1;

    for(int i=m;i<=n;i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
            sum+=i;
            if(minPrime==-1)
                minPrime=i;
        }
    }

    if(primes.empty())
        cout<<-1;
    else
        cout<<sum<<"\n"<<minPrime;
}