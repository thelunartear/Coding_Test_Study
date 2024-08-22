#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	string A, B, C;
	A = to_string(a);
	B = to_string(b);
	C = to_string(c);
	
	string AB = A + B;
	
	cout << a + b - c << "\n";
	cout << stoi(AB) - stoi(C);
}