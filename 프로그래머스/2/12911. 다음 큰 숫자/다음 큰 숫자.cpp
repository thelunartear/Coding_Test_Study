#include <string>
#include <vector>

using namespace std;

int popcount(int t)
{
    int cnt=0;
    while(t>0)
    {
        cnt+=(t&1);
        t>>=1;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    
    int tmp=popcount(n);
    answer=n+1;
    
    while(popcount(answer)!=tmp)
    {
        answer++;
    }
    return answer;
}