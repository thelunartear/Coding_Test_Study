#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {
    unordered_map<string, string> m = {
    {"zero","0"}, {"one","1"}, {"two","2"}, {"three","3"},
    {"four","4"}, {"five","5"}, {"six","6"}, {"seven","7"}, 
    {"eight","8"}, {"nine","9"}};
    for(auto& p:m)
    {
        size_t pos=0;
        while((pos=s.find(p.first,pos))!=string::npos)
        {
            s.replace(pos,p.first.length(),p.second);
        }
    }
    return stoi(s);
}