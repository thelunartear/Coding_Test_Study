#include <iostream>
#include <algorithm>
using namespace std;

int n;
int pool[1024][1024];

int SL(int arr[], int size)
{
    sort(arr, arr+size);
    return arr[size-2];
}

int Solve(int x, int y, int size)
{
    if(size==2)
    {
        int nums[4]={pool[x][y],pool[x+1][y],pool[x][y+1],pool[x+1][y+1]};
        return SL(nums, 4);
    }


    int results[4];
    results[0]=Solve(x,y,size/2);
    results[1]=Solve(x,y+size/2,size/2);
    results[2]=Solve(x+size/2,y,size/2);
    results[3]=Solve(x+size/2,y+size/2,size/2);

    return SL(results, 4);
}
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>pool[i][j];
        }
    }

    cout<<Solve(0,0,n);
}