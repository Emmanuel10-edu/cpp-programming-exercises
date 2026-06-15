#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    
    cout << "Enter a string: ";
    cin >> text;

    // text.find('a') returns the index of 'a'. 
    // If it equals string::npos, 'a' is not in the string.
    if (text.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }
    
    return 0;
}