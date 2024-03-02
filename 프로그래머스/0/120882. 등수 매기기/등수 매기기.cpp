#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<float> v;
    for(int i=0;i<score.size();i++)
    {
        float avg = (score[i][0]+score[i][1])/2.0;
        v.push_back(avg);
    }
    
    for(int i=0;i<v.size();i++)
    {
        int rank=1;
        for(int j=0; j<v.size();j++)
        {
            if(v[i]<v[j]) { rank++; }
        }
        answer.push_back(rank);
    }
    return answer;
}