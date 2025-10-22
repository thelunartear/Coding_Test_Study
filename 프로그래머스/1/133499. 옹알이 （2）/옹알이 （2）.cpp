#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for(const string& b:babbling)
    {
        bool check=true;
        string s1=""; 
        string s2="";
        for(int i=0;i<b.size();)
        {            
            if(b.substr(i,3)=="aya")
            {
                i+=3;
                s2="aya";
            }
            else if(b.substr(i,2)=="ye")
            {
                i+=2;
                s2="ye";
            }
            else if(b.substr(i,3)=="woo")
            {
                i+=3;
                s2="woo";
            }
            else if(b.substr(i,2)=="ma")
            {
                i+=2;
                s2="ma";
            }
            else
            {
                check=false;
                break;
            }
            
            if(s2==s1)
            {
                check=false;
                break;
            }
            s1=s2;
        }
        if(check)   answer++;
    }
    
    return answer;
}