#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;

    int min_diff=a.size();

    for(int i=0;i<=b.size()-a.size();i++)
    {
        int diff=0;
        for(int j=0;j<a.size();j++)
            if(a[j]!=b[i+j])    diff++;
        min_diff=min(min_diff,diff);
    }

    cout<<min_diff;
}