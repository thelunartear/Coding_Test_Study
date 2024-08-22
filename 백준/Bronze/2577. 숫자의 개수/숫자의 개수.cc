#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num[10] = { 0 };
	int a, b, c;
	cin >> a >> b >> c;
	long long abc = a * b * c;

	string cba = to_string(abc);
	int len = cba.size();

	for (int i = 0; i < len; i++)
	{
		int m = cba[i] - '0';
		num[m]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << "\n";
	}
}