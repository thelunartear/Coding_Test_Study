#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=3;

    while(t--)
    {
        int x,y,z,a;
        cin>>x>>y>>z>>a;
        
        int arr[4]={x,y,z,a};
        int zero=0, one=0;
        for(int i=0;i<4;i++)
        {
            if(arr[i]==0)
                zero++;
            else
                one++;
        }

        if(zero==0)
            cout<<"E\n";
        else if(zero==1)
            cout<<"A\n";
        else if(zero==2)
            cout<<"B\n";
        else if(zero==3)
            cout<<"C\n";
        else
            cout<<"D\n";
    }
}