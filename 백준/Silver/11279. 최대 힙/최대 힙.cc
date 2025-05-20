#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    priority_queue<int> pq;
    while(n--)
    {
        int t;
        cin>>t;
        if(t>0)
            pq.push(t);
        else if(t==0)
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            else
                cout<<0<<"\n";
        }
    }
}