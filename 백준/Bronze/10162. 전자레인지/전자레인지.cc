#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int time[]={300,60,10};
    int btn[3]={0};

    if(t%10!=0)
    {
        cout<<-1;
        return 0;
    }

    for(int i=0;i<3;i++)
    {
        btn[i]=t/time[i];
        t%=time[i];
        cout<<btn[i]<<" ";
    }
}