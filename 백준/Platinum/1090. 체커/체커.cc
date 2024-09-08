#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        
    int N;
    cin >> N;

    vector<pair<int, int>> checkers(N);

    for (int i = 0; i < N; i++) {
        cin >> checkers[i].first >> checkers[i].second;
    }

    vector<int> move_counts(N, 1e9);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) 
        {
            vector<int> distances;
            for (int k = 0; k < N; k++) {
                int distance = abs(checkers[k].first - checkers[i].first) + abs(checkers[k].second - checkers[j].second);
                distances.push_back(distance);
            }
            sort(distances.begin(), distances.end());


            int total_move = 0;
            for (int k = 0; k < N; k++) 
            {
                total_move += distances[k];
                move_counts[k] = min(move_counts[k], total_move);
            }
        }
    }

    for (int i = 0; i < N; i++) 
    {
        cout << move_counts[i] << " ";
    }
}
