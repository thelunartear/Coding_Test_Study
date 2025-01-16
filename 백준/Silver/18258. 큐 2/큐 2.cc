#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    queue<int> q;
    string str;

    while(n--)
    {
        cin>>str;
        int t;
        if(str=="push")
        {
            cin>>t;
            q.push(t);
        }
        else if(str=="pop")
        {
            if(!q.empty())
            {
                cout<<q.front()<<"\n";
                q.pop();
            }
            else
                cout<<-1<<"\n";
        }
        else if(str=="size")
            cout<<q.size()<<"\n";
        else if(str=="empty")
        {
            if(q.empty())
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }
        else if(str=="front")
        {
            if(!q.empty())
                cout<<q.front()<<"\n";
            else
                cout<<-1<<"\n";
        }
        else if(str=="back")
        {
            if(!q.empty())
                cout<<q.back()<<"\n";
            else
                cout<<-1<<"\n";
        }
    }
}