#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string ans1="";
    
    for(int i=1;i<food.size();i++)
    {
        int n=food[i]/2;
        char c=i+'0';
        for(int j=0;j<n;j++)
            ans1+=c;
    }
    answer+=ans1;
    
    reverse(ans1.begin(), ans1.end());
    
    string ans2=ans1;
    answer+='0'+ans2;
    
    return answer;
}