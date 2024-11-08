#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int ss1 = stoi(s1.substr(6, 2));
    int ss2 = stoi(s2.substr(6, 2));

    int mm1 = stoi(s1.substr(3, 2));
    int mm2 = stoi(s2.substr(3, 2));

    int hh1 = stoi(s1.substr(0, 2));
    int hh2 = stoi(s2.substr(0, 2));

    int ss, mm, hh;

    if (ss2 < ss1) 
    {
        ss = 60 + ss2 - ss1;
        mm2--;
    } 
    else 
        ss = ss2 - ss1;

    if (mm2 < mm1) 
    {
        mm = 60 + mm2 - mm1;
        hh2--;
    } 
    else 
        mm = mm2 - mm1;


    if (hh2 < hh1) 
        hh = 24 + hh2 - hh1;
    else
        hh = hh2 - hh1;

    if (hh == 0 && mm == 0 && ss == 0) 
        hh = 24;

    cout << setw(2) << setfill('0') << hh << ':'
         << setw(2) << setfill('0') << mm << ':'
         << setw(2) << setfill('0') << ss;
}
