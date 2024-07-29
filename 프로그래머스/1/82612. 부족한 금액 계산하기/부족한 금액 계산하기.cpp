using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for(int i=1;i<=count;i++)
    {
        int t = price * i;
        answer += t;
    }
    
    if(money >= answer)
        return 0;
    else
        return answer - money;
}