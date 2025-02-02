#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        queue<pair<int,int>> q;
        priority_queue<int> pq;

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            q.push({p,i});
            pq.push(p);
        }

        int ans=0;

        while(!q.empty())
        {
            int curP=q.front().first;
            int curIdx=q.front().second;
            q.pop();

            if(curP<pq.top())
            {
                q.push({curP,curIdx});
            }
            else
            {
                pq.pop();
                ans++;

                if(curIdx==m)
                {
                    cout<<ans<<"\n";
                    break;
                }
            }
        }
    }
}