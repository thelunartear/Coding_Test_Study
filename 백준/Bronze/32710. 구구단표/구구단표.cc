#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    bool isVisit[101]={0};
    for(int i=1;i<10;i++)
    {
        isVisit[i]=1;
        for(int j=1;j<10;j++)
            isVisit[i*j]=1;
    }
    if(isVisit[n]==1)   cout<<1;
    else    cout<<0;
}