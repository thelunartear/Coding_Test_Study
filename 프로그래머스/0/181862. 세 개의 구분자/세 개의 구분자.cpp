#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp;
    
    for(auto m:myStr)
    {
        if(m=='a' || m=='b' || m=='c')
        {
            if(!tmp.empty()) answer.push_back(tmp);
            tmp.clear();
        }
        else tmp+=m;
    }
    if(!tmp.empty()) answer.push_back(tmp);
    if(answer.empty()) answer.push_back("EMPTY");
    return answer;
}