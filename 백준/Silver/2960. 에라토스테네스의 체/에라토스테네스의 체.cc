#include <iostream>
using namespace std;

bool isPrime[1001]={false,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, cnt=0;
    cin>>n>>k;

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]==false)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(isPrime[j]==false)
                {
                    isPrime[j]=true;
                    cnt++;
                    if(cnt==k)
                    {
                        cout<<j;
                        return 0;
                    }
                }
            }
        }
    }
}