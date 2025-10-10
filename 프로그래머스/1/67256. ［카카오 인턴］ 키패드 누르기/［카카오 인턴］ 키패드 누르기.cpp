#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int left_r=3,left_c=0;
    int right_r=3,right_c=2;
    
    for(int i=0;i<numbers.size();i++)
    {
        int r,c;
        if(numbers[i]==0)
        {
            r=3;
            c=1;
        }
        else
        {
            r=(numbers[i]-1)/3;
            c=(numbers[i]-1)%3;
        }
        
        if(c==0)
        {
            answer+='L';
            left_r=r;
            left_c=c;
        }
        else if(c==2)
        {
            answer+='R';
            right_r=r;
            right_c=c;
        }
        
        else if(c==1)
        {
            int left_dist=abs(left_c-c)+abs(left_r-r);
            int right_dist=abs(right_c-c)+abs(right_r-r);
            if(left_dist>right_dist)
            {
                answer+='R';
                right_r=r;
                right_c=c;
            }
                
            else if(left_dist<right_dist)
            {
                answer+='L';
                left_r=r;
                left_c=c;
            }
                
            else
            {
                if(hand=="right")
                {
                    answer+='R';
                    right_r=r;
                    right_c=c;
                }
                else
                {
                    answer+='L';
                    left_r=r;
                    left_c=c;
                }
            }
        }
    }
    
    return answer;
}