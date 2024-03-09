#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int tmp=0;
    for(int i=0;i<myString.size();i++)
    {
        if(myString[i]=='x')
        {
            answer.push_back(i-tmp);
            tmp=i+1;
        }
    }
    answer.push_back(myString.size()-tmp);
    return answer;
}