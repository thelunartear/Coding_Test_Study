#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;

    string min_a=a,min_b=b,max_a=a,max_b=b;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='5')
            max_a[i]='6';
        if(a[i]=='6')
            min_a[i]='5';
    }

    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='5')
            max_b[i]='6';
        if(b[i]=='6')
            min_b[i]='5';
    }
    cout<<stoi(min_a)+stoi(min_b)<<' '<<stoi(max_a)+stoi(max_b);
}