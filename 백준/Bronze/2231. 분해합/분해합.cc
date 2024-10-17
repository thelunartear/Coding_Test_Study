#include <iostream>
using namespace std;

int solution(int n)
{
    for(int i=1;i<=n;i++)
    {
        int sum=i;
        int temp=i;

        while(temp>0)
        {
            sum+=temp%10;
            temp/=10;
        }
        if(sum==n)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<solution(n);
}