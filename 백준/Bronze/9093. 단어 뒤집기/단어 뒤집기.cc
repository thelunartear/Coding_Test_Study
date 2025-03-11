#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);

        stack<char> st;

        for(char c:s)
        {
            if(c==' ')
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
        cout<<"\n";
    }
}