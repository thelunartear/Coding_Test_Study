#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        int tri[3];
        for(int i=0;i<3;i++)
            cin>>tri[i];
        sort(tri, tri+3);
        if(tri[0]==0 &&tri[1]==0 && tri[2]==0)
            break;
        if(tri[2]<tri[1]+tri[0])
        {
            if(tri[0]==tri[1] && tri[1]==tri[2])
                cout<<"Equilateral\n";
            else if((tri[0]==tri[1] && tri[1]!=tri[2])||(tri[1]==tri[2] && tri[2]!=tri[0]))
                cout<<"Isosceles\n";
            else
                cout<<"Scalene\n";
        }
        else
        {
            cout<<"Invalid\n";
        }
    }
}