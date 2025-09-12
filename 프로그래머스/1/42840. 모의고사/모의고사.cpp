#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int ans1=0,ans2=0,ans3=0;
    vector<int> student1={1,2,3,4,5};
    vector<int> student2={2,1,2,3,2,4,2,5};
    vector<int> student3={3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i]==student1[i%5])   ans1++;
        if(answers[i]==student2[i%8])   ans2++;
        if(answers[i]==student3[i%10])   ans3++;
    }
    
    int maxScore=ans1;
    if(ans2>maxScore)   maxScore=ans2;
    if(ans3>maxScore)   maxScore=ans3;
    
    if(ans1==maxScore)  answer.push_back(1);
    if(ans2==maxScore)  answer.push_back(2);
    if(ans3==maxScore)  answer.push_back(3);
    
    return answer;
}