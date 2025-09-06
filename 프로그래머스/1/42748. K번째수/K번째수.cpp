#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int len=commands.size();
    for(int i=0;i<len;i++)
    {
        vector<int> temp;
        int st=commands[i][0]-1;
        int ed=commands[i][1];
        int k=commands[i][2];
        for(int j=st;j<ed;j++)
        {
            temp.push_back(array[j]);
        }
        sort(temp.begin(),temp.end());
        answer.push_back(temp[k-1]);
    }
    return answer;
}