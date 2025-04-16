#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isNew=true;
    
    for(char c:s)
    {
        if(c==' ')
        {
            answer+=c;
            isNew=true;
        }
        else
        {
            if(isNew&&isalpha(c))
            {
                answer+=toupper(c);
            }
            else
            {
                answer+=tolower(c);
            }
            isNew=false;
        }
    }
    return answer;
}