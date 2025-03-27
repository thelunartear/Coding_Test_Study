#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    int cnt=0;

    for(int i=0;i<str.length();i++)
    {
        if(i<str.length()-1)
        {
            if(str[i]=='c' && (str[i+1]=='-' || str[i+1]=='='))
                i++;
            else if(str[i]=='d' && str[i+1]=='-')
                i++;
            else if((str[i]=='l'||str[i]=='n')&&str[i+1]=='j')
                i++;
            else if((str[i]=='s'||str[i]=='z')&&str[i+1]=='=')
                i++;   
            else if(i<str.length()-2&&str[i]=='d'&&str[i+1]=='z'&&str[i+2]=='=')
                i+=2;
        }
        cnt++;
    }
    cout<<cnt;
}