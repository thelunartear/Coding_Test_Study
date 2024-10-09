#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

bool compare(const string& a, const string& b) 
{
    if (a.size() == b.size()) 
    {
        return a < b;
    }
    return a.size() < b.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<string> s;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        s.insert(str); 
    }

    vector<string> v(s.begin(), s.end());

    sort(v.begin(), v.end(), compare);

    for (const auto& t : v) 
    {
        cout << t << "\n";
    }

    return 0;
}
