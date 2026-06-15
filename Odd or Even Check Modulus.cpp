#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer value: ";
    cin >> num;

    // If the remainder of num divided by 2 is not 0, it's odd
    if (num % 2 != 0) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }
    
    return 0;
}