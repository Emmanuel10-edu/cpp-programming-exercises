#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Odd check: num % 2 != 0
    // Divisible by 3 check: num % 3 == 0
    if ((num % 2 != 0) && (num % 3 == 0)) {
        cout << num << " is odd and divisible by 3." << endl;
    } else {
        cout << "Condition not met." << endl;
    }

    return 0;
}