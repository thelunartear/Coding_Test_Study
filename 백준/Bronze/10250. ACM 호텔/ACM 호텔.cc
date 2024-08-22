#include <iostream>
using namespace std;

int main()
{
	int t, h, w, n;
	int y, x;
	cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;

        x = (n + h - 1) / h;
        y = n % h;
        if (y == 0)
        {
            y = h;
        }

        // 방 번호가 한 자리일 경우 0을 추가
        if (x < 10)
        {
            cout << y << "0" << x << "\n";
        }
        else
        {
            cout << y << x << "\n";
        }
    }
}