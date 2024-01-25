#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int x=i;x<=j;x++)
    {
        int n = x;
        while(1)
        {
            if(n==0) break;
            if(n%10==k) answer++;
            n/=10;
        }
    }
    return answer;
}