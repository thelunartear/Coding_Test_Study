#include <iostream>
using namespace std;

int ToSeconds(string &time)
{
    return stoi(time.substr(0,2))*3600+stoi(time.substr(3,2))*60+stoi(time.substr(6,2));
}

int toClockInt(int sec)
{
    int h=(sec/3600)%24;
    int m=(sec/60)%60;
    int s=sec%60;
    return h*10000+m*100+s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<3;i++)
    {
        string startTime, endTime;
        cin>>startTime>>endTime;

        int startSec = ToSeconds(startTime);
        int endSec=ToSeconds(endTime);
        int cnt=0;

        do
        {
            if(toClockInt(startSec)%3==0)   cnt++;
            startSec = (startSec+1)%86400;
        } while (startSec != (endSec+1)%86400);
        cout<<cnt<<"\n";
    }
}