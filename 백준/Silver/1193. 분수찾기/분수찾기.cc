#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int line=1;

    while(n>line)
    {
        n-=line;
        line+=1;
    }

    if(line%2==0)
        cout<<n<<'/'<<line+1-n;
    else
        cout<<line+1-n<<'/'<<n;
}