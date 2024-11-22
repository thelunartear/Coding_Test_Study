#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int day=0, time=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        time+=a;
    }
    time+=8*(n-1);
    day=time/24;
    time%=24;
    cout<<day<<' '<<time;
}