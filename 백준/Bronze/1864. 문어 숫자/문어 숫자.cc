#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<char, int> octStr = {{'-',0},{'\\',1},{'(',2},{'@',3},{'?',4},{'>',5},{'&',6},{'%',7},{'/',-1}};

    while(1)
    {
        string str;
        cin>>str;

        if(str=="#")    break;
        int ans=0;

        for(char s:str)
        {
            ans=ans*8+octStr[s];
        }
        cout<<ans<<"\n";
    }
}