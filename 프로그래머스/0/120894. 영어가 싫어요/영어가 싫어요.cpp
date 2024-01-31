#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    unordered_map<string, int> word_to_num
        = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string current_word = "";
    for(char c:numbers)
    {
        current_word += c;
        if(word_to_num.find(current_word) != word_to_num.end())
        {
            answer = answer * 10 + word_to_num[current_word];
            current_word = "";
        }
    }
    
    return answer;
}