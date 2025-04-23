#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, A, B;
    cin >> N >> M >> A >> B;

    vector<bool> forbidden(N + 1, false);
    for (int i = 0; i < M; ++i)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; ++j)
        {
            forbidden[j] = true;
        }
    }

    vector<int> dp(N + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= N; ++i)
    {
        if (forbidden[i]) continue;

        if (i - A >= 0 && dp[i - A] != INF)
        {
            dp[i] = min(dp[i], dp[i - A] + 1);
        }
        if (i - B >= 0 && dp[i - B] != INF)
        {
            dp[i] = min(dp[i], dp[i - B] + 1);
        }
    }

    if (dp[N] == INF)
        cout << -1 << '\n';
    else
        cout << dp[N] << '\n';

    return 0;
}