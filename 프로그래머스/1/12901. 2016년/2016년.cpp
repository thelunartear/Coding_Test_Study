#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int m[]={31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> d={"FRI","SAT","SUN","MON","TUE","WED","THU",};
    int x=0;
    for(int i=0;i<a-1;i++)
    {
        x+=m[i];
    }
    
    x+=b-1;
    x%=7;
    answer=d[x];
    return answer;
}