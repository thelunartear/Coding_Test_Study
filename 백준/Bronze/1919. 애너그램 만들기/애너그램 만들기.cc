#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int freq[26] = {0};
    int ans = 0;

    for (char ch : a) freq[ch - 'a']++;
    
    for (char ch : b) freq[ch - 'a']--;

    for (int i = 0; i < 26; i++) ans += abs(freq[i]);

    cout << ans << '\n';

    return 0;
}