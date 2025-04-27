#include <bits/stdc++.h>
using namespace std;

struct state
{
    int x,y;
    int val;
    char op;
};

int n;
char c[6][6];
int dx[]={1,0};
int dy[]={0,1};

int max_i=-1e9;
int min_i=1e9;

void bfs()
{
    queue<state> q;
    q.push({0,0,c[0][0]-'0',' '});

    while(!q.empty())
    {
        state now=q.front();
        q.pop();

        if(now.x==n-1&&now.y==n-1)
        {
            max_i=max(max_i,now.val);
            min_i=min(min_i,now.val);
            continue;
        }

        for(int i=0;i<2;i++)
        {
            int nx=now.x+dx[i];
            int ny=now.y+dy[i];

            if(nx<0||ny<0||nx>=n||ny>=n)
                continue;

            if(isdigit(c[nx][ny]))
            {
                int num=c[nx][ny]-'0';
                int new_val=now.val;
                if(now.op=='+')     new_val+=num;
                else if(now.op=='-')    new_val-=num;
                else if(now.op=='*')    new_val*=num;
                else    new_val=num;

                q.push({nx,ny,new_val,' '});
            }
            else
            {
                q.push({nx,ny,now.val,c[nx][ny]});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>c[i][j];

    bfs();

    cout<<max_i<<' '<<min_i;
}