#include <iostream>
#include <algorithm>
using namespace std;

int k,n;
long long ans;
long long lan[10001];

long long solve(long long m)
{
    long long cnt=0;
    for(int i=0;i<k;i++)
        cnt+=lan[i]/m;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>k>>n;

    for(int i=0;i<k;i++)
        cin>>lan[i];

    sort(lan, lan+k);

    long long left=1,right=lan[k-1];

    while(left<=right)
    {
        long long mid=(left+right)/2;
        long long cnt=solve(mid);

        if(cnt>=n)
        {
            ans=mid;
            left=mid+1;
        }
        else
            right=mid-1;
    }
    cout<<ans;
}