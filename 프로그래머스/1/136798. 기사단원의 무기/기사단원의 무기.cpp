#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;

void findDivisorCount(int n)
{
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            {
                cnt+=2;
            }
            else
            {
                cnt+=1;
            }
        }
    }
    v.push_back(cnt);
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i=1;i<=number;i++)
    {
        findDivisorCount(i);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>limit)
        {
            v[i]=power;
        }
        answer+=v[i];
    }
    return answer;
}