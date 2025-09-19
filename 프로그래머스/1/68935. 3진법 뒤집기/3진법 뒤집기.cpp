#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n>0)
    {
        int t=n%3;
        v.push_back(t);
        n/=3;
    }
    for(int i=0;i<v.size();i++)
    {
        answer=answer*3+v[i];
    }
    return answer;
}