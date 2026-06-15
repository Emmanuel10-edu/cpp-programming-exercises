#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    
    cout << "Enter two integer values: ";
    cin >> val1 >> val2;

    if (val1 > val2) {
        cout << "First value is greater" << endl;
    } else {
        // Note: This will also print if they are equal, 
        // as the first value is not *greater* than the second.
        cout << "Second value is greater" << endl; 
    }
    
    return 0;
}