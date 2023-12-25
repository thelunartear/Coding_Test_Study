#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l;i<=r;i++)
    {
        string temp = to_string(i);
        bool isIncluded = true;
        for(char t : temp)
        {
            if(t!='0' && t!='5')
            {
                isIncluded = false;
                break;
            }
        }
        if(isIncluded)
        {
            answer.push_back(i);
        }
    }
    
    if(answer.size()==0)
        answer.push_back(-1);
    return answer;
}