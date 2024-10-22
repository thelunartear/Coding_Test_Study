#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(s=="push")
        {
            int a;
            cin>>a;
            q.push(a);
        }
        else if(s=="pop")
        {
            if(q.empty())   cout<<-1<<"\n";
            else
            {
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(s=="size")
        {
            if(q.empty())   cout<<0<<"\n";
            else    cout<<q.size()<<"\n";
        }
        else if(s=="empty")
        {
            if(q.empty())   cout<<1<<"\n";
            else    cout<<0<<"\n";
        }
        else if(s=="front")
        {
            if(q.empty())   cout<<-1<<"\n";
            else    cout<<q.front()<<"\n";
        }
        else if(s=="back")
        {
            if(q.empty())   cout<<-1<<"\n";
            else    cout<<q.back()<<"\n";
        }
    }
}