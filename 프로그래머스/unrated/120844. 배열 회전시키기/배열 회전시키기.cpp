#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int len = numbers.size();
    if(direction=="right")
    {
        int temp=numbers[len-1];
        answer.push_back(temp);
        for(int i=0;i<len-1;i++)
        {
            answer.push_back(numbers[i]);
        }
    }
    else if(direction=="left")
    {
        int temp=numbers[0];
        for(int i=1;i<len;i++)
        {
            answer.push_back(numbers[i]);
        }
        answer.push_back(temp);
    }
    return answer;
}