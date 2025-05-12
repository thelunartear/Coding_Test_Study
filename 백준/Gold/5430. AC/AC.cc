#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p=s.size();
        int n;
        cin>>n;
        string a;
        cin>>a;
        a=a.substr(1,a.size()-2);
        deque<int> dq;
        stringstream ss(a);
        string num;
        while(getline(ss,num,','))
        {
            if(!num.empty())
                dq.push_back(stoi(num));
        }
        bool errorFlag=false;
        bool isReverse=false;

        for(char c:s)
        {
            if(c=='R')
            {
                isReverse=!isReverse;
            }
            if(c=='D')
            {
                if(dq.empty())
                {
                    cout<<"error\n";
                    errorFlag=true;
                    break;
                }
                if(!isReverse)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }

        if(!errorFlag)
        {
            cout<<'[';
            if(isReverse)
                reverse(dq.begin(),dq.end());
            for(int i=0;i<dq.size();i++)
            {
                cout<<dq[i];
                if(i!=dq.size()-1)
                    cout<<',';
            }
            cout<<"]\n";
        }
    }
}