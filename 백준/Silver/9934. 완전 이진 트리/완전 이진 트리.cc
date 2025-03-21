#include <iostream>
#include <vector>
using namespace std;

int k;
vector<int> order;
vector<vector<int>> ans;

void findCenter(int left, int right, int depth)
{
    if(depth==k)
        return;
    if(left==right)
    {
        ans[depth].push_back(order[left]);
        return;
    }
    int center=(left+right)/2;
    ans[depth].push_back(order[center]);
    findCenter(left,center-1,depth+1);
    findCenter(center+1,right,depth+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>k;
    int size_k=(1<<k)-1;
    order.resize(size_k);
    ans.resize(k);
    for(int i=0;i<size_k;i++)
    {
        cin>>order[i];
    }

    findCenter(0,size_k-1,0);

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}