#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryInput;
    
    cout << "Enter a binary number: ";
    cin >> binaryInput;

    // Convert string to integer, using base 2
    // std::stoi(string, position_pointer, base)
    int decimalValue = stoi(binaryInput, nullptr, 2);

    cout << "\n--- Conversion Results ---" << endl;
    
    // Outputs in default Decimal
    cout << "Decimal:     " << std::dec << decimalValue << endl;
    
    // Changes output stream to Hexadecimal
    cout << "Hexadecimal: " << std::hex << decimalValue << endl;
    
    // Changes output stream to Octal
    cout << "Octal:       " << std::oct << decimalValue << endl;

    return 0;
}