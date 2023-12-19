#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str_a=to_string(a);
    string str_b=to_string(b);
    
    int ans1=stoi(str_a+str_b);
    int ans2=stoi(str_b+str_a);
    
    if(ans1>ans2)
        answer=ans1;
    else if(ans1<ans2)
        answer=ans2;
    else
        answer=ans1;
    return answer;
}