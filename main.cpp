// main.cpp
#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    cout << "x: ";
    x.print();
    cout << endl;

    cout << "y: ";
    y.print();
    cout << endl;

    cout << "z: ";
    z.print();
    cout << endl;

    x = y + z;
    cout << "\nx = y + z: ";
    x.print();
    cout << endl;

    x = y - z;
    cout << "x = y - z: ";
    x.print();
    cout << endl;

    x = y * z;
    cout << "x = y * z: ";
    x.print();
    cout << endl;

    return 0;
}
