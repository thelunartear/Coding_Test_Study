#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char,int> minpress;
    
    for(const auto& k:keymap)
    {
        for(int i=0;i<k.size();i++)
        {
            char c=k[i];
            if(minpress.count(c))
            {
                minpress[c]=min(minpress[c],i+1);
            }
            else
            {
                minpress[c]=i+1;
            }
        }
    }
    
    for(const auto& t:targets)
    {
        int sum=0;
        bool isCan=false;
        
        for(char c:t)
        {
            if(!minpress.count(c))
            {
                isCan=true;
                break;
            }
            sum+=minpress[c];
        }
        answer.push_back(isCan?-1:sum);
    }
        
    return answer;
}