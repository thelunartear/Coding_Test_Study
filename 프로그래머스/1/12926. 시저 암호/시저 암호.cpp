#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            answer+=' ';
            continue;
        }
        else
        {
            if(s[i]>=65&&s[i]<=90)
            {
                if(s[i]+n>90)
                {
                    answer+=s[i]+n-26;
                }
                else
                {
                    answer+=s[i]+n;
                }
            }
            
            if(s[i]>=97&&s[i]<=122)
            {
                if(s[i]+n>122)
                {
                    answer+=s[i]+n-26;
                }
                else
                {
                    answer+=s[i]+n;
                }
            }            
        }
    }
    return answer;
}