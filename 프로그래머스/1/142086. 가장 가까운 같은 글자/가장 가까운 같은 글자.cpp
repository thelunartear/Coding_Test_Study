#include <string>
#include <vector>

using namespace std;

vector<int> a(26,-1);

vector<int> solution(string s) {
    vector<int> answer;
    for(int i=0;i<s.length();i++)
    {
        int t=s[i]-'a';
        if(a[t]==-1)
            answer.push_back(-1);
        else
            answer.push_back(i-a[t]);
        a[t]=i;
    }
    return answer;
}