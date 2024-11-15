#include <iostream>
#include <climits>
using namespace std;

int sum[100001];
int ans = INT_MIN;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        sum[i]=sum[i-1]+temp;
    }

    for(int i=k;i<=n;i++)
    {
        ans=max(ans, (sum[i]-sum[i-k]));
    }
    cout<<ans;
}