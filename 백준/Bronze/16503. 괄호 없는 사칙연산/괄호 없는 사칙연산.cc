#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    char x,y;
    cin>>a>>x>>b>>y>>c;

    int ans1=0, ans2=0;

    if(x=='+')
    {
        if(y=='+')
        {
            ans1=(a+b)+c;
            ans2=a+(b+c);
        }
        else if(y=='-')
        {
            ans1=(a+b)-c;
            ans2=a+(b-c);
        }
        else if(y=='*')
        {
            ans1=(a+b)*c;
            ans2=a+(b*c);
        }
        else if(y=='/')
        {
            ans1=(a+b)/c;
            ans2=a+(b/c);
        }
    }
    else if(x=='-')
    {
        if(y=='+')
        {
            ans1=(a-b)+c;
            ans2=a-(b+c);
        }
        else if(y=='-')
        {
            ans1=(a-b)-c;
            ans2=a-(b-c);
        }
        else if(y=='*')
        {
            ans1=(a-b)*c;
            ans2=a-(b*c);
        }
        else if(y=='/')
        {
            ans1=(a-b)/c;
            ans2=a-(b/c);
        }
    }
    else if(x=='/')
    {
        if(y=='+')
        {
            ans1=(a/b)+c;
            ans2=a/(b+c);
        }
        else if(y=='-')
        {
            ans1=(a/b)-c;
            ans2=a/(b-c);
        }
        else if(y=='*')
        {
            ans1=(a/b)*c;
            ans2=a/(b*c);
        }
        else if(y=='/')
        {
            ans1=(a/b)/c;
            ans2=a/(b/c);
        }
    }
    else if(x=='*')
    {
        if(y=='+')
        {
            ans1=(a*b)+c;
            ans2=a*(b+c);
        }
        else if(y=='-')
        {
            ans1=(a*b)-c;
            ans2=a*(b-c);
        }
        else if(y=='*')
        {
            ans1=(a*b)*c;
            ans2=a*(b*c);
        }
        else if(y=='/')
        {
            ans1=(a*b)/c;
            ans2=a*(b/c);
        }
    }

    if(ans1<=ans2)
    {
        cout<<ans1<<"\n"<<ans2;
    }
    else
    {
        cout<<ans2<<"\n"<<ans1;
    }
}