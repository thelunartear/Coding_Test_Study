#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str_a = to_string(a);
    string str_b = to_string(b);
    
    int ans1 = stoi(str_a+str_b);
    int ans2 = 2 * a * b;
    
    answer = max(ans1, ans2);
    
    return answer;
}