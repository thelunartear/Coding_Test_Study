#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int idx=0;
    while(idx<arr.size())
    {
        if(answer.empty())
        {
            answer.push_back(arr[idx++]);
        }
        else if(!answer.empty() && (answer.back()==arr[idx]))
        {
            answer.pop_back();
            idx+=1;
        }
        else if(!answer.empty() && (answer.back()!=arr[idx]))
        {
            answer.push_back(arr[idx++]);
        }
    }
    
    if(answer.empty()) answer.push_back(-1);
    
    return answer;
}