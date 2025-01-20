#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int arr[26][26];
vector<int> ans;
bool isVisit[26][26]={false};

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

void bfs(int x, int y)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    isVisit[x][y]=true;
    int cnt=0;
    cnt++;

    while(!q.empty())
    {
        int cx=q.front().first;
        int cy=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if(nx>=0&&ny>=0&&nx<n&&ny<n&&!isVisit[nx][ny]&&arr[nx][ny]==1)
            {
                q.push({nx,ny});
                isVisit[nx][ny]=true;
                cnt++;
            }
        }
    }
    ans.push_back(cnt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        string l;
        cin>>l;
        for(int j=0;j<n;j++)
        {
            arr[i][j]=l[j]-'0';
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!isVisit[i][j]&&arr[i][j]==1)
                bfs(i,j);
        }
    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
}