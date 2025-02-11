#include <iostream>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    list<char> l;

    for (auto s : str)
        l.push_back(s);

    auto c = l.end();
    int q;
    cin >> q;
    while (q--)
    {
        char op;
        cin >> op;

        if (op == 'P')
        {
            char add;
            cin >> add;
            l.insert(c, add);
        }
        else if (op == 'L')
        {
            if (c != l.begin())
                c--;
        }
        else if (op == 'D')
        {
            if (c != l.end())
                c++;
        }
        else
        {
            if (c != l.begin())
            {
                c--;
                c = l.erase(c);
            }
        }
    }

    for (auto c : l)
        cout << c;
}