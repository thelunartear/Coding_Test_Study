#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int mw=0;
    int mh=0;
    
    for(const auto& s:sizes)
    {
        int w=max(s[0],s[1]);
        int h=min(s[0],s[1]);
        
        mw=max(mw,w);
        mh=max(mh,h);
    }
    
    return mw*mh;
}