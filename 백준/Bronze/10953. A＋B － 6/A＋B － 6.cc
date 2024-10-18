#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string s1, s2;
        getline(ss,s1,',');
        getline(ss,s2);

        int num1=stoi(s1);
        int num2=stoi(s2);

        cout<<num1+num2<<"\n";
    }
}