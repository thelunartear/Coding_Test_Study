#include <iostream>
using namespace std;

int arr[20];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int m=0, y=0;
    
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<t;i++)
    {
        y+=((arr[i]/30)+1)*10;
        m+=((arr[i]/60)+1)*15;
    }
    if(m<y)
    {
        cout<<"M "<<m;
    }
    else if(m>y)
    {
        cout<<"Y "<<y;
    }
    else
    {
        cout<<"Y M "<<y;
    }
}