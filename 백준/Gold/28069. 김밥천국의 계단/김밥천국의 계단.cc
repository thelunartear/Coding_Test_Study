#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<bool> visited(MAX, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    for (int i = 1; i <= k; i++) 
    {
        int size = q.size();
        while (size--) 
        {
            int pos = q.front();
            q.pop();

            if (pos + 1 < MAX && !visited[pos + 1]) 
            {
                visited[pos + 1] = true;
                q.push(pos + 1);
            }

            int jump = pos + pos / 2;
            if (jump < MAX && !visited[jump]) 
            {
                visited[jump] = true;
                q.push(jump);
            }
        }
    }

    cout << (visited[n] ? "minigimbob" : "water");
    return 0;
}