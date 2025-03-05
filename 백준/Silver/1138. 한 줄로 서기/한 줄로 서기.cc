#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        int tmp=0;
        cin>>tmp;

        for(int j=0;j<n;j++)
        {
            if(tmp==0 && v[j]==0)
            {
                v[j]=i+1;
                break;
            }
            if(v[j]==0)
                tmp--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<v[i]<<' ';
}