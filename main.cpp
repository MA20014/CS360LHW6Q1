#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    // Test cases for constructors
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    cout << "Test cases for constructors:\n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    // Test cases for addition operator
    Complex sum = y + z;
    cout << "\nTest cases for addition operator:\n";
    cout << "y + z = " << sum << endl;

    // Test cases for subtraction operator
    Complex difference = y - z;
    cout << "\nTest cases for subtraction operator:\n";
    cout << "y - z = " << difference << endl;

    // Test cases for multiplication operator
    Complex product = y * z;
    cout << "\nTest cases for multiplication operator:\n";
    cout << "y * z = " << product << endl;

    // Test cases for equality operator
    Complex a(4.3, 8.2);
    Complex b(4.3, 8.2);
    cout << "\nTest cases for equality operator:\n";
    cout << "a == b : " << (a == b ? "True" : "False") << endl;
    cout << "a == y : " << (a == y ? "True" : "False") << endl;

    // Test cases for inequality operator
    cout << "\nTest cases for inequality operator:\n";
    cout << "a != b : " << (a != b ? "True" : "False") << endl;
    cout << "a != y : " << (a != y ? "True" : "False") << endl;

    // Test cases for input and output operators
    Complex c;
    cout << "\nEnter a complex number (real imaginary): ";
    cin >> c;
    cout << "You entered: " << c << endl;

    return 0;
}
