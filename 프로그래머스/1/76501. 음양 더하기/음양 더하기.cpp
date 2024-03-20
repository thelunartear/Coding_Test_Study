#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    vector<int> v;
    for(int i=0;i<absolutes.size();i++)
    {
        if(signs[i]==true)
        {
            v.push_back(absolutes[i]);
        }
        else
        {
            v.push_back(-1*absolutes[i]);
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        answer+=v[i];
    }
    return answer;
}