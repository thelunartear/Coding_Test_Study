#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(getline(cin, str))
    {
        int ans1=0,ans2=0,ans3=0,ans4=0;

        for(char s:str)
        {
            if(s==32)
                ans4++;
            if(s>=48 && s<=57)
                ans3++;
            if(s>=65 && s<=90)
                ans2++;
            if(s>=97 && s<=122)
                ans1++;
        }
        cout<<ans1<<' '<<ans2<<' '<<ans3<<' '<<ans4<<"\n";
    }
}