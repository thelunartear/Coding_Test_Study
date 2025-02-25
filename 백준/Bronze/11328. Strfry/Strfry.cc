#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;

        if(a.length()!=b.length())
        {
            cout<<"Impossible\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a==b)
            cout<<"Possible\n";
        else
            cout<<"Impossible\n";
    }
}