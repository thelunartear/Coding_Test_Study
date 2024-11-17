#include <iostream>
using namespace std;

enum Color 
{ 
    black,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white
};

int GetColorVal(const string& col)
{
    if(col=="black")    return black;
    if(col=="brown")    return brown;
    if(col=="red")      return red;
    if(col=="orange")   return orange;
    if(col=="yellow")   return yellow;
    if(col=="green")    return green;
    if(col=="blue")     return blue;
    if(col=="violet")   return violet;
    if(col=="grey")     return grey;
    if(col=="white")    return white;
}

long long CalculateMul(int a)
{
    long long result=1;
    for(int i=0;i<a;i++)
        result*=10;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt=0;
    string col1, col2, col3;
    cin>>col1>>col2>>col3;

    int val1=GetColorVal(col1);
    int val2=GetColorVal(col2);
    int val3=GetColorVal(col3);

    long long res=(val1*10+val2)*CalculateMul(val3);
    cout<<res;
}