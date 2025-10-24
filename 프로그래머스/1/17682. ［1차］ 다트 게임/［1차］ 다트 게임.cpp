#include <string>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> v;
    string num = "";

    for (int i=0; i<dartResult.length();i++) 
    {
        char c=dartResult[i];

        if (c>='0'&&c<='9') {
            if (c=='1'&&i+1<dartResult.length()&&dartResult[i + 1]=='0') 
            {
                num = "10";
                i++;
            }
            else 
            {
                num=c;
            }
        }
        else if (c=='S'||c=='D'||c=='T')
        {
            int n=stoi(num);
            if (c=='S') v.push_back(n);
            else if (c=='D') v.push_back(n*n);
            else if (c=='T') v.push_back(n*n*n);
        }
        else if (c=='*'||c=='#') 
        {
            if (c=='*') 
            {
                if (v.size()>=2)
                    v[v.size()-2]*=2;
                v.back()*=2;
            } 
            else if (c=='#') 
            {
                v.back()*=-1;
            }
        }
    }
    for(int x:v)    answer+=x;
    return answer;
}