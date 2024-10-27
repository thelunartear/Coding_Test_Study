#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string line;
        getline(cin, line);

        map<char, int> freq;
        int maxCount=0;

        for(char c:line)
        {
            if(isalpha(c))
            {
                freq[c]++;
                if(freq[c]>maxCount)
                {
                    maxCount=freq[c];
                }
            }
        }

        int ans=0;
        char result='?';

        for(auto& a:freq)
        {
            if(a.second==maxCount)
            {
                ans++;
                result=a.first;
            }
        }

        if(ans>1)
        {
            cout<<"?"<<"\n";
        }
        else
        {
            cout<<result<<"\n";
        }
    }
}