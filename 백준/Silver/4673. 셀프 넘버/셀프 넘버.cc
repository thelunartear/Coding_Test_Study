#include <iostream>
using namespace std;

int dn(int n)
{
	int a = 0;
	while (n > 0)
	{
		a = a + n % 10;
		n /= 10;
	}
	return a;
}

bool isSelfNum(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i + dn(i) == n)
			return false;
	}
	return true;
}
int main()
{
	for (int i = 1; i < 10000; i++)
	{
		if (isSelfNum(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}