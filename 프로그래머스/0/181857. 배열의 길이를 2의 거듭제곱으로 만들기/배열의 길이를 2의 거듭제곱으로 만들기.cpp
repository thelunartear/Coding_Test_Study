#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int len = arr.size();
    int new_len = 1;
    
    while(new_len<len)
    {
        new_len*=2;
    }
    
    if(new_len!=len)
    {
        for(int i=0;i<new_len-len;i++)
            arr.push_back(0);
    }
    return arr;
}