#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
   int answer = 0;
    for (int i = 0; i < dic.size(); i++)
    {
        int check = 0;
        for (int j = 0; j < spell.size(); j++) 
        {
            if (dic[i].find(spell[j]) == string::npos) 
            {
                check = -1;
                answer = 2;
                break;
            }
        }
        if (check == 0) 
        {
            answer = 1;
            break;
        }
    }
    return answer;
}