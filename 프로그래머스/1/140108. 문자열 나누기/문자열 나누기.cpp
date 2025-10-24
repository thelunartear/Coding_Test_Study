#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x;
    int idx=0;
    while(idx<s.length())
    {
        x=s[idx];
        int cnt_x=0,cnt_not_x=0;
        int loop_idx=idx;
        while(loop_idx<s.length())
        {
            if(s[loop_idx]==x)
                cnt_x++;
            else
                cnt_not_x++;
            loop_idx++;
            
            if(cnt_x==cnt_not_x)
                break;
        }
        answer++;
        idx=loop_idx;
    }
    
    return answer;
}