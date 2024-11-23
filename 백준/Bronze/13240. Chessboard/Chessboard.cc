#include <iostream>
using namespace std;

char cb[11][11];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i%2==0&&j%2==0)||(i%2==1&&j%2==1))
            {
                cout<<'*';
            }
            if((i%2==1&&j%2==0)||(i%2==0&&j%2==1))
            {
                cout<<'.';
            }
        }
        cout<<endl;
    }
}