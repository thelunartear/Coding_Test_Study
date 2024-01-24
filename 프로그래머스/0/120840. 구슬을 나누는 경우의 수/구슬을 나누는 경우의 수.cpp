#include <string>
#include <vector>

using namespace std;

long long combination(int n, int m)
{
    long long sum = 1;
    for(int i=1; i<m+1; i++)
    {
        sum=(sum*n)/i;
        n--;
    }
    return sum;
}

int solution(int balls, int share) {
    int answer = combination(balls, share);
    return answer;
}