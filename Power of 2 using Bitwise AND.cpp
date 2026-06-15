#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Checks if num is greater than 0 AND the bitwise trick results in 0
    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }

    return 0;
}