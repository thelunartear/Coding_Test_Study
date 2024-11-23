#include <iostream>
using namespace std;

char chess[8][8];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ans=0;
    
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>chess[i][j];
        }
    }

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(chess[i][j]=='F')
            {
                if((i%2==0 && j%2==0)||(i%2==1&&j%2==1))
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
}