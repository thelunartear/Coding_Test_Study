#include <iostream>
#include <vector>
using namespace std;


const long long MAX=4000000;

vector<bool> p(MAX+1, true);

void IsPrime()
{
    p[0]=false;
    p[1]=false;

    for(long long i=2;i*i<=MAX;i++)
    {
        if(!p[i])
            continue;
        for(long long j=i*i;j<=MAX;j+=i)
        {
            p[j]=false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,ans=0;
    char d;
    
    cin>>a>>b>>d;

    IsPrime();

    for(long long i=a;i<=b;i++)
    {
        if(p[i]==true)
        {
            string tmp=to_string(i);
            for(int j=0;j<tmp.length();j++)
            {
                if(tmp[j]==d)
                {
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans;
}