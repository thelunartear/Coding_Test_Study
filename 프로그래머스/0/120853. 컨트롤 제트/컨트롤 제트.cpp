#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    stack<int> num;
    istringstream iss(s);
    string token;

    while (iss >> token) 
    {
        if (token == "Z") 
        {
            num.pop();
        }
        else
        {
            num.push(stoi(token));
        }
    }
    
    while (!num.empty()) 
    {
        answer += num.top();
        num.pop();
    }
    
    return answer;
}