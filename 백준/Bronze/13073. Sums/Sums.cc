#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int s1=n*(n+1)/2;
        int s2=n*n;
        int s3=n*n+n;

        cout<<s1<<' '<<s2<<' '<<s3<<"\n";
    }
}