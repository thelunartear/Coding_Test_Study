#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int t=0;
    for(int s:section)
    {
        if(t>=s)
        {
            continue;
        }
        else
        {
            t=s+m-1;
            answer++;
        }
    }
    return answer;
}