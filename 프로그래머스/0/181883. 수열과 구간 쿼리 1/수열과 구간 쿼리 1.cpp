#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& q:queries)
    {
        for(int i=q[0];i<=q[1];i++) arr[i]++;
    }
    return arr;
}