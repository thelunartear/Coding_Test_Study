#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int cnt=0;
    int num=666;

    while(cnt<n)
    {
        if(to_string(num).find("666")!=string::npos)
        {
            cnt++;
        }
        if(cnt==n)
        {
            cout<<num<<endl;
            break;
        }
        num++;
    }
}