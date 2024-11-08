#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    set<string> unheard;
    set<string> unseen;

    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        unheard.insert(name);
    }

    for(int i=0;i<m;i++)
    {
        string name;
        cin>>name;
        unseen.insert(name);
    }

    vector<string> answer;

    for(const auto& u:unheard)
    {
        if(unseen.find(u) != unseen.end())
        {
            answer.push_back(u);
        }
    }

    cout<<answer.size()<<"\n";
    for(const auto& ans:answer)
    {
        cout<<ans<<"\n";
    }
}