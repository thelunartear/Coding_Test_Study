#include <string>
#include <vector>
using namespace std;

int Recursion(vector<int>& numbers, int index, int count, int sum)
{
    int result=0;
    if(count==3)
        return (sum==0)?1:0;
    
    for(int i=index;i<numbers.size();i++)
    {
        result+=Recursion(numbers,i+1,count+1,sum+numbers[i]);
    }
    return result;
}

int solution(vector<int> number) {
    return Recursion(number,0,0,0);
}