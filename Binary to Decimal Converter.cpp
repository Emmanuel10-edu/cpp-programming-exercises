#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    long long binaryNum;
    int decimalNum = 0, i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    long long temp = binaryNum; // Store original for the output message
    
    while (temp != 0) {
        remainder = temp % 10;
        temp /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }

    cout << "Binary " << binaryNum << " in Decimal is: " << decimalNum << endl;
    return 0;
}