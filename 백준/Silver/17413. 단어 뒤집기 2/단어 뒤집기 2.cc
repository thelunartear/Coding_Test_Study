#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    string s;
    getline(cin,s);

    stack<char> st;
    bool inTag=false;

    for(char c:s)
    {
        if(c=='<')
        {
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            inTag=true;
            cout<<c;
        }
        else if(c=='>')
        {
            inTag=false;
            cout<<c;
        }
        else if(inTag)
        {
            cout<<c;
        }
        else if(c==' ')
        {
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<' ';
        }
        else
        {
            st.push(c);
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}