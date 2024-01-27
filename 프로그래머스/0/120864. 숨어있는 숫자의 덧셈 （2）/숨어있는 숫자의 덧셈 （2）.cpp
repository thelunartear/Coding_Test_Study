#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    regex pattern("\\d+");  // 정규표현식 패턴 : 1자리 이상의 숫자
    
    // sregex_iterator 객체 iter를 생성->문자열 my_string에서 정규표현식 패턴에 매칭되는 부분을 찾음 
    sregex_iterator iter(my_string.begin(), my_string.end(), pattern);
    sregex_iterator end;
    
    while (iter != end) {
        // 매칭 결과 저장
        smatch match = *iter;
        answer += std::stoi(match.str());
        ++iter;
    }
    
    return answer;
}