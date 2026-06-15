#include <iostream>
#include <cctype> // Required for isalpha() and isupper()
using namespace std;

int main() {
    char userInput;
    
    cout << "Enter a character: ";
    cin >> userInput;

    // Using logical AND (&&) alongside isupper()
    if (isalpha(userInput) && isupper(userInput)) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }
    
    return 0;
}