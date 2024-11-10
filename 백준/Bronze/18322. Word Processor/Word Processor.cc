#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<string> words(n);
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }

    int len=0;

    for(int i=0;i<n;i++)
    {
        string word=words[i];

        if(len+word.length()>k)
        {
            cout<<"\n";
            len=0;
        }
        if(len>0)
        {
            cout<<" ";
        }
        cout<<word;
        len+=word.length();
    }
    cout<<"\n";
}