#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Edge {
    int to;
    long long cost;
};

int N;
vector<vector<Edge>> graph;

pair<int, long long> bfs(int start) {
    vector<long long> dist(N + 1, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    
    int farthest_node = start;
    long long max_distance = 0;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (Edge e : graph[node]) {
            if (dist[e.to] == -1) {
                dist[e.to] = dist[node] + e.cost;
                q.push(e.to);
                if (dist[e.to] > max_distance) {
                    max_distance = dist[e.to];
                    farthest_node = e.to;
                }
            }
        }
    }
    
    return {farthest_node, max_distance};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    graph.resize(N + 1);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    
    auto result = bfs(1);
    cout << result.second << endl;
}
