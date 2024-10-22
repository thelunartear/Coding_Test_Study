#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;

        if(str=="push")
        {
            int a;
            cin>>a;
            s.push(a);
        }
        else if(str=="pop")
        {
            if(s.empty())
                cout<<-1<<"\n";
            else
            {
                cout<<s.top()<<"\n";
                s.pop();
            }
        }
        else if(str=="top")
        {
            if(s.empty())
                cout<<-1<<"\n";
            else
            {
                cout<<s.top()<<"\n";
            }
        }
        else if(str=="size")
        {
            cout<<s.size()<<"\n";
        }
        else if(str=="empty")
        {
            if(s.empty())
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }
    }
}