#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i=0;i<=t.length()-p.length();i++)
    {
        string x=t.substr(i,p.length());
        long long a=stoll(x);
        long long b=stoll(p);
        if(a<=b)
            answer++;
    }
    
    return answer;
}