#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int index = 0;
    while (index < num_list.size()) {
        vector<int> temp;
        for (int i = 0; i < n && index < num_list.size(); i++) {
            temp.push_back(num_list[index++]);
        }
        answer.push_back(temp);
    }
    return answer;
}