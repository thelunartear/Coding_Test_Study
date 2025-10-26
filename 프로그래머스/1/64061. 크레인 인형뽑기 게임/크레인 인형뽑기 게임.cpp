#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;
    for(int m:moves)
    {
        int c=m-1;
        for(int r=0;r<board.size();r++)
        {
            if(board[r][c]!=0)
            {
                int t=board[r][c];
                board[r][c]=0;
                
                if(!basket.empty()&&basket.top()==t)
                {
                    basket.pop();
                    answer+=2;
                }
                else
                {
                    basket.push(t);
                }
                break;
            }
        }
    }
    return answer;
}