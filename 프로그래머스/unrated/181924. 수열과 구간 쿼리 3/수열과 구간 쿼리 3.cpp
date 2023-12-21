#include <string>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& query:queries)
    {
        int i=query[0];
        int j=query[1];
        swap(arr[i], arr[j]);
    }
    return arr;
}