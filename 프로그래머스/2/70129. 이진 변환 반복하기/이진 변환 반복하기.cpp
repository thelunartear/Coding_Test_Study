#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int b=0;
    int z=0;

    while(s!="1")
    {
        int o=0;

        for(auto c:s)
        {
            if(c=='0') z++;
            else o++;
        }

        string tmp="";
        int temp=o;

        while(temp>0)
        {
            tmp+=to_string(temp%2);
            temp/=2;
        }

        s=tmp;
        b++;
    }
    
    return {b,z};
}