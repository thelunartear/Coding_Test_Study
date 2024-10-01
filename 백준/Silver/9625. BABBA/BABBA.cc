#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> dp[46];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    dp[0] = {1, 0};
    dp[1] = {0, 1};

    for(int i = 2; i <= 45; i++)
    {
        dp[i].first = dp[i - 1].second;
        dp[i].second = dp[i - 1].first + dp[i - 1].second;
    }

    int k;
    cin >> k;
    cout << dp[k].first << " " << dp[k].second;
}