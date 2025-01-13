#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt=1;
    cin>>n;
    stack<int> st;
    vector<int> seq(n);
    vector<char> ans;

    for(int i=0;i<n;i++)
    {
        cin>>seq[i];

        int t=seq[i];

        while(cnt<=t)
        {
            st.push(cnt);
            ans.push_back('+');
            cnt++;
        }

        if(!st.empty() && st.top()==t)
        {
            st.pop();
            ans.push_back('-');
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
}