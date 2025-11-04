#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> rank;
    for(int i=0;i<players.size();i++)
    {
        rank[players[i]]=i;
    }
    
    for(int i=0;i<callings.size();i++)
    {
        string st=callings[i];
        int cur=rank[st];
        int prev=cur-1;
        
        string f=players[prev];
        swap(players[cur],players[prev]);
        
        rank[st]=prev;
        rank[f]=cur;
    }
    return players;
}