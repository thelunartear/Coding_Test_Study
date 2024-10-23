#include <iostream>
using namespace std;

int getFizzBuzzNumber(string res, int start) {
    if (res == "FizzBuzz") {
        return (start + 14) / 15 * 15;
    } else if (res == "Fizz") {
        for (int i = start;; i++) {
            if (i % 3 == 0 && i % 5 != 0) return i;
        }
    } else if (res == "Buzz") {
        for (int i = start;; i++) {
            if (i % 5 == 0 && i % 3 != 0) return i;
        }
    } else {
        int num = stoi(res);
        return num;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int start = 1;
    start = getFizzBuzzNumber(str1, start) + 1;
    start = getFizzBuzzNumber(str2, start) + 1;
    start = getFizzBuzzNumber(str3, start) + 1;

    if (start % 3 == 0 && start % 5 == 0)
        cout << "FizzBuzz\n";
    else if (start % 3 == 0)
        cout << "Fizz\n";
    else if (start % 5 == 0)
        cout << "Buzz\n";
    else
        cout << start << "\n";

    return 0;
}