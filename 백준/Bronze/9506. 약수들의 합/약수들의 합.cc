#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> func(int n)
{
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=1&&i!=n/i)
                v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        int t;
        cin>>t;
        if(t==-1)   break;
        vector<int> div=func(t);
        int sum=0;
        for(int d:div)  sum+=d;

        if(sum==t)
        {
            cout<<t<<" = ";
            for(size_t i=0;i<div.size();i++)
            {
                cout<<div[i];
                if(i!=div.size()-1)
                    cout<<" + ";
            }
            cout<<"\n";
        }
        else
            cout<<t<<" is NOT perfect.\n";
    }
}