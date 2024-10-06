#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        if(a<40)
        {
            a=40;
            sum+=a;
        }
        else
        {
            sum+=a;
        }
    }
    cout<<sum/5<<"\n";
}