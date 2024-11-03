#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;

        ans = (ans * x + a) % MOD;
    }

    cout << ans;
}
