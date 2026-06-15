#include <iostream>
using namespace std;

int main() {
    int num1, num2, larger;
    
    cout << "Enter two integer values: ";
    cin >> num1 >> num2;

    // If num1 is greater than num2, assign num1 to 'larger'. 
    // Otherwise, assign num2 to 'larger'.
    larger = (num1 > num2) ? num1 : num2;

    cout << "The larger integer is: " << larger << endl;
    
    return 0;
}