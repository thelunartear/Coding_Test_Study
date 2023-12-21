#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int num = num_list.size();
    int t;
    if(num_list[num-1]>num_list[num-2])
    {
        t = num_list[num-1] - num_list[num-2];
        num_list.push_back(t);
    }
    else
    {
        t = num_list[num-1]*2;
        num_list.push_back(t);
    }
    return num_list;
}