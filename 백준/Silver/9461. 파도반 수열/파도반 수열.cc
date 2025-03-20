#include <iostream>
using namespace std;

long long d[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    d[1] = 1;
    d[2] = 1;
    d[3] = 1;
    d[4] = 2;
    d[5] = 2;

    for (int i = 6; i <= 100; i++)
    {
        d[i] = d[i - 1] + d[i - 5];
    }

    while (t--)  
    {
        int x;
        cin >> x;
        cout << d[x] << "\n";
    }
}
