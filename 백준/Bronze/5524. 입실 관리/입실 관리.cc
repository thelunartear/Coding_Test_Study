#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        for (char &c : s) 
        {
            c = tolower(c);
        }
        
        cout << s << "\n";
    }

    return 0;
}
