#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
int num[9];

void func(int k, int start)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << "\n";
        return;
    }

    for (int i = start; i < n; i++)
    {
        if(i>start && num[i] == num[i-1])
            continue;
        arr[k] = num[i];
        func(k + 1, i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    sort(num, num + n);
    func(0, 0);
    return 0;
}
