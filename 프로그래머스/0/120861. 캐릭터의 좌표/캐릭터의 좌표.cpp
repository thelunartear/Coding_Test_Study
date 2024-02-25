#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x=0, y=0;
    int dx = board[0]/2, dy = board[1]/2;
    
    for(int i=0; i<keyinput.size(); i++)
    {
        if(keyinput[i]=="up" && y+1<=dy)
            y++;
        else if(keyinput[i]=="down" && y-1>=-dy) 
            y--;
        else if(keyinput[i]=="left" && x-1>=-dx) 
            x--;
        else if(keyinput[i]=="right" && x+1<=dx) 
            x++;
    }
    
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}