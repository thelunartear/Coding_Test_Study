#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cntX[10]={0,};
int cntY[10]={0,};

string solution(string X, string Y) {
    string answer = "";
    for(int i=0;i<X.length();i++)
    {
        int x=X[i]-'0';
        cntX[x]++;
    }
    for(int i=0;i<Y.length();i++)
    {
        int y=Y[i]-'0';
        cntY[y]++;
    }

    for(int i=9;i>=0;i--)
    {
        int t=min(cntX[i],cntY[i]);
        for(int j=0;j<t;j++)
        {
            answer+=to_string(i);
        }
    }
    
    if(answer.empty())
    {
        answer="-1";
    }
    if(!answer.empty()&&answer[0]=='0')
    {
        answer="0";
    }
    return answer;
}