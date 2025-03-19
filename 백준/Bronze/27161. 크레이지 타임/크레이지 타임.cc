#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cur = 0; 
    bool isReverse = false;

    for(int i=0;i<n;i++)
    {
        string s;
        int num;
        cin >> s >> num;

        bool isHourGlass = (s[0] == 'H');

        cur += (isReverse ? -1 : 1);
        if (cur <= 0) cur = 12;
        if (cur == 13) cur = 1;

        bool clap = false;

        if (isHourGlass && cur != num)
        {
            isReverse = !isReverse;
        }
        if (cur == num && !isHourGlass)
        {
            clap = true;
        }

        cout << cur << ' ' << (clap ? "YES" : "NO") << '\n';
    }

    return 0;
}