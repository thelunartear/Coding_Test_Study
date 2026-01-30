#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    
    for(auto t:tangerine)
    {
        m[t]++;
    }

    vector<int> v;
    
    for(auto it=m.begin();it!=m.end();it++)
    {
        v.push_back(it->second);
    }

    sort(v.begin(),v.end(),greater<int>());

    while(k>0)
    {
        k-=v[answer];
        answer++;
    }
    
    return answer;
}