#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<string> div;
    for (int i = 0; i < my_string.size(); i += m) 
    {
        div.push_back(my_string.substr(i, m));
    }
    
    for (const string& s : div) {
        if (c - 1 < s.size()) 
        {
            answer += s[c - 1];
        }
    }
    return answer;
}