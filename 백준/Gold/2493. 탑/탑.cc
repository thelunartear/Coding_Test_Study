#include <iostream>
#include <stack>
using namespace std;

int n;
stack<pair<int,int>> s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while(!s.empty())
        {
            if (num < s.top().first)
            {
                cout << s.top().second << ' ';
                s.push({num, i+1});
                break;
            }
            s.pop();
        }

        if(s.empty())
        {
            cout<<0<<' ';
            s.push({num, i+1});
        }
    }
}
