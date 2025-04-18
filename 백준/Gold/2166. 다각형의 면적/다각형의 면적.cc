#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<pair<int,int>> p(n);

    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        int x1=p[i].first;
        int y1=p[i].second;
        int x2=p[(i+1)%n].first;
        int y2=p[(i+1)%n].second;

        sum1+=1LL*x1*y2;
        sum2+=1LL*x2*y1;
    }
    double a=abs(sum1-sum2)/2.0;

    cout<<fixed<<setprecision(1)<<round(a*10)/10;
}