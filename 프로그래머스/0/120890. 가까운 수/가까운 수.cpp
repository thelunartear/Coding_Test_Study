#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    sort(array.begin(), array.end());
    
    int min_diff = 101;
    for(int i : array)
    {
        int diff = abs(i - n);
        if(diff < min_diff)
        {
            min_diff=diff;
            answer = i;
        }
    }
    return answer;
}