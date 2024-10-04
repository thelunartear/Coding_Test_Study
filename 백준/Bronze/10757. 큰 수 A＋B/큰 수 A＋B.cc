#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addLargeNumbers(string num1, string num2) {
    string result = "";

    while (num1.length() < num2.length()) num1 = '0' + num1;
    while (num2.length() < num1.length()) num2 = '0' + num2;

    int carry = 0;
    for (int i = num1.length() - 1; i >= 0; i--) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    if (carry) result += carry + '0';

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1, num2;
    
    cin >> num1 >> num2;

    cout << addLargeNumbers(num1, num2);
}
