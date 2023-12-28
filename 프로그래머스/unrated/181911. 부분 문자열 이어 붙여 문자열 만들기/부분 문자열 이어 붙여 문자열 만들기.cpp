#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i=0; i<my_strings.size(); i++)
    {
        int p1 = parts[i][0];
        int p2 = parts[i][1];
        
        answer += my_strings[i].substr(p1, p2-p1+1);
    }
    return answer;
}