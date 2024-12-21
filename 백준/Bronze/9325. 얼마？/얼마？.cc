#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;


    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;

        int n;
        cin>>n;

        int qp=0;

        for(int i=0;i<n;i++)
        {
            int q,p;
            cin>>q>>p;
            qp+=q*p;
        }
        
        cout<<s+qp<<"\n";
    }
}