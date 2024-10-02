#include <iostream>
using namespace std;

int n, m;
int b[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    int sum=0, res=0;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                sum=b[i]+b[j]+b[k];
                if(sum>res && sum<=m) res=sum;
            }
        }
    }

    cout<<res;
}