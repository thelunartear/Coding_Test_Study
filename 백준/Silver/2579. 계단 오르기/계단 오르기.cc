#include <iostream>
#include <algorithm>
using namespace std;

int stairs[301];
int score[301];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }

    stairs[0]=score[0];
    stairs[1]=score[0]+score[1];
    stairs[2]=max(score[0]+score[2], score[1]+score[2]);

    for(int i=3;i<n;i++)
    {
        stairs[i]=max(stairs[i-2], stairs[i-3]+score[i-1])+score[i];
    }

    cout<<stairs[n-1];
}