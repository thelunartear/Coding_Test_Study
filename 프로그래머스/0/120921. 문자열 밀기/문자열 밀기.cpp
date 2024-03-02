#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    if(A==B) answer=0;
    else
    {
        for(int i=1; i<A.size(); i++)
        {
            char s=A.back();
            A = A.substr(0, A.size()-1);
            A = s + A;
            if(A==B)
            {
                answer=i;
                break;
            }    
        }
    }
    
    return answer;
}