#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> attend;
    for(int i=0;i<rank.size();i++)
    {
        if(attendance[i])
            attend.push_back({rank[i], i});
    }
    sort(attend.begin(), attend.end());
    answer = 10000*attend[0].second+100*attend[1].second+attend[2].second;
    return answer;
}