#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    deque<int> dq;

    for(int i=0;i<n;i++)
    {
        string str;
        int t;
        cin>>str;
        if(str=="push_front")
        {
            cin>>t;
            dq.push_front(t);
        }
        else if(str=="push_back")
        {
            cin>>t;
            dq.push_back(t);
        }
        else if(str=="pop_front")
        {
            if(dq.empty())
                cout<<-1<<"\n";
            else
            {
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        else if(str=="pop_back")
        {
            if(dq.empty())
                cout<<-1<<"\n";
            else
            {
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        else if(str=="size")
        {
            cout<<dq.size()<<"\n";
        }
        else if(str=="empty")
        {
            if(dq.empty())
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }
        else if(str=="front")
        {
            if(dq.empty())
                cout<<-1<<"\n";
            else
                cout<<dq.front()<<"\n";
        }
        else if(str=="back")
        {
            if(dq.empty())
                cout<<-1<<"\n";
            else
                cout<<dq.back()<<"\n";
        }
    }
}