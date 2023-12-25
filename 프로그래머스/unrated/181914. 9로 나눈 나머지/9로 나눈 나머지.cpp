#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int len = number.length();
    for(int i=0;i<len;i++)
    {
        int x = number[i] - '0';
        answer += x;
    }
    return answer % 9;
}