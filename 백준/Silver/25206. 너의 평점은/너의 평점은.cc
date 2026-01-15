#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sum=0.0, div=0.0;
    map<string, double> mp={{"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0.0}};

    for(int i=0;i<20;i++)
    {
        string a,c;
        double b;
        cin>>a>>b>>c;

        if(c=="P")
        {
            continue;
        }

        else 
        {
            sum+=mp[c]*b;
            div+=b;
        }
    }
    cout << fixed;
    cout.precision(6);
    cout<<sum/div;
}