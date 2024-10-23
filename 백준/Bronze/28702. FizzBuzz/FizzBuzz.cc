#include <iostream>
using namespace std;

string s[3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }   

    for(int i=0;i<3;i++)
    {
        if(s[i][0]=='F' || s[i][0]=='B')
        {
            continue;
        }
        
        int ans = stoi(s[i])+3-i;

        if(ans%3 && ans%5)
            cout<<ans;
        else
        {
            if(ans%3==0)
                cout<<"Fizz";
            if(ans%5==0)
                cout<<"Buzz";
        }
        break;
    }    
}