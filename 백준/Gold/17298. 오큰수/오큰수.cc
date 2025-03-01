#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
int arr[1000001];
int res[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&st.top()<=arr[i])
            st.pop();
        if(st.empty())
            res[i]=-1;
        else
            res[i]=st.top();
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++)
        cout<<res[i]<<' ';
}