#include <iostream>
#include <queue>
using namespace std;

void josephus(int n, int k)
{
    queue<int> q;

    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }

    cout<<"<";
    while(!q.empty())
    {
        for(int i=1;i<k;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front();
        q.pop();

        if(!q.empty())
            cout<<", ";
    }
    cout<<">";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    josephus(n,k);
}