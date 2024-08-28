#include <iostream>
#include <queue>
using namespace std;

int f, s, g, u, d;
bool visited[1000001];

int bfs() {
    queue<pair<int, int>> q;
    q.push({s, 0}); // 현재 층, 버튼 클릭 횟수
    visited[s] = true;

    while (!q.empty()) {
        int floor = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (floor == g) {
            return cnt;
        }

        // 위로 이동
        int up = floor + u;
        if (up <= f && !visited[up]) {
            visited[up] = true;
            q.push({up, cnt + 1});
        }

        // 아래로 이동
        int down = floor - d;
        if (down >= 1 && !visited[down]) {  // 여기를 수정했습니다
            visited[down] = true;
            q.push({down, cnt + 1});
        }
    }

    // 갈 수 없는 경우
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> f >> s >> g >> u >> d;

    int result = bfs();
    if (result == -1) {
        cout << "use the stairs" << "\n";
    } else {
        cout << result << "\n";
    }

    return 0;
}