#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    bool isSkip=false;
    for(int i=0;i<s.size();i++)
    {
        int cnt=index;
        char c=s[i];
        while(cnt>0)
        {
            c++;
            if(c>'z')
                c='a';
            bool isSkip=false;
            for(char k:skip)
            {
                if(c==k)
                {
                    isSkip=true;
                    break;
                }
            }
            if(!isSkip)
                cnt--;
        }
        answer+=c;
    }
    return answer;
}