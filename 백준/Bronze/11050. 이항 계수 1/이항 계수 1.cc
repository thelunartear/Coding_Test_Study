#include <iostream>
using namespace std;

int sol(int n, int k)
{
    if(k==0 || n==k)
        return 1;
    return sol(n-1,k-1)+sol(n-1,k);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    cout<<sol(n,k);
}