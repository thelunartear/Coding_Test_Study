#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (const auto& query : queries) {
        for (int i = 0; i < arr.size(); ++i) {
            if (i >= query[0] && i <= query[1] && i % query[2] == 0) {
                arr[i]++;
            }
        }
    }
    return arr;
}