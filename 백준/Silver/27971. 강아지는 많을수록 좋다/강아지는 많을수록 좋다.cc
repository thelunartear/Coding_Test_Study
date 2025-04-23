#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, A, B;
    cin >> N >> M >> A >> B;

    vector<bool> forbidden(N + 1, false);
    for (int i = 0; i < M; ++i) 
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; ++j) 
        {
            forbidden[j] = true;
        }
    }

    vector<int> dist(N + 1, -1);
    queue<int> q;

    dist[0] = 0;
    q.push(0);

    while (!q.empty()) 
    {
        int curr = q.front();
        q.pop();

        for (int next : {curr + A, curr + B}) 
        {
            if (next <= N && dist[next] == -1 && !forbidden[next]) 
            {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }

    cout << dist[N];
    return 0;
}