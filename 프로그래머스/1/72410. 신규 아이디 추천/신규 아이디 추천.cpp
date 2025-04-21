#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

string solution(string new_id) {
    string answer = "";
    // 1단계
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    // 2단계
    for(int i=0;i<new_id.length();i++)
    {
        if((new_id[i]>='a'&&new_id[i]<='z')||(new_id[i]>='0'&&new_id[i]<='9')||new_id[i]=='-'||new_id[i]=='_'||new_id[i]=='.')
            answer+=new_id[i];
        else
            continue;
    }
    // 3단계
    regex dot("\\.+");
    answer=regex_replace(answer,dot,".");
    // 4단계
    if(answer.front()=='.')
        answer.erase(answer.begin());
    if(answer.back()=='.')
        answer.pop_back();
    // 5단계
    if(answer.empty())
        answer+='a';
    // 6단계
    if(answer.length()>=16)
    {
        answer.resize(15);
        if(answer[14]=='.')
            answer.pop_back();
    }
    // 7단계
    if(answer.length()<=2)
    {
        char l=answer.back();
        while(answer.length()<3)
            answer+=l;
    }
    return answer;
}