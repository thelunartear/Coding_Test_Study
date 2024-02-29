#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for (const auto& row : db) {
        if (row[0] == id_pw[0]) {
            if (row[1] == id_pw[1]) {
                return "login";
            } else {
                return "wrong pw";
            }
        }
    }
    return "fail";
}