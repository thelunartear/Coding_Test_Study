#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cin.ignore();

    int cnt=0;

    string meme[]={"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye",
                    "Never gonna tell a lie and hurt you", "Never gonna stop"};

    for(int i=0;i<n;i++)
    {
        string str;
        getline(cin, str);

        for(int i=0;i<7;i++)
        {
            if(str==meme[i])
            {
                cnt++;
                break;
            }
        }
    }

    if(cnt==n)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
}