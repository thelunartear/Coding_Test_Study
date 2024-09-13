#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
int num[8];

void func(int k)
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
    int idx=-1;
    for (int i = 0; i < n; i++)
    {
        if(idx == num[i]) continue;
        idx=num[i];
        arr[k] = num[i];
        func(k + 1);
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
    func(0);
}
