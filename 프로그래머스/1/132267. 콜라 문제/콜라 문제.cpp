#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n>=a)
    {
        int c=(n/a)*b;
        answer+=c;
        n=n-(n/a)*a+c;
    }
    
    return answer;
}