#include <string>
#include <vector>

using namespace std;

int get_rank(int count)
{
    switch(count)
    {
        case 6:
            return 1;
        case 5:
            return 2;
        case 4:
            return 3;
        case 3:
            return 4;
        case 2:
            return 5;
        default:
            return 6;
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int z=0, t=0, minRank=0, maxRank=0;
    for(int i=0;i<6;i++)
    {
        if(lottos[i]==0)
            z++;
    }
    
    for(int i=0;i<6;i++)
    {
        if(lottos[i]!=0)
        {
            for(int j=0;j<6;j++)
            {
                if(lottos[i]==win_nums[j])
                {
                    t++;
                    break;
                }
            }
        }
    }
    
    minRank=get_rank(t), maxRank=get_rank(t+z);
    answer.push_back(maxRank);
    answer.push_back(minRank);
    
    return answer;
}