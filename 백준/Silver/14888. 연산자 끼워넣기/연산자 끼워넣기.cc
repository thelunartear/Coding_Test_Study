#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int operators[4];
vector<int> A;

int AMax = INT_MIN;
int AMin = INT_MAX;

void solve(int idx, int res)
{
    if(idx==A.size()-1)
    {
        AMax=max(AMax, res);
        AMin=min(AMin, res);
        return;
    }

    for(int i=0;i<4;i++)
    {
        if(operators[i]>0)
        {
            operators[i]--;
            int res2=res;

            if(i==0)
            {
                res2+=A[idx+1];
            }
            else if(i==1)
            {
                res2-=A[idx+1];
            }
            else if(i==2)
            {
                res2*=A[idx+1];
            }
            else if(i==3)
            {
                if(res2<0)
                {
                    res2=-(-res2/A[idx+1]);
                }
                else
                {
                    res2/=A[idx+1];
                }
            }
            solve(idx+1, res2);
            operators[i]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        A.push_back(a);
    }

    for(int i=0;i<4;i++)
    {
        cin>>operators[i];
    }

    solve(0,A[0]);

    cout<<AMax<<"\n"<<AMin;
}