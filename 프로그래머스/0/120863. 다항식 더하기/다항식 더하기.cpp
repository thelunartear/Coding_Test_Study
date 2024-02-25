#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<int> x_arr;
    vector<int> i_arr;
    
    istringstream iss(polynomial);
    string term;
    while (iss >> term) {
        if (term == "+") {
            continue;
        } else if (term.find('x') != string::npos) {
            if (term == "x") {
                x_arr.push_back(1);
            } else {
                x_arr.push_back(stoi(term.substr(0, term.length() - 1)));
            }
        } else {
            i_arr.push_back(stoi(term));
        }
    }
    
    int sum_x = 0;
    for (int x : x_arr) {
        sum_x += x;
    }
    
    if (sum_x == 0) {
        answer += "";
    } else if (sum_x == 1) {
        answer += "x";
    } else {
        answer += to_string(sum_x) + "x";
    }
    
    int sum_i = 0;
    for (int i : i_arr) {
        sum_i += i;
    }
    
    if (sum_i == 0) {
        return answer;
    } else if (answer == "") {
        return to_string(sum_i);
    } else {
        return answer + " + " + to_string(sum_i);
    }
}