#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> challenge(N+1,0);
    vector<int> fail(N+2,0);
    vector<pair<int,float>> failRate;
    
    for(int s:stages)
    {
        if(s<=N)
        {
            fail[s]++;
        }
         for(int i=1;i<=s&&i<=N;i++)
        {
            challenge[i]++;
        }
    }    
   
    for(int i=1;i<=N;i++)
    {
        float rate=0;
        if(challenge[i]==0)
        {
            failRate.push_back({i,0.0f});
        }
        else
        {
            failRate.push_back({i,static_cast<float>(fail[i])/challenge[i]});
        }
    }
    
    sort(failRate.begin(), failRate.end(),
        [](const pair<int, float>& a, const pair<int, float>& b) {
            if (a.second == b.second) { return a.first<b.first;}
            return a.second>b.second;});
    
    for (const auto& p : failRate) 
    {
        answer.push_back(p.first);
    }
    
    return answer;
}