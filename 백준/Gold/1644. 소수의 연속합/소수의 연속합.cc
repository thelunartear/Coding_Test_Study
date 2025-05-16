#include <bits/stdc++.h>
using namespace std;

const int MAX=4000000;
vector<bool> isPrime(MAX+1,1);
vector<int> primes;

void sieve()
{
    isPrime[0]=0;
    isPrime[1]=0;

    for(int i=2;i*i<=MAX;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=MAX;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }
    for(int i=2;i<=MAX;i++)
    {
        if(isPrime[i])  primes.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    sieve();
    int st=0,ed=0,sum=0,ans=0;
    while(true)
    {
        if(sum>=n)  sum-=primes[st++];
        else if(ed==primes.size())  break;
        else    sum+=primes[ed++];

        if(sum==n)  ans++;
    }
    cout<<ans;
}