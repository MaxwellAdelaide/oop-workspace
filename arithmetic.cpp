#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string binaryAdd(const string &a, const string &b) {
    string result = "";
    int s = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1) {
        s += (i >= 0) ? a[i] - '0' : 0;
        s += (j >= 0) ? b[j] - '0' : 0;
        result = char(s % 2 + '0') + result;
        s /= 2;
        i--; j--;
    }
    return result;
}
string binarySubtract(const string &a, const string &b) {
    string result = "";
    int borrow = 0;
    int len_a = a.size();
    int len_b = b.size();
    string a_pad = a;
    string b_pad = string(len_a - len_b, '0') + b;
    for (int i = len_a - 1; i >= 0; i--) {
        int bit_a = a_pad[i] - '0';
        int bit_b = b_pad[i] - '0' + borrow;
        if (bit_a < bit_b) {
            bit_a += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += (bit_a - bit_b) + '0';
    }
    reverse(result.begin(), result.end());
    result.erase(0, result.find_first_not_of('0'));
    if (result == "") {
        result = "0";
    }
    return result;
}
string leftShift(const string &a, int positions) {
    string result = a;
    for (int i = 0; i < positions; ++i) {
        result += '0';
    }
    return result;
}
string rightShift(const string &a, int positions) {
    if (positions >= a.size()) {
        return "0";
    }
    return a.substr(0, a.size() - positions);
}

int main() {
    string num1 = "111011101011";
    string num2 = "1";
    string num3 = "1110101";

    cout << "Binary Addition (111011101011 + 1): " << binaryAdd(num1, num2) << endl;
    cout << "Binary Addition (111011101011 + 111011101011): " << binaryAdd(num1, num1) << endl;
    cout << "Binary Subtraction (111011101011 - 1): " << binarySubtract(num1, num2) << endl;
    cout << "Binary Subtraction (111011101011 - 1110101): " << binarySubtract(num1, num3) << endl;
    cout << "Left Shift (111011101011 << 1): " << leftShift(num1, 1) << endl;
    cout << "Right Shift (111011101011 >> 1): " << rightShift(num1, 1) << endl;
    cout << "Left Shift (111011101011 << 2): " << leftShift(num1, 2) << endl;
    cout << "Right Shift (111011101011 >> 2): " << rightShift(num1, 2) << endl;

    return 0;
}