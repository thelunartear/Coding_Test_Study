#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 1e9

vector<vector<pair<int, int>>> graph;
int dist[20001];

void Dij(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty())
    {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_dist > dist[current_node]) continue;

        for (auto a : graph[current_node])
        {
            int next_node = a.first;
            int weight = a.second;

            if (dist[current_node] + weight < dist[next_node])
            {
                dist[next_node] = dist[current_node] + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int start;
    cin >> start;

    graph.resize(n + 1);

    for (int i = 0; i <= n; i++)
    {
        dist[i] = INF;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    Dij(start);

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            cout << "INF" << "\n";
        else
            cout << dist[i] << "\n";
    }
}
