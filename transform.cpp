#include <iostream>
#include <string>
using namespace std;

string DecToBin(int decNum) {
    string binNum="";
    while (decNum>0) {
        int remain=decNum%2;
        binNum=to_string(remain)+binNum;
        decNum=decNum/2; 
    }
    return binNum;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    string binary = DecToBin(num);
    cout << "Binary representation: " << binary << endl;
    return 0;
}