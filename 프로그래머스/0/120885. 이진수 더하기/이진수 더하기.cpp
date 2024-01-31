#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int carry = 0;

    while (bin1.length() < bin2.length()) {
        bin1 = '0' + bin1;
    }
    while (bin2.length() < bin1.length()) {
        bin2 = '0' + bin2;
    }

    for (int i = bin1.length() - 1; i >= 0; --i) {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';

        int sum = bit1 + bit2 + carry;
        carry = sum / 2;
        answer = to_string(sum % 2) + answer;
    }

    if (carry > 0) {
        answer = to_string(carry) + answer;
    }
    return answer;
}