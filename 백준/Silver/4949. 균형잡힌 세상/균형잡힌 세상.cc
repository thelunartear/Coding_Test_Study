#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(1)
    {
        getline(cin,str);
        if(str[0]=='.')   break;
        stack<char> st;

        for(char s:str)
        {
            if(s=='[' || s=='(')
            {
                st.push(s);
            }
            else if(s==')')
            {
                if(st.empty() || st.top()=='[')
                {
                    cout<<"no\n";
                    break;
                }
                st.pop();
            }
            else if(s==']')
            {
                if(st.empty() || st.top()=='(')
                {
                    cout<<"no\n";
                    break;
                }
                st.pop();
            }
            else if(s=='.')
            {
                if(st.empty())
                    cout<<"yes\n";
                else
                    cout<<"no\n";
            }
        }
    }
}