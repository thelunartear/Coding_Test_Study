#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string header[]={"SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE"};
    string data[][4]={{"N2 Bomber", "Heavy Fighter", "Limited", "21"},
                    {"J-Type 327", "Light Combat", "Unlimited", "1"},
                    {"NX Cruiser", "Medium Fighter", "Limited", "18"},
                    {"N1 Starfighter", "Medium Fighter", "Unlimited", "25"},
                    {"Royal Cruiser", "Light Combat", "Limited", "4"}
                    };
    int col_width[]={15,15,11,10};

    for(int i=0;i<4;i++)
    {
        cout<<left<<setw(col_width[i])<<header[i];
    }
    cout<<"\n";

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<left<<setw(col_width[j])<<data[i][j];
        }
        cout<<"\n";
    }
}