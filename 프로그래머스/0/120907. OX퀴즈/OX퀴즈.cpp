#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
     for (string& q : quiz) {
        stringstream ss(q);
        int x, y, z;
        char op, equal;

        ss >> x >> op >> y >> equal >> z;

        if ((op == '+' && (x + y) == z) || (op == '-' && (x - y) == z)) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }
    return answer;
}