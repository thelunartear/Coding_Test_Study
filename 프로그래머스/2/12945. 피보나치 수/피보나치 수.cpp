#include <string>
#include <vector>

long long arr[100001]={0,};

using namespace std;

int solution(int n) {
    int answer = 0;
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    
    for(int i=3;i<=100000;i++)
    {
        arr[i]=(arr[i-2]+arr[i-1])%1234567;
    }
    answer=(int)arr[n];
    return answer;
}