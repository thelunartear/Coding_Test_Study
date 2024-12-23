#include <iostream>
#include <queue>
using namespace std;

bool isVisit[100001]={0,};
int arr[100001];
int cnt[100001]={0,};

void bfs(int n, int k)
{
    queue<int> q;
    arr[n]=0;
    cnt[n]=1;
    isVisit[n]=true;
    q.push(n);

    while(!q.empty())
    {
        int x=q.front();
        q.pop();

        if(x==k)
        {
            cout<<arr[k]<<"\n"<<cnt[k];
            return;
        }

        for(int i:{x-1,x+1,2*x})
        {
            if(i<0 || i>100000) continue;
            
            if(!isVisit[i])
            {
                isVisit[i]=true;
                arr[i]=arr[x]+1;
                cnt[i]=cnt[x];
                q.push(i);
            }
            else if(arr[i]==arr[x]+1)
                cnt[i]+=cnt[x];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    bfs(n,k);
}