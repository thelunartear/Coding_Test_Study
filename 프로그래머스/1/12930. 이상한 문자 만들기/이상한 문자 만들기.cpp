#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int len=s.length();
    int idx=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            idx=0;
        }
        else
        {
            if(idx%2==0)
            {
                s[i]=toupper(s[i]);
            }
            else
            {
                s[i]=tolower(s[i]);
            }
            idx++;
        }
    }
    answer=s;
    return answer;
}