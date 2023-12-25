#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    int len = index_list.size();
    for(int i=0;i<len;i++)
    {
        int x = index_list[i];
        answer += my_string[x];
    }
    return answer;
}