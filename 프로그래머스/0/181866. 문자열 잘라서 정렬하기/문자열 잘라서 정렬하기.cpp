#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp;
    for(int i=0;i<myString.size();i++)
    {
        if(myString[i]=='x')
        {
            if(!tmp.empty())
            {
                answer.push_back(tmp);
            }
            tmp.clear();
        }
        else
        {
            tmp+=myString[i];
        }
    }
    if (!tmp.empty())
        answer.push_back(tmp);
    sort(answer.begin(), answer.end());
    return answer;
}