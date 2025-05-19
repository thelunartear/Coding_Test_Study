#include <bits/stdc++.h>
using namespace std;

int a[21];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 1; i < (1 << n); i++) 
    {
        int sum = 0;
        for (int j = 0; j < n; j++) 
        {
            if (i & (1 << j))
                sum += a[j];
        }
        if (sum == s)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}