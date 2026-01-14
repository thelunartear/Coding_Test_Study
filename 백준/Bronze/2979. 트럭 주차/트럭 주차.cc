#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v(101,0);
    
    int ans=0;
    
    for(int i=0;i<3;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<y;j++)
        {
            v[j]++;
        }
    }
    
    for(int i=0;i<101;i++)
    {
        if(v[i]==1)
        {
            ans+=a;
        }
        else if(v[i]==2)
        {
            ans+=(b*2);
        }
        else if(v[i]==3)
        {
            ans+=(c*3);
        }
    }
    cout<<ans;
}