#include <string>
#include <vector>

using namespace std;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

vector<int> solution(vector<string> park, vector<string> routes) {
    pair<int,int> pos;
    for(int i=0;i<park.size();i++)
    {
        for(int j=0;j<park[i].size();j++)
        {
            if(park[i][j]=='S')
                pos={i,j};
        }
    }
    
    for(string r:routes)
    {
        char dir=r[0];
        int m=r[2]-'0';
        
        int idx;
        if(dir=='N')
        {
            idx=0;
        }
        else if(dir=='S')
        {
            idx=1;
        }
        else if(dir=='W')
        {
            idx=2;
        }
        else if(dir=='E')
        {
            idx=3;
        }
        
        int nx=pos.first,ny=pos.second;
        bool isValid=true;
        
        for(int i=0;i<m;i++)
        {
            nx+=dx[idx];
            ny+=dy[idx];
            
            if(nx<0||nx>=park.size()||ny<0||ny>=park[0].size())
            {
                isValid=false;
                break;
            }
            
            if(park[nx][ny]=='X')
            {
                isValid=false;
                break;
            }
        
        }
        if(isValid)
        {
            pos.first=nx;
            pos.second=ny;
        }
    }
    return {pos.first, pos.second};
}