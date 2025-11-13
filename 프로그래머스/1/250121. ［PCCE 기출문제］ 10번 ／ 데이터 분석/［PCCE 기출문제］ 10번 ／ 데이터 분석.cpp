#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    map<string,int> ext_idx={{"code",0},{"date",1},{"maximum",2},{"remain",3}};
    int m_idx=ext_idx[ext];
    int sort_idx=ext_idx[sort_by];
    
    for(const auto& d:data)
    {
        if(d[m_idx]<val_ext)
        {
            answer.push_back(d);
        }
    }
    sort(answer.begin(),answer.end(),[&](const vector<int>& a, const vector<int>& b){return a[sort_idx]<b[sort_idx];});
    return answer;
}