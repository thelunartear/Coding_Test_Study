#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (const string& word : babbling) {
        bool check = true;
        for (int i = 0; i < word.size(); ) {
            if (word.substr(i, 3) == "aya") i += 3;
            else if (word.substr(i, 2) == "ye") i += 2;
            else if (word.substr(i, 3) == "woo") i += 3;
            else if (word.substr(i, 2) == "ma") i += 2;
            else {
                check = false;
                break;
            }
        }
        if (check) answer++;
    }
    return answer;
}