#include <iostream>
#include <stack>
using namespace std;

int t;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        stack<char> st;
        bool isValid=true;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='(')
            {
                st.push('(');
            }
            else
            {
                if(st.empty())
                {
                    isValid=false;
                    break;
                }
                st.pop();
            }
        }
        if(isValid==true && st.empty())
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }    
}