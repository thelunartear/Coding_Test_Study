#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s, d, v;
    while(1)
    {
        cin>>s>>d>>v;
        if(s==0 && d==0 && v==0)    break;
        
        if((v-s)%d==0)
        {
            int n=(v-s)/d+1;
            if(n>0)
                cout<<n<<"\n";
            else
                cout<<"X\n";
        }
        else
        {
            cout<<"X\n";
        }
    }
}