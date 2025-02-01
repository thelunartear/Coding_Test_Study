#include <iostream>
#include <deque>
#include <vector>
using namespace std;

const int MAX=100000;
const int INF=1e9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int> dist(MAX+1,INF);
    deque<int> dq;

    dist[n]=0;
    dq.push_back(n);

    while(!dq.empty())
    {
        int cur=dq.front();
        dq.pop_front();

        if(cur==k)
        {
            cout<<dist[cur]<<"\n";
            return 0;
        }

        if (cur * 2 <= MAX && dist[cur * 2] > dist[cur]) 
        {
            dist[cur * 2] = dist[cur];
            dq.push_front(cur * 2);
        }
        if (cur - 1 >= 0 && dist[cur - 1] > dist[cur] + 1) 
        {
            dist[cur - 1] = dist[cur] + 1;
            dq.push_back(cur - 1);
        }
        if (cur + 1 <= MAX && dist[cur + 1] > dist[cur] + 1) 
        {
            dist[cur + 1] = dist[cur] + 1;
            dq.push_back(cur + 1);
        }
    }
}