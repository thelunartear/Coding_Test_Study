#include <iostream>
#include <map>
using namespace std;

int point[200][3];
int total[200];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>point[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        map<int, int> count;

        for(int j=0;j<t;j++)
        {
            count[point[j][i]]++;
        }

        for(int j=0;j<t;j++)
        {
            int num=point[j][i];
            if(count[num]==1)
                total[j]+=num;
        }
    }

    for(int i=0;i<t;i++)
        cout<<total[i]<<"\n";
}