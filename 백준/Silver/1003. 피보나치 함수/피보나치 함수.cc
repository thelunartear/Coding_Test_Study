#include <iostream>
using namespace std;

int fibonacci[41][2];

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int t;
    cin>>t;

    fibonacci[0][0]=1;
    fibonacci[0][1]=0;

    fibonacci[1][0]=0;
    fibonacci[1][1]=1;

    for(int i=2;i<41;i++)
    {
        fibonacci[i][0]=fibonacci[i-1][0]+fibonacci[i-2][0];
        fibonacci[i][1]=fibonacci[i-1][1]+fibonacci[i-2][1];
    }

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<fibonacci[n][0]<<' '<<fibonacci[n][1]<<"\n";
    }
}