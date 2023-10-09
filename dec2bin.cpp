#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        return "0";
    }

    string binaryResult = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryResult = to_string(remainder) + binaryResult;
        decimalNumber /= 2;
    }

    return binaryResult;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string binaryResult = decimalToBinary(decimalNumber);

    cout << "Binary equivalent: " << binaryResult << endl;

    return 0;
}
