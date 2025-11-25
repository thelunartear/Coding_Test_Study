#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int area=brown+yellow;
    int limit=(int)sqrt(area);
    int w=0,h=0;
    for(int i=3;i<=limit;i++)
    {
        if(area%i==0)
        {
            w=area/i;
            h=i;
            if((w-2)*(h-2)==yellow)
            {
                return {w,h};
            }
        }
    }
}