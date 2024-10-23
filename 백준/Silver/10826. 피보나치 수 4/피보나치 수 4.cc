#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string dp[10001];

string AddString(string a, string b)
{
    int num=0, carry=0;
    string result="";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(a.length()<b.length())
    {
        a+="0";
    }

    while(a.length()>b.length())
    {
        b+="0";
    }

    for(int i=0;i<a.length();i++)
    {
        num=((a[i]-'0')+(b[i]-'0')+carry)%10;
        result+=to_string(num);
        carry=((a[i]-'0')+(b[i]-'0')+carry)/10;
    }
    if(carry!=0)
    {
        result+=to_string(carry);
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    dp[0]="0";
    dp[1]="1";

    for(int i=2;i<=n;i++)
    {
        dp[i]=AddString(dp[i-1],dp[i-2]);
    }

    cout<<dp[n];
}