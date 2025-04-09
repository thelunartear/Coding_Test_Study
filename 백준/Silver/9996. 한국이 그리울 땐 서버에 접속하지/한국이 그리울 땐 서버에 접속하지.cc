#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string p;
    cin >> p;

    int star = p.find('*');
    string prefix = p.substr(0, star);
    string suffix = p.substr(star + 1);

    while (n--) {
        string s;
        cin >> s;
        if (s.length() < prefix.length() + suffix.length()) {
            cout << "NE\n";
            continue;
        }

        if (s.substr(0, prefix.length()) == prefix &&
            s.substr(s.length() - suffix.length()) == suffix) {
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }

    return 0;
}
