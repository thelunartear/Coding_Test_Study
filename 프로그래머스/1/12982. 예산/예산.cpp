#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    auto it=d.begin();
    while(it!=d.end()&&budget>=*it)
    {
        budget-=*it;
        answer++;
        ++it;
    }
    return answer;
}