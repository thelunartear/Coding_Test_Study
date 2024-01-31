#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string s) {
    string answer = "";
    unordered_map<char, int> charCnt;
    
    for(char c:s)
    {
        charCnt[c]++;
    }
    
    for(char c:s)
    {
        if(charCnt[c]==1)
            answer+=c;
    }
    sort(answer.begin(), answer.end());
    return answer;
}