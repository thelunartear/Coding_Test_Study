#include <string>
#include <vector>

using namespace std;

int dfs(const vector<int> numbers, int target, int idx, int sum)
{
    if(idx==numbers.size())
        return (sum==target)?1:0;
    int plusCase=dfs(numbers,target,idx+1,sum+numbers[idx]);
    int minusCase=dfs(numbers,target,idx+1,sum-numbers[idx]);
    return plusCase+minusCase;
}

int solution(vector<int> numbers, int target) {
    return dfs(numbers,target,0,0);
}