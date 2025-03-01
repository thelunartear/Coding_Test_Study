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
        res[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&arr[st.top()]<arr[i])
        {
            res[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }

    for(int i=0;i<n;i++)
        cout<<res[i]<<' ';
}